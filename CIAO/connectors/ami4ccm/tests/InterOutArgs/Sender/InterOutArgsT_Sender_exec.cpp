// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v1.8.3
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/

#include "InterOutArgsT_Sender_exec.h"
#include "InterOutArgsTA_conn_i.h"

namespace CIAO_InterOutArgsT_Sender_Impl
{
  // Worker thread for asynchronous invocations for MyFoo
  //============================================================
  asynch_foo_generator::asynch_foo_generator (
   ::InterOutArgsT::CCM_Sender_Context_ptr context,
    Atomic_UShort  &nr_of_received)
  : context_(::InterOutArgsT::CCM_Sender_Context::_duplicate (context)),
    nr_of_received_(nr_of_received)
  {
  }

  int asynch_foo_generator::svc ()
  {
    ACE_OS::sleep (3);
    ::InterOutArgsT::AMI4CCM_MyFoo_var my_foo_ami_  =
       context_->get_connection_sendc_run_my_foo();

    if (CORBA::is_nil (my_foo_ami_))
      {
        ACE_ERROR ((LM_ERROR, "ERROR Sender (ASYNCH) :\tfoo_ami is NIL !\n"));
       return 1;
      }
    else
      {
        ::InterOutArgsT::AMI4CCM_MyFooReplyHandler_var cb =
          new CIAO_InterOutArgsT_Sender_Impl::AMI4CCM_MyFooReplyHandler_i (
          this->nr_of_received_);

        //Invoke Asynchronous calls to test
        my_foo_ami_->sendc_var_outs ( cb.in (),
                                      "Send me a double and a long.");
        my_foo_ami_->sendc_var_div_outs (cb.in ());
        my_foo_ami_->sendc_var_div2_outs (cb.in ());
        my_foo_ami_->sendc_enum_out (cb.in ());
      }
    return 0;
  }

  //============================================================
  // Worker thread for synchronous invocations for MyFoo
  //============================================================
  synch_foo_generator::synch_foo_generator (
   ::InterOutArgsT::CCM_Sender_Context_ptr context,
    Atomic_UShort  &nr_of_received)
  : context_(::InterOutArgsT::CCM_Sender_Context::_duplicate (context)),
    nr_of_received_(nr_of_received)
  {
  }

  int synch_foo_generator::svc ()
  {
    ACE_OS::sleep (3);
   ::InterOutArgsT::MyFoo_var my_foo_ami_ =
         context_->get_connection_run_my_foo ();

    //run some synch calls
    InterOutArgsT::TestTopic_var test_topic = 0;
    InterOutArgsT::TopicString_var topic_str = 0;
    InterOutArgsT::TopicArray_var topic_arr = 0;
    CORBA::Double d_cmd = 0;
    CORBA::Long l_cmd = 0;
    CORBA::String_var out_str;
    try
      {
        my_foo_ami_->var_outs ("Do something synchronous",
                                                out_str,
                                                d_cmd ,
                                                l_cmd);
        if ( (d_cmd == 3.14 ) && (l_cmd == 100))
          {
            ++this->nr_of_received_;
          }
      }
    catch (const InterOutArgsT::InternalError&)
      {
        ACE_ERROR ((LM_ERROR, "ERROR: synch_foo_generator::var_outs: "
                              "Unexpected exception.\n"));
      }
    try
      {
        my_foo_ami_->var_div_outs(test_topic,topic_str,topic_arr);
        if ((ACE_OS::strcmp (test_topic->key, "aaa") == 0) &&
            (test_topic->x == 10))
          {
            ++this->nr_of_received_;
          }
        else
         {
           ACE_ERROR ((LM_ERROR, "ERROR: synch_foo_generator::var_div_outs: "
                                "Unexpected data returned.\n"));
         }
      }
    catch (const InterOutArgsT::InternalError&)
      {
        ACE_ERROR ((LM_ERROR, "ERROR: synch_foo_generator::var_div_outs: "
                              "Unexpected exception.\n"));
      }
    return 0;
  }
  /**
   * Component Executor Implementation Class: Sender_exec_i
   */

  Sender_exec_i::Sender_exec_i (void)
  : nr_of_received_(0)
  {
  }

  Sender_exec_i::~Sender_exec_i (void)
  {
  }

  // Supported operations and attributes.

  // Component attributes and port operations.

  // Operations from Components::SessionComponent.

  void
  Sender_exec_i::set_session_context (
    ::Components::SessionContext_ptr ctx)
  {
    this->ciao_context_ =
      ::InterOutArgsT::CCM_Sender_Context::_narrow (ctx);

    if ( ::CORBA::is_nil (this->ciao_context_.in ()))
      {
        throw ::CORBA::INTERNAL ();
      }
  }

  void
  Sender_exec_i::configuration_complete (void)
  {
    /* Your code here. */
  }

  void
  Sender_exec_i::ccm_activate (void)
  {
    this->asynch_foo_gen =
      new asynch_foo_generator (this->ciao_context_.in (),
          this->nr_of_received_);
    this->asynch_foo_gen->activate (THR_NEW_LWP | THR_JOINABLE, 1);

    this->synch_foo_gen =
       new synch_foo_generator (this->ciao_context_.in(),
           this->nr_of_received_);
    this->synch_foo_gen->activate (THR_NEW_LWP | THR_JOINABLE, 1);  }

  void
  Sender_exec_i::ccm_passivate (void)
  {
    /* Your code here. */
  }

  void
  Sender_exec_i::ccm_remove (void)
  {
    if (this->nr_of_received_.value() == 6)
      {
        ACE_DEBUG ((LM_DEBUG, "OK: Sender received all expected data"
                              " for syn- and asynchronous calls\n"));
      }
    else
      {
        ACE_ERROR ((LM_ERROR, "ERROR: Sender didn't receive all expected data"
                              " for syn- and asynchronous calls\n"));
      }
    if (this->asynch_foo_gen)
      {
        delete this->asynch_foo_gen;
        this->asynch_foo_gen = 0;
      }
    if (this->synch_foo_gen)
      {
        delete this->synch_foo_gen;
        this->synch_foo_gen = 0;
      }
  }

  extern "C" INTEROUTARGS_T_SENDER_EXEC_Export ::Components::EnterpriseComponent_ptr
  create_InterOutArgsT_Sender_Impl (void)
  {
    ::Components::EnterpriseComponent_ptr retval =
      ::Components::EnterpriseComponent::_nil ();

    ACE_NEW_NORETURN (
      retval,
      Sender_exec_i);

    return retval;
  }
}
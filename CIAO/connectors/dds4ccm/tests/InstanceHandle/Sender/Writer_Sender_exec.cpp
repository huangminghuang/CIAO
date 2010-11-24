// -*- C++ -*-
// $Id$

#include "Writer_Sender_exec.h"
#include "tao/ORB_Core.h"
#include "ace/Reactor.h"

#include "Base/Writer_BaseSupport.h"
#include "Connector/Writer_Connector_conn.h"
#include "dds4ccm/impl/Utils.h"
#include "dds4ccm/impl/ndds/convertors/InstanceHandle_t.h"

#include "dds4ccm/impl/ndds/DataWriter_T.h"

#include "ace/Log_Msg.h"

namespace CIAO_Writer_Sender_Impl
{
  //============================================================
  // StartHandler
  //============================================================
  StartHandler::StartHandler(Sender_exec_i &callback)
    : callback_ (callback)
  {
  }

  int
  StartHandler::handle_exception (ACE_HANDLE)
  {
    this->callback_.run ();
    return 0;
  }

  //============================================================
  // Sender_exec_i
  //============================================================
  Sender_exec_i::Sender_exec_i (void)
    : keys_ (5)
  {
  }

  Sender_exec_i::~Sender_exec_i (void)
  {
  }

  void
  Sender_exec_i::unregister_handles ()
  {
    ::WriterTestConnector::Writer_var ccm_writer =
      this->context_->get_connection_info_write_data ();

    for (Writer_Table::iterator i = this->ktests_.begin ();
         i != this->ktests_.end ();
         ++i)
      {
        try
          {
            ::DDS::InstanceHandle_t const hnd = this->handles_[i->first.c_str ()];
            ccm_writer->unregister_instance (i->second, hnd);
            ACE_DEBUG ((LM_DEBUG,
                        ACE_TEXT ("Unregistered <%C> - valid handle <%d>\n"),
                        i->first.c_str (),
                        hnd.isValid));
          }
        catch (...)
          {
            ACE_ERROR ((LM_ERROR, ACE_TEXT ("ERROR: ")
                    ACE_TEXT ("unknown exception caught during unregister_instance.\n")));
          }
      }
  }

  void
  Sender_exec_i::register_handles ()
  {
    ::WriterTestConnector::Writer_var ccm_writer =
      this->context_->get_connection_info_write_data ();
    Writer_Table::iterator i = this->ktests_.begin ();
    for (i = this->ktests_.begin(); i != this->ktests_.end(); ++i)
      {
        DDS::InstanceHandle_t const hnd =
          ccm_writer->register_instance (i->second);
        if (!hnd.isValid)
          {
            ACE_ERROR ((LM_ERROR,
                        ACE_TEXT ("ERROR: Unable to register handle for <%C>\n"),
                        i->first.c_str ()));
          }
        ACE_DEBUG ((LM_DEBUG, ACE_TEXT ("Registering instance for <%C>\n"),
                    i->second->key.in ()));
        this->handles_[i->first.c_str ()] = hnd;
     }
  }

  void
  Sender_exec_i::test_equality ()
  {
    Writer_Table::iterator i = this->ktests_.begin ();
    for (i = this->ktests_.begin(); i != this->ktests_.end(); ++i)
      {
        ::DDS::InstanceHandle_t ccm_hnd = this->handles_[i->first.c_str ()];

        DDS_InstanceHandle_t dds_hnd =
          this->dds_writer_->lookup_instance (i->second);
        if (dds_hnd == ccm_hnd)
          {
            ACE_DEBUG ((LM_DEBUG, "Sender_exec_i::test_equality - "
                          "== operator seems to work for DDS and "
                          "CCM handles for key <%C>\n",
                          i->first.c_str ()));
          }
        else
          {
            ACE_ERROR ((LM_ERROR, "ERROR: Sender_exec_i::test_equality - "
                          "== operator doesn't seem to work for DDS and "
                          "CCM handles for key <%C>\n",
                          i->first.c_str ()));
          }
        DDS::InstanceHandle_t ccm_dds_hnd;
        ccm_dds_hnd <<= dds_hnd;
        if (ccm_hnd == ccm_dds_hnd)
          {
            ACE_DEBUG ((LM_DEBUG, "Sender_exec_i::test_equality - "
                          "== operator seems to work for CCM handles "
                          "for key <%C>\n",
                          i->first.c_str ()));
          }
        else
          {
            ACE_ERROR ((LM_ERROR, "ERROR: Sender_exec_i::test_equality - "
                          "== operator doesn't seem to work for CCM "
                          "handles for key <%C>\n",
                          i->first.c_str ()));
          }
      }
  }

  void
  Sender_exec_i::test_non_equality ()
  {
    Writer_Table::iterator i = this->ktests_.begin ();
    for (i = this->ktests_.begin(); i != this->ktests_.end(); ++i)
      {
        ::DDS::InstanceHandle_t ccm_hnd = this->handles_[i->first.c_str ()];

        Writer_Table::iterator unequal = i;
        ++unequal;
        if (unequal == this->ktests_.end ())
          {
            unequal = this->ktests_.begin ();
          }

        DDS_InstanceHandle_t const dds_hnd =
          this->dds_writer_->lookup_instance (unequal->second);
        // Compare
        if (dds_hnd != ccm_hnd)
          {
            ACE_DEBUG ((LM_DEBUG, "Sender_exec_i::test_equality - "
                          "!= operator seems to work for DDS and "
                          "CCM handles for key <%C>\n",
                          i->first.c_str ()));
          }
        else
          {
            ACE_ERROR ((LM_ERROR, "ERROR: Sender_exec_i::test_equality - "
                          "!= operator doesn't seem to work for DDS and "
                          "CCM handles for key <%C>\n",
                          i->first.c_str ()));
          }
        DDS::InstanceHandle_t ccm_dds_hnd;
        ccm_dds_hnd <<= dds_hnd;
        if (ccm_dds_hnd != ccm_hnd)
          {
            ACE_DEBUG ((LM_DEBUG, "Sender_exec_i::test_equality - "
                          "!= operator seems to work for CCM "
                          "handles for key <%C>\n",
                          i->first.c_str ()));
          }
        else
          {
            ACE_ERROR ((LM_ERROR, "ERROR: Sender_exec_i::test_equality - "
                          "!= operator doesn't seem to work for CCM "
                          "handles for key <%C>\n",
                          i->first.c_str ()));
          }
      }
    unregister_handles ();
  }

  void
  Sender_exec_i::run ()
  {
    test_equality ();
    test_non_equality ();
  }

  void
  Sender_exec_i::start (void)
  {
    StartHandler *rh = new StartHandler (*this);
    this->context_->get_CCM_object()->_get_orb ()->orb_core ()->reactor ()->notify (rh);
  }

  ::CORBA::UShort
  Sender_exec_i::keys (void)
  {
    return this->keys_;
  }

  void
  Sender_exec_i::keys (::CORBA::UShort keys)
  {
    this->keys_ = keys;
  }

  void
  Sender_exec_i::set_session_context (::Components::SessionContext_ptr ctx)
  {
    this->context_ = ::Writer::CCM_Sender_Context::_narrow (ctx);

    if ( ::CORBA::is_nil (this->context_.in ()))
      {
        throw ::CORBA::INTERNAL ();
      }
  }

  void
  Sender_exec_i::configuration_complete (void)
  {
    typedef ::CIAO::NDDS::DDS_DataWriter_Base DataWriter_type;

    ::DDS::DataWriter_var dds_dw =
      this->context_->get_connection_info_write_dds_entity ();

    ::CIAO::DDS4CCM::CCM_DataWriter * ccm_dw =
      dynamic_cast < ::CIAO::DDS4CCM::CCM_DataWriter * > (dds_dw.in ());

    if (ccm_dw)
      {
        DataWriter_type * typed_ccm_dw = dynamic_cast <DataWriter_type*> (ccm_dw->get_dds_entity ());
        if (typed_ccm_dw)
          {
            this->dds_writer_ = WriterTestDataWriter::narrow (typed_ccm_dw->get_rti_entity ());
            if (!this->dds_writer_)
              {
                ACE_ERROR ((LM_ERROR, "ERROR : Sender_exec_i::configuration_complete - "
                            "Error casting the typed CCM DataWriter to a typed "
                            "DDS DataWriter.\n"));
                throw ::CORBA::INTERNAL ();
              }
          }
        else
          {
            ACE_ERROR ((LM_ERROR, "ERROR : Sender_exec_i::configuration_complete - "
                        "Error casting DataWriter_var to typed DataWriter\n"));
            throw ::CORBA::INTERNAL ();
          }
      }
    else
      {
        ACE_ERROR ((LM_ERROR, "ERROR : Sender_exec_i::configuration_complete - "
                    "Error casting DataWriter to CCM DataWriter\n"));
        throw ::CORBA::INTERNAL ();
      }
  }

  void
  Sender_exec_i::ccm_activate (void)
  {
    this->start ();

    ACE_GUARD_THROW_EX (TAO_SYNCH_MUTEX, _guard,
                        this->mutex_, CORBA::INTERNAL ());

    for (CORBA::UShort i = 1; i < this->keys_ + 1; ++i)
      {
        char key[7];
        WriterTest *new_key = new WriterTest;
        ACE_OS::sprintf (key, "KEY_%d", i);
        new_key->key = CORBA::string_dup(key);

        this->ktests_[key] = new_key;
      }
    register_handles ();
  }

  void
  Sender_exec_i::ccm_passivate (void)
  {
  }

  void
  Sender_exec_i::ccm_remove (void)
  {
  }

  extern "C" SENDER_EXEC_Export ::Components::EnterpriseComponent_ptr
  create_Writer_Sender_Impl (void)
  {
    ::Components::EnterpriseComponent_ptr retval =
      ::Components::EnterpriseComponent::_nil ();

    ACE_NEW_NORETURN (
      retval,
      Sender_exec_i);

    return retval;
  }
}
// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// be\be_codegen.cpp:291


#include "IORInfoC.h"
#include "tao/CDR.h"
#include "tao/Object_Argument_T.h"
#include "ace/OS_NS_string.h"

#if defined (__BORLANDC__)
#pragma option -w-rvl -w-rch -w-ccc -w-aus -w-sig
#endif /* __BORLANDC__ */

// TAO_IDL - Generated from
// be\be_visitor_arg_traits.cpp:70

// Arg traits specializations.
namespace TAO
{

#if !defined (_PORTABLEINTERCEPTOR_OBJECTREFERENCEFACTORY__ARG_TRAITS_CS_)
#define _PORTABLEINTERCEPTOR_OBJECTREFERENCEFACTORY__ARG_TRAITS_CS_
  
  template<>
  class Arg_Traits<PortableInterceptor::ObjectReferenceFactory>
    : public
        Object_Arg_Traits_T<
            PortableInterceptor::ObjectReferenceFactory *,
            PortableInterceptor::ObjectReferenceFactory_var,
            PortableInterceptor::ObjectReferenceFactory_out,
            TAO::Value_Traits<PortableInterceptor::ObjectReferenceFactory>
          >
  {
  };

#endif /* end #if !defined */
}


// TAO_IDL - Generated from
// be\be_visitor_interface/interface_cs.cpp:60

// Traits specializations for PortableInterceptor::IORInfo.

PortableInterceptor::IORInfo_ptr
TAO::Objref_Traits<PortableInterceptor::IORInfo>::duplicate (
    PortableInterceptor::IORInfo_ptr p
  )
{
  return PortableInterceptor::IORInfo::_duplicate (p);
}

void
TAO::Objref_Traits<PortableInterceptor::IORInfo>::release (
    PortableInterceptor::IORInfo_ptr p
  )
{
  CORBA::release (p);
}

PortableInterceptor::IORInfo_ptr
TAO::Objref_Traits<PortableInterceptor::IORInfo>::nil (void)
{
  return PortableInterceptor::IORInfo::_nil ();
}

CORBA::Boolean
TAO::Objref_Traits<PortableInterceptor::IORInfo>::marshal (
    PortableInterceptor::IORInfo_ptr p,
    TAO_OutputCDR & cdr
  )
{
  return CORBA::Object::marshal (p, cdr);
}

PortableInterceptor::IORInfo::IORInfo (void)
{}

PortableInterceptor::IORInfo::~IORInfo (void)
{}

PortableInterceptor::IORInfo_ptr
PortableInterceptor::IORInfo::_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  return IORInfo::_duplicate (
      dynamic_cast<IORInfo_ptr> (_tao_objref)
    );
}

PortableInterceptor::IORInfo_ptr
PortableInterceptor::IORInfo::_unchecked_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  return IORInfo::_duplicate (
      dynamic_cast<IORInfo_ptr> (_tao_objref)
    );
}

PortableInterceptor::IORInfo_ptr
PortableInterceptor::IORInfo::_duplicate (IORInfo_ptr obj)
{
  if (! CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  
  return obj;
}

void
PortableInterceptor::IORInfo::_tao_release (IORInfo_ptr obj)
{
  CORBA::release (obj);
}

CORBA::Boolean
PortableInterceptor::IORInfo::_is_a (
    const char *value
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/PortableInterceptor/IORInfo:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* PortableInterceptor::IORInfo::_interface_repository_id (void) const
{
  return "IDL:omg.org/PortableInterceptor/IORInfo:1.0";
}

CORBA::Boolean
PortableInterceptor::IORInfo::marshal (TAO_OutputCDR &)
{
  return false;
}

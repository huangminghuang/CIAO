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
// be/be_codegen.cpp:338


#include "CONV_FRAMEC.h"
#include "tao/Typecode.h"

#if defined (__BORLANDC__)
#pragma option -w-rvl -w-rch -w-ccc -w-aus -w-sig
#endif /* __BORLANDC__ */

#if !defined (__ACE_INLINE__)
#include "CONV_FRAMEC.i"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:62

// Arg traits specializations.
namespace TAO
{
}


// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_CONV_FRAME_CodeSetId[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  37,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x434f4e56), 
  ACE_NTOHL (0x5f465241), 
  ACE_NTOHL (0x4d452f43), 
  ACE_NTOHL (0x6f646553), 
  ACE_NTOHL (0x65744964), 
  ACE_NTOHL (0x3a312e30), 
  ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetId:1.0
    10,
  ACE_NTOHL (0x436f6465), 
  ACE_NTOHL (0x53657449), 
  ACE_NTOHL (0x64000000),  // name = CodeSetId
    CORBA::tk_ulong,

};

static CORBA::TypeCode _tc_TAO_tc_CONV_FRAME_CodeSetId (
    CORBA::tk_alias,
    sizeof (_oc_CONV_FRAME_CodeSetId),
    (char *) &_oc_CONV_FRAME_CodeSetId,
    0,
    sizeof (CONV_FRAME::CodeSetId)
  );

namespace CONV_FRAME
{
  ::CORBA::TypeCode_ptr _tc_CodeSetId =
    &_tc_TAO_tc_CONV_FRAME_CodeSetId;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_CONV_FRAME_CodeSetComponent[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  44,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x434f4e56), 
  ACE_NTOHL (0x5f465241), 
  ACE_NTOHL (0x4d452f43), 
  ACE_NTOHL (0x6f646553), 
  ACE_NTOHL (0x6574436f), 
  ACE_NTOHL (0x6d706f6e), 
  ACE_NTOHL (0x656e743a), 
  ACE_NTOHL (0x312e3000),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetComponent:1.0
    17,
  ACE_NTOHL (0x436f6465), 
  ACE_NTOHL (0x53657443), 
  ACE_NTOHL (0x6f6d706f), 
  ACE_NTOHL (0x6e656e74), 
  ACE_NTOHL (0x0),  // name = CodeSetComponent
  2, // member count
    16,
  ACE_NTOHL (0x6e617469), 
  ACE_NTOHL (0x76655f63), 
  ACE_NTOHL (0x6f64655f), 
  ACE_NTOHL (0x73657400),  // name = native_code_set
    CORBA::tk_alias, // typecode kind for typedefs
  68, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    37,
    ACE_NTOHL (0x49444c3a), 
    ACE_NTOHL (0x6f6d672e), 
    ACE_NTOHL (0x6f72672f), 
    ACE_NTOHL (0x434f4e56), 
    ACE_NTOHL (0x5f465241), 
    ACE_NTOHL (0x4d452f43), 
    ACE_NTOHL (0x6f646553), 
    ACE_NTOHL (0x65744964), 
    ACE_NTOHL (0x3a312e30), 
    ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetId:1.0
        10,
    ACE_NTOHL (0x436f6465), 
    ACE_NTOHL (0x53657449), 
    ACE_NTOHL (0x64000000),  // name = CodeSetId
        CORBA::tk_ulong,


  21,
  ACE_NTOHL (0x636f6e76), 
  ACE_NTOHL (0x65727369), 
  ACE_NTOHL (0x6f6e5f63), 
  ACE_NTOHL (0x6f64655f), 
  ACE_NTOHL (0x73657473), 
  ACE_NTOHL (0x0),  // name = conversion_code_sets
    CORBA::tk_sequence, // typecode kind
  84, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    CORBA::tk_alias, // typecode kind for typedefs
    68, // encapsulation length
      TAO_ENCAP_BYTE_ORDER, // byte order
      37,
      ACE_NTOHL (0x49444c3a), 
      ACE_NTOHL (0x6f6d672e), 
      ACE_NTOHL (0x6f72672f), 
      ACE_NTOHL (0x434f4e56), 
      ACE_NTOHL (0x5f465241), 
      ACE_NTOHL (0x4d452f43), 
      ACE_NTOHL (0x6f646553), 
      ACE_NTOHL (0x65744964), 
      ACE_NTOHL (0x3a312e30), 
      ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetId:1.0
            10,
      ACE_NTOHL (0x436f6465), 
      ACE_NTOHL (0x53657449), 
      ACE_NTOHL (0x64000000),  // name = CodeSetId
            CORBA::tk_ulong,


    0U,

};

static CORBA::TypeCode _tc_TAO_tc_CONV_FRAME_CodeSetComponent (
    CORBA::tk_struct,
    sizeof (_oc_CONV_FRAME_CodeSetComponent),
    (char *) &_oc_CONV_FRAME_CodeSetComponent,
    0,
    sizeof (CONV_FRAME::CodeSetComponent)
  );

namespace CONV_FRAME
{
  ::CORBA::TypeCode_ptr _tc_CodeSetComponent =
    &_tc_TAO_tc_CONV_FRAME_CodeSetComponent;
}

// TAO_IDL - Generated from 
// be/be_visitor_structure/structure_cs.cpp:66

void 
CONV_FRAME::CodeSetComponent::_tao_any_destructor (
    void *_tao_void_pointer
  )
{
  CodeSetComponent *_tao_tmp_pointer =
    ACE_static_cast (CodeSetComponent *, _tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from 
// be/be_visitor_sequence/sequence_cs.cpp:65

#if !defined (_CONV_FRAME_CODESETCOMPONENT__TAO_SEQ_CONV_FRAME_CODESETID__CS_)
#define _CONV_FRAME_CODESETCOMPONENT__TAO_SEQ_CONV_FRAME_CODESETID__CS_

CONV_FRAME::CodeSetComponent::_tao_seq_CONV_FRAME_CodeSetId_::_tao_seq_CONV_FRAME_CodeSetId_ (void)
{}

CONV_FRAME::CodeSetComponent::_tao_seq_CONV_FRAME_CodeSetId_::_tao_seq_CONV_FRAME_CodeSetId_ (
    CORBA::ULong max
  )
  : TAO_Unbounded_Sequence<
        CONV_FRAME::CodeSetId
      >
    (max)
{}

CONV_FRAME::CodeSetComponent::_tao_seq_CONV_FRAME_CodeSetId_::_tao_seq_CONV_FRAME_CodeSetId_ (
    CORBA::ULong max,
    CORBA::ULong length,
    CORBA::ULong * buffer,
    CORBA::Boolean release
  )
  : TAO_Unbounded_Sequence<
        CONV_FRAME::CodeSetId
      >
    (max, length, buffer, release)
{}

CONV_FRAME::CodeSetComponent::_tao_seq_CONV_FRAME_CodeSetId_::_tao_seq_CONV_FRAME_CodeSetId_ (
    const _tao_seq_CONV_FRAME_CodeSetId_ &seq
  )
  : TAO_Unbounded_Sequence<
        CONV_FRAME::CodeSetId
      >
    (seq)
{}

CONV_FRAME::CodeSetComponent::_tao_seq_CONV_FRAME_CodeSetId_::~_tao_seq_CONV_FRAME_CodeSetId_ (void)
{}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_CONV_FRAME_CodeSetComponentInfo[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  48,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x434f4e56), 
  ACE_NTOHL (0x5f465241), 
  ACE_NTOHL (0x4d452f43), 
  ACE_NTOHL (0x6f646553), 
  ACE_NTOHL (0x6574436f), 
  ACE_NTOHL (0x6d706f6e), 
  ACE_NTOHL (0x656e7449), 
  ACE_NTOHL (0x6e666f3a), 
  ACE_NTOHL (0x312e3000),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetComponentInfo:1.0
    21,
  ACE_NTOHL (0x436f6465), 
  ACE_NTOHL (0x53657443), 
  ACE_NTOHL (0x6f6d706f), 
  ACE_NTOHL (0x6e656e74), 
  ACE_NTOHL (0x496e666f), 
  ACE_NTOHL (0x0),  // name = CodeSetComponentInfo
  2, // member count
    12,
  ACE_NTOHL (0x466f7243), 
  ACE_NTOHL (0x68617244), 
  ACE_NTOHL (0x61746100),  // name = ForCharData
    CORBA::tk_struct, // typecode kind
  296, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    44,
    ACE_NTOHL (0x49444c3a), 
    ACE_NTOHL (0x6f6d672e), 
    ACE_NTOHL (0x6f72672f), 
    ACE_NTOHL (0x434f4e56), 
    ACE_NTOHL (0x5f465241), 
    ACE_NTOHL (0x4d452f43), 
    ACE_NTOHL (0x6f646553), 
    ACE_NTOHL (0x6574436f), 
    ACE_NTOHL (0x6d706f6e), 
    ACE_NTOHL (0x656e743a), 
    ACE_NTOHL (0x312e3000),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetComponent:1.0
        17,
    ACE_NTOHL (0x436f6465), 
    ACE_NTOHL (0x53657443), 
    ACE_NTOHL (0x6f6d706f), 
    ACE_NTOHL (0x6e656e74), 
    ACE_NTOHL (0x0),  // name = CodeSetComponent
    2, // member count
        16,
    ACE_NTOHL (0x6e617469), 
    ACE_NTOHL (0x76655f63), 
    ACE_NTOHL (0x6f64655f), 
    ACE_NTOHL (0x73657400),  // name = native_code_set
        CORBA::tk_alias, // typecode kind for typedefs
    68, // encapsulation length
      TAO_ENCAP_BYTE_ORDER, // byte order
      37,
      ACE_NTOHL (0x49444c3a), 
      ACE_NTOHL (0x6f6d672e), 
      ACE_NTOHL (0x6f72672f), 
      ACE_NTOHL (0x434f4e56), 
      ACE_NTOHL (0x5f465241), 
      ACE_NTOHL (0x4d452f43), 
      ACE_NTOHL (0x6f646553), 
      ACE_NTOHL (0x65744964), 
      ACE_NTOHL (0x3a312e30), 
      ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetId:1.0
            10,
      ACE_NTOHL (0x436f6465), 
      ACE_NTOHL (0x53657449), 
      ACE_NTOHL (0x64000000),  // name = CodeSetId
            CORBA::tk_ulong,


    21,
    ACE_NTOHL (0x636f6e76), 
    ACE_NTOHL (0x65727369), 
    ACE_NTOHL (0x6f6e5f63), 
    ACE_NTOHL (0x6f64655f), 
    ACE_NTOHL (0x73657473), 
    ACE_NTOHL (0x0),  // name = conversion_code_sets
        CORBA::tk_sequence, // typecode kind
    84, // encapsulation length
      TAO_ENCAP_BYTE_ORDER, // byte order
      CORBA::tk_alias, // typecode kind for typedefs
      68, // encapsulation length
        TAO_ENCAP_BYTE_ORDER, // byte order
        37,
        ACE_NTOHL (0x49444c3a), 
        ACE_NTOHL (0x6f6d672e), 
        ACE_NTOHL (0x6f72672f), 
        ACE_NTOHL (0x434f4e56), 
        ACE_NTOHL (0x5f465241), 
        ACE_NTOHL (0x4d452f43), 
        ACE_NTOHL (0x6f646553), 
        ACE_NTOHL (0x65744964), 
        ACE_NTOHL (0x3a312e30), 
        ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetId:1.0
                10,
        ACE_NTOHL (0x436f6465), 
        ACE_NTOHL (0x53657449), 
        ACE_NTOHL (0x64000000),  // name = CodeSetId
                CORBA::tk_ulong,


      0U,


  13,
  ACE_NTOHL (0x466f7257), 
  ACE_NTOHL (0x63686172), 
  ACE_NTOHL (0x44617461), 
  ACE_NTOHL (0x0),  // name = ForWcharData
    CORBA::tk_struct, // typecode kind
  296, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    44,
    ACE_NTOHL (0x49444c3a), 
    ACE_NTOHL (0x6f6d672e), 
    ACE_NTOHL (0x6f72672f), 
    ACE_NTOHL (0x434f4e56), 
    ACE_NTOHL (0x5f465241), 
    ACE_NTOHL (0x4d452f43), 
    ACE_NTOHL (0x6f646553), 
    ACE_NTOHL (0x6574436f), 
    ACE_NTOHL (0x6d706f6e), 
    ACE_NTOHL (0x656e743a), 
    ACE_NTOHL (0x312e3000),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetComponent:1.0
        17,
    ACE_NTOHL (0x436f6465), 
    ACE_NTOHL (0x53657443), 
    ACE_NTOHL (0x6f6d706f), 
    ACE_NTOHL (0x6e656e74), 
    ACE_NTOHL (0x0),  // name = CodeSetComponent
    2, // member count
        16,
    ACE_NTOHL (0x6e617469), 
    ACE_NTOHL (0x76655f63), 
    ACE_NTOHL (0x6f64655f), 
    ACE_NTOHL (0x73657400),  // name = native_code_set
        CORBA::tk_alias, // typecode kind for typedefs
    68, // encapsulation length
      TAO_ENCAP_BYTE_ORDER, // byte order
      37,
      ACE_NTOHL (0x49444c3a), 
      ACE_NTOHL (0x6f6d672e), 
      ACE_NTOHL (0x6f72672f), 
      ACE_NTOHL (0x434f4e56), 
      ACE_NTOHL (0x5f465241), 
      ACE_NTOHL (0x4d452f43), 
      ACE_NTOHL (0x6f646553), 
      ACE_NTOHL (0x65744964), 
      ACE_NTOHL (0x3a312e30), 
      ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetId:1.0
            10,
      ACE_NTOHL (0x436f6465), 
      ACE_NTOHL (0x53657449), 
      ACE_NTOHL (0x64000000),  // name = CodeSetId
            CORBA::tk_ulong,


    21,
    ACE_NTOHL (0x636f6e76), 
    ACE_NTOHL (0x65727369), 
    ACE_NTOHL (0x6f6e5f63), 
    ACE_NTOHL (0x6f64655f), 
    ACE_NTOHL (0x73657473), 
    ACE_NTOHL (0x0),  // name = conversion_code_sets
        CORBA::tk_sequence, // typecode kind
    84, // encapsulation length
      TAO_ENCAP_BYTE_ORDER, // byte order
      CORBA::tk_alias, // typecode kind for typedefs
      68, // encapsulation length
        TAO_ENCAP_BYTE_ORDER, // byte order
        37,
        ACE_NTOHL (0x49444c3a), 
        ACE_NTOHL (0x6f6d672e), 
        ACE_NTOHL (0x6f72672f), 
        ACE_NTOHL (0x434f4e56), 
        ACE_NTOHL (0x5f465241), 
        ACE_NTOHL (0x4d452f43), 
        ACE_NTOHL (0x6f646553), 
        ACE_NTOHL (0x65744964), 
        ACE_NTOHL (0x3a312e30), 
        ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetId:1.0
                10,
        ACE_NTOHL (0x436f6465), 
        ACE_NTOHL (0x53657449), 
        ACE_NTOHL (0x64000000),  // name = CodeSetId
                CORBA::tk_ulong,


      0U,


};

static CORBA::TypeCode _tc_TAO_tc_CONV_FRAME_CodeSetComponentInfo (
    CORBA::tk_struct,
    sizeof (_oc_CONV_FRAME_CodeSetComponentInfo),
    (char *) &_oc_CONV_FRAME_CodeSetComponentInfo,
    0,
    sizeof (CONV_FRAME::CodeSetComponentInfo)
  );

namespace CONV_FRAME
{
  ::CORBA::TypeCode_ptr _tc_CodeSetComponentInfo =
    &_tc_TAO_tc_CONV_FRAME_CodeSetComponentInfo;
}

// TAO_IDL - Generated from 
// be/be_visitor_structure/structure_cs.cpp:66

void 
CONV_FRAME::CodeSetComponentInfo::_tao_any_destructor (
    void *_tao_void_pointer
  )
{
  CodeSetComponentInfo *_tao_tmp_pointer =
    ACE_static_cast (CodeSetComponentInfo *, _tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_CONV_FRAME_CodeSetContext[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  42,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x434f4e56), 
  ACE_NTOHL (0x5f465241), 
  ACE_NTOHL (0x4d452f43), 
  ACE_NTOHL (0x6f646553), 
  ACE_NTOHL (0x6574436f), 
  ACE_NTOHL (0x6e746578), 
  ACE_NTOHL (0x743a312e), 
  ACE_NTOHL (0x30000000),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetContext:1.0
    15,
  ACE_NTOHL (0x436f6465), 
  ACE_NTOHL (0x53657443), 
  ACE_NTOHL (0x6f6e7465), 
  ACE_NTOHL (0x78740000),  // name = CodeSetContext
  2, // member count
    10,
  ACE_NTOHL (0x63686172), 
  ACE_NTOHL (0x5f646174), 
  ACE_NTOHL (0x61000000),  // name = char_data
    CORBA::tk_alias, // typecode kind for typedefs
  68, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    37,
    ACE_NTOHL (0x49444c3a), 
    ACE_NTOHL (0x6f6d672e), 
    ACE_NTOHL (0x6f72672f), 
    ACE_NTOHL (0x434f4e56), 
    ACE_NTOHL (0x5f465241), 
    ACE_NTOHL (0x4d452f43), 
    ACE_NTOHL (0x6f646553), 
    ACE_NTOHL (0x65744964), 
    ACE_NTOHL (0x3a312e30), 
    ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetId:1.0
        10,
    ACE_NTOHL (0x436f6465), 
    ACE_NTOHL (0x53657449), 
    ACE_NTOHL (0x64000000),  // name = CodeSetId
        CORBA::tk_ulong,


  11,
  ACE_NTOHL (0x77636861), 
  ACE_NTOHL (0x725f6461), 
  ACE_NTOHL (0x74610000),  // name = wchar_data
    CORBA::tk_alias, // typecode kind for typedefs
  68, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    37,
    ACE_NTOHL (0x49444c3a), 
    ACE_NTOHL (0x6f6d672e), 
    ACE_NTOHL (0x6f72672f), 
    ACE_NTOHL (0x434f4e56), 
    ACE_NTOHL (0x5f465241), 
    ACE_NTOHL (0x4d452f43), 
    ACE_NTOHL (0x6f646553), 
    ACE_NTOHL (0x65744964), 
    ACE_NTOHL (0x3a312e30), 
    ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetId:1.0
        10,
    ACE_NTOHL (0x436f6465), 
    ACE_NTOHL (0x53657449), 
    ACE_NTOHL (0x64000000),  // name = CodeSetId
        CORBA::tk_ulong,


};

static CORBA::TypeCode _tc_TAO_tc_CONV_FRAME_CodeSetContext (
    CORBA::tk_struct,
    sizeof (_oc_CONV_FRAME_CodeSetContext),
    (char *) &_oc_CONV_FRAME_CodeSetContext,
    0,
    sizeof (CONV_FRAME::CodeSetContext)
  );

namespace CONV_FRAME
{
  ::CORBA::TypeCode_ptr _tc_CodeSetContext =
    &_tc_TAO_tc_CONV_FRAME_CodeSetContext;
}

// TAO_IDL - Generated from 
// be/be_visitor_structure/structure_cs.cpp:66

void 
CONV_FRAME::CodeSetContext::_tao_any_destructor (
    void *_tao_void_pointer
  )
{
  CodeSetContext *_tao_tmp_pointer =
    ACE_static_cast (CodeSetContext *, _tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_cs.cpp:95

#if !defined _TAO_CDR_OP_CONV_FRAME_CodeSetComponent__tao_seq_CONV_FRAME_CodeSetId__CPP_
#define _TAO_CDR_OP_CONV_FRAME_CodeSetComponent__tao_seq_CONV_FRAME_CodeSetId__CPP_

CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const CONV_FRAME::CodeSetComponent::_tao_seq_CONV_FRAME_CodeSetId_ &_tao_sequence
  )
{
  CORBA::ULong _tao_seq_len = _tao_sequence.length ();
  
  if (strm << _tao_seq_len)
    {
      // Encode all elements.
      return strm.write_ulong_array (_tao_sequence.get_buffer (), _tao_sequence.length ());
    }
  
  return 0;
}

CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    CONV_FRAME::CodeSetComponent::_tao_seq_CONV_FRAME_CodeSetId_ &_tao_sequence
  )
{
  CORBA::ULong _tao_seq_len;
  
  if (strm >> _tao_seq_len)
    {
      // Add a check to the length of the sequence
      // to make sure it does not exceed the length
      // of the stream. (See bug 58.)
      if (_tao_seq_len > strm.length ())
        {
          return 0;
        }
      
      // Set the length of the sequence.
      _tao_sequence.length (_tao_seq_len);
      
      // If length is 0 we return true.
      if (0 >= _tao_seq_len) 
        {
          return 1;
        }
      
      // Retrieve all the elements.
      return strm.read_ulong_array (_tao_sequence.get_buffer (), _tao_sequence.length ());
    
    }
  
  return 0;
}

#endif /* _TAO_CDR_OP_CONV_FRAME_CodeSetComponent__tao_seq_CONV_FRAME_CodeSetId__CPP_ */

// TAO_IDL - Generated from
// be/be_visitor_root/root.cpp:1725

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)

  template class
    TAO_Var_Var_T<
        CONV_FRAME::CodeSetComponent
      >;

  template class
    TAO_Var_Base_T<
        CONV_FRAME::CodeSetComponent
      >;

  template class
    TAO_Out_T<
        CONV_FRAME::CodeSetComponent,
        CONV_FRAME::CodeSetComponent_var
      >;

  template class
    TAO_Var_Var_T<
        CONV_FRAME::CodeSetComponentInfo
      >;

  template class
    TAO_Var_Base_T<
        CONV_FRAME::CodeSetComponentInfo
      >;

  template class
    TAO_Out_T<
        CONV_FRAME::CodeSetComponentInfo,
        CONV_FRAME::CodeSetComponentInfo_var
      >;

  template class
    TAO_Fixed_Var_T<
        CONV_FRAME::CodeSetContext
      >;

  template class
    TAO_Var_Base_T<
        CONV_FRAME::CodeSetContext
      >;

#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)

# pragma instantiate \
    TAO_Var_Var_T< \
        CONV_FRAME::CodeSetComponent \
      >

# pragma instantiate \
    TAO_Var_Base_T< \
        CONV_FRAME::CodeSetComponent \
      >

# pragma instantiate \
    TAO_Out_T< \
        CONV_FRAME::CodeSetComponent, \
        CONV_FRAME::CodeSetComponent_var \
      >

# pragma instantiate \
    TAO_Var_Var_T< \
        CONV_FRAME::CodeSetComponentInfo \
      >

# pragma instantiate \
    TAO_Var_Base_T< \
        CONV_FRAME::CodeSetComponentInfo \
      >

# pragma instantiate \
    TAO_Out_T< \
        CONV_FRAME::CodeSetComponentInfo, \
        CONV_FRAME::CodeSetComponentInfo_var \
      >

# pragma instantiate \
    TAO_Fixed_Var_T< \
        CONV_FRAME::CodeSetContext \
      >

# pragma instantiate \
    TAO_Var_Base_T< \
        CONV_FRAME::CodeSetContext \
      >

#endif /* !ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */ 


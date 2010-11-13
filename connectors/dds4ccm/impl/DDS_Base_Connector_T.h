/**
 * @author Johnny Willemsen  <jwillemsen@remedy.nl>
 *
 * $Id$
 */
#ifndef DDS_BASE_CONNECTOR_T_H_
#define DDS_BASE_CONNECTOR_T_H_

#include "dds4ccm/idl/dds_rtf2_dcpsC.h"
#include "ace/Copy_Disabled.h"
#include "dds4ccm/impl/ndds/DomainParticipantFactory.h"
#include "dds4ccm/impl/logger/Logger_Service.h"

template <typename DDS_TYPE, typename CCM_TYPE>
class DDS_Base_Connector_T
  : public virtual CCM_TYPE::base_type,
    public virtual ::CORBA::LocalObject,
    private virtual ACE_Copy_Disabled
{
typedef ::CIAO::NDDS::DDS_DomainParticipantFactory_i
  DomainParticipantFactory;

public:
  DDS_Base_Connector_T (void);
  virtual ~DDS_Base_Connector_T (void);

  /**
   * @name domain_id
   * Accessors for domain_id
   */
  //@{
  virtual ::DDS::DomainId_t domain_id (void);

  virtual void domain_id (::DDS::DomainId_t domain_id);
  //@}

  /**
   * @name qos_profile
   * Accessors for qos_profile
   */
  //@{
  virtual char *qos_profile (void);

  virtual void qos_profile (const char * qos_profile);
  //@}

  virtual void set_session_context (::Components::SessionContext_ptr ctx);

  virtual void configuration_complete (void);
  virtual void ccm_remove (void);
  virtual void ccm_activate (void);
  virtual void ccm_passivate (void);

protected:
  void init_default_domain (void);

  /// Get the reactor associated with this component
  ACE_Reactor* reactor (void);

  ::DDS::DomainId_t domain_id_;
  ::CORBA::String_var qos_profile_;
  bool configuration_complete_;
  char* library_name_;
  char* profile_name_;

  ::CIAO::DDS4CCM::Logger_Service * dlf_;

  ::DDS::DomainParticipant_var domain_participant_;

  typename CCM_TYPE::context_type::_var_type context_;

  DomainParticipantFactory dp_factory_;
};

#include "dds4ccm/impl/DDS_Base_Connector_T.cpp"

#endif /* DDS_BASE_CONNECTOR_T_H_ */
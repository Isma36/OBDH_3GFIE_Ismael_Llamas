//##############################################################################
//###############     This file has been generated by EDROOM     ###############
//##############################################################################
 
#ifndef EDROOMDEPLOYMENT_H_
#define EDROOMDEPLOYMENT_H_
 
#include <edroom_glue/edroomdf.h>
#include <public/edroomsl_iface_v1.h>
 
 
//******************************************************************************
// include deployment edroom components
 
#include <public/icuasw_iface_v1.h>
#include <public/cctm_channelctrl_iface_v1.h>
#include <public/ccepdmanager_iface_v1.h>
#include <public/cchk_fdirmng_iface_v1.h>
// ***********************************************************************
// class CEDROOMSystemMemory
// ***********************************************************************
 
class CEDROOMSystemMemory{
 
	//!Messages Memory of component comp1
	CEDROOMMessage	comp1Messages[10];
	bool	comp1MessagesMarks[10];
	CEDROOMQueue::CQueueNode	comp1QueueNodes[13];
	bool	comp1QueueNodesMarks[13];
 
	//!Messages Memory of component comp2
	CEDROOMMessage	comp2Messages[10];
	bool	comp2MessagesMarks[10];
	CEDROOMQueue::CQueueNode	comp2QueueNodes[10];
	bool	comp2QueueNodesMarks[10];
 
	//!Messages Memory of component comp3
	CEDROOMMessage	comp3Messages[10];
	bool	comp3MessagesMarks[10];
	CEDROOMQueue::CQueueNode	comp3QueueNodes[11];
	bool	comp3QueueNodesMarks[11];
 
	//!Messages Memory of component comp4
	CEDROOMMessage	comp4Messages[10];
	bool	comp4MessagesMarks[10];
	CEDROOMQueue::CQueueNode	comp4QueueNodes[14];
	bool	comp4QueueNodesMarks[14];
 
	public:
 
	ICUASW::CEDROOMMemory comp1Memory;
	CCTM_ChannelCtrl::CEDROOMMemory comp2Memory;
	CCEPDManager::CEDROOMMemory comp3Memory;
	CCHK_FDIRMng::CEDROOMMemory comp4Memory;
 
//!Set Memory
	void SetMemory();
};
 
class CEDROOMSystemCommSAP{
 
	 friend class CEDROOMSystemDeployment;
//!Communication Service Access Point
 
	CEDROOMLocalCommSAP m_localCommSAP;
 
 
//!Conections
 
	CEDROOMLocalConnection connections[2];
 
	ICUASW   * mp_comp1;
	CCTM_ChannelCtrl   * mp_comp2;
	CCEPDManager   * mp_comp3;
	CCHK_FDIRMng   * mp_comp4;
 
 
//!Set Components
 
	void SetComponents(ICUASW   *p_comp1,
							CCTM_ChannelCtrl   *p_comp2,
							CCEPDManager   *p_comp3,
							CCHK_FDIRMng   *p_comp4);
 
 
//Signal Conversion
 
	static TEDROOMSignal C2TM_ChannelCtrl_PTMChannelCtrl2__C4HK_FDIRMng_PTMChannelCtrl(TEDROOMSignal signal);
	static TEDROOMSignal C4HK_FDIRMng_PTMChannelCtrl__C2TM_ChannelCtrl_PTMChannelCtrl2(TEDROOMSignal signal);
 
//Signal Conversion
 
	static TEDROOMSignal C3EPDManager_PTMChannelCtrl__C2TM_ChannelCtrl_PTMChannelCtrl(TEDROOMSignal signal);
	static TEDROOMSignal C2TM_ChannelCtrl_PTMChannelCtrl__C3EPDManager_PTMChannelCtrl(TEDROOMSignal signal);
 
 
//!Register Interfaces
	void RegisterInterfaces();
 
//!Set Local Connections
	void SetLocalConnections();
 
//!Set Remote Connections
	void SetRemoteConnections();
 
//!Set Connections
	void SetConnections();
 
};
 
class CEDROOMSystemDeployment{
 
//!Kernel
	Pr_Kernel	kernel;
 
#ifdef CONFIG_EDROOMDEPLOYMENT_NEED_TASK
 
//!Main Task
static Pr_TaskRV_t main_task(Pr_TaskP_t);
 
#endif
	CEDROOMSystemMemory   systemMemory;
	CEDROOMSystemCommSAP  systemCommSAP;
 
	ICUASW   * mp_comp1;
	CCTM_ChannelCtrl   * mp_comp2;
	CCEPDManager   * mp_comp3;
	CCHK_FDIRMng   * mp_comp4;
 
	public:
 
	CEDROOMSystemDeployment();
 
//!Deployment Configuration
	void Config(ICUASW   *p_comp1,
					CCTM_ChannelCtrl   *p_comp2,
					CCEPDManager   *p_comp3,
					CCHK_FDIRMng   *p_comp4);
 
//!Deployment Start
	void Start();
 
//!StartComponents
	void StartComponents();
//!Config Components
 
	ICUASW::CEDROOMMemory 		* GetComp1Memory(){return &systemMemory.comp1Memory;}
	CCTM_ChannelCtrl::CEDROOMMemory 		* GetComp2Memory(){return &systemMemory.comp2Memory;}
	CCEPDManager::CEDROOMMemory 		* GetComp3Memory(){return &systemMemory.comp3Memory;}
	CCHK_FDIRMng::CEDROOMMemory 		* GetComp4Memory(){return &systemMemory.comp4Memory;}
 
};
#endif

//##############################################################################
//###############     This file has been generated by EDROOM     ###############
//##############################################################################
 
#include <public/edroom_glue.h>
 
 
//******************************************************************************
// include deployment edroom components
 
#include <public/icuasw_iface_v1.h>
#include <public/cctm_channelctrl_iface_v1.h>
#include <public/ccepdmanager_iface_v1.h>
#include <public/cchk_fdirmng_iface_v1.h>
 
#ifdef CONFIG_EDROOMBP_DEPLOYMENT_NEED_TASK
 
	CEDROOMSystemDeployment systemDeployment;
 
#endif
 
 
 
rtems_task Init (uint32_t arg){
 
 
 
#ifndef CONFIG_EDROOMBP_DEPLOYMENT_NEED_TASK
 
	CEDROOMSystemDeployment systemDeployment;
 
#endif
 
 
	ICUASW	comp1(1, 13, EDROOMprioVeryLow, 8192, systemDeployment.GetComp1Memory());
	CCTM_ChannelCtrl	comp2(2, 10, EDROOMprioNormal, 1024, systemDeployment.GetComp2Memory());
	CCEPDManager	comp3(3, 11, EDROOMprioNormal, 1024, systemDeployment.GetComp3Memory());
	CCHK_FDIRMng	comp4(4, 14, EDROOMprioNormal, 1024, systemDeployment.GetComp4Memory());
 
	systemDeployment.Config(&comp1, &comp2, &comp3, &comp4);
 
	systemDeployment.Start();
 
	;
 
}

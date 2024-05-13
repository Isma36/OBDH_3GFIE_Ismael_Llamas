/*
 * emu_tc_programming.cpp
 *
 *  Created on: Jan 13, 2017
 *      Author: user
 */

#include <public/emu_hw_timecode_drv_v1.h>
#include <public/emu_sc_channel_drv_v1.h>
#include <public/emu_gss_v1.h>

//#define FT_SOLO_EPD_ICU_SERV_17_0010
//#define FT_SOLO_EPD_ICU_SERV_9_0020
//#define FT_SOLO_EPD_ICU_SERV_1_REJ_TC_0030

//TODO
//#define FT_SOLO_EPD_ICU_SERV_3_DISABLE_SID0_0040
//#define FT_SOLO_EPD_ICU_SERV_3_UPDATE_INTERVAL_TC_0050

//#define FT_SOLO_EPD_ICU_SERV_20_UPDATE_PARAM_VALUE_0060

//#define FT_SOLO_EPD_ICU_Monitoring_0070

//#define FT_SOLO_EPD_DeviceControl_0080

//TODO
#define FT_SOLO_EPD_Event_Action_0090
//#define FT_SOLO_EPD_Event_Action_0100
//#define FT_SOLO_EPD_Event_Action_0110

#ifdef FT_SOLO_EPD_ICU_SERV_17_0010

EmuGSS_TCProgram17_1 prog_FT_0010_step_0(UNITIME_AFTER_POWER_ON + 6,
					"FT_SOLO_EPD_ICU_SERV_17_0010 step 0, Connection Test");


#endif

#ifdef FT_SOLO_EPD_ICU_SERV_9_0020

#define FT_SOLO_EPD_ICU_SERV_9_0020_TIME 200000

EmuGSS_TCProgram9_129 prog_FT_0020_step_0(UNITIME_AFTER_POWER_ON + 10 ,
		"FT_SOLO_EPD_ICU_SERV_9_0020 step 0, Update UniTime Test",
		FT_SOLO_EPD_ICU_SERV_9_0020_TIME);



#endif

#ifdef FT_SOLO_EPD_ICU_SERV_1_REJ_TC_0030


#define FT_SOLO_EPD_ICU_SERV_1_0030_TIME (UNITIME_AFTER_POWER_ON + 10)

EmuGSS_TCProgram17_3 prog_FT_0030_step_0(FT_SOLO_EPD_ICU_SERV_1_0030_TIME,
		"FT_SOLO_EPD_ICU_SERV_1_0030 step 0, Rejected TC",0xFF);

#endif

#ifdef FT_SOLO_EPD_ICU_SERV_3_DISABLE_SID0_0040

#define FT_SOLO_EPD_ICU_SERV_3_0040_TIME (UNITIME_AFTER_POWER_ON + 30)

EmuGSS_TCProgram3_6 prog_FT_0040_step_0(FT_SOLO_EPD_ICU_SERV_3_0040_TIME,
		"FT_SOLO_EPD_ICU_SERV_3_0040 step 0, Disable SID 0 ",0);

#endif

#ifdef FT_SOLO_EPD_ICU_SERV_3_UPDATE_INTERVAL_TC_0050


#define FT_SOLO_EPD_ICU_SERV_3_0050_TIME_step0 (UNITIME_AFTER_POWER_ON + 35)
#define FT_SOLO_EPD_ICU_SERV_3_0050_TIME_step1 (FT_SOLO_EPD_ICU_SERV_3_0050_TIME_step0 + 10)
#define FT_SOLO_EPD_ICU_SERV_3_0050_TIME_step2 (FT_SOLO_EPD_ICU_SERV_3_0050_TIME_step1 + 10)


EmuGSS_TCProgram3_31 prog_FT_0050_step_0(FT_SOLO_EPD_ICU_SERV_3_0050_TIME_step0,
		"FT_SOLO_EPD_ICU_SERV_3_0050 step 0, Update SID 10 Rate to 5",10,5);

EmuGSS_TCProgram3_6 prog_FT_0050_step_1(FT_SOLO_EPD_ICU_SERV_3_0050_TIME_step1,
		"FT_SOLO_EPD_ICU_SERV_3_0050 step 1, Disable SID 10 ",10);

EmuGSS_TCProgram3_5 prog_FT_0050_step_2(FT_SOLO_EPD_ICU_SERV_3_0050_TIME_step2,
		"FT_SOLO_EPD_ICU_SERV_3_0050 step 2, Enable SID 10 ",10);


#endif

#ifdef FT_SOLO_EPD_ICU_SERV_20_UPDATE_PARAM_VALUE_0060


#define FT_SOLO_EPD_ICU_SERV_20_0060_TIME_step0 (UNITIME_AFTER_POWER_ON + 5)
#define FT_SOLO_EPD_ICU_SERV_20_0060_TIME_step1 (UNITIME_AFTER_POWER_ON + 8)


EmuGSS_TCProgram20_3 prog_FT_0060_step_0(FT_SOLO_EPD_ICU_SERV_20_0060_TIME_step0,
		"FT_SOLO_EPD_ICU_SERV_20_0060 step 0, Update PID 1 to 99",1,99);

EmuGSS_TCProgram20_1 prog_FT_0060_step_1(FT_SOLO_EPD_ICU_SERV_20_0060_TIME_step1,
		"FT_SOLO_EPD_ICU_SERV_20_0060 step 1, Get PID 1 Value",1);


#endif

#ifdef FT_SOLO_EPD_ICU_Monitoring_0070


#endif

#ifdef FT_SOLO_EPD_DeviceControl_0080

EmuGSS_TCProgram2_1 prog_FT_0080_step_0(UNITIME_AFTER_POWER_ON + 6,
					"FT_SOLO_EPD_ICU_SERV_2_1_0080 step 0, Device 1 Off",
					0, DeviceCommandOn);

EmuGSS_TCProgram2_1 prog_FT_0080_step_1(UNITIME_AFTER_POWER_ON + 6,
					"FT_SOLO_EPD_ICU_SERV_2_1_0080 step 1, Device 2 On",
					2, DeviceCommandOn);

EmuGSS_TCProgram2_1 prog_FT_0080_step_2(UNITIME_AFTER_POWER_ON + 6,
					"FT_SOLO_EPD_ICU_SERV_2_1_0080 step 1, Device Not Valid On",
					5, DeviceCommandOn);

#endif

#ifdef FT_SOLO_EPD_Event_Action_0090
#define FT_SOLO_EPD_Event_Action_0090_TIME_step0 (UNITIME_AFTER_POWER_ON + 5)
#define FT_SOLO_EPD_Event_Action_0090_TIME_step1 (UNITIME_AFTER_POWER_ON + 8)
#define FT_SOLO_EPD_Event_Action_0090_TIME_step2 (UNITIME_AFTER_POWER_ON + 11)
#define FT_SOLO_EPD_Event_Action_0090_TIME_step3 (UNITIME_AFTER_POWER_ON + 14)
#define FT_SOLO_EPD_Event_Action_0090_TIME_step4 (UNITIME_AFTER_POWER_ON + 17)
#define FT_SOLO_EPD_Event_Action_0090_TIME_step5 (UNITIME_AFTER_POWER_ON + 20)
#define FT_SOLO_EPD_Event_Action_0090_TIME_step6 (UNITIME_AFTER_POWER_ON + 23)
#define FT_SOLO_EPD_Event_Action_0090_TIME_step7 (UNITIME_AFTER_POWER_ON + 26)
#define FT_SOLO_EPD_Event_Action_0090_TIME_step8 (UNITIME_AFTER_POWER_ON + 29)
#define FT_SOLO_EPD_Event_Action_0090_TIME_step9 (UNITIME_AFTER_POWER_ON + 32)
#define FT_SOLO_EPD_Event_Action_0090_TIME_step10 (UNITIME_AFTER_POWER_ON + 35)

EmuGSS_TCProgram20_3 prog_FT_0090_step_0(FT_SOLO_EPD_Event_Action_0090_TIME_step0,
		"FT_SOLO_EPD_ICU_SERV_20_0090 step 0, Update PID 0 to 7",0,7);

EmuGSS_TCProgram12_5 prog_FT_0090_step_1(FT_SOLO_EPD_Event_Action_0090_TIME_step1,
		"FT_SOLO_EPD_ICU_SERV_12_5_0090 step 1, Define Monitoring PID 0", //PMONID = 0
		0,0,1,5,0x3001,10,0x3002); // Se evalua cada 5 y tiene limites 5-10

EmuGSS_TCProgram12_1 prog_FT_0090_step_2(FT_SOLO_EPD_Event_Action_0090_TIME_step2,
		"FT_SOLO_EPD_ICU_SERV_12_1_0090 step 2, Enable Monitoring PID 0",
		0); // Habilito el monitoring

EmuGSS_TCProgram19_1_Action_2_1 prog_FT_0090_step_3(FT_SOLO_EPD_Event_Action_0090_TIME_step3,
		"FT_SOLO_EPD_ICU_SERV_19_1_Action_2_1_0090 step 3, Define event-action",
		0x3002,0,DeviceCommandOn);

EmuGSS_TCProgram19_4 prog_FT_0090_step_4(FT_SOLO_EPD_Event_Action_0090_TIME_step4,
		"FT_SOLO_EPD_ICU_SERV_19_4_0090 step 4, Define event-action",
		0x3002);

EmuGSS_TCProgram20_3 prog_FT_0090_step_5(FT_SOLO_EPD_Event_Action_0090_TIME_step5,
		"FT_SOLO_EPD_ICU_SERV_20_0090 step 5, Update PID 0 to 15",
		0,15);

EmuGSS_TCProgram19_5 prog_FT_0090_step_6(FT_SOLO_EPD_Event_Action_0090_TIME_step6,
		"FT_SOLO_EPD_ICU_SERV_19_5_0090 step 6, Define event-action",
		0x3002);

EmuGSS_TCProgram20_3 prog_FT_0090_step_7(FT_SOLO_EPD_Event_Action_0090_TIME_step7,
		"FT_SOLO_EPD_ICU_SERV_20_0090 step 7, Update PID 0 to 15",
		0,15);

EmuGSS_TCProgram19_4 prog_FT_0090_step_8(FT_SOLO_EPD_Event_Action_0090_TIME_step8,
		"FT_SOLO_EPD_ICU_SERV_19_4_0090 step 8, Define event-action",
		0x3002);

EmuGSS_TCProgram19_2 prog_FT_0090_step_9(FT_SOLO_EPD_Event_Action_0090_TIME_step9,
		"FT_SOLO_EPD_ICU_SERV_19_2_0090 step 9, Delete event-action",
		0x3002);

EmuGSS_TCProgram20_3 prog_FT_0090_step_10(FT_SOLO_EPD_Event_Action_0090_TIME_step10,
		"FT_SOLO_EPD_ICU_SERV_20_0090 step 10, Update PID 0 to 15",
		0,15);


#endif

#ifdef FT_SOLO_EPD_Event_Action_0100



#endif

#ifdef FT_SOLO_EPD_Event_Action_0110



#endif

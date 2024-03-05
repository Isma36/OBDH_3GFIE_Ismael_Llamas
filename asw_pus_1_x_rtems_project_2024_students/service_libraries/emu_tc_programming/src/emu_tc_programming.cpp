/*
 * emu_tc_programming.cpp
 *
 *  Created on: Jan 13, 2017
 *      Author: user
 */

#include <public/emu_hw_timecode_drv_v1.h>
#include <public/emu_sc_channel_drv_v1.h>
#include <public/emu_gss_v1.h>


// Se crean unas pruebas con un nombre y un identificador para ejecutar, se les ponen números de 10 en 10 para intercalar luego si es necesario
#define FT_SOLO_EPD_ICU_SERV_17_0010
#define FT_SOLO_EPD_ICU_SERV_9_0020


//TODO
#define FT_SOLO_EPD_ICU_SERV_1_REJECTED_TC_0030



#ifdef FT_SOLO_EPD_ICU_SERV_17_0010 //Inyecto telecomandos 17.1, si utilizas esta clase, programas un TC del tipo 17.1 HACE UN TET

EmuGSS_TCProgram17_1 prog_FT_0010_step_0(UNITIME_AFTER_POWER_ON + 6, //El tiempo en el que se crea y al + 6 se inyecta el TC
					"FT_SOLO_EPD_ICU_SERV_17_0010 step 0, Connection Test"); // Como solo tiene un paso le pongo solo step 0, si no sería step 1, step 2...


#endif

#ifdef FT_SOLO_EPD_ICU_SERV_9_0020

#define FT_SOLO_EPD_ICU_SERV_9_0020_TIME 200000 // Nuevo test que cambia el tgiempo de abordo

EmuGSS_TCProgram9_129 prog_FT_0020_step_0(UNITIME_AFTER_POWER_ON + 10 , // Tiene su propia clase con el tiempo de liberación, el mensaje y el nuevo tiempo de abordo
		"FT_SOLO_EPD_ICU_SERV_9_0020 step 0, Update UniTime Test",
		FT_SOLO_EPD_ICU_SERV_9_0020_TIME);



#endif

#ifdef FT_SOLO_EPD_ICU_SERV_1_REJECTED_TC_0030 // Test para que sea rechazado por el sistema y mande una 1.2


#define FT_SOLO_EPD_ICU_SERV_1_0030_TIME (FT_SOLO_EPD_ICU_SERV_9_0020_TIME + 2)

EmuGSS_TCProgram17_3 prog_FT_0030_step_0(FT_SOLO_EPD_ICU_SERV_1_0030_TIME,
		"FT_SOLO_EPD_ICU_SERV_1_0030 step 0, Rejected TC",0xFF);

#endif



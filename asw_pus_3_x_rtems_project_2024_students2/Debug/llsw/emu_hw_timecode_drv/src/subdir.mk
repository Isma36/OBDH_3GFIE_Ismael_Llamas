################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../llsw/emu_hw_timecode_drv/src/emu_hw_timecode_drv.cpp 

CPP_DEPS += \
./llsw/emu_hw_timecode_drv/src/emu_hw_timecode_drv.d 

OBJS += \
./llsw/emu_hw_timecode_drv/src/emu_hw_timecode_drv.o 


# Each subdirectory must supply rules for building sources it contributes
llsw/emu_hw_timecode_drv/src/%.o: ../llsw/emu_hw_timecode_drv/src/%.cpp llsw/emu_hw_timecode_drv/src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	sparc-rtems-g++ -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/llsw/config/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/llsw/emu_hw_timecode_drv/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/service_libraries/crc/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/asw/dataclasses/CDTMHandler/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/llsw/emu_gss/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/service_libraries/ccsds_pus/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/llsw/tmtc_dyn_mem/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/service_libraries/serialize/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/asw/components/cchk_fdirmng/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/asw/components/ccepdmanager/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/asw/components/cctm_channelctrl/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/asw/components/icuasw/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/asw/edroom_glue/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/service_libraries/edroomsl/edroombp/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/service_libraries/edroomsl/edroomsl/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/service_libraries/edroomsl/edroomsl_types/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/llsw/rtems_osswr/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/asw/dataclasses/CDEventList/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/asw/dataclasses/CDRecovAction/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/asw/dataclasses/CDSensorTMBufferStatus/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/asw/dataclasses/CDTCHandler/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/asw/dataclasses/CDTMList/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/asw/dataclasses/CDTMMemory/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/service_libraries/icuasw_pus_services/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/llsw/sc_channel_drv/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/llsw/emu_sc_channel_drv/include" -O0 -g3 -Wall -c -fmessage-length=0 -msoft-float -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-llsw-2f-emu_hw_timecode_drv-2f-src

clean-llsw-2f-emu_hw_timecode_drv-2f-src:
	-$(RM) ./llsw/emu_hw_timecode_drv/src/emu_hw_timecode_drv.d ./llsw/emu_hw_timecode_drv/src/emu_hw_timecode_drv.o

.PHONY: clean-llsw-2f-emu_hw_timecode_drv-2f-src


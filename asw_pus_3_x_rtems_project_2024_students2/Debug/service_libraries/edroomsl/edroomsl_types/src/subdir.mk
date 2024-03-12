################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../service_libraries/edroomsl/edroomsl_types/src/edroomsl_types.cpp 

CPP_DEPS += \
./service_libraries/edroomsl/edroomsl_types/src/edroomsl_types.d 

OBJS += \
./service_libraries/edroomsl/edroomsl_types/src/edroomsl_types.o 


# Each subdirectory must supply rules for building sources it contributes
service_libraries/edroomsl/edroomsl_types/src/%.o: ../service_libraries/edroomsl/edroomsl_types/src/%.cpp service_libraries/edroomsl/edroomsl_types/src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	sparc-rtems-g++ -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/llsw/config/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/llsw/emu_hw_timecode_drv/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/service_libraries/crc/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/asw/dataclasses/CDTMHandler/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/llsw/emu_gss/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/service_libraries/ccsds_pus/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/llsw/tmtc_dyn_mem/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/service_libraries/serialize/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/asw/components/cchk_fdirmng/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/asw/components/ccepdmanager/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/asw/components/cctm_channelctrl/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/asw/components/icuasw/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/asw/edroom_glue/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/service_libraries/edroomsl/edroombp/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/service_libraries/edroomsl/edroomsl/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/service_libraries/edroomsl/edroomsl_types/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/llsw/rtems_osswr/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/asw/dataclasses/CDEventList/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/asw/dataclasses/CDRecovAction/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/asw/dataclasses/CDSensorTMBufferStatus/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/asw/dataclasses/CDTCHandler/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/asw/dataclasses/CDTMList/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/asw/dataclasses/CDTMMemory/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/service_libraries/icuasw_pus_services/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/llsw/sc_channel_drv/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/llsw/emu_sc_channel_drv/include" -O0 -g3 -Wall -c -fmessage-length=0 -msoft-float -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-service_libraries-2f-edroomsl-2f-edroomsl_types-2f-src

clean-service_libraries-2f-edroomsl-2f-edroomsl_types-2f-src:
	-$(RM) ./service_libraries/edroomsl/edroomsl_types/src/edroomsl_types.d ./service_libraries/edroomsl/edroomsl_types/src/edroomsl_types.o

.PHONY: clean-service_libraries-2f-edroomsl-2f-edroomsl_types-2f-src


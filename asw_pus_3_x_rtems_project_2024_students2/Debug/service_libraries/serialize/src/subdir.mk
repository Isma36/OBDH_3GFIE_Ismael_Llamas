################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../service_libraries/serialize/src/serialize.c 

C_DEPS += \
./service_libraries/serialize/src/serialize.d 

OBJS += \
./service_libraries/serialize/src/serialize.o 


# Each subdirectory must supply rules for building sources it contributes
service_libraries/serialize/src/%.o: ../service_libraries/serialize/src/%.c service_libraries/serialize/src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	sparc-rtems-gcc -std=c99 -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/asw/edroom_glue/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/service_libraries/crc/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/service_libraries/edroomsl/edroombp/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/asw/dataclasses/CDTMHandler/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/llsw/emu_gss/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/service_libraries/ccsds_pus/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/llsw/tmtc_dyn_mem/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/service_libraries/serialize/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/llsw/config/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/llsw/emu_sc_channel_drv/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/llsw/sc_channel_drv/include" -I"/home/atcsol/git/OBDH_3GFIE_Ismael_Llamas/asw_pus_3_x_rtems_project_2024_students2/llsw/rtems_osswr/include" -O0 -g3 -Wall -c -fmessage-length=0 -msoft-float -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-service_libraries-2f-serialize-2f-src

clean-service_libraries-2f-serialize-2f-src:
	-$(RM) ./service_libraries/serialize/src/serialize.d ./service_libraries/serialize/src/serialize.o

.PHONY: clean-service_libraries-2f-serialize-2f-src

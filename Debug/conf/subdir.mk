################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../conf/syscalls.c 

OBJS += \
./conf/syscalls.o 

C_DEPS += \
./conf/syscalls.d 


# Each subdirectory must supply rules for building sources it contributes
conf/%.o: ../conf/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo %cd%
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -mfloat-abi=soft -DSTM32F103C8Tx -DSTM32F1 -DSTM32 -DDEBUG -DUSE_STDPERIPH_DRIVER -I"C:/Users/Hwa-Neng/workspace/NengTest6/inc" -I"C:/Users/Hwa-Neng/workspace/NengTest6/conf/core" -I"C:/Users/Hwa-Neng/workspace/NengTest6/conf/hardware" -I"C:/Users/Hwa-Neng/workspace/NengTest6/conf" -I"C:/Users/Hwa-Neng/workspace/NengTest6/inc" -O0 -g3 -Wall -fmessage-length=0 -ffunction-sections -c -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



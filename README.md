# Developed STM32F103C8T6 By using System Workbench for STM32

##Problem 

>When you program the MPU of STM32F103C8T6, you need to make sure the readout protection of MPU is disable. Otherwise, the MPU can't be  debugged and programed. 

###How to disable the readout protection?
In this project, I am using the ST-LINK/V2 to debug and program the STM32F103C8T6. So, I just used the **STM32 ST-LINK utility** software that is automatically provided when you install the [STSW-LINK004](http://www.st.com/content/st_com/en/products/embedded-software/development-tool-software/stsw-link004.html) to disable the the readout protection of MPU.


The ST-LINK/V2 is an in-circuit debugger and programmer for the STM8 and STM32 microcontroller families.
##Project Firmware configution
>In this software, it provide the **Project Firmware configution** to let user to select the project structure and firmware such as " **No firmware**", "**Standard Peripheral Library(StdPeriph)**" and "**Hardware Abstraction Layer(Cube HAL)**".  



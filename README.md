# Developed STM32F103C8T6 By using System Workbench for STM32

##Problem 

>When you program the MPU of STM32F103C8T6, you need to make sure the readout protection of MPU is disable. Otherwise, the MPU can't be  debugged and programed. 

###How to disable the readout protection?
In this project, I am using the ST-LINK/V2 to debug and program the STM32F103C8T6. So, I just used the **STM32 ST-LINK utility** software that is automatically provided when you install the [STSW-LINK004](http://www.st.com/content/st_com/en/products/embedded-software/development-tool-software/stsw-link004.html) to disable the the readout protection of MPU.

Directory: C:\Program Files (x86)\STMicroelectronics\STM32 ST-LINK Utility\ST-LINK Utility

Target->Option Bytes:

![Alt text](https://github.com/Twinkle0613/BlinkLED_AC6_OpenSTM32_IDE/blob/master/Image/OptionBytes.png "OptionBytes")

##Project Firmware configution

>In this software, it has also provided the **Project Firmware configution** to make convenience for user easily to select the project structure and firmware such as " **No firmware**", "**Standard Peripheral Library(StdPeriph)**" and "**Hardware Abstraction Layer(Cube HAL)**".  

If you choose the **No firmware** mode, you need to do some of configuraton to make it work.

Project Properties->C/C++ General->Path and Symbols:

1.Include
In "No firmware" mode, any library that has involved in your main program you must add the direactory of the library into **Include**.
![Alt text](https://github.com/Twinkle0613/BlinkLED_AC6_OpenSTM32_IDE/blob/master/Image/Includes.png "Includes")
2.Symbols
![Alt text](https://github.com/Twinkle0613/BlinkLED_AC6_OpenSTM32_IDE/blob/master/Image/Symbols.png "Symbols")
3.Source Location
![Alt text](https://github.com/Twinkle0613/BlinkLED_AC6_OpenSTM32_IDE/blob/master/Image/Source%20Location.png "Source Location")

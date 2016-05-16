#ifndef __Gpio_H__
#define __Gpio_H__
#include <stdint.h>

#define GPIOA_BASE_ADDRESS 0x40010800
#define GPIOB_BASE_ADDRESS 0x40010C00
#define GPIOC_BASE_ADDRESS 0x40011000

#define PORTA	((GPIO *)GPIOA_BASE_ADDRESS)
#define PORTB	((GPIO *)GPIOB_BASE_ADDRESS)
#define PORTC	((GPIO *)GPIOC_BASE_ADDRESS)
#define PORTD	((GPIO *)GPIOD_BASE_ADDRESS)
#define PORTG	((GPIO *)GPIOG_BASE_ADDRESS)

typedef struct GPIO_t{
   uint32_t CRL;
   uint32_t CRH;
   uint32_t IDR;
   uint32_t ODR;
   uint32_t BSRR;
   uint32_t BRR;
   uint32_t LCKR;
}GPIO;

/*******************  Bit definition for GPIO_CRL/H register  *******************/

/****** Mode bit ******/
#define GPIO_MODE_INPUT 	              ((uint32_t)0x00000000) 
#define GPIO_MODE_MAX_SPD_10MHZ	        ((uint32_t)0x00000001) 
#define GPIO_MODE_MAX_SPD_2MHZ          ((uint32_t)0x00000002) 
#define GPIO_MODE_MAX_SPD_50MHZ   		  ((uint32_t)0x00000003) 

/****** Configuration bit ******/

//Input  ( MODE[1:0] = 00 )


//Output ( MODE[1:0] > 00 )
#define GPIO_GPO_PUSH_PULL 	            ((uint32_t)0x00000000) 
#define GPIO_GPO_OPEN_DRAIN	            ((uint32_t)0x00000001) 
#define GPIO_AFO_PUSH_PULL              ((uint32_t)0x00000002) 
#define GPIO_AFO_OPEN_DRAIN   		      ((uint32_t)0x00000003) 




/*******************  Bit definition for GPIO_IDR register  *******************/

/*******************  Bit definition for GPIO_ODR register  *******************/

/******************  Bit definition for GPIO_BSRR register  *******************/

/******************  Bit definition for GPIO_BRR register   *******************/

/******************  Bit definition for GPIO_LCKR register  *******************/



#endif //__Gpio_H__

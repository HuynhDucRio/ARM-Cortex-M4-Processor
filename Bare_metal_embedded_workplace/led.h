/*
 * led.h
 *
 *  Created on: Feb 22, 2025
 *      Author: Le Huynh Duc
 */

#ifndef LED_H_
#define LED_H_

#include <stdint.h>

#define RCC_BASE_ADDRESS	0x40023800U
#define RCC_AHB1ENR_OFFSET	0x30U


#define GPIOA_BASE_ADDRESS	0x40020000U
#define GPIO_MODER_OFFSET	0x00U
#define GPIO_ODR_OFFSET  0x14U
#define GPIO_BSRR_OFFSET	0x18U



#define delay1MS	1250U
void delay(uint32_t count);
void led_init(void);
void led_on(int x);
void led_off(int x);


#endif /* LED_H_ */

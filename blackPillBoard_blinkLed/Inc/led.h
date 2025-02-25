/*
 * led.h
 *
 *  Created on: Feb 22, 2025
 *      Author: Le Huynh Duc
 */

#ifndef LED_H_
#define LED_H_

#include <stdint.h>

// Base addresses for RCC and GPIOA
#define RCC_BASE_ADDRESS      0x40023800U
#define RCC_AHB1ENR_OFFSET    0x30U

#define GPIOA_BASE_ADDRESS    0x40020000U
#define GPIO_MODER_OFFSET     0x00U
#define GPIO_ODR_OFFSET       0x14U
#define GPIO_BSRR_OFFSET      0x18U

// Define delay count (adjust based on clock speed)
#define SYSTEM_CLOCK_HZ       16000000U  // Default HSI 16 MHz
#define delay1MS              (SYSTEM_CLOCK_HZ / 1000U / 16U)  // Approximate CPU cycles for 1ms delay

void led_init(void);
void led_on(int pin);
void led_off(int pin);
void delay(uint32_t count);

#endif /* LED_H_ */

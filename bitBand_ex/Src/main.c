/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2025 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>

#define ALIAS_BASE 0x22000000U
#define BIT_BAND_BASE 0x20000000U

int main(void)
{
   uint8_t *ptr = (uint8_t*)0x20000200;

   *ptr = 0xff;

   //normal method
   //clear 7th bit pos
   *ptr &= ~(0x01 << 7);


   *ptr = 0xff;
   //bit-band method
   uint8_t *alias_ptr =(uint8_t*) ALIAS_BASE + (32 * (0x20000200 - BIT_BAND_BASE )) + 7*4;
   //clear 7th bit of address 0x20000200
   *alias_ptr = 0;


	for(;;);
}

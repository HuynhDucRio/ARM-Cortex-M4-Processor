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
#include <stdio.h>




void SVC_Handler_c(uint32_t *pBaseOfStackFrame);

int main(void)
{

	__asm("SVC #250");

//	register uint32_t data __asm("r0");
	uint32_t data;
	__asm volatile("MOV %0, R0":"=r"(data):);
	printf("data is: %ld\n",data);

	for(;;);
}

__attribute__ ((naked)) void SVC_Handler(void)
{
	//Extract SVC Number
	//1. Get MSP value
	__asm("MRS R0, MSP");
	__asm("B SVC_Handler_c");//R0 will be copy to argument 0
}

void SVC_Handler_c(uint32_t *pBaseOfStackFrame)
{
	printf("in SVC Handler\n");
	printf("Base address of Stack Frame = %p\n", pBaseOfStackFrame);

	//2. Subtract MSP value by 6 to get PC(return address) value
	uint8_t *pReturn_addr = (uint8_t*)pBaseOfStackFrame[6];
	printf("Address of Return = %p\n", pReturn_addr);

	//3. Minus PC value by 2 to get SVC number because SVC number is right before return address when SVC Handler is done

	uint32_t *pSVC_number = (uint32_t*)(pReturn_addr - 2);
	uint8_t SVC_number =(uint8_t)((*pSVC_number) & 0xFF);
	printf("SVC number is: %d\n", SVC_number);

	SVC_number += 4;
	pBaseOfStackFrame[0] = SVC_number;
}



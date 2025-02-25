#include <stdint.h>
#include <stdio.h>
#include "led.h"


void delay(uint32_t count)
{
	for(uint32_t i = 0; i < count ; i++);
}

void led_on(int x)
{
	uint32_t *pRCC_AHB1ENR = (uint32_t*) (RCC_BASE_ADDRESS + RCC_AHB1ENR_OFFSET);
	uint32_t *pGPIOA_MODER = (uint32_t*)(GPIOA_BASE_ADDRESS + GPIO_MODER_OFFSET );
	uint32_t *pGPIOA_ODR = (uint32_t*)( GPIOA_BASE_ADDRESS + GPIO_ODR_OFFSET );
	uint32_t *pGPIOA_BSRR = (uint32_t*)( GPIOA_BASE_ADDRESS + GPIO_BSRR_OFFSET );

	*pRCC_AHB1ENR |= 1;
	*pGPIOA_MODER |= (1 << (2*x));
	*pGPIOA_ODR |= ( (0x0000FFFF) & (1 << x ));
	*pGPIOA_BSRR |= ( 1 << x );
}

void led_off(int x)
{
	uint32_t *pGPIOA_ODR = (uint32_t*)( GPIOA_BASE_ADDRESS + GPIO_ODR_OFFSET );
	uint32_t *pGPIOA_BSRR = (uint32_t*)( GPIOA_BASE_ADDRESS + GPIO_BSRR_OFFSET );
	*pGPIOA_ODR |= ( (0x0000FFFF) & ( 1 << x ) );
	*pGPIOA_BSRR |= ( 1 << ( x + 16 ) );
}





int main(void)
{
	while(1)
	{
		led_on(9);
		delay(delay1MS * 500);
		led_off(9);
		delay(delay1MS * 500);
	}
	return 0;
}



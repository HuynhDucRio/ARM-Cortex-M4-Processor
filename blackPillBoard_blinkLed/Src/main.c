#include <stdint.h>
#include "led.h"


void delay( uint32_t count)
{
	for( volatile uint32_t i = 0; i < count ; i++)
	{
		__asm("NOP");
	}
}
void led_init(void)
{
	volatile uint32_t *pRCC_AHB1ENR = (volatile uint32_t*) (RCC_BASE_ADDRESS + RCC_AHB1ENR_OFFSET);
	volatile uint32_t *pGPIOA_MODER = (volatile uint32_t*)(GPIOA_BASE_ADDRESS + GPIO_MODER_OFFSET );
	*pRCC_AHB1ENR |= (1 << 0);
	*pGPIOA_MODER &= ~(3 << (2*9));
	*pGPIOA_MODER |= ( 1 << (2 * 9) );
}
void led_on(int x)
{
	volatile uint32_t *pGPIOA_BSRR = (volatile uint32_t*)( GPIOA_BASE_ADDRESS + GPIO_BSRR_OFFSET );
	*pGPIOA_BSRR = ( 1 << x );
}

void led_off(int x)
{
	volatile uint32_t *pGPIOA_BSRR = (volatile uint32_t*)( GPIOA_BASE_ADDRESS + GPIO_BSRR_OFFSET );
	*pGPIOA_BSRR = ( 1 << ( x + 16 ) );
}

int main(void)
{
	led_init();
	while(1)
	{
		led_on(9);
		delay(delay1MS * 500);
		led_off(9);
		delay(delay1MS * 500);
	}
	return 0;
}



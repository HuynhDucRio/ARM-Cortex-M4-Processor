
#include "led.h"
#include <stdint.h>

void delay(uint32_t count)
{
	for(uint32_t i = 0; i < count ; i++);

}
void led_init(void)
{
	uint32_t *pRCC_AHB1ENR = (uint32_t*) ( RCC_BASE_ADDRESS + RCC_AHB1ENR_OFFSET );
	uint32_t *pGPIOA_MODER = (uint32_t*)( GPIOA_BASE_ADDRESS + GPIO_MODER_OFFSET );
	*pRCC_AHB1ENR |= 1;
	*pGPIOA_MODER |= ( 1 << ( 2 * 10 ) );
	*pGPIOA_MODER |= ( 1 << ( 2 * 9 ) );
	*pGPIOA_MODER |= ( 1 << ( 2 * 8 ) );
	*pGPIOA_MODER |= ( 1 << ( 2 * 5 ) );
}
void led_on(int x)
{
	uint32_t *pGPIOA_BSRR = (uint32_t*)( GPIOA_BASE_ADDRESS + GPIO_BSRR_OFFSET );
	*pGPIOA_BSRR = ( 1 << x );

}

void led_off(int x)
{
	uint32_t *pGPIOA_BSRR = (uint32_t*)( GPIOA_BASE_ADDRESS + GPIO_BSRR_OFFSET );
	*pGPIOA_BSRR = ( 1 << ( x + 16 ) );

}

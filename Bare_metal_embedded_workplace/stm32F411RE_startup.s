	.cpu arm7tdmi
	.arch armv4t
	.fpu softvfp
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 1
	.eabi_attribute 30, 6
	.eabi_attribute 34, 0
	.eabi_attribute 18, 4
	.file	"stm32F411RE_startup.c"
	.text
	.align	2
	.global	Default_Handler
	.syntax unified
	.arm
	.type	Default_Handler, %function
Default_Handler:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 1, uses_anonymous_args = 0
	@ link register save eliminated.
	str	fp, [sp, #-4]!
	add	fp, sp, #0
.L2:
	b	.L2
	.size	Default_Handler, .-Default_Handler
	.weak	SPI5_IRQHandler
	.set	SPI5_IRQHandler,Default_Handler
	.weak	SPI4_IRQHandler
	.set	SPI4_IRQHandler,Default_Handler
	.weak	FPU_IRQHandler
	.set	FPU_IRQHandler,Default_Handler
	.weak	I2C3_ER_IRQHandler
	.set	I2C3_ER_IRQHandler,Default_Handler
	.weak	I2C3_EV_IRQHandler
	.set	I2C3_EV_IRQHandler,Default_Handler
	.weak	USART6_IRQHandler
	.set	USART6_IRQHandler,Default_Handler
	.weak	DMA2_Stream7_IRQHandler
	.set	DMA2_Stream7_IRQHandler,Default_Handler
	.weak	DMA2_Stream6_IRQHandler
	.set	DMA2_Stream6_IRQHandler,Default_Handler
	.weak	DMA2_Stream5_IRQHandler
	.set	DMA2_Stream5_IRQHandler,Default_Handler
	.weak	OTG_FS_IRQHandler
	.set	OTG_FS_IRQHandler,Default_Handler
	.weak	DMA2_Stream4_IRQHandler
	.set	DMA2_Stream4_IRQHandler,Default_Handler
	.weak	DMA2_Stream3_IRQHandler
	.set	DMA2_Stream3_IRQHandler,Default_Handler
	.weak	DMA2_Stream2_IRQHandler
	.set	DMA2_Stream2_IRQHandler,Default_Handler
	.weak	DMA2_Stream1_IRQHandler
	.set	DMA2_Stream1_IRQHandler,Default_Handler
	.weak	DMA2_Stream0_IRQHandler
	.set	DMA2_Stream0_IRQHandler,Default_Handler
	.weak	SPI3_IRQHandler
	.set	SPI3_IRQHandler,Default_Handler
	.weak	TIM5_IRQHandler
	.set	TIM5_IRQHandler,Default_Handler
	.weak	SDIO_IRQHandler
	.set	SDIO_IRQHandler,Default_Handler
	.weak	DMA1_Stream7_IRQHandler
	.set	DMA1_Stream7_IRQHandler,Default_Handler
	.weak	OTG_FS_WKUP_IRQHandler
	.set	OTG_FS_WKUP_IRQHandler,Default_Handler
	.weak	RTC_Alarm_IRQHandler
	.set	RTC_Alarm_IRQHandler,Default_Handler
	.weak	EXTI15_10_IRQHandler
	.set	EXTI15_10_IRQHandler,Default_Handler
	.weak	USART2_IRQHandler
	.set	USART2_IRQHandler,Default_Handler
	.weak	USART1_IRQHandler
	.set	USART1_IRQHandler,Default_Handler
	.weak	SPI2_IRQHandler
	.set	SPI2_IRQHandler,Default_Handler
	.weak	SPI1_IRQHandler
	.set	SPI1_IRQHandler,Default_Handler
	.weak	I2C2_ER_IRQHandler
	.set	I2C2_ER_IRQHandler,Default_Handler
	.weak	I2C2_EV_IRQHandler
	.set	I2C2_EV_IRQHandler,Default_Handler
	.weak	I2C1_ER_IRQHandler
	.set	I2C1_ER_IRQHandler,Default_Handler
	.weak	I2C1_EV_IRQHandler
	.set	I2C1_EV_IRQHandler,Default_Handler
	.weak	TIM4_IRQHandler
	.set	TIM4_IRQHandler,Default_Handler
	.weak	TIM3_IRQHandler
	.set	TIM3_IRQHandler,Default_Handler
	.weak	TIM2_IRQHandler
	.set	TIM2_IRQHandler,Default_Handler
	.weak	TIM1_CC_IRQHandler
	.set	TIM1_CC_IRQHandler,Default_Handler
	.weak	TIM1_TRG_COM_TIM11_IRQHandler
	.set	TIM1_TRG_COM_TIM11_IRQHandler,Default_Handler
	.weak	TIM1_UP_TIM10_IRQHandler
	.set	TIM1_UP_TIM10_IRQHandler,Default_Handler
	.weak	TIM1_BRK_TIM9_IRQHandler
	.set	TIM1_BRK_TIM9_IRQHandler,Default_Handler
	.weak	EXTI9_5_IRQHandler
	.set	EXTI9_5_IRQHandler,Default_Handler
	.weak	ADC_IRQHandler
	.set	ADC_IRQHandler,Default_Handler
	.weak	DMA1_Stream6_IRQHandler
	.set	DMA1_Stream6_IRQHandler,Default_Handler
	.weak	DMA1_Stream5_IRQHandler
	.set	DMA1_Stream5_IRQHandler,Default_Handler
	.weak	DMA1_Stream4_IRQHandler
	.set	DMA1_Stream4_IRQHandler,Default_Handler
	.weak	DMA1_Stream3_IRQHandler
	.set	DMA1_Stream3_IRQHandler,Default_Handler
	.weak	DMA1_Stream2_IRQHandler
	.set	DMA1_Stream2_IRQHandler,Default_Handler
	.weak	DMA1_Stream1_IRQHandler
	.set	DMA1_Stream1_IRQHandler,Default_Handler
	.weak	DMA1_Stream0_IRQHandler
	.set	DMA1_Stream0_IRQHandler,Default_Handler
	.weak	EXTI4_IRQHandler
	.set	EXTI4_IRQHandler,Default_Handler
	.weak	EXTI3_IRQHandler
	.set	EXTI3_IRQHandler,Default_Handler
	.weak	EXTI2_IRQHandler
	.set	EXTI2_IRQHandler,Default_Handler
	.weak	EXTI1_IRQHandler
	.set	EXTI1_IRQHandler,Default_Handler
	.weak	EXTI0_IRQHandler
	.set	EXTI0_IRQHandler,Default_Handler
	.weak	RCC_IRQHandler
	.set	RCC_IRQHandler,Default_Handler
	.weak	FLASH_IRQHandler
	.set	FLASH_IRQHandler,Default_Handler
	.weak	RTC_WKUP_IRQHandler
	.set	RTC_WKUP_IRQHandler,Default_Handler
	.weak	TAMP_STAMP_IRQHandler
	.set	TAMP_STAMP_IRQHandler,Default_Handler
	.weak	PVD_IRQHandler
	.set	PVD_IRQHandler,Default_Handler
	.weak	WWDG_IRQHandler
	.set	WWDG_IRQHandler,Default_Handler
	.weak	SysTick_Handler
	.set	SysTick_Handler,Default_Handler
	.weak	PendSV_Handler
	.set	PendSV_Handler,Default_Handler
	.weak	DebugMon_Handler
	.set	DebugMon_Handler,Default_Handler
	.weak	SVC_Handler
	.set	SVC_Handler,Default_Handler
	.weak	UsageFault_Handler
	.set	UsageFault_Handler,Default_Handler
	.weak	BusFault_Handler
	.set	BusFault_Handler,Default_Handler
	.weak	MemManage_Handler
	.set	MemManage_Handler,Default_Handler
	.weak	HardFault_Handler
	.set	HardFault_Handler,Default_Handler
	.weak	NMI_Handler
	.set	NMI_Handler,Default_Handler
	.align	2
	.global	Reset_Handler
	.syntax unified
	.arm
	.type	Reset_Handler, %function
Reset_Handler:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 1, uses_anonymous_args = 0
	@ link register save eliminated.
	str	fp, [sp, #-4]!
	add	fp, sp, #0
	nop
	add	sp, fp, #0
	@ sp needed
	ldr	fp, [sp], #4
	bx	lr
	.size	Reset_Handler, .-Reset_Handler
	.ident	"GCC: (GNU Arm Embedded Toolchain 10.3-2021.10) 10.3.1 20210824 (release)"

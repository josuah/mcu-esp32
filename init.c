#include "libc.h"
#include "registers.h"
#include "functions.h"

extern int main(void);
extern char __data_start, __data_end, __data_load_start;
extern char __bss_start, __bss_end, __stack_top;

void
__reset_handler(void)
{
	volatile char *dst, *src = &__data_load_start;

	for (dst = &__data_start; dst < &__data_end; *dst++ = *src++);
	for (dst = &__bss_start; dst < &__bss_end; *dst++ = 0);
	main();
	for (int volatile i = 0 ;; i++);
}

/* so that the debugger can immediately see which fault was triggered */
void __null_handler(void)		{ for (int volatile i = 0;; i++); }

void (*__vectors[])(void) = {
	&__null_handler,		/* 0x #0 MAC_INTR */
	&__null_handler,		/* 0x #1 MAC_NMI */
	&__null_handler,		/* 0x #2 BB_INT */
	&__null_handler,		/* 0x #3 BT_MAC_INT */
	&__null_handler,		/* 0x #4 BT_BB_INT */
	&__null_handler,		/* 0x #5 BT_BB_NMI */
	&__null_handler,		/* 0x #6 RWBT_IRQ */
	&__null_handler,		/* 0x #7 RWBLE_IRQ */
	&__null_handler,		/* 0x #8 RWBT_NMI */
	&__null_handler,		/* 0x #9 RWBLE_NMI */
	&__null_handler,		/* 0x #10 SLC0_INTR */
	&__null_handler,		/* 0x #11 SLC1_INTR */
	&__null_handler,		/* 0x #12 UHCI0_INTR */
	&__null_handler,		/* 0x #13 UHCI1_INTR */
	&__null_handler,		/* 0x #14 TG_T0_LEVEL_INT */
	&__null_handler,		/* 0x #15 TG_T1_LEVEL_INT */
	&__null_handler,		/* 0x #16 TG_WDT_LEVEL_INT */
	&__null_handler,		/* 0x #17 TG_LACT_LEVEL_INT */
	&__null_handler,		/* 0x #18 TG1_T0_LEVEL_INT */
	&__null_handler,		/* 0x #19 TG1_T1_LEVEL_INT */
	&__null_handler,		/* 0x #20 TG1_WDT_LEVEL_INT */
	&__null_handler,		/* 0x #21 TG1_LACT_LEVEL_INT */
	&__null_handler,		/* 0x #22 GPIO_INTERRUPT_PRO/APP */
	&__null_handler,		/* 0x #23 GPIO_INTERRUPT_PRO/APP_NMI */
	&__null_handler,		/* 0x #24 CPU_INTR_FROM_CPU_0 */
	&__null_handler,		/* 0x #25 CPU_INTR_FROM_CPU_1 */
	&__null_handler,		/* 0x #26 CPU_INTR_FROM_CPU_2 */
	&__null_handler,		/* 0x #27 CPU_INTR_FROM_CPU_3 */
	&__null_handler,		/* 0x #28 SPI_INTR_0 */
	&__null_handler,		/* 0x #29 SPI_INTR_1 */
	&__null_handler,		/* 0x #30 SPI_INTR_2 */
	&__null_handler,		/* 0x #31 SPI_INTR_3 */
	&__null_handler,		/* 0x #32 I2S0_INT */
	&__null_handler,		/* 0x #33 I2S1_INT */
	&__null_handler,		/* 0x #34 UART_INTR */
	&__null_handler,		/* 0x #35 UART1_INTR */
	&__null_handler,		/* 0x #36 UART2_INTR */
	&__null_handler,		/* 0x #37 SDIO_HOST_INTERRUPT */
	&__null_handler,		/* 0x #38 EMAC_INT */
	&__null_handler,		/* 0x #39 PWM0_INTR */
	&__null_handler,		/* 0x #40 PWM1_INTR */
	&__null_handler,		/* 0x #41 Reserved */
	&__null_handler,		/* 0x #42 Reserved */
	&__null_handler,		/* 0x #43 LEDC_INT */
	&__null_handler,		/* 0x #44 EFUSE_INT */
	&__null_handler,		/* 0x #45 TWAI_INT */
	&__null_handler,		/* 0x #46 RTC_CORE_INTR */
	&__null_handler,		/* 0x #47 RMT_INTR */
	&__null_handler,		/* 0x #48 PCNT_INTR */
	&__null_handler,		/* 0x #49 I2C_EXT0_INTR */
	&__null_handler,		/* 0x #50 I2C_EXT1_INTR */
	&__null_handler,		/* 0x #51 RSA_INTR */
	&__null_handler,		/* 0x #52 SPI1_DMA_INT */
};

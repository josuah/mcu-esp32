#ifndef REGISTERS_H
#define REGISTERS_H


#define AES ((struct mcu_aes *)0x3FF01000)

struct mcu_aes {

	/* 0x00:  */
	uint32_t volatile START;
	/* Write 1 to start the AES operation. */
#define AES_START_START						0u

	/* 0x04:  */
	uint32_t volatile IDLE;
	/* AES Idle register. */
#define AES_IDLE_IDLE						0u

	/* 0x08:  */
	uint32_t volatile MODE;
	/* Selects the AES accelerator mode of operation. */
#define AES_MODE_MODE_Msb					0u
#define AES_MODE_MODE_Lsb					7u

	/* 0x10:  */
	uint32_t volatile KEY_%S;
	/* AES key material register. */
#define AES_KEY_%S_KEY_Msb					0u
#define AES_KEY_%S_KEY_Lsb					7u

	/* 0x30:  */
	uint32_t volatile TEXT_%S;
	/* Plaintext and ciphertext register. */
#define AES_TEXT_%S_TEXT_Msb					0u
#define AES_TEXT_%S_TEXT_Lsb					7u

	/* 0x40:  */
	uint32_t volatile ENDIAN;
	/* Endianness selection register. */
#define AES_ENDIAN_ENDIAN_Msb					0u
#define AES_ENDIAN_ENDIAN_Lsb					1u

};


#define APB_CTRL ((struct mcu_apb_ctrl *)0x3FF66000)

struct mcu_apb_ctrl {

	/* 0x00:  */
	uint32_t volatile SYSCLK_CONF;
	/*  */
#define APB_CTRL_SYSCLK_CONF_PRE_DIV_CNT_Msb			0u
#define APB_CTRL_SYSCLK_CONF_PRE_DIV_CNT_Lsb			9u
	/*  */
#define APB_CTRL_SYSCLK_CONF_CLK_320M_EN			10u
	/*  */
#define APB_CTRL_SYSCLK_CONF_CLK_EN				11u
	/*  */
#define APB_CTRL_SYSCLK_CONF_RST_TICK_CNT			12u
	/*  */
#define APB_CTRL_SYSCLK_CONF_QUICK_CLK_CHNG			13u

	/* 0x04:  */
	uint32_t volatile XTAL_TICK_CONF;
	/*  */
#define APB_CTRL_XTAL_TICK_CONF_XTAL_TICK_NUM_Msb		0u
#define APB_CTRL_XTAL_TICK_CONF_XTAL_TICK_NUM_Lsb		7u

	/* 0x08:  */
	uint32_t volatile PLL_TICK_CONF;
	/*  */
#define APB_CTRL_PLL_TICK_CONF_PLL_TICK_NUM_Msb			0u
#define APB_CTRL_PLL_TICK_CONF_PLL_TICK_NUM_Lsb			7u

	/* 0x0C:  */
	uint32_t volatile CK8M_TICK_CONF;
	/*  */
#define APB_CTRL_CK8M_TICK_CONF_CK8M_TICK_NUM_Msb		0u
#define APB_CTRL_CK8M_TICK_CONF_CK8M_TICK_NUM_Lsb		7u

	/* 0x10:  */
	uint32_t volatile APB_SARADC_CTRL;
	/*  */
#define APB_CTRL_APB_SARADC_CTRL_SARADC_START_FORCE		0u
	/*  */
#define APB_CTRL_APB_SARADC_CTRL_SARADC_START			1u
	/* 1: SAR ADC2 is controlled by DIG ADC2 CTRL  0: SAR ADC2 is controlled by PWDET CTRL */
#define APB_CTRL_APB_SARADC_CTRL_SARADC_SAR2_MUX		2u
	/* 0: single mode  1: double mode  2: alternate mode */
#define APB_CTRL_APB_SARADC_CTRL_SARADC_WORK_MODE_Msb		3u
#define APB_CTRL_APB_SARADC_CTRL_SARADC_WORK_MODE_Lsb		4u
	/* 0: SAR1  1: SAR2  only work for single SAR mode */
#define APB_CTRL_APB_SARADC_CTRL_SARADC_SAR_SEL			5u
	/*  */
#define APB_CTRL_APB_SARADC_CTRL_SARADC_SAR_CLK_GATED		6u
	/* SAR clock divider */
#define APB_CTRL_APB_SARADC_CTRL_SARADC_SAR_CLK_DIV_Msb		7u
#define APB_CTRL_APB_SARADC_CTRL_SARADC_SAR_CLK_DIV_Lsb		14u
	/* 0 ~ 15 means length 1 ~ 16 */
#define APB_CTRL_APB_SARADC_CTRL_SARADC_SAR1_PATT_LEN_Msb	15u
#define APB_CTRL_APB_SARADC_CTRL_SARADC_SAR1_PATT_LEN_Lsb	18u
	/* 0 ~ 15 means length 1 ~ 16 */
#define APB_CTRL_APB_SARADC_CTRL_SARADC_SAR2_PATT_LEN_Msb	19u
#define APB_CTRL_APB_SARADC_CTRL_SARADC_SAR2_PATT_LEN_Lsb	22u
	/* clear the pointer of pattern table for DIG ADC1 CTRL */
#define APB_CTRL_APB_SARADC_CTRL_SARADC_SAR1_PATT_P_CLEAR	23u
	/* clear the pointer of pattern table for DIG ADC2 CTRL */
#define APB_CTRL_APB_SARADC_CTRL_SARADC_SAR2_PATT_P_CLEAR	24u
	/* 1: sar_sel will be coded by the MSB of the 16-bit output data  in this case the resolution should not be larger than 11 bits. */
#define APB_CTRL_APB_SARADC_CTRL_SARADC_DATA_SAR_SEL		25u
	/* 1: I2S input data is from SAR ADC (for DMA)  0: I2S input data is from GPIO matrix */
#define APB_CTRL_APB_SARADC_CTRL_SARADC_DATA_TO_I2S		26u

	/* 0x14:  */
	uint32_t volatile APB_SARADC_CTRL2;
	/*  */
#define APB_CTRL_APB_SARADC_CTRL2_SARADC_MEAS_NUM_LIMIT		0u
	/* max conversion number */
#define APB_CTRL_APB_SARADC_CTRL2_SARADC_MAX_MEAS_NUM_Msb	1u
#define APB_CTRL_APB_SARADC_CTRL2_SARADC_MAX_MEAS_NUM_Lsb	8u
	/* 1: data to DIG ADC1 CTRL is inverted  otherwise not */
#define APB_CTRL_APB_SARADC_CTRL2_SARADC_SAR1_INV		9u
	/* 1: data to DIG ADC2 CTRL is inverted  otherwise not */
#define APB_CTRL_APB_SARADC_CTRL2_SARADC_SAR2_INV		10u

	/* 0x18:  */
	uint32_t volatile APB_SARADC_FSM;
	/*  */
#define APB_CTRL_APB_SARADC_FSM_SARADC_RSTB_WAIT_Msb		0u
#define APB_CTRL_APB_SARADC_FSM_SARADC_RSTB_WAIT_Lsb		7u
	/*  */
#define APB_CTRL_APB_SARADC_FSM_SARADC_STANDBY_WAIT_Msb		8u
#define APB_CTRL_APB_SARADC_FSM_SARADC_STANDBY_WAIT_Lsb		15u
	/*  */
#define APB_CTRL_APB_SARADC_FSM_SARADC_START_WAIT_Msb		16u
#define APB_CTRL_APB_SARADC_FSM_SARADC_START_WAIT_Lsb		23u
	/* sample cycles */
#define APB_CTRL_APB_SARADC_FSM_SARADC_SAMPLE_CYCLE_Msb		24u
#define APB_CTRL_APB_SARADC_FSM_SARADC_SAMPLE_CYCLE_Lsb		31u

	/* 0x1C:  */
	uint32_t volatile APB_SARADC_SAR1_PATT_TAB1;
	/* item 0 ~ 3 for pattern table 1 (each item one byte) */
#define APB_CTRL_APB_SARADC_SAR1_PATT_TAB1_SARADC_SAR1_PATT_TAB1_Msb	0u
#define APB_CTRL_APB_SARADC_SAR1_PATT_TAB1_SARADC_SAR1_PATT_TAB1_Lsb	31u

	/* 0x20:  */
	uint32_t volatile APB_SARADC_SAR1_PATT_TAB2;
	/* Item 4 ~ 7 for pattern table 1 (each item one byte) */
#define APB_CTRL_APB_SARADC_SAR1_PATT_TAB2_SARADC_SAR1_PATT_TAB2_Msb	0u
#define APB_CTRL_APB_SARADC_SAR1_PATT_TAB2_SARADC_SAR1_PATT_TAB2_Lsb	31u

	/* 0x24:  */
	uint32_t volatile APB_SARADC_SAR1_PATT_TAB3;
	/* Item 8 ~ 11 for pattern table 1 (each item one byte) */
#define APB_CTRL_APB_SARADC_SAR1_PATT_TAB3_SARADC_SAR1_PATT_TAB3_Msb	0u
#define APB_CTRL_APB_SARADC_SAR1_PATT_TAB3_SARADC_SAR1_PATT_TAB3_Lsb	31u

	/* 0x28:  */
	uint32_t volatile APB_SARADC_SAR1_PATT_TAB4;
	/* Item 12 ~ 15 for pattern table 1 (each item one byte) */
#define APB_CTRL_APB_SARADC_SAR1_PATT_TAB4_SARADC_SAR1_PATT_TAB4_Msb	0u
#define APB_CTRL_APB_SARADC_SAR1_PATT_TAB4_SARADC_SAR1_PATT_TAB4_Lsb	31u

	/* 0x2C:  */
	uint32_t volatile APB_SARADC_SAR2_PATT_TAB1;
	/* item 0 ~ 3 for pattern table 2 (each item one byte) */
#define APB_CTRL_APB_SARADC_SAR2_PATT_TAB1_SARADC_SAR2_PATT_TAB1_Msb	0u
#define APB_CTRL_APB_SARADC_SAR2_PATT_TAB1_SARADC_SAR2_PATT_TAB1_Lsb	31u

	/* 0x30:  */
	uint32_t volatile APB_SARADC_SAR2_PATT_TAB2;
	/* Item 4 ~ 7 for pattern table 2 (each item one byte) */
#define APB_CTRL_APB_SARADC_SAR2_PATT_TAB2_SARADC_SAR2_PATT_TAB2_Msb	0u
#define APB_CTRL_APB_SARADC_SAR2_PATT_TAB2_SARADC_SAR2_PATT_TAB2_Lsb	31u

	/* 0x34:  */
	uint32_t volatile APB_SARADC_SAR2_PATT_TAB3;
	/* Item 8 ~ 11 for pattern table 2 (each item one byte) */
#define APB_CTRL_APB_SARADC_SAR2_PATT_TAB3_SARADC_SAR2_PATT_TAB3_Msb	0u
#define APB_CTRL_APB_SARADC_SAR2_PATT_TAB3_SARADC_SAR2_PATT_TAB3_Lsb	31u

	/* 0x38:  */
	uint32_t volatile APB_SARADC_SAR2_PATT_TAB4;
	/* Item 12 ~ 15 for pattern table 2 (each item one byte) */
#define APB_CTRL_APB_SARADC_SAR2_PATT_TAB4_SARADC_SAR2_PATT_TAB4_Msb	0u
#define APB_CTRL_APB_SARADC_SAR2_PATT_TAB4_SARADC_SAR2_PATT_TAB4_Lsb	31u

	/* 0x3C:  */
	uint32_t volatile APLL_TICK_CONF;
	/*  */
#define APB_CTRL_APLL_TICK_CONF_APLL_TICK_NUM_Msb		0u
#define APB_CTRL_APLL_TICK_CONF_APLL_TICK_NUM_Lsb		7u

	/* 0x5C */
	uint8_t RESERVED0[0x7C-0x5C];

	/* 0x7C:  */
	uint32_t volatile DATE;
	/*  */
#define APB_CTRL_DATE_DATE_Msb					0u
#define APB_CTRL_DATE_DATE_Lsb					31u

};


#define BB ((struct mcu_bb *)0x3FF5D000)

struct mcu_bb {

	/* 0x54: Baseband control register */
	uint32_t volatile BBPD_CTRL;
	/*  */
#define BB_BBPD_CTRL_DC_EST_FORCE_PD				0u
	/*  */
#define BB_BBPD_CTRL_DC_EST_FORCE_PU				1u
	/*  */
#define BB_BBPD_CTRL_FFT_FORCE_PD				2u
	/*  */
#define BB_BBPD_CTRL_FFT_FORCE_PU				3u

};


#define DPORT ((struct mcu_dport *)0x3FF00000)

struct mcu_dport {

	/* 0x00:  */
	uint32_t volatile PRO_BOOT_REMAP_CTRL;
	/*  */
#define DPORT_PRO_BOOT_REMAP_CTRL_PRO_BOOT_REMAP		0u

	/* 0x04:  */
	uint32_t volatile APP_BOOT_REMAP_CTRL;
	/*  */
#define DPORT_APP_BOOT_REMAP_CTRL_APP_BOOT_REMAP		0u

	/* 0x08:  */
	uint32_t volatile ACCESS_CHECK;
	/*  */
#define DPORT_ACCESS_CHECK_PRO					0u
	/*  */
#define DPORT_ACCESS_CHECK_APP					8u

	/* 0x0C:  */
	uint32_t volatile PRO_DPORT_APB_MASK0;
	/*  */
#define DPORT_PRO_DPORT_APB_MASK0_PRODPORT_APB_MASK0_Msb	0u
#define DPORT_PRO_DPORT_APB_MASK0_PRODPORT_APB_MASK0_Lsb	31u

	/* 0x10:  */
	uint32_t volatile PRO_DPORT_APB_MASK1;
	/*  */
#define DPORT_PRO_DPORT_APB_MASK1_PRODPORT_APB_MASK1_Msb	0u
#define DPORT_PRO_DPORT_APB_MASK1_PRODPORT_APB_MASK1_Lsb	31u

	/* 0x14:  */
	uint32_t volatile APP_DPORT_APB_MASK0;
	/*  */
#define DPORT_APP_DPORT_APB_MASK0_APPDPORT_APB_MASK0_Msb	0u
#define DPORT_APP_DPORT_APB_MASK0_APPDPORT_APB_MASK0_Lsb	31u

	/* 0x18:  */
	uint32_t volatile APP_DPORT_APB_MASK1;
	/*  */
#define DPORT_APP_DPORT_APB_MASK1_APPDPORT_APB_MASK1_Msb	0u
#define DPORT_APP_DPORT_APB_MASK1_APPDPORT_APB_MASK1_Lsb	31u

	/* 0x1C:  */
	uint32_t volatile PERI_CLK_EN;
	/*  */
#define DPORT_PERI_CLK_EN_PERI_CLK_EN_Msb			0u
#define DPORT_PERI_CLK_EN_PERI_CLK_EN_Lsb			31u

	/* 0x20:  */
	uint32_t volatile PERI_RST_EN;
	/*  */
#define DPORT_PERI_RST_EN_PERI_RST_EN_Msb			0u
#define DPORT_PERI_RST_EN_PERI_RST_EN_Lsb			31u

	/* 0x24:  */
	uint32_t volatile WIFI_BB_CFG;
	/*  */
#define DPORT_WIFI_BB_CFG_WIFI_BB_CFG_Msb			0u
#define DPORT_WIFI_BB_CFG_WIFI_BB_CFG_Lsb			31u

	/* 0x28:  */
	uint32_t volatile WIFI_BB_CFG_2;
	/*  */
#define DPORT_WIFI_BB_CFG_2_WIFI_BB_CFG_2_Msb			0u
#define DPORT_WIFI_BB_CFG_2_WIFI_BB_CFG_2_Lsb			31u

	/* 0x2C:  */
	uint32_t volatile APPCPU_CTRL_A;
	/*  */
#define DPORT_APPCPU_CTRL_A_APPCPU_RESETTING			0u

	/* 0x30:  */
	uint32_t volatile APPCPU_CTRL_B;
	/*  */
#define DPORT_APPCPU_CTRL_B_APPCPU_CLKGATE_EN			0u

	/* 0x34:  */
	uint32_t volatile APPCPU_CTRL_C;
	/*  */
#define DPORT_APPCPU_CTRL_C_APPCPU_RUNSTALL			0u

	/* 0x38:  */
	uint32_t volatile APPCPU_CTRL_D;
	/*  */
#define DPORT_APPCPU_CTRL_D_APPCPU_BOOT_ADDR_Msb		0u
#define DPORT_APPCPU_CTRL_D_APPCPU_BOOT_ADDR_Lsb		31u

	/* 0x3C:  */
	uint32_t volatile CPU_PER_CONF;
	/*  */
#define DPORT_CPU_PER_CONF_CPUPERIOD_SEL_Msb			0u
#define DPORT_CPU_PER_CONF_CPUPERIOD_SEL_Lsb			1u
	/*  */
#define DPORT_CPU_PER_CONF_LOWSPEED_CLK_SEL			2u
	/*  */
#define DPORT_CPU_PER_CONF_FAST_CLK_RTC_SEL			3u

	/* 0x40:  */
	uint32_t volatile PRO_CACHE_CTRL;
	/*  */
#define DPORT_PRO_CACHE_CTRL_PRO_CACHE_MODE			2u
	/*  */
#define DPORT_PRO_CACHE_CTRL_PRO_CACHE_ENABLE			3u
	/*  */
#define DPORT_PRO_CACHE_CTRL_PRO_CACHE_FLUSH_ENA		4u
	/*  */
#define DPORT_PRO_CACHE_CTRL_PRO_CACHE_FLUSH_DONE		5u
	/*  */
#define DPORT_PRO_CACHE_CTRL_PRO_CACHE_LOCK_0_EN		6u
	/*  */
#define DPORT_PRO_CACHE_CTRL_PRO_CACHE_LOCK_1_EN		7u
	/*  */
#define DPORT_PRO_CACHE_CTRL_PRO_CACHE_LOCK_2_EN		8u
	/*  */
#define DPORT_PRO_CACHE_CTRL_PRO_CACHE_LOCK_3_EN		9u
	/*  */
#define DPORT_PRO_CACHE_CTRL_PRO_SINGLE_IRAM_ENA		10u
	/*  */
#define DPORT_PRO_CACHE_CTRL_PRO_DRAM_SPLIT			11u
	/*  */
#define DPORT_PRO_CACHE_CTRL_PRO_AHB_SPI_REQ			12u
	/*  */
#define DPORT_PRO_CACHE_CTRL_PRO_SLAVE_REQ			13u
	/*  */
#define DPORT_PRO_CACHE_CTRL_AHB_SPI_REQ			14u
	/*  */
#define DPORT_PRO_CACHE_CTRL_SLAVE_REQ				15u
	/*  */
#define DPORT_PRO_CACHE_CTRL_PRO_DRAM_HL			16u

	/* 0x44:  */
	uint32_t volatile PRO_CACHE_CTRL1;
	/*  */
#define DPORT_PRO_CACHE_CTRL1_PRO_CACHE_MASK_IRAM0		0u
	/*  */
#define DPORT_PRO_CACHE_CTRL1_PRO_CACHE_MASK_IRAM1		1u
	/*  */
#define DPORT_PRO_CACHE_CTRL1_PRO_CACHE_MASK_IROM0		2u
	/*  */
#define DPORT_PRO_CACHE_CTRL1_PRO_CACHE_MASK_DRAM1		3u
	/*  */
#define DPORT_PRO_CACHE_CTRL1_PRO_CACHE_MASK_DROM0		4u
	/*  */
#define DPORT_PRO_CACHE_CTRL1_PRO_CACHE_MASK_OPSDRAM		5u
	/*  */
#define DPORT_PRO_CACHE_CTRL1_PRO_CMMU_SRAM_PAGE_MODE_Msb	6u
#define DPORT_PRO_CACHE_CTRL1_PRO_CMMU_SRAM_PAGE_MODE_Lsb	8u
	/*  */
#define DPORT_PRO_CACHE_CTRL1_PRO_CMMU_FLASH_PAGE_MODE_Msb	9u
#define DPORT_PRO_CACHE_CTRL1_PRO_CMMU_FLASH_PAGE_MODE_Lsb	10u
	/*  */
#define DPORT_PRO_CACHE_CTRL1_PRO_CMMU_FORCE_ON			11u
	/*  */
#define DPORT_PRO_CACHE_CTRL1_PRO_CMMU_PD			12u
	/*  */
#define DPORT_PRO_CACHE_CTRL1_PRO_CACHE_MMU_IA_CLR		13u

	/* 0x48:  */
	uint32_t volatile PRO_CACHE_LOCK_0_ADDR;
	/*  */
#define DPORT_PRO_CACHE_LOCK_0_ADDR_PRE_Msb			0u
#define DPORT_PRO_CACHE_LOCK_0_ADDR_PRE_Lsb			13u
	/*  */
#define DPORT_PRO_CACHE_LOCK_0_ADDR_MIN_Msb			14u
#define DPORT_PRO_CACHE_LOCK_0_ADDR_MIN_Lsb			17u
	/*  */
#define DPORT_PRO_CACHE_LOCK_0_ADDR_MAX_Msb			18u
#define DPORT_PRO_CACHE_LOCK_0_ADDR_MAX_Lsb			21u

	/* 0x4C:  */
	uint32_t volatile PRO_CACHE_LOCK_1_ADDR;
	/*  */
#define DPORT_PRO_CACHE_LOCK_1_ADDR_PRE_Msb			0u
#define DPORT_PRO_CACHE_LOCK_1_ADDR_PRE_Lsb			13u
	/*  */
#define DPORT_PRO_CACHE_LOCK_1_ADDR_MIN_Msb			14u
#define DPORT_PRO_CACHE_LOCK_1_ADDR_MIN_Lsb			17u
	/*  */
#define DPORT_PRO_CACHE_LOCK_1_ADDR_MAX_Msb			18u
#define DPORT_PRO_CACHE_LOCK_1_ADDR_MAX_Lsb			21u

	/* 0x50:  */
	uint32_t volatile PRO_CACHE_LOCK_2_ADDR;
	/*  */
#define DPORT_PRO_CACHE_LOCK_2_ADDR_PRE_Msb			0u
#define DPORT_PRO_CACHE_LOCK_2_ADDR_PRE_Lsb			13u
	/*  */
#define DPORT_PRO_CACHE_LOCK_2_ADDR_MIN_Msb			14u
#define DPORT_PRO_CACHE_LOCK_2_ADDR_MIN_Lsb			17u
	/*  */
#define DPORT_PRO_CACHE_LOCK_2_ADDR_MAX_Msb			18u
#define DPORT_PRO_CACHE_LOCK_2_ADDR_MAX_Lsb			21u

	/* 0x54:  */
	uint32_t volatile PRO_CACHE_LOCK_3_ADDR;
	/*  */
#define DPORT_PRO_CACHE_LOCK_3_ADDR_PRE_Msb			0u
#define DPORT_PRO_CACHE_LOCK_3_ADDR_PRE_Lsb			13u
	/*  */
#define DPORT_PRO_CACHE_LOCK_3_ADDR_MIN_Msb			14u
#define DPORT_PRO_CACHE_LOCK_3_ADDR_MIN_Lsb			17u
	/*  */
#define DPORT_PRO_CACHE_LOCK_3_ADDR_MAX_Msb			18u
#define DPORT_PRO_CACHE_LOCK_3_ADDR_MAX_Lsb			21u

	/* 0x58:  */
	uint32_t volatile APP_CACHE_CTRL;
	/*  */
#define DPORT_APP_CACHE_CTRL_APP_CACHE_MODE			2u
	/*  */
#define DPORT_APP_CACHE_CTRL_APP_CACHE_ENABLE			3u
	/*  */
#define DPORT_APP_CACHE_CTRL_APP_CACHE_FLUSH_ENA		4u
	/*  */
#define DPORT_APP_CACHE_CTRL_APP_CACHE_FLUSH_DONE		5u
	/*  */
#define DPORT_APP_CACHE_CTRL_APP_CACHE_LOCK_0_EN		6u
	/*  */
#define DPORT_APP_CACHE_CTRL_APP_CACHE_LOCK_1_EN		7u
	/*  */
#define DPORT_APP_CACHE_CTRL_APP_CACHE_LOCK_2_EN		8u
	/*  */
#define DPORT_APP_CACHE_CTRL_APP_CACHE_LOCK_3_EN		9u
	/*  */
#define DPORT_APP_CACHE_CTRL_APP_SINGLE_IRAM_ENA		10u
	/*  */
#define DPORT_APP_CACHE_CTRL_APP_DRAM_SPLIT			11u
	/*  */
#define DPORT_APP_CACHE_CTRL_APP_AHB_SPI_REQ			12u
	/*  */
#define DPORT_APP_CACHE_CTRL_APP_SLAVE_REQ			13u
	/*  */
#define DPORT_APP_CACHE_CTRL_APP_DRAM_HL			14u

	/* 0x5C:  */
	uint32_t volatile APP_CACHE_CTRL1;
	/*  */
#define DPORT_APP_CACHE_CTRL1_APP_CACHE_MASK_IRAM0		0u
	/*  */
#define DPORT_APP_CACHE_CTRL1_APP_CACHE_MASK_IRAM1		1u
	/*  */
#define DPORT_APP_CACHE_CTRL1_APP_CACHE_MASK_IROM0		2u
	/*  */
#define DPORT_APP_CACHE_CTRL1_APP_CACHE_MASK_DRAM1		3u
	/*  */
#define DPORT_APP_CACHE_CTRL1_APP_CACHE_MASK_DROM0		4u
	/*  */
#define DPORT_APP_CACHE_CTRL1_APP_CACHE_MASK_OPSDRAM		5u
	/*  */
#define DPORT_APP_CACHE_CTRL1_APP_CMMU_SRAM_PAGE_MODE_Msb	6u
#define DPORT_APP_CACHE_CTRL1_APP_CMMU_SRAM_PAGE_MODE_Lsb	8u
	/*  */
#define DPORT_APP_CACHE_CTRL1_APP_CMMU_FLASH_PAGE_MODE_Msb	9u
#define DPORT_APP_CACHE_CTRL1_APP_CMMU_FLASH_PAGE_MODE_Lsb	10u
	/*  */
#define DPORT_APP_CACHE_CTRL1_APP_CMMU_FORCE_ON			11u
	/*  */
#define DPORT_APP_CACHE_CTRL1_APP_CMMU_PD			12u
	/*  */
#define DPORT_APP_CACHE_CTRL1_APP_CACHE_MMU_IA_CLR		13u

	/* 0x60:  */
	uint32_t volatile APP_CACHE_LOCK_0_ADDR;
	/*  */
#define DPORT_APP_CACHE_LOCK_0_ADDR_PRE_Msb			0u
#define DPORT_APP_CACHE_LOCK_0_ADDR_PRE_Lsb			13u
	/*  */
#define DPORT_APP_CACHE_LOCK_0_ADDR_MIN_Msb			14u
#define DPORT_APP_CACHE_LOCK_0_ADDR_MIN_Lsb			17u
	/*  */
#define DPORT_APP_CACHE_LOCK_0_ADDR_MAX_Msb			18u
#define DPORT_APP_CACHE_LOCK_0_ADDR_MAX_Lsb			21u

	/* 0x64:  */
	uint32_t volatile APP_CACHE_LOCK_1_ADDR;
	/*  */
#define DPORT_APP_CACHE_LOCK_1_ADDR_PRE_Msb			0u
#define DPORT_APP_CACHE_LOCK_1_ADDR_PRE_Lsb			13u
	/*  */
#define DPORT_APP_CACHE_LOCK_1_ADDR_MIN_Msb			14u
#define DPORT_APP_CACHE_LOCK_1_ADDR_MIN_Lsb			17u
	/*  */
#define DPORT_APP_CACHE_LOCK_1_ADDR_MAX_Msb			18u
#define DPORT_APP_CACHE_LOCK_1_ADDR_MAX_Lsb			21u

	/* 0x68:  */
	uint32_t volatile APP_CACHE_LOCK_2_ADDR;
	/*  */
#define DPORT_APP_CACHE_LOCK_2_ADDR_PRE_Msb			0u
#define DPORT_APP_CACHE_LOCK_2_ADDR_PRE_Lsb			13u
	/*  */
#define DPORT_APP_CACHE_LOCK_2_ADDR_MIN_Msb			14u
#define DPORT_APP_CACHE_LOCK_2_ADDR_MIN_Lsb			17u
	/*  */
#define DPORT_APP_CACHE_LOCK_2_ADDR_MAX_Msb			18u
#define DPORT_APP_CACHE_LOCK_2_ADDR_MAX_Lsb			21u

	/* 0x6C:  */
	uint32_t volatile APP_CACHE_LOCK_3_ADDR;
	/*  */
#define DPORT_APP_CACHE_LOCK_3_ADDR_PRE_Msb			0u
#define DPORT_APP_CACHE_LOCK_3_ADDR_PRE_Lsb			13u
	/*  */
#define DPORT_APP_CACHE_LOCK_3_ADDR_MIN_Msb			14u
#define DPORT_APP_CACHE_LOCK_3_ADDR_MIN_Lsb			17u
	/*  */
#define DPORT_APP_CACHE_LOCK_3_ADDR_MAX_Msb			18u
#define DPORT_APP_CACHE_LOCK_3_ADDR_MAX_Lsb			21u

	/* 0x70:  */
	uint32_t volatile TRACEMEM_MUX_MODE;
	/*  */
#define DPORT_TRACEMEM_MUX_MODE_TRACEMEM_MUX_MODE_Msb		0u
#define DPORT_TRACEMEM_MUX_MODE_TRACEMEM_MUX_MODE_Lsb		1u

	/* 0x74:  */
	uint32_t volatile PRO_TRACEMEM_ENA;
	/*  */
#define DPORT_PRO_TRACEMEM_ENA_PRO_TRACEMEM_ENA			0u

	/* 0x78:  */
	uint32_t volatile APP_TRACEMEM_ENA;
	/*  */
#define DPORT_APP_TRACEMEM_ENA_APP_TRACEMEM_ENA			0u

	/* 0x7C:  */
	uint32_t volatile CACHE_MUX_MODE;
	/*  */
#define DPORT_CACHE_MUX_MODE_CACHE_MUX_MODE_Msb			0u
#define DPORT_CACHE_MUX_MODE_CACHE_MUX_MODE_Lsb			1u

	/* 0x80:  */
	uint32_t volatile IMMU_PAGE_MODE;
	/*  */
#define DPORT_IMMU_PAGE_MODE_INTERNAL_SRAM_IMMU_ENA		0u
	/*  */
#define DPORT_IMMU_PAGE_MODE_IMMU_PAGE_MODE_Msb			1u
#define DPORT_IMMU_PAGE_MODE_IMMU_PAGE_MODE_Lsb			2u

	/* 0x84:  */
	uint32_t volatile DMMU_PAGE_MODE;
	/*  */
#define DPORT_DMMU_PAGE_MODE_INTERNAL_SRAM_DMMU_ENA		0u
	/*  */
#define DPORT_DMMU_PAGE_MODE_DMMU_PAGE_MODE_Msb			1u
#define DPORT_DMMU_PAGE_MODE_DMMU_PAGE_MODE_Lsb			2u

	/* 0x88:  */
	uint32_t volatile ROM_MPU_ENA;
	/*  */
#define DPORT_ROM_MPU_ENA_SHARE_ROM_MPU_ENA			0u
	/*  */
#define DPORT_ROM_MPU_ENA_PRO_ROM_MPU_ENA			1u
	/*  */
#define DPORT_ROM_MPU_ENA_APP_ROM_MPU_ENA			2u

	/* 0x8C:  */
	uint32_t volatile MEM_PD_MASK;
	/*  */
#define DPORT_MEM_PD_MASK_LSLP_MEM_PD_MASK			0u

	/* 0x90:  */
	uint32_t volatile ROM_PD_CTRL;
	/*  */
#define DPORT_ROM_PD_CTRL_PRO_ROM_PD				0u
	/*  */
#define DPORT_ROM_PD_CTRL_APP_ROM_PD				1u
	/*  */
#define DPORT_ROM_PD_CTRL_SHARE_ROM_PD_Msb			2u
#define DPORT_ROM_PD_CTRL_SHARE_ROM_PD_Lsb			7u

	/* 0x94:  */
	uint32_t volatile ROM_FO_CTRL;
	/*  */
#define DPORT_ROM_FO_CTRL_PRO_ROM_FO				0u
	/*  */
#define DPORT_ROM_FO_CTRL_APP_ROM_FO				1u
	/*  */
#define DPORT_ROM_FO_CTRL_SHARE_ROM_FO_Msb			2u
#define DPORT_ROM_FO_CTRL_SHARE_ROM_FO_Lsb			7u

	/* 0x98:  */
	uint32_t volatile SRAM_PD_CTRL_0;
	/*  */
#define DPORT_SRAM_PD_CTRL_0_SRAM_PD_0_Msb			0u
#define DPORT_SRAM_PD_CTRL_0_SRAM_PD_0_Lsb			31u

	/* 0x9C:  */
	uint32_t volatile SRAM_PD_CTRL_1;
	/*  */
#define DPORT_SRAM_PD_CTRL_1_SRAM_PD_1				0u

	/* 0xA0:  */
	uint32_t volatile SRAM_FO_CTRL_0;
	/*  */
#define DPORT_SRAM_FO_CTRL_0_SRAM_FO_0_Msb			0u
#define DPORT_SRAM_FO_CTRL_0_SRAM_FO_0_Lsb			31u

	/* 0xA4:  */
	uint32_t volatile SRAM_FO_CTRL_1;
	/*  */
#define DPORT_SRAM_FO_CTRL_1_SRAM_FO_1				0u

	/* 0xA8:  */
	uint32_t volatile IRAM_DRAM_AHB_SEL;
	/*  */
#define DPORT_IRAM_DRAM_AHB_SEL_MASK_PRO_IRAM			0u
	/*  */
#define DPORT_IRAM_DRAM_AHB_SEL_MASK_APP_IRAM			1u
	/*  */
#define DPORT_IRAM_DRAM_AHB_SEL_MASK_PRO_DRAM			2u
	/*  */
#define DPORT_IRAM_DRAM_AHB_SEL_MASK_APP_DRAM			3u
	/*  */
#define DPORT_IRAM_DRAM_AHB_SEL_MASK_AHB			4u
	/*  */
#define DPORT_IRAM_DRAM_AHB_SEL_MAC_DUMP_MODE_Msb		5u
#define DPORT_IRAM_DRAM_AHB_SEL_MAC_DUMP_MODE_Lsb		6u

	/* 0xAC:  */
	uint32_t volatile TAG_FO_CTRL;
	/*  */
#define DPORT_TAG_FO_CTRL_PRO_CACHE_TAG_FORCE_ON		0u
	/*  */
#define DPORT_TAG_FO_CTRL_PRO_CACHE_TAG_PD			1u
	/*  */
#define DPORT_TAG_FO_CTRL_APP_CACHE_TAG_FORCE_ON		8u
	/*  */
#define DPORT_TAG_FO_CTRL_APP_CACHE_TAG_PD			9u

	/* 0xB0:  */
	uint32_t volatile AHB_LITE_MASK;
	/*  */
#define DPORT_AHB_LITE_MASK_PRO					0u
	/*  */
#define DPORT_AHB_LITE_MASK_APP					4u
	/*  */
#define DPORT_AHB_LITE_MASK_SDIO				8u
	/*  */
#define DPORT_AHB_LITE_MASK_PRODPORT				9u
	/*  */
#define DPORT_AHB_LITE_MASK_APPDPORT				10u
	/*  */
#define DPORT_AHB_LITE_MASK_AHB_LITE_SDHOST_PID_Msb		11u
#define DPORT_AHB_LITE_MASK_AHB_LITE_SDHOST_PID_Lsb		13u

	/* 0xB4:  */
	uint32_t volatile AHB_MPU_TABLE_0;
	/*  */
#define DPORT_AHB_MPU_TABLE_0_AHB_ACCESS_GRANT_0_Msb		0u
#define DPORT_AHB_MPU_TABLE_0_AHB_ACCESS_GRANT_0_Lsb		31u

	/* 0xB8:  */
	uint32_t volatile AHB_MPU_TABLE_1;
	/*  */
#define DPORT_AHB_MPU_TABLE_1_AHB_ACCESS_GRANT_1_Msb		0u
#define DPORT_AHB_MPU_TABLE_1_AHB_ACCESS_GRANT_1_Lsb		8u

	/* 0xBC:  */
	uint32_t volatile HOST_INF_SEL;
	/*  */
#define DPORT_HOST_INF_SEL_PERI_IO_SWAP_Msb			0u
#define DPORT_HOST_INF_SEL_PERI_IO_SWAP_Lsb			7u
	/*  */
#define DPORT_HOST_INF_SEL_LINK_DEVICE_SEL_Msb			8u
#define DPORT_HOST_INF_SEL_LINK_DEVICE_SEL_Lsb			15u

	/* 0xC0:  */
	uint32_t volatile PERIP_CLK_EN;
	/* SPI0 and SPI1 module. */
#define DPORT_PERIP_CLK_EN_SPI01_CLK_EN				1u
	/* UART0 module. */
#define DPORT_PERIP_CLK_EN_UART_CLK_EN				2u
	/* I2S0 module. */
#define DPORT_PERIP_CLK_EN_I2S0_CLK_EN				4u
	/* UART1 module. */
#define DPORT_PERIP_CLK_EN_UART1_CLK_EN				5u
	/* SPI2 module. */
#define DPORT_PERIP_CLK_EN_SPI2_CLK_EN				6u
	/* I2C0 module. */
#define DPORT_PERIP_CLK_EN_I2C_EXT0_CLK_EN			7u
	/* UDMA0 module. */
#define DPORT_PERIP_CLK_EN_UHCI0_CLK_EN				8u
	/* RMT module. */
#define DPORT_PERIP_CLK_EN_RMT_CLK_EN				9u
	/* PCNT module. */
#define DPORT_PERIP_CLK_EN_PCNT_CLK_EN				10u
	/* LEDC module. */
#define DPORT_PERIP_CLK_EN_LEDC_CLK_EN				11u
	/* UDMA1 module. */
#define DPORT_PERIP_CLK_EN_UHCI1_CLK_EN				12u
	/* TIMG0 module. */
#define DPORT_PERIP_CLK_EN_TIMERGROUP_CLK_EN			13u
	/* eFuse module. */
#define DPORT_PERIP_CLK_EN_EFUSE_CLK_EN				14u
	/* TIMG1 module. */
#define DPORT_PERIP_CLK_EN_TIMERGROUP1_CLK_EN			15u
	/* SPI3 module. */
#define DPORT_PERIP_CLK_EN_SPI3_CLK_EN				16u
	/* PWM0 module. */
#define DPORT_PERIP_CLK_EN_PWM0_CLK_EN				17u
	/* I2C1 module. */
#define DPORT_PERIP_CLK_EN_I2C_EXT1_CLK_EN			18u
	/* TWAI module. */
#define DPORT_PERIP_CLK_EN_TWAI_CLK_EN				19u
	/* PWM1 module. */
#define DPORT_PERIP_CLK_EN_PWM1_CLK_EN				20u
	/* I2S1 module. */
#define DPORT_PERIP_CLK_EN_I2S1_CLK_EN				21u
	/* SPI_DMA module. */
#define DPORT_PERIP_CLK_EN_SPI_DMA_CLK_EN			22u
	/* UART2 module. */
#define DPORT_PERIP_CLK_EN_UART2_CLK_EN				23u
	/* Shared memory of UART0 ~ 2. */
#define DPORT_PERIP_CLK_EN_UART_MEM_CLK_EN			24u

	/* 0xC4:  */
	uint32_t volatile PERIP_RST_EN;
	/* SPI0 and SPI1 module. */
#define DPORT_PERIP_RST_EN_SPI01_RST				1u
	/* UART0 module. */
#define DPORT_PERIP_RST_EN_UART_RST				2u
	/* I2S0 module. */
#define DPORT_PERIP_RST_EN_I2S0_RST				4u
	/* UART1 module. */
#define DPORT_PERIP_RST_EN_UART1_RST				5u
	/* SPI2 module. */
#define DPORT_PERIP_RST_EN_SPI2_RST				6u
	/* I2C0 module. */
#define DPORT_PERIP_RST_EN_I2C_EXT0_RST				7u
	/* UDMA0 module. */
#define DPORT_PERIP_RST_EN_UHCI0_RST				8u
	/* RMT module. */
#define DPORT_PERIP_RST_EN_RMT_RST				9u
	/* PCNT module. */
#define DPORT_PERIP_RST_EN_PCNT_RST				10u
	/* LEDC module. */
#define DPORT_PERIP_RST_EN_LEDC_RST				11u
	/* UDMA1 module. */
#define DPORT_PERIP_RST_EN_UHCI1_RST				12u
	/* TIMG0 module. */
#define DPORT_PERIP_RST_EN_TIMERGROUP_RST			13u
	/* eFuse module. */
#define DPORT_PERIP_RST_EN_EFUSE_RST				14u
	/* TIMG1 module. */
#define DPORT_PERIP_RST_EN_TIMERGROUP1_RST			15u
	/* SPI3 module. */
#define DPORT_PERIP_RST_EN_SPI3_RST				16u
	/* PWM0 module. */
#define DPORT_PERIP_RST_EN_PWM0_RST				17u
	/* I2C1 module. */
#define DPORT_PERIP_RST_EN_I2C_EXT1_RST				18u
	/* TWAI module. */
#define DPORT_PERIP_RST_EN_TWAI_RST				19u
	/* PWM1 module. */
#define DPORT_PERIP_RST_EN_PWM1_RST				20u
	/* I2S1 module. */
#define DPORT_PERIP_RST_EN_I2S1_RST				21u
	/* SPI_DMA module. */
#define DPORT_PERIP_RST_EN_SPI_DMA_RST				22u
	/* UART2 module. */
#define DPORT_PERIP_RST_EN_UART2_RST				23u
	/* Shared memory of UART0 ~ 2. */
#define DPORT_PERIP_RST_EN_UART_MEM_RST				24u

	/* 0xC8:  */
	uint32_t volatile SLAVE_SPI_CONFIG;
	/*  */
#define DPORT_SLAVE_SPI_CONFIG_SLAVE_SPI_MASK_PRO		0u
	/*  */
#define DPORT_SLAVE_SPI_CONFIG_SLAVE_SPI_MASK_APP		4u
	/*  */
#define DPORT_SLAVE_SPI_CONFIG_SPI_ENCRYPT_ENABLE		8u
	/*  */
#define DPORT_SLAVE_SPI_CONFIG_SPI_DECRYPT_ENABLE		12u

	/* 0xCC:  */
	uint32_t volatile WIFI_CLK_EN;
	/*  */
#define DPORT_WIFI_CLK_EN_WIFI_CLK_EN_Msb			0u
#define DPORT_WIFI_CLK_EN_WIFI_CLK_EN_Lsb			31u
	/*  */
#define DPORT_WIFI_CLK_EN_WIFI_CLK_WIFI_EN_Msb			0u
#define DPORT_WIFI_CLK_EN_WIFI_CLK_WIFI_EN_Lsb			2u
	/*  */
#define DPORT_WIFI_CLK_EN_WIFI_CLK_WIFI_BT_COMMON_Msb		0u
#define DPORT_WIFI_CLK_EN_WIFI_CLK_WIFI_BT_COMMON_Lsb		5u
	/*  */
#define DPORT_WIFI_CLK_EN_WIFI_CLK_BT_EN_Msb			11u
#define DPORT_WIFI_CLK_EN_WIFI_CLK_BT_EN_Lsb			13u

	/* 0xD0:  */
	uint32_t volatile CORE_RST_EN;
	/*  */
#define DPORT_CORE_RST_EN_CORE_RST_Msb				0u
#define DPORT_CORE_RST_EN_CORE_RST_Lsb				7u

	/* 0xD4:  */
	uint32_t volatile BT_LPCK_DIV_INT;
	/*  */
#define DPORT_BT_LPCK_DIV_INT_BT_LPCK_DIV_NUM_Msb		0u
#define DPORT_BT_LPCK_DIV_INT_BT_LPCK_DIV_NUM_Lsb		11u
	/*  */
#define DPORT_BT_LPCK_DIV_INT_BTEXTWAKEUP_REQ			12u

	/* 0xD8:  */
	uint32_t volatile BT_LPCK_DIV_FRAC;
	/*  */
#define DPORT_BT_LPCK_DIV_FRAC_BT_LPCK_DIV_B_Msb		0u
#define DPORT_BT_LPCK_DIV_FRAC_BT_LPCK_DIV_B_Lsb		11u
	/*  */
#define DPORT_BT_LPCK_DIV_FRAC_BT_LPCK_DIV_A_Msb		12u
#define DPORT_BT_LPCK_DIV_FRAC_BT_LPCK_DIV_A_Lsb		23u
	/*  */
#define DPORT_BT_LPCK_DIV_FRAC_LPCLK_SEL_RTC_SLOW		24u
	/*  */
#define DPORT_BT_LPCK_DIV_FRAC_LPCLK_SEL_8M			25u
	/*  */
#define DPORT_BT_LPCK_DIV_FRAC_LPCLK_SEL_XTAL			26u
	/*  */
#define DPORT_BT_LPCK_DIV_FRAC_LPCLK_SEL_XTAL32K		27u

	/* 0xDC:  */
	uint32_t volatile CPU_INTR_FROM_CPU_0;
	/*  */
#define DPORT_CPU_INTR_FROM_CPU_0_CPU_INTR_FROM_CPU_0		0u

	/* 0xE0:  */
	uint32_t volatile CPU_INTR_FROM_CPU_1;
	/*  */
#define DPORT_CPU_INTR_FROM_CPU_1_CPU_INTR_FROM_CPU_1		0u

	/* 0xE4:  */
	uint32_t volatile CPU_INTR_FROM_CPU_2;
	/*  */
#define DPORT_CPU_INTR_FROM_CPU_2_CPU_INTR_FROM_CPU_2		0u

	/* 0xE8:  */
	uint32_t volatile CPU_INTR_FROM_CPU_3;
	/*  */
#define DPORT_CPU_INTR_FROM_CPU_3_CPU_INTR_FROM_CPU_3		0u

	/* 0xEC:  */
	uint32_t volatile PRO_INTR_STATUS_0;
	/*  */
#define DPORT_PRO_INTR_STATUS_0_PRO_INTR_STATUS_0_Msb		0u
#define DPORT_PRO_INTR_STATUS_0_PRO_INTR_STATUS_0_Lsb		31u

	/* 0xF0:  */
	uint32_t volatile PRO_INTR_STATUS_1;
	/*  */
#define DPORT_PRO_INTR_STATUS_1_PRO_INTR_STATUS_1_Msb		0u
#define DPORT_PRO_INTR_STATUS_1_PRO_INTR_STATUS_1_Lsb		31u

	/* 0xF4:  */
	uint32_t volatile PRO_INTR_STATUS_2;
	/*  */
#define DPORT_PRO_INTR_STATUS_2_PRO_INTR_STATUS_2_Msb		0u
#define DPORT_PRO_INTR_STATUS_2_PRO_INTR_STATUS_2_Lsb		31u

	/* 0xF8:  */
	uint32_t volatile APP_INTR_STATUS_0;
	/*  */
#define DPORT_APP_INTR_STATUS_0_APP_INTR_STATUS_0_Msb		0u
#define DPORT_APP_INTR_STATUS_0_APP_INTR_STATUS_0_Lsb		31u

	/* 0xFC:  */
	uint32_t volatile APP_INTR_STATUS_1;
	/*  */
#define DPORT_APP_INTR_STATUS_1_APP_INTR_STATUS_1_Msb		0u
#define DPORT_APP_INTR_STATUS_1_APP_INTR_STATUS_1_Lsb		31u

	/* 0x100:  */
	uint32_t volatile APP_INTR_STATUS_2;
	/*  */
#define DPORT_APP_INTR_STATUS_2_APP_INTR_STATUS_2_Msb		0u
#define DPORT_APP_INTR_STATUS_2_APP_INTR_STATUS_2_Lsb		31u

	/* 0x104:  */
	uint32_t volatile PRO_MAC_INTR_MAP;
	/*  */
#define DPORT_PRO_MAC_INTR_MAP_PRO_MAC_INTR_MAP_Msb		0u
#define DPORT_PRO_MAC_INTR_MAP_PRO_MAC_INTR_MAP_Lsb		4u

	/* 0x108:  */
	uint32_t volatile PRO_MAC_NMI_MAP;
	/*  */
#define DPORT_PRO_MAC_NMI_MAP_PRO_MAC_NMI_MAP_Msb		0u
#define DPORT_PRO_MAC_NMI_MAP_PRO_MAC_NMI_MAP_Lsb		4u

	/* 0x10C:  */
	uint32_t volatile PRO_BB_INT_MAP;
	/*  */
#define DPORT_PRO_BB_INT_MAP_PRO_BB_INT_MAP_Msb			0u
#define DPORT_PRO_BB_INT_MAP_PRO_BB_INT_MAP_Lsb			4u

	/* 0x110:  */
	uint32_t volatile PRO_BT_MAC_INT_MAP;
	/*  */
#define DPORT_PRO_BT_MAC_INT_MAP_PRO_BT_MAC_INT_MAP_Msb		0u
#define DPORT_PRO_BT_MAC_INT_MAP_PRO_BT_MAC_INT_MAP_Lsb		4u

	/* 0x114:  */
	uint32_t volatile PRO_BT_BB_INT_MAP;
	/*  */
#define DPORT_PRO_BT_BB_INT_MAP_PRO_BT_BB_INT_MAP_Msb		0u
#define DPORT_PRO_BT_BB_INT_MAP_PRO_BT_BB_INT_MAP_Lsb		4u

	/* 0x118:  */
	uint32_t volatile PRO_BT_BB_NMI_MAP;
	/*  */
#define DPORT_PRO_BT_BB_NMI_MAP_PRO_BT_BB_NMI_MAP_Msb		0u
#define DPORT_PRO_BT_BB_NMI_MAP_PRO_BT_BB_NMI_MAP_Lsb		4u

	/* 0x11C:  */
	uint32_t volatile PRO_RWBT_IRQ_MAP;
	/*  */
#define DPORT_PRO_RWBT_IRQ_MAP_PRO_RWBT_IRQ_MAP_Msb		0u
#define DPORT_PRO_RWBT_IRQ_MAP_PRO_RWBT_IRQ_MAP_Lsb		4u

	/* 0x120:  */
	uint32_t volatile PRO_RWBLE_IRQ_MAP;
	/*  */
#define DPORT_PRO_RWBLE_IRQ_MAP_PRO_RWBLE_IRQ_MAP_Msb		0u
#define DPORT_PRO_RWBLE_IRQ_MAP_PRO_RWBLE_IRQ_MAP_Lsb		4u

	/* 0x124:  */
	uint32_t volatile PRO_RWBT_NMI_MAP;
	/*  */
#define DPORT_PRO_RWBT_NMI_MAP_PRO_RWBT_NMI_MAP_Msb		0u
#define DPORT_PRO_RWBT_NMI_MAP_PRO_RWBT_NMI_MAP_Lsb		4u

	/* 0x128:  */
	uint32_t volatile PRO_RWBLE_NMI_MAP;
	/*  */
#define DPORT_PRO_RWBLE_NMI_MAP_PRO_RWBLE_NMI_MAP_Msb		0u
#define DPORT_PRO_RWBLE_NMI_MAP_PRO_RWBLE_NMI_MAP_Lsb		4u

	/* 0x12C:  */
	uint32_t volatile PRO_SLC0_INTR_MAP;
	/*  */
#define DPORT_PRO_SLC0_INTR_MAP_PRO_SLC0_INTR_MAP_Msb		0u
#define DPORT_PRO_SLC0_INTR_MAP_PRO_SLC0_INTR_MAP_Lsb		4u

	/* 0x130:  */
	uint32_t volatile PRO_SLC1_INTR_MAP;
	/*  */
#define DPORT_PRO_SLC1_INTR_MAP_PRO_SLC1_INTR_MAP_Msb		0u
#define DPORT_PRO_SLC1_INTR_MAP_PRO_SLC1_INTR_MAP_Lsb		4u

	/* 0x134:  */
	uint32_t volatile PRO_UHCI0_INTR_MAP;
	/*  */
#define DPORT_PRO_UHCI0_INTR_MAP_PRO_UHCI0_INTR_MAP_Msb		0u
#define DPORT_PRO_UHCI0_INTR_MAP_PRO_UHCI0_INTR_MAP_Lsb		4u

	/* 0x138:  */
	uint32_t volatile PRO_UHCI1_INTR_MAP;
	/*  */
#define DPORT_PRO_UHCI1_INTR_MAP_PRO_UHCI1_INTR_MAP_Msb		0u
#define DPORT_PRO_UHCI1_INTR_MAP_PRO_UHCI1_INTR_MAP_Lsb		4u

	/* 0x13C:  */
	uint32_t volatile PRO_TG_T0_LEVEL_INT_MAP;
	/*  */
#define DPORT_PRO_TG_T0_LEVEL_INT_MAP_PRO_TG_T0_LEVEL_INT_MAP_Msb	0u
#define DPORT_PRO_TG_T0_LEVEL_INT_MAP_PRO_TG_T0_LEVEL_INT_MAP_Lsb	4u

	/* 0x140:  */
	uint32_t volatile PRO_TG_T1_LEVEL_INT_MAP;
	/*  */
#define DPORT_PRO_TG_T1_LEVEL_INT_MAP_PRO_TG_T1_LEVEL_INT_MAP_Msb	0u
#define DPORT_PRO_TG_T1_LEVEL_INT_MAP_PRO_TG_T1_LEVEL_INT_MAP_Lsb	4u

	/* 0x144:  */
	uint32_t volatile PRO_TG_WDT_LEVEL_INT_MAP;
	/*  */
#define DPORT_PRO_TG_WDT_LEVEL_INT_MAP_PRO_TG_WDT_LEVEL_INT_MAP_Msb	0u
#define DPORT_PRO_TG_WDT_LEVEL_INT_MAP_PRO_TG_WDT_LEVEL_INT_MAP_Lsb	4u

	/* 0x148:  */
	uint32_t volatile PRO_TG_LACT_LEVEL_INT_MAP;
	/*  */
#define DPORT_PRO_TG_LACT_LEVEL_INT_MAP_PRO_TG_LACT_LEVEL_INT_MAP_Msb	0u
#define DPORT_PRO_TG_LACT_LEVEL_INT_MAP_PRO_TG_LACT_LEVEL_INT_MAP_Lsb	4u

	/* 0x14C:  */
	uint32_t volatile PRO_TG1_T0_LEVEL_INT_MAP;
	/*  */
#define DPORT_PRO_TG1_T0_LEVEL_INT_MAP_PRO_TG1_T0_LEVEL_INT_MAP_Msb	0u
#define DPORT_PRO_TG1_T0_LEVEL_INT_MAP_PRO_TG1_T0_LEVEL_INT_MAP_Lsb	4u

	/* 0x150:  */
	uint32_t volatile PRO_TG1_T1_LEVEL_INT_MAP;
	/*  */
#define DPORT_PRO_TG1_T1_LEVEL_INT_MAP_PRO_TG1_T1_LEVEL_INT_MAP_Msb	0u
#define DPORT_PRO_TG1_T1_LEVEL_INT_MAP_PRO_TG1_T1_LEVEL_INT_MAP_Lsb	4u

	/* 0x154:  */
	uint32_t volatile PRO_TG1_WDT_LEVEL_INT_MAP;
	/*  */
#define DPORT_PRO_TG1_WDT_LEVEL_INT_MAP_PRO_TG1_WDT_LEVEL_INT_MAP_Msb	0u
#define DPORT_PRO_TG1_WDT_LEVEL_INT_MAP_PRO_TG1_WDT_LEVEL_INT_MAP_Lsb	4u

	/* 0x158:  */
	uint32_t volatile PRO_TG1_LACT_LEVEL_INT_MAP;
	/*  */
#define DPORT_PRO_TG1_LACT_LEVEL_INT_MAP_PRO_TG1_LACT_LEVEL_INT_MAP_Msb	0u
#define DPORT_PRO_TG1_LACT_LEVEL_INT_MAP_PRO_TG1_LACT_LEVEL_INT_MAP_Lsb	4u

	/* 0x15C:  */
	uint32_t volatile PRO_GPIO_INTERRUPT_MAP;
	/*  */
#define DPORT_PRO_GPIO_INTERRUPT_MAP_PRO_GPIO_INTERRUPT_PRO_MAP_Msb	0u
#define DPORT_PRO_GPIO_INTERRUPT_MAP_PRO_GPIO_INTERRUPT_PRO_MAP_Lsb	4u

	/* 0x160:  */
	uint32_t volatile PRO_GPIO_INTERRUPT_NMI_MAP;
	/*  */
#define DPORT_PRO_GPIO_INTERRUPT_NMI_MAP_PRO_GPIO_INTERRUPT_PRO_NMI_MAP_Msb	0u
#define DPORT_PRO_GPIO_INTERRUPT_NMI_MAP_PRO_GPIO_INTERRUPT_PRO_NMI_MAP_Lsb	4u

	/* 0x164:  */
	uint32_t volatile PRO_CPU_INTR_FROM_CPU_0_MAP;
	/*  */
#define DPORT_PRO_CPU_INTR_FROM_CPU_0_MAP_PRO_CPU_INTR_FROM_CPU_0_MAP_Msb	0u
#define DPORT_PRO_CPU_INTR_FROM_CPU_0_MAP_PRO_CPU_INTR_FROM_CPU_0_MAP_Lsb	4u

	/* 0x168:  */
	uint32_t volatile PRO_CPU_INTR_FROM_CPU_1_MAP;
	/*  */
#define DPORT_PRO_CPU_INTR_FROM_CPU_1_MAP_PRO_CPU_INTR_FROM_CPU_1_MAP_Msb	0u
#define DPORT_PRO_CPU_INTR_FROM_CPU_1_MAP_PRO_CPU_INTR_FROM_CPU_1_MAP_Lsb	4u

	/* 0x16C:  */
	uint32_t volatile PRO_CPU_INTR_FROM_CPU_2_MAP;
	/*  */
#define DPORT_PRO_CPU_INTR_FROM_CPU_2_MAP_PRO_CPU_INTR_FROM_CPU_2_MAP_Msb	0u
#define DPORT_PRO_CPU_INTR_FROM_CPU_2_MAP_PRO_CPU_INTR_FROM_CPU_2_MAP_Lsb	4u

	/* 0x170:  */
	uint32_t volatile PRO_CPU_INTR_FROM_CPU_3_MAP;
	/*  */
#define DPORT_PRO_CPU_INTR_FROM_CPU_3_MAP_PRO_CPU_INTR_FROM_CPU_3_MAP_Msb	0u
#define DPORT_PRO_CPU_INTR_FROM_CPU_3_MAP_PRO_CPU_INTR_FROM_CPU_3_MAP_Lsb	4u

	/* 0x174:  */
	uint32_t volatile PRO_SPI_INTR_0_MAP;
	/*  */
#define DPORT_PRO_SPI_INTR_0_MAP_PRO_SPI_INTR_0_MAP_Msb		0u
#define DPORT_PRO_SPI_INTR_0_MAP_PRO_SPI_INTR_0_MAP_Lsb		4u

	/* 0x178:  */
	uint32_t volatile PRO_SPI_INTR_1_MAP;
	/*  */
#define DPORT_PRO_SPI_INTR_1_MAP_PRO_SPI_INTR_1_MAP_Msb		0u
#define DPORT_PRO_SPI_INTR_1_MAP_PRO_SPI_INTR_1_MAP_Lsb		4u

	/* 0x17C:  */
	uint32_t volatile PRO_SPI_INTR_2_MAP;
	/*  */
#define DPORT_PRO_SPI_INTR_2_MAP_PRO_SPI_INTR_2_MAP_Msb		0u
#define DPORT_PRO_SPI_INTR_2_MAP_PRO_SPI_INTR_2_MAP_Lsb		4u

	/* 0x180:  */
	uint32_t volatile PRO_SPI_INTR_3_MAP;
	/*  */
#define DPORT_PRO_SPI_INTR_3_MAP_PRO_SPI_INTR_3_MAP_Msb		0u
#define DPORT_PRO_SPI_INTR_3_MAP_PRO_SPI_INTR_3_MAP_Lsb		4u

	/* 0x184:  */
	uint32_t volatile PRO_I2S0_INT_MAP;
	/*  */
#define DPORT_PRO_I2S0_INT_MAP_PRO_I2S0_INT_MAP_Msb		0u
#define DPORT_PRO_I2S0_INT_MAP_PRO_I2S0_INT_MAP_Lsb		4u

	/* 0x188:  */
	uint32_t volatile PRO_I2S1_INT_MAP;
	/*  */
#define DPORT_PRO_I2S1_INT_MAP_PRO_I2S1_INT_MAP_Msb		0u
#define DPORT_PRO_I2S1_INT_MAP_PRO_I2S1_INT_MAP_Lsb		4u

	/* 0x18C:  */
	uint32_t volatile PRO_UART_INTR_MAP;
	/*  */
#define DPORT_PRO_UART_INTR_MAP_PRO_UART_INTR_MAP_Msb		0u
#define DPORT_PRO_UART_INTR_MAP_PRO_UART_INTR_MAP_Lsb		4u

	/* 0x190:  */
	uint32_t volatile PRO_UART1_INTR_MAP;
	/*  */
#define DPORT_PRO_UART1_INTR_MAP_PRO_UART1_INTR_MAP_Msb		0u
#define DPORT_PRO_UART1_INTR_MAP_PRO_UART1_INTR_MAP_Lsb		4u

	/* 0x194:  */
	uint32_t volatile PRO_UART2_INTR_MAP;
	/*  */
#define DPORT_PRO_UART2_INTR_MAP_PRO_UART2_INTR_MAP_Msb		0u
#define DPORT_PRO_UART2_INTR_MAP_PRO_UART2_INTR_MAP_Lsb		4u

	/* 0x198:  */
	uint32_t volatile PRO_SDIO_HOST_INTERRUPT_MAP;
	/*  */
#define DPORT_PRO_SDIO_HOST_INTERRUPT_MAP_PRO_SDIO_HOST_INTERRUPT_MAP_Msb	0u
#define DPORT_PRO_SDIO_HOST_INTERRUPT_MAP_PRO_SDIO_HOST_INTERRUPT_MAP_Lsb	4u

	/* 0x19C:  */
	uint32_t volatile PRO_EMAC_INT_MAP;
	/*  */
#define DPORT_PRO_EMAC_INT_MAP_PRO_EMAC_INT_MAP_Msb		0u
#define DPORT_PRO_EMAC_INT_MAP_PRO_EMAC_INT_MAP_Lsb		4u

	/* 0x1A0:  */
	uint32_t volatile PRO_PWM0_INTR_MAP;
	/*  */
#define DPORT_PRO_PWM0_INTR_MAP_PRO_PWM0_INTR_MAP_Msb		0u
#define DPORT_PRO_PWM0_INTR_MAP_PRO_PWM0_INTR_MAP_Lsb		4u

	/* 0x1A4:  */
	uint32_t volatile PRO_PWM1_INTR_MAP;
	/*  */
#define DPORT_PRO_PWM1_INTR_MAP_PRO_PWM1_INTR_MAP_Msb		0u
#define DPORT_PRO_PWM1_INTR_MAP_PRO_PWM1_INTR_MAP_Lsb		4u

	/* 0x1A8:  */
	uint32_t volatile PRO_PWM2_INTR_MAP;
	/*  */
#define DPORT_PRO_PWM2_INTR_MAP_PRO_PWM2_INTR_MAP_Msb		0u
#define DPORT_PRO_PWM2_INTR_MAP_PRO_PWM2_INTR_MAP_Lsb		4u

	/* 0x1AC:  */
	uint32_t volatile PRO_PWM3_INTR_MAP;
	/*  */
#define DPORT_PRO_PWM3_INTR_MAP_PRO_PWM3_INTR_MAP_Msb		0u
#define DPORT_PRO_PWM3_INTR_MAP_PRO_PWM3_INTR_MAP_Lsb		4u

	/* 0x1B0:  */
	uint32_t volatile PRO_LEDC_INT_MAP;
	/*  */
#define DPORT_PRO_LEDC_INT_MAP_PRO_LEDC_INT_MAP_Msb		0u
#define DPORT_PRO_LEDC_INT_MAP_PRO_LEDC_INT_MAP_Lsb		4u

	/* 0x1B4:  */
	uint32_t volatile PRO_EFUSE_INT_MAP;
	/*  */
#define DPORT_PRO_EFUSE_INT_MAP_PRO_EFUSE_INT_MAP_Msb		0u
#define DPORT_PRO_EFUSE_INT_MAP_PRO_EFUSE_INT_MAP_Lsb		4u

	/* 0x1B8:  */
	uint32_t volatile PRO_CAN_INT_MAP;
	/*  */
#define DPORT_PRO_CAN_INT_MAP_PRO_CAN_INT_MAP_Msb		0u
#define DPORT_PRO_CAN_INT_MAP_PRO_CAN_INT_MAP_Lsb		4u

	/* 0x1BC:  */
	uint32_t volatile PRO_RTC_CORE_INTR_MAP;
	/*  */
#define DPORT_PRO_RTC_CORE_INTR_MAP_PRO_RTC_CORE_INTR_MAP_Msb	0u
#define DPORT_PRO_RTC_CORE_INTR_MAP_PRO_RTC_CORE_INTR_MAP_Lsb	4u

	/* 0x1C0:  */
	uint32_t volatile PRO_RMT_INTR_MAP;
	/*  */
#define DPORT_PRO_RMT_INTR_MAP_PRO_RMT_INTR_MAP_Msb		0u
#define DPORT_PRO_RMT_INTR_MAP_PRO_RMT_INTR_MAP_Lsb		4u

	/* 0x1C4:  */
	uint32_t volatile PRO_PCNT_INTR_MAP;
	/*  */
#define DPORT_PRO_PCNT_INTR_MAP_PRO_PCNT_INTR_MAP_Msb		0u
#define DPORT_PRO_PCNT_INTR_MAP_PRO_PCNT_INTR_MAP_Lsb		4u

	/* 0x1C8:  */
	uint32_t volatile PRO_I2C_EXT0_INTR_MAP;
	/*  */
#define DPORT_PRO_I2C_EXT0_INTR_MAP_PRO_I2C_EXT0_INTR_MAP_Msb	0u
#define DPORT_PRO_I2C_EXT0_INTR_MAP_PRO_I2C_EXT0_INTR_MAP_Lsb	4u

	/* 0x1CC:  */
	uint32_t volatile PRO_I2C_EXT1_INTR_MAP;
	/*  */
#define DPORT_PRO_I2C_EXT1_INTR_MAP_PRO_I2C_EXT1_INTR_MAP_Msb	0u
#define DPORT_PRO_I2C_EXT1_INTR_MAP_PRO_I2C_EXT1_INTR_MAP_Lsb	4u

	/* 0x1D0:  */
	uint32_t volatile PRO_RSA_INTR_MAP;
	/*  */
#define DPORT_PRO_RSA_INTR_MAP_PRO_RSA_INTR_MAP_Msb		0u
#define DPORT_PRO_RSA_INTR_MAP_PRO_RSA_INTR_MAP_Lsb		4u

	/* 0x1D4:  */
	uint32_t volatile PRO_SPI1_DMA_INT_MAP;
	/*  */
#define DPORT_PRO_SPI1_DMA_INT_MAP_PRO_SPI1_DMA_INT_MAP_Msb	0u
#define DPORT_PRO_SPI1_DMA_INT_MAP_PRO_SPI1_DMA_INT_MAP_Lsb	4u

	/* 0x1D8:  */
	uint32_t volatile PRO_SPI2_DMA_INT_MAP;
	/*  */
#define DPORT_PRO_SPI2_DMA_INT_MAP_PRO_SPI2_DMA_INT_MAP_Msb	0u
#define DPORT_PRO_SPI2_DMA_INT_MAP_PRO_SPI2_DMA_INT_MAP_Lsb	4u

	/* 0x1DC:  */
	uint32_t volatile PRO_SPI3_DMA_INT_MAP;
	/*  */
#define DPORT_PRO_SPI3_DMA_INT_MAP_PRO_SPI3_DMA_INT_MAP_Msb	0u
#define DPORT_PRO_SPI3_DMA_INT_MAP_PRO_SPI3_DMA_INT_MAP_Lsb	4u

	/* 0x1E0:  */
	uint32_t volatile PRO_WDG_INT_MAP;
	/*  */
#define DPORT_PRO_WDG_INT_MAP_PRO_WDG_INT_MAP_Msb		0u
#define DPORT_PRO_WDG_INT_MAP_PRO_WDG_INT_MAP_Lsb		4u

	/* 0x1E4:  */
	uint32_t volatile PRO_TIMER_INT1_MAP;
	/*  */
#define DPORT_PRO_TIMER_INT1_MAP_PRO_TIMER_INT1_MAP_Msb		0u
#define DPORT_PRO_TIMER_INT1_MAP_PRO_TIMER_INT1_MAP_Lsb		4u

	/* 0x1E8:  */
	uint32_t volatile PRO_TIMER_INT2_MAP;
	/*  */
#define DPORT_PRO_TIMER_INT2_MAP_PRO_TIMER_INT2_MAP_Msb		0u
#define DPORT_PRO_TIMER_INT2_MAP_PRO_TIMER_INT2_MAP_Lsb		4u

	/* 0x1EC:  */
	uint32_t volatile PRO_TG_T0_EDGE_INT_MAP;
	/*  */
#define DPORT_PRO_TG_T0_EDGE_INT_MAP_PRO_TG_T0_EDGE_INT_MAP_Msb	0u
#define DPORT_PRO_TG_T0_EDGE_INT_MAP_PRO_TG_T0_EDGE_INT_MAP_Lsb	4u

	/* 0x1F0:  */
	uint32_t volatile PRO_TG_T1_EDGE_INT_MAP;
	/*  */
#define DPORT_PRO_TG_T1_EDGE_INT_MAP_PRO_TG_T1_EDGE_INT_MAP_Msb	0u
#define DPORT_PRO_TG_T1_EDGE_INT_MAP_PRO_TG_T1_EDGE_INT_MAP_Lsb	4u

	/* 0x1F4:  */
	uint32_t volatile PRO_TG_WDT_EDGE_INT_MAP;
	/*  */
#define DPORT_PRO_TG_WDT_EDGE_INT_MAP_PRO_TG_WDT_EDGE_INT_MAP_Msb	0u
#define DPORT_PRO_TG_WDT_EDGE_INT_MAP_PRO_TG_WDT_EDGE_INT_MAP_Lsb	4u

	/* 0x1F8:  */
	uint32_t volatile PRO_TG_LACT_EDGE_INT_MAP;
	/*  */
#define DPORT_PRO_TG_LACT_EDGE_INT_MAP_PRO_TG_LACT_EDGE_INT_MAP_Msb	0u
#define DPORT_PRO_TG_LACT_EDGE_INT_MAP_PRO_TG_LACT_EDGE_INT_MAP_Lsb	4u

	/* 0x1FC:  */
	uint32_t volatile PRO_TG1_T0_EDGE_INT_MAP;
	/*  */
#define DPORT_PRO_TG1_T0_EDGE_INT_MAP_PRO_TG1_T0_EDGE_INT_MAP_Msb	0u
#define DPORT_PRO_TG1_T0_EDGE_INT_MAP_PRO_TG1_T0_EDGE_INT_MAP_Lsb	4u

	/* 0x200:  */
	uint32_t volatile PRO_TG1_T1_EDGE_INT_MAP;
	/*  */
#define DPORT_PRO_TG1_T1_EDGE_INT_MAP_PRO_TG1_T1_EDGE_INT_MAP_Msb	0u
#define DPORT_PRO_TG1_T1_EDGE_INT_MAP_PRO_TG1_T1_EDGE_INT_MAP_Lsb	4u

	/* 0x204:  */
	uint32_t volatile PRO_TG1_WDT_EDGE_INT_MAP;
	/*  */
#define DPORT_PRO_TG1_WDT_EDGE_INT_MAP_PRO_TG1_WDT_EDGE_INT_MAP_Msb	0u
#define DPORT_PRO_TG1_WDT_EDGE_INT_MAP_PRO_TG1_WDT_EDGE_INT_MAP_Lsb	4u

	/* 0x208:  */
	uint32_t volatile PRO_TG1_LACT_EDGE_INT_MAP;
	/*  */
#define DPORT_PRO_TG1_LACT_EDGE_INT_MAP_PRO_TG1_LACT_EDGE_INT_MAP_Msb	0u
#define DPORT_PRO_TG1_LACT_EDGE_INT_MAP_PRO_TG1_LACT_EDGE_INT_MAP_Lsb	4u

	/* 0x20C:  */
	uint32_t volatile PRO_MMU_IA_INT_MAP;
	/*  */
#define DPORT_PRO_MMU_IA_INT_MAP_PRO_MMU_IA_INT_MAP_Msb		0u
#define DPORT_PRO_MMU_IA_INT_MAP_PRO_MMU_IA_INT_MAP_Lsb		4u

	/* 0x210:  */
	uint32_t volatile PRO_MPU_IA_INT_MAP;
	/*  */
#define DPORT_PRO_MPU_IA_INT_MAP_PRO_MPU_IA_INT_MAP_Msb		0u
#define DPORT_PRO_MPU_IA_INT_MAP_PRO_MPU_IA_INT_MAP_Lsb		4u

	/* 0x214:  */
	uint32_t volatile PRO_CACHE_IA_INT_MAP;
	/*  */
#define DPORT_PRO_CACHE_IA_INT_MAP_PRO_CACHE_IA_INT_MAP_Msb	0u
#define DPORT_PRO_CACHE_IA_INT_MAP_PRO_CACHE_IA_INT_MAP_Lsb	4u

	/* 0x218:  */
	uint32_t volatile APP_MAC_INTR_MAP;
	/*  */
#define DPORT_APP_MAC_INTR_MAP_APP_MAC_INTR_MAP_Msb		0u
#define DPORT_APP_MAC_INTR_MAP_APP_MAC_INTR_MAP_Lsb		4u

	/* 0x21C:  */
	uint32_t volatile APP_MAC_NMI_MAP;
	/*  */
#define DPORT_APP_MAC_NMI_MAP_APP_MAC_NMI_MAP_Msb		0u
#define DPORT_APP_MAC_NMI_MAP_APP_MAC_NMI_MAP_Lsb		4u

	/* 0x220:  */
	uint32_t volatile APP_BB_INT_MAP;
	/*  */
#define DPORT_APP_BB_INT_MAP_APP_BB_INT_MAP_Msb			0u
#define DPORT_APP_BB_INT_MAP_APP_BB_INT_MAP_Lsb			4u

	/* 0x224:  */
	uint32_t volatile APP_BT_MAC_INT_MAP;
	/*  */
#define DPORT_APP_BT_MAC_INT_MAP_APP_BT_MAC_INT_MAP_Msb		0u
#define DPORT_APP_BT_MAC_INT_MAP_APP_BT_MAC_INT_MAP_Lsb		4u

	/* 0x228:  */
	uint32_t volatile APP_BT_BB_INT_MAP;
	/*  */
#define DPORT_APP_BT_BB_INT_MAP_APP_BT_BB_INT_MAP_Msb		0u
#define DPORT_APP_BT_BB_INT_MAP_APP_BT_BB_INT_MAP_Lsb		4u

	/* 0x22C:  */
	uint32_t volatile APP_BT_BB_NMI_MAP;
	/*  */
#define DPORT_APP_BT_BB_NMI_MAP_APP_BT_BB_NMI_MAP_Msb		0u
#define DPORT_APP_BT_BB_NMI_MAP_APP_BT_BB_NMI_MAP_Lsb		4u

	/* 0x230:  */
	uint32_t volatile APP_RWBT_IRQ_MAP;
	/*  */
#define DPORT_APP_RWBT_IRQ_MAP_APP_RWBT_IRQ_MAP_Msb		0u
#define DPORT_APP_RWBT_IRQ_MAP_APP_RWBT_IRQ_MAP_Lsb		4u

	/* 0x234:  */
	uint32_t volatile APP_RWBLE_IRQ_MAP;
	/*  */
#define DPORT_APP_RWBLE_IRQ_MAP_APP_RWBLE_IRQ_MAP_Msb		0u
#define DPORT_APP_RWBLE_IRQ_MAP_APP_RWBLE_IRQ_MAP_Lsb		4u

	/* 0x238:  */
	uint32_t volatile APP_RWBT_NMI_MAP;
	/*  */
#define DPORT_APP_RWBT_NMI_MAP_APP_RWBT_NMI_MAP_Msb		0u
#define DPORT_APP_RWBT_NMI_MAP_APP_RWBT_NMI_MAP_Lsb		4u

	/* 0x23C:  */
	uint32_t volatile APP_RWBLE_NMI_MAP;
	/*  */
#define DPORT_APP_RWBLE_NMI_MAP_APP_RWBLE_NMI_MAP_Msb		0u
#define DPORT_APP_RWBLE_NMI_MAP_APP_RWBLE_NMI_MAP_Lsb		4u

	/* 0x240:  */
	uint32_t volatile APP_SLC0_INTR_MAP;
	/*  */
#define DPORT_APP_SLC0_INTR_MAP_APP_SLC0_INTR_MAP_Msb		0u
#define DPORT_APP_SLC0_INTR_MAP_APP_SLC0_INTR_MAP_Lsb		4u

	/* 0x244:  */
	uint32_t volatile APP_SLC1_INTR_MAP;
	/*  */
#define DPORT_APP_SLC1_INTR_MAP_APP_SLC1_INTR_MAP_Msb		0u
#define DPORT_APP_SLC1_INTR_MAP_APP_SLC1_INTR_MAP_Lsb		4u

	/* 0x248:  */
	uint32_t volatile APP_UHCI0_INTR_MAP;
	/*  */
#define DPORT_APP_UHCI0_INTR_MAP_APP_UHCI0_INTR_MAP_Msb		0u
#define DPORT_APP_UHCI0_INTR_MAP_APP_UHCI0_INTR_MAP_Lsb		4u

	/* 0x24C:  */
	uint32_t volatile APP_UHCI1_INTR_MAP;
	/*  */
#define DPORT_APP_UHCI1_INTR_MAP_APP_UHCI1_INTR_MAP_Msb		0u
#define DPORT_APP_UHCI1_INTR_MAP_APP_UHCI1_INTR_MAP_Lsb		4u

	/* 0x250:  */
	uint32_t volatile APP_TG_T0_LEVEL_INT_MAP;
	/*  */
#define DPORT_APP_TG_T0_LEVEL_INT_MAP_APP_TG_T0_LEVEL_INT_MAP_Msb	0u
#define DPORT_APP_TG_T0_LEVEL_INT_MAP_APP_TG_T0_LEVEL_INT_MAP_Lsb	4u

	/* 0x254:  */
	uint32_t volatile APP_TG_T1_LEVEL_INT_MAP;
	/*  */
#define DPORT_APP_TG_T1_LEVEL_INT_MAP_APP_TG_T1_LEVEL_INT_MAP_Msb	0u
#define DPORT_APP_TG_T1_LEVEL_INT_MAP_APP_TG_T1_LEVEL_INT_MAP_Lsb	4u

	/* 0x258:  */
	uint32_t volatile APP_TG_WDT_LEVEL_INT_MAP;
	/*  */
#define DPORT_APP_TG_WDT_LEVEL_INT_MAP_APP_TG_WDT_LEVEL_INT_MAP_Msb	0u
#define DPORT_APP_TG_WDT_LEVEL_INT_MAP_APP_TG_WDT_LEVEL_INT_MAP_Lsb	4u

	/* 0x25C:  */
	uint32_t volatile APP_TG_LACT_LEVEL_INT_MAP;
	/*  */
#define DPORT_APP_TG_LACT_LEVEL_INT_MAP_APP_TG_LACT_LEVEL_INT_MAP_Msb	0u
#define DPORT_APP_TG_LACT_LEVEL_INT_MAP_APP_TG_LACT_LEVEL_INT_MAP_Lsb	4u

	/* 0x260:  */
	uint32_t volatile APP_TG1_T0_LEVEL_INT_MAP;
	/*  */
#define DPORT_APP_TG1_T0_LEVEL_INT_MAP_APP_TG1_T0_LEVEL_INT_MAP_Msb	0u
#define DPORT_APP_TG1_T0_LEVEL_INT_MAP_APP_TG1_T0_LEVEL_INT_MAP_Lsb	4u

	/* 0x264:  */
	uint32_t volatile APP_TG1_T1_LEVEL_INT_MAP;
	/*  */
#define DPORT_APP_TG1_T1_LEVEL_INT_MAP_APP_TG1_T1_LEVEL_INT_MAP_Msb	0u
#define DPORT_APP_TG1_T1_LEVEL_INT_MAP_APP_TG1_T1_LEVEL_INT_MAP_Lsb	4u

	/* 0x268:  */
	uint32_t volatile APP_TG1_WDT_LEVEL_INT_MAP;
	/*  */
#define DPORT_APP_TG1_WDT_LEVEL_INT_MAP_APP_TG1_WDT_LEVEL_INT_MAP_Msb	0u
#define DPORT_APP_TG1_WDT_LEVEL_INT_MAP_APP_TG1_WDT_LEVEL_INT_MAP_Lsb	4u

	/* 0x26C:  */
	uint32_t volatile APP_TG1_LACT_LEVEL_INT_MAP;
	/*  */
#define DPORT_APP_TG1_LACT_LEVEL_INT_MAP_APP_TG1_LACT_LEVEL_INT_MAP_Msb	0u
#define DPORT_APP_TG1_LACT_LEVEL_INT_MAP_APP_TG1_LACT_LEVEL_INT_MAP_Lsb	4u

	/* 0x270:  */
	uint32_t volatile APP_GPIO_INTERRUPT_MAP;
	/*  */
#define DPORT_APP_GPIO_INTERRUPT_MAP_APP_GPIO_INTERRUPT_APP_MAP_Msb	0u
#define DPORT_APP_GPIO_INTERRUPT_MAP_APP_GPIO_INTERRUPT_APP_MAP_Lsb	4u

	/* 0x274:  */
	uint32_t volatile APP_GPIO_INTERRUPT_NMI_MAP;
	/*  */
#define DPORT_APP_GPIO_INTERRUPT_NMI_MAP_APP_GPIO_INTERRUPT_APP_NMI_MAP_Msb	0u
#define DPORT_APP_GPIO_INTERRUPT_NMI_MAP_APP_GPIO_INTERRUPT_APP_NMI_MAP_Lsb	4u

	/* 0x278:  */
	uint32_t volatile APP_CPU_INTR_FROM_CPU_0_MAP;
	/*  */
#define DPORT_APP_CPU_INTR_FROM_CPU_0_MAP_APP_CPU_INTR_FROM_CPU_0_MAP_Msb	0u
#define DPORT_APP_CPU_INTR_FROM_CPU_0_MAP_APP_CPU_INTR_FROM_CPU_0_MAP_Lsb	4u

	/* 0x27C:  */
	uint32_t volatile APP_CPU_INTR_FROM_CPU_1_MAP;
	/*  */
#define DPORT_APP_CPU_INTR_FROM_CPU_1_MAP_APP_CPU_INTR_FROM_CPU_1_MAP_Msb	0u
#define DPORT_APP_CPU_INTR_FROM_CPU_1_MAP_APP_CPU_INTR_FROM_CPU_1_MAP_Lsb	4u

	/* 0x280:  */
	uint32_t volatile APP_CPU_INTR_FROM_CPU_2_MAP;
	/*  */
#define DPORT_APP_CPU_INTR_FROM_CPU_2_MAP_APP_CPU_INTR_FROM_CPU_2_MAP_Msb	0u
#define DPORT_APP_CPU_INTR_FROM_CPU_2_MAP_APP_CPU_INTR_FROM_CPU_2_MAP_Lsb	4u

	/* 0x284:  */
	uint32_t volatile APP_CPU_INTR_FROM_CPU_3_MAP;
	/*  */
#define DPORT_APP_CPU_INTR_FROM_CPU_3_MAP_APP_CPU_INTR_FROM_CPU_3_MAP_Msb	0u
#define DPORT_APP_CPU_INTR_FROM_CPU_3_MAP_APP_CPU_INTR_FROM_CPU_3_MAP_Lsb	4u

	/* 0x288:  */
	uint32_t volatile APP_SPI_INTR_0_MAP;
	/*  */
#define DPORT_APP_SPI_INTR_0_MAP_APP_SPI_INTR_0_MAP_Msb		0u
#define DPORT_APP_SPI_INTR_0_MAP_APP_SPI_INTR_0_MAP_Lsb		4u

	/* 0x28C:  */
	uint32_t volatile APP_SPI_INTR_1_MAP;
	/*  */
#define DPORT_APP_SPI_INTR_1_MAP_APP_SPI_INTR_1_MAP_Msb		0u
#define DPORT_APP_SPI_INTR_1_MAP_APP_SPI_INTR_1_MAP_Lsb		4u

	/* 0x290:  */
	uint32_t volatile APP_SPI_INTR_2_MAP;
	/*  */
#define DPORT_APP_SPI_INTR_2_MAP_APP_SPI_INTR_2_MAP_Msb		0u
#define DPORT_APP_SPI_INTR_2_MAP_APP_SPI_INTR_2_MAP_Lsb		4u

	/* 0x294:  */
	uint32_t volatile APP_SPI_INTR_3_MAP;
	/*  */
#define DPORT_APP_SPI_INTR_3_MAP_APP_SPI_INTR_3_MAP_Msb		0u
#define DPORT_APP_SPI_INTR_3_MAP_APP_SPI_INTR_3_MAP_Lsb		4u

	/* 0x298:  */
	uint32_t volatile APP_I2S0_INT_MAP;
	/*  */
#define DPORT_APP_I2S0_INT_MAP_APP_I2S0_INT_MAP_Msb		0u
#define DPORT_APP_I2S0_INT_MAP_APP_I2S0_INT_MAP_Lsb		4u

	/* 0x29C:  */
	uint32_t volatile APP_I2S1_INT_MAP;
	/*  */
#define DPORT_APP_I2S1_INT_MAP_APP_I2S1_INT_MAP_Msb		0u
#define DPORT_APP_I2S1_INT_MAP_APP_I2S1_INT_MAP_Lsb		4u

	/* 0x2A0:  */
	uint32_t volatile APP_UART_INTR_MAP;
	/*  */
#define DPORT_APP_UART_INTR_MAP_APP_UART_INTR_MAP_Msb		0u
#define DPORT_APP_UART_INTR_MAP_APP_UART_INTR_MAP_Lsb		4u

	/* 0x2A4:  */
	uint32_t volatile APP_UART1_INTR_MAP;
	/*  */
#define DPORT_APP_UART1_INTR_MAP_APP_UART1_INTR_MAP_Msb		0u
#define DPORT_APP_UART1_INTR_MAP_APP_UART1_INTR_MAP_Lsb		4u

	/* 0x2A8:  */
	uint32_t volatile APP_UART2_INTR_MAP;
	/*  */
#define DPORT_APP_UART2_INTR_MAP_APP_UART2_INTR_MAP_Msb		0u
#define DPORT_APP_UART2_INTR_MAP_APP_UART2_INTR_MAP_Lsb		4u

	/* 0x2AC:  */
	uint32_t volatile APP_SDIO_HOST_INTERRUPT_MAP;
	/*  */
#define DPORT_APP_SDIO_HOST_INTERRUPT_MAP_APP_SDIO_HOST_INTERRUPT_MAP_Msb	0u
#define DPORT_APP_SDIO_HOST_INTERRUPT_MAP_APP_SDIO_HOST_INTERRUPT_MAP_Lsb	4u

	/* 0x2B0:  */
	uint32_t volatile APP_EMAC_INT_MAP;
	/*  */
#define DPORT_APP_EMAC_INT_MAP_APP_EMAC_INT_MAP_Msb		0u
#define DPORT_APP_EMAC_INT_MAP_APP_EMAC_INT_MAP_Lsb		4u

	/* 0x2B4:  */
	uint32_t volatile APP_PWM0_INTR_MAP;
	/*  */
#define DPORT_APP_PWM0_INTR_MAP_APP_PWM0_INTR_MAP_Msb		0u
#define DPORT_APP_PWM0_INTR_MAP_APP_PWM0_INTR_MAP_Lsb		4u

	/* 0x2B8:  */
	uint32_t volatile APP_PWM1_INTR_MAP;
	/*  */
#define DPORT_APP_PWM1_INTR_MAP_APP_PWM1_INTR_MAP_Msb		0u
#define DPORT_APP_PWM1_INTR_MAP_APP_PWM1_INTR_MAP_Lsb		4u

	/* 0x2BC:  */
	uint32_t volatile APP_PWM2_INTR_MAP;
	/*  */
#define DPORT_APP_PWM2_INTR_MAP_APP_PWM2_INTR_MAP_Msb		0u
#define DPORT_APP_PWM2_INTR_MAP_APP_PWM2_INTR_MAP_Lsb		4u

	/* 0x2C0:  */
	uint32_t volatile APP_PWM3_INTR_MAP;
	/*  */
#define DPORT_APP_PWM3_INTR_MAP_APP_PWM3_INTR_MAP_Msb		0u
#define DPORT_APP_PWM3_INTR_MAP_APP_PWM3_INTR_MAP_Lsb		4u

	/* 0x2C4:  */
	uint32_t volatile APP_LEDC_INT_MAP;
	/*  */
#define DPORT_APP_LEDC_INT_MAP_APP_LEDC_INT_MAP_Msb		0u
#define DPORT_APP_LEDC_INT_MAP_APP_LEDC_INT_MAP_Lsb		4u

	/* 0x2C8:  */
	uint32_t volatile APP_EFUSE_INT_MAP;
	/*  */
#define DPORT_APP_EFUSE_INT_MAP_APP_EFUSE_INT_MAP_Msb		0u
#define DPORT_APP_EFUSE_INT_MAP_APP_EFUSE_INT_MAP_Lsb		4u

	/* 0x2CC:  */
	uint32_t volatile APP_CAN_INT_MAP;
	/*  */
#define DPORT_APP_CAN_INT_MAP_APP_CAN_INT_MAP_Msb		0u
#define DPORT_APP_CAN_INT_MAP_APP_CAN_INT_MAP_Lsb		4u

	/* 0x2D0:  */
	uint32_t volatile APP_RTC_CORE_INTR_MAP;
	/*  */
#define DPORT_APP_RTC_CORE_INTR_MAP_APP_RTC_CORE_INTR_MAP_Msb	0u
#define DPORT_APP_RTC_CORE_INTR_MAP_APP_RTC_CORE_INTR_MAP_Lsb	4u

	/* 0x2D4:  */
	uint32_t volatile APP_RMT_INTR_MAP;
	/*  */
#define DPORT_APP_RMT_INTR_MAP_APP_RMT_INTR_MAP_Msb		0u
#define DPORT_APP_RMT_INTR_MAP_APP_RMT_INTR_MAP_Lsb		4u

	/* 0x2D8:  */
	uint32_t volatile APP_PCNT_INTR_MAP;
	/*  */
#define DPORT_APP_PCNT_INTR_MAP_APP_PCNT_INTR_MAP_Msb		0u
#define DPORT_APP_PCNT_INTR_MAP_APP_PCNT_INTR_MAP_Lsb		4u

	/* 0x2DC:  */
	uint32_t volatile APP_I2C_EXT0_INTR_MAP;
	/*  */
#define DPORT_APP_I2C_EXT0_INTR_MAP_APP_I2C_EXT0_INTR_MAP_Msb	0u
#define DPORT_APP_I2C_EXT0_INTR_MAP_APP_I2C_EXT0_INTR_MAP_Lsb	4u

	/* 0x2E0:  */
	uint32_t volatile APP_I2C_EXT1_INTR_MAP;
	/*  */
#define DPORT_APP_I2C_EXT1_INTR_MAP_APP_I2C_EXT1_INTR_MAP_Msb	0u
#define DPORT_APP_I2C_EXT1_INTR_MAP_APP_I2C_EXT1_INTR_MAP_Lsb	4u

	/* 0x2E4:  */
	uint32_t volatile APP_RSA_INTR_MAP;
	/*  */
#define DPORT_APP_RSA_INTR_MAP_APP_RSA_INTR_MAP_Msb		0u
#define DPORT_APP_RSA_INTR_MAP_APP_RSA_INTR_MAP_Lsb		4u

	/* 0x2E8:  */
	uint32_t volatile APP_SPI1_DMA_INT_MAP;
	/*  */
#define DPORT_APP_SPI1_DMA_INT_MAP_APP_SPI1_DMA_INT_MAP_Msb	0u
#define DPORT_APP_SPI1_DMA_INT_MAP_APP_SPI1_DMA_INT_MAP_Lsb	4u

	/* 0x2EC:  */
	uint32_t volatile APP_SPI2_DMA_INT_MAP;
	/*  */
#define DPORT_APP_SPI2_DMA_INT_MAP_APP_SPI2_DMA_INT_MAP_Msb	0u
#define DPORT_APP_SPI2_DMA_INT_MAP_APP_SPI2_DMA_INT_MAP_Lsb	4u

	/* 0x2F0:  */
	uint32_t volatile APP_SPI3_DMA_INT_MAP;
	/*  */
#define DPORT_APP_SPI3_DMA_INT_MAP_APP_SPI3_DMA_INT_MAP_Msb	0u
#define DPORT_APP_SPI3_DMA_INT_MAP_APP_SPI3_DMA_INT_MAP_Lsb	4u

	/* 0x2F4:  */
	uint32_t volatile APP_WDG_INT_MAP;
	/*  */
#define DPORT_APP_WDG_INT_MAP_APP_WDG_INT_MAP_Msb		0u
#define DPORT_APP_WDG_INT_MAP_APP_WDG_INT_MAP_Lsb		4u

	/* 0x2F8:  */
	uint32_t volatile APP_TIMER_INT1_MAP;
	/*  */
#define DPORT_APP_TIMER_INT1_MAP_APP_TIMER_INT1_MAP_Msb		0u
#define DPORT_APP_TIMER_INT1_MAP_APP_TIMER_INT1_MAP_Lsb		4u

	/* 0x2FC:  */
	uint32_t volatile APP_TIMER_INT2_MAP;
	/*  */
#define DPORT_APP_TIMER_INT2_MAP_APP_TIMER_INT2_MAP_Msb		0u
#define DPORT_APP_TIMER_INT2_MAP_APP_TIMER_INT2_MAP_Lsb		4u

	/* 0x300:  */
	uint32_t volatile APP_TG_T0_EDGE_INT_MAP;
	/*  */
#define DPORT_APP_TG_T0_EDGE_INT_MAP_APP_TG_T0_EDGE_INT_MAP_Msb	0u
#define DPORT_APP_TG_T0_EDGE_INT_MAP_APP_TG_T0_EDGE_INT_MAP_Lsb	4u

	/* 0x304:  */
	uint32_t volatile APP_TG_T1_EDGE_INT_MAP;
	/*  */
#define DPORT_APP_TG_T1_EDGE_INT_MAP_APP_TG_T1_EDGE_INT_MAP_Msb	0u
#define DPORT_APP_TG_T1_EDGE_INT_MAP_APP_TG_T1_EDGE_INT_MAP_Lsb	4u

	/* 0x308:  */
	uint32_t volatile APP_TG_WDT_EDGE_INT_MAP;
	/*  */
#define DPORT_APP_TG_WDT_EDGE_INT_MAP_APP_TG_WDT_EDGE_INT_MAP_Msb	0u
#define DPORT_APP_TG_WDT_EDGE_INT_MAP_APP_TG_WDT_EDGE_INT_MAP_Lsb	4u

	/* 0x30C:  */
	uint32_t volatile APP_TG_LACT_EDGE_INT_MAP;
	/*  */
#define DPORT_APP_TG_LACT_EDGE_INT_MAP_APP_TG_LACT_EDGE_INT_MAP_Msb	0u
#define DPORT_APP_TG_LACT_EDGE_INT_MAP_APP_TG_LACT_EDGE_INT_MAP_Lsb	4u

	/* 0x310:  */
	uint32_t volatile APP_TG1_T0_EDGE_INT_MAP;
	/*  */
#define DPORT_APP_TG1_T0_EDGE_INT_MAP_APP_TG1_T0_EDGE_INT_MAP_Msb	0u
#define DPORT_APP_TG1_T0_EDGE_INT_MAP_APP_TG1_T0_EDGE_INT_MAP_Lsb	4u

	/* 0x314:  */
	uint32_t volatile APP_TG1_T1_EDGE_INT_MAP;
	/*  */
#define DPORT_APP_TG1_T1_EDGE_INT_MAP_APP_TG1_T1_EDGE_INT_MAP_Msb	0u
#define DPORT_APP_TG1_T1_EDGE_INT_MAP_APP_TG1_T1_EDGE_INT_MAP_Lsb	4u

	/* 0x318:  */
	uint32_t volatile APP_TG1_WDT_EDGE_INT_MAP;
	/*  */
#define DPORT_APP_TG1_WDT_EDGE_INT_MAP_APP_TG1_WDT_EDGE_INT_MAP_Msb	0u
#define DPORT_APP_TG1_WDT_EDGE_INT_MAP_APP_TG1_WDT_EDGE_INT_MAP_Lsb	4u

	/* 0x31C:  */
	uint32_t volatile APP_TG1_LACT_EDGE_INT_MAP;
	/*  */
#define DPORT_APP_TG1_LACT_EDGE_INT_MAP_APP_TG1_LACT_EDGE_INT_MAP_Msb	0u
#define DPORT_APP_TG1_LACT_EDGE_INT_MAP_APP_TG1_LACT_EDGE_INT_MAP_Lsb	4u

	/* 0x320:  */
	uint32_t volatile APP_MMU_IA_INT_MAP;
	/*  */
#define DPORT_APP_MMU_IA_INT_MAP_APP_MMU_IA_INT_MAP_Msb		0u
#define DPORT_APP_MMU_IA_INT_MAP_APP_MMU_IA_INT_MAP_Lsb		4u

	/* 0x324:  */
	uint32_t volatile APP_MPU_IA_INT_MAP;
	/*  */
#define DPORT_APP_MPU_IA_INT_MAP_APP_MPU_IA_INT_MAP_Msb		0u
#define DPORT_APP_MPU_IA_INT_MAP_APP_MPU_IA_INT_MAP_Lsb		4u

	/* 0x328:  */
	uint32_t volatile APP_CACHE_IA_INT_MAP;
	/*  */
#define DPORT_APP_CACHE_IA_INT_MAP_APP_CACHE_IA_INT_MAP_Msb	0u
#define DPORT_APP_CACHE_IA_INT_MAP_APP_CACHE_IA_INT_MAP_Lsb	4u

	/* 0x32C:  */
	uint32_t volatile AHBLITE_MPU_TABLE_UART;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_UART_UART_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_UART_UART_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x330:  */
	uint32_t volatile AHBLITE_MPU_TABLE_SPI1;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_SPI1_SPI1_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_SPI1_SPI1_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x334:  */
	uint32_t volatile AHBLITE_MPU_TABLE_SPI0;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_SPI0_SPI0_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_SPI0_SPI0_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x338:  */
	uint32_t volatile AHBLITE_MPU_TABLE_GPIO;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_GPIO_GPIO_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_GPIO_GPIO_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x33C:  */
	uint32_t volatile AHBLITE_MPU_TABLE_FE2;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_FE2_FE2_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_FE2_FE2_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x340:  */
	uint32_t volatile AHBLITE_MPU_TABLE_FE;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_FE_FE_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_FE_FE_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x344:  */
	uint32_t volatile AHBLITE_MPU_TABLE_TIMER;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_TIMER_TIMER_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_TIMER_TIMER_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x348:  */
	uint32_t volatile AHBLITE_MPU_TABLE_RTC;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_RTC_RTC_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_RTC_RTC_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x34C:  */
	uint32_t volatile AHBLITE_MPU_TABLE_IO_MUX;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_IO_MUX_IOMUX_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_IO_MUX_IOMUX_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x350:  */
	uint32_t volatile AHBLITE_MPU_TABLE_WDG;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_WDG_WDG_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_WDG_WDG_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x354:  */
	uint32_t volatile AHBLITE_MPU_TABLE_HINF;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_HINF_HINF_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_HINF_HINF_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x358:  */
	uint32_t volatile AHBLITE_MPU_TABLE_UHCI1;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_UHCI1_UHCI1_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_UHCI1_UHCI1_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x35C:  */
	uint32_t volatile AHBLITE_MPU_TABLE_MISC;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_MISC_MISC_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_MISC_MISC_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x360:  */
	uint32_t volatile AHBLITE_MPU_TABLE_I2C;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_I2C_I2C_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_I2C_I2C_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x364:  */
	uint32_t volatile AHBLITE_MPU_TABLE_I2S0;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_I2S0_I2S0_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_I2S0_I2S0_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x368:  */
	uint32_t volatile AHBLITE_MPU_TABLE_UART1;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_UART1_UART1_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_UART1_UART1_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x36C:  */
	uint32_t volatile AHBLITE_MPU_TABLE_BT;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_BT_BT_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_BT_BT_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x370:  */
	uint32_t volatile AHBLITE_MPU_TABLE_BT_BUFFER;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_BT_BUFFER_BTBUFFER_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_BT_BUFFER_BTBUFFER_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x374:  */
	uint32_t volatile AHBLITE_MPU_TABLE_I2C_EXT0;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_I2C_EXT0_I2CEXT0_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_I2C_EXT0_I2CEXT0_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x378:  */
	uint32_t volatile AHBLITE_MPU_TABLE_UHCI0;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_UHCI0_UHCI0_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_UHCI0_UHCI0_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x37C:  */
	uint32_t volatile AHBLITE_MPU_TABLE_SLCHOST;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_SLCHOST_SLCHOST_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_SLCHOST_SLCHOST_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x380:  */
	uint32_t volatile AHBLITE_MPU_TABLE_RMT;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_RMT_RMT_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_RMT_RMT_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x384:  */
	uint32_t volatile AHBLITE_MPU_TABLE_PCNT;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_PCNT_PCNT_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_PCNT_PCNT_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x388:  */
	uint32_t volatile AHBLITE_MPU_TABLE_SLC;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_SLC_SLC_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_SLC_SLC_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x38C:  */
	uint32_t volatile AHBLITE_MPU_TABLE_LEDC;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_LEDC_LEDC_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_LEDC_LEDC_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x390:  */
	uint32_t volatile AHBLITE_MPU_TABLE_EFUSE;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_EFUSE_EFUSE_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_EFUSE_EFUSE_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x394:  */
	uint32_t volatile AHBLITE_MPU_TABLE_SPI_ENCRYPT;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_SPI_ENCRYPT_SPI_ENCRYPY_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_SPI_ENCRYPT_SPI_ENCRYPY_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x398:  */
	uint32_t volatile AHBLITE_MPU_TABLE_BB;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_BB_BB_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_BB_BB_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x39C:  */
	uint32_t volatile AHBLITE_MPU_TABLE_PWM0;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_PWM0_PWM0_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_PWM0_PWM0_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x3A0:  */
	uint32_t volatile AHBLITE_MPU_TABLE_TIMERGROUP;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_TIMERGROUP_TIMERGROUP_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_TIMERGROUP_TIMERGROUP_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x3A4:  */
	uint32_t volatile AHBLITE_MPU_TABLE_TIMERGROUP1;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_TIMERGROUP1_TIMERGROUP1_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_TIMERGROUP1_TIMERGROUP1_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x3A8:  */
	uint32_t volatile AHBLITE_MPU_TABLE_SPI2;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_SPI2_SPI2_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_SPI2_SPI2_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x3AC:  */
	uint32_t volatile AHBLITE_MPU_TABLE_SPI3;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_SPI3_SPI3_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_SPI3_SPI3_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x3B0:  */
	uint32_t volatile AHBLITE_MPU_TABLE_APB_CTRL;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_APB_CTRL_APBCTRL_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_APB_CTRL_APBCTRL_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x3B4:  */
	uint32_t volatile AHBLITE_MPU_TABLE_I2C_EXT1;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_I2C_EXT1_I2CEXT1_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_I2C_EXT1_I2CEXT1_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x3B8:  */
	uint32_t volatile AHBLITE_MPU_TABLE_SDIO_HOST;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_SDIO_HOST_SDIOHOST_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_SDIO_HOST_SDIOHOST_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x3BC:  */
	uint32_t volatile AHBLITE_MPU_TABLE_EMAC;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_EMAC_EMAC_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_EMAC_EMAC_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x3C0:  */
	uint32_t volatile AHBLITE_MPU_TABLE_CAN;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_CAN_CAN_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_CAN_CAN_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x3C4:  */
	uint32_t volatile AHBLITE_MPU_TABLE_PWM1;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_PWM1_PWM1_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_PWM1_PWM1_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x3C8:  */
	uint32_t volatile AHBLITE_MPU_TABLE_I2S1;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_I2S1_I2S1_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_I2S1_I2S1_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x3CC:  */
	uint32_t volatile AHBLITE_MPU_TABLE_UART2;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_UART2_UART2_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_UART2_UART2_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x3D0:  */
	uint32_t volatile AHBLITE_MPU_TABLE_PWM2;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_PWM2_PWM2_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_PWM2_PWM2_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x3D4:  */
	uint32_t volatile AHBLITE_MPU_TABLE_PWM3;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_PWM3_PWM3_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_PWM3_PWM3_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x3D8:  */
	uint32_t volatile AHBLITE_MPU_TABLE_RWBT;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_RWBT_RWBT_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_RWBT_RWBT_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x3DC:  */
	uint32_t volatile AHBLITE_MPU_TABLE_BTMAC;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_BTMAC_BTMAC_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_BTMAC_BTMAC_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x3E0:  */
	uint32_t volatile AHBLITE_MPU_TABLE_WIFIMAC;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_WIFIMAC_WIFIMAC_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_WIFIMAC_WIFIMAC_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x3E4:  */
	uint32_t volatile AHBLITE_MPU_TABLE_PWR;
	/*  */
#define DPORT_AHBLITE_MPU_TABLE_PWR_PWR_ACCESS_GRANT_CONFIG_Msb	0u
#define DPORT_AHBLITE_MPU_TABLE_PWR_PWR_ACCESS_GRANT_CONFIG_Lsb	5u

	/* 0x3E8:  */
	uint32_t volatile MEM_ACCESS_DBUG0;
	/*  */
#define DPORT_MEM_ACCESS_DBUG0_PRO_ROM_MPU_AD			0u
	/*  */
#define DPORT_MEM_ACCESS_DBUG0_PRO_ROM_IA			1u
	/*  */
#define DPORT_MEM_ACCESS_DBUG0_APP_ROM_MPU_AD			2u
	/*  */
#define DPORT_MEM_ACCESS_DBUG0_APP_ROM_IA			3u
	/*  */
#define DPORT_MEM_ACCESS_DBUG0_SHARE_ROM_MPU_AD_Msb		4u
#define DPORT_MEM_ACCESS_DBUG0_SHARE_ROM_MPU_AD_Lsb		5u
	/*  */
#define DPORT_MEM_ACCESS_DBUG0_SHARE_ROM_IA_Msb			6u
#define DPORT_MEM_ACCESS_DBUG0_SHARE_ROM_IA_Lsb			9u
	/*  */
#define DPORT_MEM_ACCESS_DBUG0_INTERNAL_SRAM_MMU_AD_Msb		10u
#define DPORT_MEM_ACCESS_DBUG0_INTERNAL_SRAM_MMU_AD_Lsb		13u
	/*  */
#define DPORT_MEM_ACCESS_DBUG0_INTERNAL_SRAM_IA_Msb		14u
#define DPORT_MEM_ACCESS_DBUG0_INTERNAL_SRAM_IA_Lsb		25u
	/*  */
#define DPORT_MEM_ACCESS_DBUG0_INTERNAL_SRAM_MMU_MULTI_HIT_Msb	26u
#define DPORT_MEM_ACCESS_DBUG0_INTERNAL_SRAM_MMU_MULTI_HIT_Lsb	29u

	/* 0x3EC:  */
	uint32_t volatile MEM_ACCESS_DBUG1;
	/*  */
#define DPORT_MEM_ACCESS_DBUG1_INTERNAL_SRAM_MMU_MISS_Msb	0u
#define DPORT_MEM_ACCESS_DBUG1_INTERNAL_SRAM_MMU_MISS_Lsb	3u
	/*  */
#define DPORT_MEM_ACCESS_DBUG1_ARB_IA_Msb			4u
#define DPORT_MEM_ACCESS_DBUG1_ARB_IA_Lsb			5u
	/*  */
#define DPORT_MEM_ACCESS_DBUG1_PIDGEN_IA_Msb			6u
#define DPORT_MEM_ACCESS_DBUG1_PIDGEN_IA_Lsb			7u
	/*  */
#define DPORT_MEM_ACCESS_DBUG1_AHB_ACCESS_DENY			8u
	/*  */
#define DPORT_MEM_ACCESS_DBUG1_AHBLITE_ACCESS_DENY		9u
	/*  */
#define DPORT_MEM_ACCESS_DBUG1_AHBLITE_IA			10u

	/* 0x3F0:  */
	uint32_t volatile PRO_DCACHE_DBUG0;
	/*  */
#define DPORT_PRO_DCACHE_DBUG0_PRO_SLAVE_WDATA			0u
	/*  */
#define DPORT_PRO_DCACHE_DBUG0_PRO_CACHE_MMU_IA			0u
	/*  */
#define DPORT_PRO_DCACHE_DBUG0_PRO_CACHE_IA_Msb			1u
#define DPORT_PRO_DCACHE_DBUG0_PRO_CACHE_IA_Lsb			6u
	/*  */
#define DPORT_PRO_DCACHE_DBUG0_PRO_CACHE_STATE_Msb		7u
#define DPORT_PRO_DCACHE_DBUG0_PRO_CACHE_STATE_Lsb		18u
	/*  */
#define DPORT_PRO_DCACHE_DBUG0_PRO_WR_BAK_TO_READ		19u
	/*  */
#define DPORT_PRO_DCACHE_DBUG0_PRO_TX_END			20u
	/*  */
#define DPORT_PRO_DCACHE_DBUG0_PRO_SLAVE_WR			21u
	/*  */
#define DPORT_PRO_DCACHE_DBUG0_PRO_SLAVE_WDATA_V		22u
	/*  */
#define DPORT_PRO_DCACHE_DBUG0_PRO_RX_END			23u

	/* 0x3F4:  */
	uint32_t volatile PRO_DCACHE_DBUG1;
	/*  */
#define DPORT_PRO_DCACHE_DBUG1_PRO_CTAG_RAM_RDATA_Msb		0u
#define DPORT_PRO_DCACHE_DBUG1_PRO_CTAG_RAM_RDATA_Lsb		31u

	/* 0x3F8:  */
	uint32_t volatile PRO_DCACHE_DBUG2;
	/*  */
#define DPORT_PRO_DCACHE_DBUG2_PRO_CACHE_VADDR_Msb		0u
#define DPORT_PRO_DCACHE_DBUG2_PRO_CACHE_VADDR_Lsb		26u

	/* 0x3FC:  */
	uint32_t volatile PRO_DCACHE_DBUG3;
	/*  */
#define DPORT_PRO_DCACHE_DBUG3_PRO_MMU_RDATA_Msb		0u
#define DPORT_PRO_DCACHE_DBUG3_PRO_MMU_RDATA_Lsb		8u
	/*  */
#define DPORT_PRO_DCACHE_DBUG3_PRO_CPU_DISABLED_CACHE_IA_Msb	9u
#define DPORT_PRO_DCACHE_DBUG3_PRO_CPU_DISABLED_CACHE_IA_Lsb	14u
	/*  */
#define DPORT_PRO_DCACHE_DBUG3_PRO_CPU_DISABLED_CACHE_IA_OPPOSITE	9u
	/*  */
#define DPORT_PRO_DCACHE_DBUG3_PRO_CPU_DISABLED_CACHE_IA_DRAM1	10u
	/*  */
#define DPORT_PRO_DCACHE_DBUG3_PRO_CPU_DISABLED_CACHE_IA_IROM0	11u
	/*  */
#define DPORT_PRO_DCACHE_DBUG3_PRO_CPU_DISABLED_CACHE_IA_IRAM1	12u
	/*  */
#define DPORT_PRO_DCACHE_DBUG3_PRO_CPU_DISABLED_CACHE_IA_IRAM0	13u
	/*  */
#define DPORT_PRO_DCACHE_DBUG3_PRO_CPU_DISABLED_CACHE_IA_DROM0	14u
	/*  */
#define DPORT_PRO_DCACHE_DBUG3_PRO_CACHE_IRAM0_PID_ERROR	15u

	/* 0x400:  */
	uint32_t volatile PRO_DCACHE_DBUG4;
	/*  */
#define DPORT_PRO_DCACHE_DBUG4_PRO_DRAM1ADDR0_IA_Msb		0u
#define DPORT_PRO_DCACHE_DBUG4_PRO_DRAM1ADDR0_IA_Lsb		19u

	/* 0x404:  */
	uint32_t volatile PRO_DCACHE_DBUG5;
	/*  */
#define DPORT_PRO_DCACHE_DBUG5_PRO_DROM0ADDR0_IA_Msb		0u
#define DPORT_PRO_DCACHE_DBUG5_PRO_DROM0ADDR0_IA_Lsb		19u

	/* 0x408:  */
	uint32_t volatile PRO_DCACHE_DBUG6;
	/*  */
#define DPORT_PRO_DCACHE_DBUG6_PRO_IRAM0ADDR_IA_Msb		0u
#define DPORT_PRO_DCACHE_DBUG6_PRO_IRAM0ADDR_IA_Lsb		19u

	/* 0x40C:  */
	uint32_t volatile PRO_DCACHE_DBUG7;
	/*  */
#define DPORT_PRO_DCACHE_DBUG7_PRO_IRAM1ADDR_IA_Msb		0u
#define DPORT_PRO_DCACHE_DBUG7_PRO_IRAM1ADDR_IA_Lsb		19u

	/* 0x410:  */
	uint32_t volatile PRO_DCACHE_DBUG8;
	/*  */
#define DPORT_PRO_DCACHE_DBUG8_PRO_IROM0ADDR_IA_Msb		0u
#define DPORT_PRO_DCACHE_DBUG8_PRO_IROM0ADDR_IA_Lsb		19u

	/* 0x414:  */
	uint32_t volatile PRO_DCACHE_DBUG9;
	/*  */
#define DPORT_PRO_DCACHE_DBUG9_PRO_OPSDRAMADDR_IA_Msb		0u
#define DPORT_PRO_DCACHE_DBUG9_PRO_OPSDRAMADDR_IA_Lsb		19u

	/* 0x418:  */
	uint32_t volatile APP_DCACHE_DBUG0;
	/*  */
#define DPORT_APP_DCACHE_DBUG0_APP_SLAVE_WDATA			0u
	/*  */
#define DPORT_APP_DCACHE_DBUG0_APP_CACHE_MMU_IA			0u
	/*  */
#define DPORT_APP_DCACHE_DBUG0_APP_CACHE_IA_Msb			1u
#define DPORT_APP_DCACHE_DBUG0_APP_CACHE_IA_Lsb			6u
	/*  */
#define DPORT_APP_DCACHE_DBUG0_APP_CACHE_STATE_Msb		7u
#define DPORT_APP_DCACHE_DBUG0_APP_CACHE_STATE_Lsb		18u
	/*  */
#define DPORT_APP_DCACHE_DBUG0_APP_WR_BAK_TO_READ		19u
	/*  */
#define DPORT_APP_DCACHE_DBUG0_APP_TX_END			20u
	/*  */
#define DPORT_APP_DCACHE_DBUG0_APP_SLAVE_WR			21u
	/*  */
#define DPORT_APP_DCACHE_DBUG0_APP_SLAVE_WDATA_V		22u
	/*  */
#define DPORT_APP_DCACHE_DBUG0_APP_RX_END			23u

	/* 0x41C:  */
	uint32_t volatile APP_DCACHE_DBUG1;
	/*  */
#define DPORT_APP_DCACHE_DBUG1_APP_CTAG_RAM_RDATA_Msb		0u
#define DPORT_APP_DCACHE_DBUG1_APP_CTAG_RAM_RDATA_Lsb		31u

	/* 0x420:  */
	uint32_t volatile APP_DCACHE_DBUG2;
	/*  */
#define DPORT_APP_DCACHE_DBUG2_APP_CACHE_VADDR_Msb		0u
#define DPORT_APP_DCACHE_DBUG2_APP_CACHE_VADDR_Lsb		26u

	/* 0x424:  */
	uint32_t volatile APP_DCACHE_DBUG3;
	/*  */
#define DPORT_APP_DCACHE_DBUG3_APP_MMU_RDATA_Msb		0u
#define DPORT_APP_DCACHE_DBUG3_APP_MMU_RDATA_Lsb		8u
	/*  */
#define DPORT_APP_DCACHE_DBUG3_APP_CPU_DISABLED_CACHE_IA_Msb	9u
#define DPORT_APP_DCACHE_DBUG3_APP_CPU_DISABLED_CACHE_IA_Lsb	14u
	/*  */
#define DPORT_APP_DCACHE_DBUG3_APP_CPU_DISABLED_CACHE_IA_OPPOSITE	9u
	/*  */
#define DPORT_APP_DCACHE_DBUG3_APP_CPU_DISABLED_CACHE_IA_DRAM1	10u
	/*  */
#define DPORT_APP_DCACHE_DBUG3_APP_CPU_DISABLED_CACHE_IA_IROM0	11u
	/*  */
#define DPORT_APP_DCACHE_DBUG3_APP_CPU_DISABLED_CACHE_IA_IRAM1	12u
	/*  */
#define DPORT_APP_DCACHE_DBUG3_APP_CPU_DISABLED_CACHE_IA_IRAM0	13u
	/*  */
#define DPORT_APP_DCACHE_DBUG3_APP_CPU_DISABLED_CACHE_IA_DROM0	14u
	/*  */
#define DPORT_APP_DCACHE_DBUG3_APP_CACHE_IRAM0_PID_ERROR	15u

	/* 0x428:  */
	uint32_t volatile APP_DCACHE_DBUG4;
	/*  */
#define DPORT_APP_DCACHE_DBUG4_APP_DRAM1ADDR0_IA_Msb		0u
#define DPORT_APP_DCACHE_DBUG4_APP_DRAM1ADDR0_IA_Lsb		19u

	/* 0x42C:  */
	uint32_t volatile APP_DCACHE_DBUG5;
	/*  */
#define DPORT_APP_DCACHE_DBUG5_APP_DROM0ADDR0_IA_Msb		0u
#define DPORT_APP_DCACHE_DBUG5_APP_DROM0ADDR0_IA_Lsb		19u

	/* 0x430:  */
	uint32_t volatile APP_DCACHE_DBUG6;
	/*  */
#define DPORT_APP_DCACHE_DBUG6_APP_IRAM0ADDR_IA_Msb		0u
#define DPORT_APP_DCACHE_DBUG6_APP_IRAM0ADDR_IA_Lsb		19u

	/* 0x434:  */
	uint32_t volatile APP_DCACHE_DBUG7;
	/*  */
#define DPORT_APP_DCACHE_DBUG7_APP_IRAM1ADDR_IA_Msb		0u
#define DPORT_APP_DCACHE_DBUG7_APP_IRAM1ADDR_IA_Lsb		19u

	/* 0x438:  */
	uint32_t volatile APP_DCACHE_DBUG8;
	/*  */
#define DPORT_APP_DCACHE_DBUG8_APP_IROM0ADDR_IA_Msb		0u
#define DPORT_APP_DCACHE_DBUG8_APP_IROM0ADDR_IA_Lsb		19u

	/* 0x43C:  */
	uint32_t volatile APP_DCACHE_DBUG9;
	/*  */
#define DPORT_APP_DCACHE_DBUG9_APP_OPSDRAMADDR_IA_Msb		0u
#define DPORT_APP_DCACHE_DBUG9_APP_OPSDRAMADDR_IA_Lsb		19u

	/* 0x440:  */
	uint32_t volatile PRO_CPU_RECORD_CTRL;
	/*  */
#define DPORT_PRO_CPU_RECORD_CTRL_PRO_CPU_RECORD_ENABLE		0u
	/*  */
#define DPORT_PRO_CPU_RECORD_CTRL_PRO_CPU_RECORD_DISABLE	4u
	/*  */
#define DPORT_PRO_CPU_RECORD_CTRL_PRO_CPU_PDEBUG_ENABLE		8u

	/* 0x444:  */
	uint32_t volatile PRO_CPU_RECORD_STATUS;
	/*  */
#define DPORT_PRO_CPU_RECORD_STATUS_PRO_CPU_RECORDING		0u

	/* 0x448:  */
	uint32_t volatile PRO_CPU_RECORD_PID;
	/*  */
#define DPORT_PRO_CPU_RECORD_PID_RECORD_PRO_PID_Msb		0u
#define DPORT_PRO_CPU_RECORD_PID_RECORD_PRO_PID_Lsb		2u

	/* 0x44C:  */
	uint32_t volatile PRO_CPU_RECORD_PDEBUGINST;
	/*  */
#define DPORT_PRO_CPU_RECORD_PDEBUGINST_RECORD_PRO_PDEBUGINST_Msb	0u
#define DPORT_PRO_CPU_RECORD_PDEBUGINST_RECORD_PRO_PDEBUGINST_Lsb	31u
	/*  */
#define DPORT_PRO_CPU_RECORD_PDEBUGINST_RECORD_PDEBUGINST_SZ_Msb	0u
#define DPORT_PRO_CPU_RECORD_PDEBUGINST_RECORD_PDEBUGINST_SZ_Lsb	7u
	/*  */
#define DPORT_PRO_CPU_RECORD_PDEBUGINST_RECORD_PDEBUGINST_ISRC_Msb	12u
#define DPORT_PRO_CPU_RECORD_PDEBUGINST_RECORD_PDEBUGINST_ISRC_Lsb	14u
	/*  */
#define DPORT_PRO_CPU_RECORD_PDEBUGINST_RECORD_PDEBUGINST_CINTL_Msb	24u
#define DPORT_PRO_CPU_RECORD_PDEBUGINST_RECORD_PDEBUGINST_CINTL_Lsb	27u

	/* 0x450:  */
	uint32_t volatile PRO_CPU_RECORD_PDEBUGSTATUS;
	/*  */
#define DPORT_PRO_CPU_RECORD_PDEBUGSTATUS_RECORD_PRO_PDEBUGSTATUS_Msb	0u
#define DPORT_PRO_CPU_RECORD_PDEBUGSTATUS_RECORD_PRO_PDEBUGSTATUS_Lsb	7u
	/*  */
#define DPORT_PRO_CPU_RECORD_PDEBUGSTATUS_RECORD_PDEBUGSTATUS_BBCAUSE_Msb	0u
#define DPORT_PRO_CPU_RECORD_PDEBUGSTATUS_RECORD_PDEBUGSTATUS_BBCAUSE_Lsb	5u
	/*  */
#define DPORT_PRO_CPU_RECORD_PDEBUGSTATUS_RECORD_PDEBUGSTATUS_INSNTYPE_Msb	0u
#define DPORT_PRO_CPU_RECORD_PDEBUGSTATUS_RECORD_PDEBUGSTATUS_INSNTYPE_Lsb	5u

	/* 0x454:  */
	uint32_t volatile PRO_CPU_RECORD_PDEBUGDATA;
	/*  */
#define DPORT_PRO_CPU_RECORD_PDEBUGDATA_RECORD_PRO_PDEBUGDATA_Msb	0u
#define DPORT_PRO_CPU_RECORD_PDEBUGDATA_RECORD_PRO_PDEBUGDATA_Lsb	31u
	/*  */
#define DPORT_PRO_CPU_RECORD_PDEBUGDATA_RECORD_PDEBUGDATA_EXCVEC_Msb	0u
#define DPORT_PRO_CPU_RECORD_PDEBUGDATA_RECORD_PDEBUGDATA_EXCVEC_Lsb	4u
	/*  */
#define DPORT_PRO_CPU_RECORD_PDEBUGDATA_RECORD_PDEBUGDATA_INSNTYPE_SR_Msb	0u
#define DPORT_PRO_CPU_RECORD_PDEBUGDATA_RECORD_PDEBUGDATA_INSNTYPE_SR_Lsb	7u
	/*  */
#define DPORT_PRO_CPU_RECORD_PDEBUGDATA_RECORD_PDEBUGDATA_INSNTYPE_ER_Msb	2u
#define DPORT_PRO_CPU_RECORD_PDEBUGDATA_RECORD_PDEBUGDATA_INSNTYPE_ER_Lsb	13u
	/*  */
#define DPORT_PRO_CPU_RECORD_PDEBUGDATA_RECORD_PDEBUGDATA_EXCCAUSE_Msb	16u
#define DPORT_PRO_CPU_RECORD_PDEBUGDATA_RECORD_PDEBUGDATA_EXCCAUSE_Lsb	21u

	/* 0x458:  */
	uint32_t volatile PRO_CPU_RECORD_PDEBUGPC;
	/*  */
#define DPORT_PRO_CPU_RECORD_PDEBUGPC_RECORD_PRO_PDEBUGPC_Msb	0u
#define DPORT_PRO_CPU_RECORD_PDEBUGPC_RECORD_PRO_PDEBUGPC_Lsb	31u

	/* 0x45C:  */
	uint32_t volatile PRO_CPU_RECORD_PDEBUGLS0STAT;
	/*  */
#define DPORT_PRO_CPU_RECORD_PDEBUGLS0STAT_RECORD_PRO_PDEBUGLS0STAT_Msb	0u
#define DPORT_PRO_CPU_RECORD_PDEBUGLS0STAT_RECORD_PRO_PDEBUGLS0STAT_Lsb	31u
	/*  */
#define DPORT_PRO_CPU_RECORD_PDEBUGLS0STAT_RECORD_PDEBUGLS0STAT_TYPE_Msb	0u
#define DPORT_PRO_CPU_RECORD_PDEBUGLS0STAT_RECORD_PDEBUGLS0STAT_TYPE_Lsb	3u
	/*  */
#define DPORT_PRO_CPU_RECORD_PDEBUGLS0STAT_RECORD_PDEBUGLS0STAT_SZ_Msb	4u
#define DPORT_PRO_CPU_RECORD_PDEBUGLS0STAT_RECORD_PDEBUGLS0STAT_SZ_Lsb	7u
	/*  */
#define DPORT_PRO_CPU_RECORD_PDEBUGLS0STAT_RECORD_PDEBUGLS0STAT_STCOH_Msb	17u
#define DPORT_PRO_CPU_RECORD_PDEBUGLS0STAT_RECORD_PDEBUGLS0STAT_STCOH_Lsb	18u
	/*  */
#define DPORT_PRO_CPU_RECORD_PDEBUGLS0STAT_RECORD_PDEBUGLS0STAT_TGT_Msb	20u
#define DPORT_PRO_CPU_RECORD_PDEBUGLS0STAT_RECORD_PDEBUGLS0STAT_TGT_Lsb	23u

	/* 0x460:  */
	uint32_t volatile PRO_CPU_RECORD_PDEBUGLS0ADDR;
	/*  */
#define DPORT_PRO_CPU_RECORD_PDEBUGLS0ADDR_RECORD_PRO_PDEBUGLS0ADDR_Msb	0u
#define DPORT_PRO_CPU_RECORD_PDEBUGLS0ADDR_RECORD_PRO_PDEBUGLS0ADDR_Lsb	31u

	/* 0x464:  */
	uint32_t volatile PRO_CPU_RECORD_PDEBUGLS0DATA;
	/*  */
#define DPORT_PRO_CPU_RECORD_PDEBUGLS0DATA_RECORD_PRO_PDEBUGLS0DATA_Msb	0u
#define DPORT_PRO_CPU_RECORD_PDEBUGLS0DATA_RECORD_PRO_PDEBUGLS0DATA_Lsb	31u

	/* 0x468:  */
	uint32_t volatile APP_CPU_RECORD_CTRL;
	/*  */
#define DPORT_APP_CPU_RECORD_CTRL_APP_CPU_RECORD_ENABLE		0u
	/*  */
#define DPORT_APP_CPU_RECORD_CTRL_APP_CPU_RECORD_DISABLE	4u
	/*  */
#define DPORT_APP_CPU_RECORD_CTRL_APP_CPU_PDEBUG_ENABLE		8u

	/* 0x46C:  */
	uint32_t volatile APP_CPU_RECORD_STATUS;
	/*  */
#define DPORT_APP_CPU_RECORD_STATUS_APP_CPU_RECORDING		0u

	/* 0x470:  */
	uint32_t volatile APP_CPU_RECORD_PID;
	/*  */
#define DPORT_APP_CPU_RECORD_PID_RECORD_APP_PID_Msb		0u
#define DPORT_APP_CPU_RECORD_PID_RECORD_APP_PID_Lsb		2u

	/* 0x474:  */
	uint32_t volatile APP_CPU_RECORD_PDEBUGINST;
	/*  */
#define DPORT_APP_CPU_RECORD_PDEBUGINST_RECORD_APP_PDEBUGINST_Msb	0u
#define DPORT_APP_CPU_RECORD_PDEBUGINST_RECORD_APP_PDEBUGINST_Lsb	31u

	/* 0x478:  */
	uint32_t volatile APP_CPU_RECORD_PDEBUGSTATUS;
	/*  */
#define DPORT_APP_CPU_RECORD_PDEBUGSTATUS_RECORD_APP_PDEBUGSTATUS_Msb	0u
#define DPORT_APP_CPU_RECORD_PDEBUGSTATUS_RECORD_APP_PDEBUGSTATUS_Lsb	7u

	/* 0x47C:  */
	uint32_t volatile APP_CPU_RECORD_PDEBUGDATA;
	/*  */
#define DPORT_APP_CPU_RECORD_PDEBUGDATA_RECORD_APP_PDEBUGDATA_Msb	0u
#define DPORT_APP_CPU_RECORD_PDEBUGDATA_RECORD_APP_PDEBUGDATA_Lsb	31u

	/* 0x480:  */
	uint32_t volatile APP_CPU_RECORD_PDEBUGPC;
	/*  */
#define DPORT_APP_CPU_RECORD_PDEBUGPC_RECORD_APP_PDEBUGPC_Msb	0u
#define DPORT_APP_CPU_RECORD_PDEBUGPC_RECORD_APP_PDEBUGPC_Lsb	31u

	/* 0x484:  */
	uint32_t volatile APP_CPU_RECORD_PDEBUGLS0STAT;
	/*  */
#define DPORT_APP_CPU_RECORD_PDEBUGLS0STAT_RECORD_APP_PDEBUGLS0STAT_Msb	0u
#define DPORT_APP_CPU_RECORD_PDEBUGLS0STAT_RECORD_APP_PDEBUGLS0STAT_Lsb	31u

	/* 0x488:  */
	uint32_t volatile APP_CPU_RECORD_PDEBUGLS0ADDR;
	/*  */
#define DPORT_APP_CPU_RECORD_PDEBUGLS0ADDR_RECORD_APP_PDEBUGLS0ADDR_Msb	0u
#define DPORT_APP_CPU_RECORD_PDEBUGLS0ADDR_RECORD_APP_PDEBUGLS0ADDR_Lsb	31u

	/* 0x48C:  */
	uint32_t volatile APP_CPU_RECORD_PDEBUGLS0DATA;
	/*  */
#define DPORT_APP_CPU_RECORD_PDEBUGLS0DATA_RECORD_APP_PDEBUGLS0DATA_Msb	0u
#define DPORT_APP_CPU_RECORD_PDEBUGLS0DATA_RECORD_APP_PDEBUGLS0DATA_Lsb	31u

	/* 0x490:  */
	uint32_t volatile RSA_PD_CTRL;
	/*  */
#define DPORT_RSA_PD_CTRL_RSA_PD				0u

	/* 0x494:  */
	uint32_t volatile ROM_MPU_TABLE0;
	/*  */
#define DPORT_ROM_MPU_TABLE0_ROM_MPU_TABLE0_Msb			0u
#define DPORT_ROM_MPU_TABLE0_ROM_MPU_TABLE0_Lsb			1u

	/* 0x498:  */
	uint32_t volatile ROM_MPU_TABLE1;
	/*  */
#define DPORT_ROM_MPU_TABLE1_ROM_MPU_TABLE1_Msb			0u
#define DPORT_ROM_MPU_TABLE1_ROM_MPU_TABLE1_Lsb			1u

	/* 0x49C:  */
	uint32_t volatile ROM_MPU_TABLE2;
	/*  */
#define DPORT_ROM_MPU_TABLE2_ROM_MPU_TABLE2_Msb			0u
#define DPORT_ROM_MPU_TABLE2_ROM_MPU_TABLE2_Lsb			1u

	/* 0x4A0:  */
	uint32_t volatile ROM_MPU_TABLE3;
	/*  */
#define DPORT_ROM_MPU_TABLE3_ROM_MPU_TABLE3_Msb			0u
#define DPORT_ROM_MPU_TABLE3_ROM_MPU_TABLE3_Lsb			1u

	/* 0x4A4:  */
	uint32_t volatile SHROM_MPU_TABLE0;
	/*  */
#define DPORT_SHROM_MPU_TABLE0_SHROM_MPU_TABLE0_Msb		0u
#define DPORT_SHROM_MPU_TABLE0_SHROM_MPU_TABLE0_Lsb		1u

	/* 0x4A8:  */
	uint32_t volatile SHROM_MPU_TABLE1;
	/*  */
#define DPORT_SHROM_MPU_TABLE1_SHROM_MPU_TABLE1_Msb		0u
#define DPORT_SHROM_MPU_TABLE1_SHROM_MPU_TABLE1_Lsb		1u

	/* 0x4AC:  */
	uint32_t volatile SHROM_MPU_TABLE2;
	/*  */
#define DPORT_SHROM_MPU_TABLE2_SHROM_MPU_TABLE2_Msb		0u
#define DPORT_SHROM_MPU_TABLE2_SHROM_MPU_TABLE2_Lsb		1u

	/* 0x4B0:  */
	uint32_t volatile SHROM_MPU_TABLE3;
	/*  */
#define DPORT_SHROM_MPU_TABLE3_SHROM_MPU_TABLE3_Msb		0u
#define DPORT_SHROM_MPU_TABLE3_SHROM_MPU_TABLE3_Lsb		1u

	/* 0x4B4:  */
	uint32_t volatile SHROM_MPU_TABLE4;
	/*  */
#define DPORT_SHROM_MPU_TABLE4_SHROM_MPU_TABLE4_Msb		0u
#define DPORT_SHROM_MPU_TABLE4_SHROM_MPU_TABLE4_Lsb		1u

	/* 0x4B8:  */
	uint32_t volatile SHROM_MPU_TABLE5;
	/*  */
#define DPORT_SHROM_MPU_TABLE5_SHROM_MPU_TABLE5_Msb		0u
#define DPORT_SHROM_MPU_TABLE5_SHROM_MPU_TABLE5_Lsb		1u

	/* 0x4BC:  */
	uint32_t volatile SHROM_MPU_TABLE6;
	/*  */
#define DPORT_SHROM_MPU_TABLE6_SHROM_MPU_TABLE6_Msb		0u
#define DPORT_SHROM_MPU_TABLE6_SHROM_MPU_TABLE6_Lsb		1u

	/* 0x4C0:  */
	uint32_t volatile SHROM_MPU_TABLE7;
	/*  */
#define DPORT_SHROM_MPU_TABLE7_SHROM_MPU_TABLE7_Msb		0u
#define DPORT_SHROM_MPU_TABLE7_SHROM_MPU_TABLE7_Lsb		1u

	/* 0x4C4:  */
	uint32_t volatile SHROM_MPU_TABLE8;
	/*  */
#define DPORT_SHROM_MPU_TABLE8_SHROM_MPU_TABLE8_Msb		0u
#define DPORT_SHROM_MPU_TABLE8_SHROM_MPU_TABLE8_Lsb		1u

	/* 0x4C8:  */
	uint32_t volatile SHROM_MPU_TABLE9;
	/*  */
#define DPORT_SHROM_MPU_TABLE9_SHROM_MPU_TABLE9_Msb		0u
#define DPORT_SHROM_MPU_TABLE9_SHROM_MPU_TABLE9_Lsb		1u

	/* 0x4CC:  */
	uint32_t volatile SHROM_MPU_TABLE10;
	/*  */
#define DPORT_SHROM_MPU_TABLE10_SHROM_MPU_TABLE10_Msb		0u
#define DPORT_SHROM_MPU_TABLE10_SHROM_MPU_TABLE10_Lsb		1u

	/* 0x4D0:  */
	uint32_t volatile SHROM_MPU_TABLE11;
	/*  */
#define DPORT_SHROM_MPU_TABLE11_SHROM_MPU_TABLE11_Msb		0u
#define DPORT_SHROM_MPU_TABLE11_SHROM_MPU_TABLE11_Lsb		1u

	/* 0x4D4:  */
	uint32_t volatile SHROM_MPU_TABLE12;
	/*  */
#define DPORT_SHROM_MPU_TABLE12_SHROM_MPU_TABLE12_Msb		0u
#define DPORT_SHROM_MPU_TABLE12_SHROM_MPU_TABLE12_Lsb		1u

	/* 0x4D8:  */
	uint32_t volatile SHROM_MPU_TABLE13;
	/*  */
#define DPORT_SHROM_MPU_TABLE13_SHROM_MPU_TABLE13_Msb		0u
#define DPORT_SHROM_MPU_TABLE13_SHROM_MPU_TABLE13_Lsb		1u

	/* 0x4DC:  */
	uint32_t volatile SHROM_MPU_TABLE14;
	/*  */
#define DPORT_SHROM_MPU_TABLE14_SHROM_MPU_TABLE14_Msb		0u
#define DPORT_SHROM_MPU_TABLE14_SHROM_MPU_TABLE14_Lsb		1u

	/* 0x4E0:  */
	uint32_t volatile SHROM_MPU_TABLE15;
	/*  */
#define DPORT_SHROM_MPU_TABLE15_SHROM_MPU_TABLE15_Msb		0u
#define DPORT_SHROM_MPU_TABLE15_SHROM_MPU_TABLE15_Lsb		1u

	/* 0x4E4:  */
	uint32_t volatile SHROM_MPU_TABLE16;
	/*  */
#define DPORT_SHROM_MPU_TABLE16_SHROM_MPU_TABLE16_Msb		0u
#define DPORT_SHROM_MPU_TABLE16_SHROM_MPU_TABLE16_Lsb		1u

	/* 0x4E8:  */
	uint32_t volatile SHROM_MPU_TABLE17;
	/*  */
#define DPORT_SHROM_MPU_TABLE17_SHROM_MPU_TABLE17_Msb		0u
#define DPORT_SHROM_MPU_TABLE17_SHROM_MPU_TABLE17_Lsb		1u

	/* 0x4EC:  */
	uint32_t volatile SHROM_MPU_TABLE18;
	/*  */
#define DPORT_SHROM_MPU_TABLE18_SHROM_MPU_TABLE18_Msb		0u
#define DPORT_SHROM_MPU_TABLE18_SHROM_MPU_TABLE18_Lsb		1u

	/* 0x4F0:  */
	uint32_t volatile SHROM_MPU_TABLE19;
	/*  */
#define DPORT_SHROM_MPU_TABLE19_SHROM_MPU_TABLE19_Msb		0u
#define DPORT_SHROM_MPU_TABLE19_SHROM_MPU_TABLE19_Lsb		1u

	/* 0x4F4:  */
	uint32_t volatile SHROM_MPU_TABLE20;
	/*  */
#define DPORT_SHROM_MPU_TABLE20_SHROM_MPU_TABLE20_Msb		0u
#define DPORT_SHROM_MPU_TABLE20_SHROM_MPU_TABLE20_Lsb		1u

	/* 0x4F8:  */
	uint32_t volatile SHROM_MPU_TABLE21;
	/*  */
#define DPORT_SHROM_MPU_TABLE21_SHROM_MPU_TABLE21_Msb		0u
#define DPORT_SHROM_MPU_TABLE21_SHROM_MPU_TABLE21_Lsb		1u

	/* 0x4FC:  */
	uint32_t volatile SHROM_MPU_TABLE22;
	/*  */
#define DPORT_SHROM_MPU_TABLE22_SHROM_MPU_TABLE22_Msb		0u
#define DPORT_SHROM_MPU_TABLE22_SHROM_MPU_TABLE22_Lsb		1u

	/* 0x500:  */
	uint32_t volatile SHROM_MPU_TABLE23;
	/*  */
#define DPORT_SHROM_MPU_TABLE23_SHROM_MPU_TABLE23_Msb		0u
#define DPORT_SHROM_MPU_TABLE23_SHROM_MPU_TABLE23_Lsb		1u

	/* 0x504:  */
	uint32_t volatile IMMU_TABLE0;
	/*  */
#define DPORT_IMMU_TABLE0_IMMU_TABLE0_Msb			0u
#define DPORT_IMMU_TABLE0_IMMU_TABLE0_Lsb			6u

	/* 0x508:  */
	uint32_t volatile IMMU_TABLE1;
	/*  */
#define DPORT_IMMU_TABLE1_IMMU_TABLE1_Msb			0u
#define DPORT_IMMU_TABLE1_IMMU_TABLE1_Lsb			6u

	/* 0x50C:  */
	uint32_t volatile IMMU_TABLE2;
	/*  */
#define DPORT_IMMU_TABLE2_IMMU_TABLE2_Msb			0u
#define DPORT_IMMU_TABLE2_IMMU_TABLE2_Lsb			6u

	/* 0x510:  */
	uint32_t volatile IMMU_TABLE3;
	/*  */
#define DPORT_IMMU_TABLE3_IMMU_TABLE3_Msb			0u
#define DPORT_IMMU_TABLE3_IMMU_TABLE3_Lsb			6u

	/* 0x514:  */
	uint32_t volatile IMMU_TABLE4;
	/*  */
#define DPORT_IMMU_TABLE4_IMMU_TABLE4_Msb			0u
#define DPORT_IMMU_TABLE4_IMMU_TABLE4_Lsb			6u

	/* 0x518:  */
	uint32_t volatile IMMU_TABLE5;
	/*  */
#define DPORT_IMMU_TABLE5_IMMU_TABLE5_Msb			0u
#define DPORT_IMMU_TABLE5_IMMU_TABLE5_Lsb			6u

	/* 0x51C:  */
	uint32_t volatile IMMU_TABLE6;
	/*  */
#define DPORT_IMMU_TABLE6_IMMU_TABLE6_Msb			0u
#define DPORT_IMMU_TABLE6_IMMU_TABLE6_Lsb			6u

	/* 0x520:  */
	uint32_t volatile IMMU_TABLE7;
	/*  */
#define DPORT_IMMU_TABLE7_IMMU_TABLE7_Msb			0u
#define DPORT_IMMU_TABLE7_IMMU_TABLE7_Lsb			6u

	/* 0x524:  */
	uint32_t volatile IMMU_TABLE8;
	/*  */
#define DPORT_IMMU_TABLE8_IMMU_TABLE8_Msb			0u
#define DPORT_IMMU_TABLE8_IMMU_TABLE8_Lsb			6u

	/* 0x528:  */
	uint32_t volatile IMMU_TABLE9;
	/*  */
#define DPORT_IMMU_TABLE9_IMMU_TABLE9_Msb			0u
#define DPORT_IMMU_TABLE9_IMMU_TABLE9_Lsb			6u

	/* 0x52C:  */
	uint32_t volatile IMMU_TABLE10;
	/*  */
#define DPORT_IMMU_TABLE10_IMMU_TABLE10_Msb			0u
#define DPORT_IMMU_TABLE10_IMMU_TABLE10_Lsb			6u

	/* 0x530:  */
	uint32_t volatile IMMU_TABLE11;
	/*  */
#define DPORT_IMMU_TABLE11_IMMU_TABLE11_Msb			0u
#define DPORT_IMMU_TABLE11_IMMU_TABLE11_Lsb			6u

	/* 0x534:  */
	uint32_t volatile IMMU_TABLE12;
	/*  */
#define DPORT_IMMU_TABLE12_IMMU_TABLE12_Msb			0u
#define DPORT_IMMU_TABLE12_IMMU_TABLE12_Lsb			6u

	/* 0x538:  */
	uint32_t volatile IMMU_TABLE13;
	/*  */
#define DPORT_IMMU_TABLE13_IMMU_TABLE13_Msb			0u
#define DPORT_IMMU_TABLE13_IMMU_TABLE13_Lsb			6u

	/* 0x53C:  */
	uint32_t volatile IMMU_TABLE14;
	/*  */
#define DPORT_IMMU_TABLE14_IMMU_TABLE14_Msb			0u
#define DPORT_IMMU_TABLE14_IMMU_TABLE14_Lsb			6u

	/* 0x540:  */
	uint32_t volatile IMMU_TABLE15;
	/*  */
#define DPORT_IMMU_TABLE15_IMMU_TABLE15_Msb			0u
#define DPORT_IMMU_TABLE15_IMMU_TABLE15_Lsb			6u

	/* 0x544:  */
	uint32_t volatile DMMU_TABLE0;
	/*  */
#define DPORT_DMMU_TABLE0_DMMU_TABLE0_Msb			0u
#define DPORT_DMMU_TABLE0_DMMU_TABLE0_Lsb			6u

	/* 0x548:  */
	uint32_t volatile DMMU_TABLE1;
	/*  */
#define DPORT_DMMU_TABLE1_DMMU_TABLE1_Msb			0u
#define DPORT_DMMU_TABLE1_DMMU_TABLE1_Lsb			6u

	/* 0x54C:  */
	uint32_t volatile DMMU_TABLE2;
	/*  */
#define DPORT_DMMU_TABLE2_DMMU_TABLE2_Msb			0u
#define DPORT_DMMU_TABLE2_DMMU_TABLE2_Lsb			6u

	/* 0x550:  */
	uint32_t volatile DMMU_TABLE3;
	/*  */
#define DPORT_DMMU_TABLE3_DMMU_TABLE3_Msb			0u
#define DPORT_DMMU_TABLE3_DMMU_TABLE3_Lsb			6u

	/* 0x554:  */
	uint32_t volatile DMMU_TABLE4;
	/*  */
#define DPORT_DMMU_TABLE4_DMMU_TABLE4_Msb			0u
#define DPORT_DMMU_TABLE4_DMMU_TABLE4_Lsb			6u

	/* 0x558:  */
	uint32_t volatile DMMU_TABLE5;
	/*  */
#define DPORT_DMMU_TABLE5_DMMU_TABLE5_Msb			0u
#define DPORT_DMMU_TABLE5_DMMU_TABLE5_Lsb			6u

	/* 0x55C:  */
	uint32_t volatile DMMU_TABLE6;
	/*  */
#define DPORT_DMMU_TABLE6_DMMU_TABLE6_Msb			0u
#define DPORT_DMMU_TABLE6_DMMU_TABLE6_Lsb			6u

	/* 0x560:  */
	uint32_t volatile DMMU_TABLE7;
	/*  */
#define DPORT_DMMU_TABLE7_DMMU_TABLE7_Msb			0u
#define DPORT_DMMU_TABLE7_DMMU_TABLE7_Lsb			6u

	/* 0x564:  */
	uint32_t volatile DMMU_TABLE8;
	/*  */
#define DPORT_DMMU_TABLE8_DMMU_TABLE8_Msb			0u
#define DPORT_DMMU_TABLE8_DMMU_TABLE8_Lsb			6u

	/* 0x568:  */
	uint32_t volatile DMMU_TABLE9;
	/*  */
#define DPORT_DMMU_TABLE9_DMMU_TABLE9_Msb			0u
#define DPORT_DMMU_TABLE9_DMMU_TABLE9_Lsb			6u

	/* 0x56C:  */
	uint32_t volatile DMMU_TABLE10;
	/*  */
#define DPORT_DMMU_TABLE10_DMMU_TABLE10_Msb			0u
#define DPORT_DMMU_TABLE10_DMMU_TABLE10_Lsb			6u

	/* 0x570:  */
	uint32_t volatile DMMU_TABLE11;
	/*  */
#define DPORT_DMMU_TABLE11_DMMU_TABLE11_Msb			0u
#define DPORT_DMMU_TABLE11_DMMU_TABLE11_Lsb			6u

	/* 0x574:  */
	uint32_t volatile DMMU_TABLE12;
	/*  */
#define DPORT_DMMU_TABLE12_DMMU_TABLE12_Msb			0u
#define DPORT_DMMU_TABLE12_DMMU_TABLE12_Lsb			6u

	/* 0x578:  */
	uint32_t volatile DMMU_TABLE13;
	/*  */
#define DPORT_DMMU_TABLE13_DMMU_TABLE13_Msb			0u
#define DPORT_DMMU_TABLE13_DMMU_TABLE13_Lsb			6u

	/* 0x57C:  */
	uint32_t volatile DMMU_TABLE14;
	/*  */
#define DPORT_DMMU_TABLE14_DMMU_TABLE14_Msb			0u
#define DPORT_DMMU_TABLE14_DMMU_TABLE14_Lsb			6u

	/* 0x580:  */
	uint32_t volatile DMMU_TABLE15;
	/*  */
#define DPORT_DMMU_TABLE15_DMMU_TABLE15_Msb			0u
#define DPORT_DMMU_TABLE15_DMMU_TABLE15_Lsb			6u

	/* 0x584:  */
	uint32_t volatile PRO_INTRUSION_CTRL;
	/*  */
#define DPORT_PRO_INTRUSION_CTRL_PRO_INTRUSION_RECORD_RESET_N	0u

	/* 0x588:  */
	uint32_t volatile PRO_INTRUSION_STATUS;
	/*  */
#define DPORT_PRO_INTRUSION_STATUS_PRO_INTRUSION_RECORD_Msb	0u
#define DPORT_PRO_INTRUSION_STATUS_PRO_INTRUSION_RECORD_Lsb	3u

	/* 0x58C:  */
	uint32_t volatile APP_INTRUSION_CTRL;
	/*  */
#define DPORT_APP_INTRUSION_CTRL_APP_INTRUSION_RECORD_RESET_N	0u

	/* 0x590:  */
	uint32_t volatile APP_INTRUSION_STATUS;
	/*  */
#define DPORT_APP_INTRUSION_STATUS_APP_INTRUSION_RECORD_Msb	0u
#define DPORT_APP_INTRUSION_STATUS_APP_INTRUSION_RECORD_Lsb	3u

	/* 0x594:  */
	uint32_t volatile FRONT_END_MEM_PD;
	/*  */
#define DPORT_FRONT_END_MEM_PD_AGC_MEM_FORCE_PU			0u
	/*  */
#define DPORT_FRONT_END_MEM_PD_AGC_MEM_FORCE_PD			1u
	/*  */
#define DPORT_FRONT_END_MEM_PD_PBUS_MEM_FORCE_PU		2u
	/*  */
#define DPORT_FRONT_END_MEM_PD_PBUS_MEM_FORCE_PD		3u

	/* 0x598:  */
	uint32_t volatile MMU_IA_INT_EN;
	/*  */
#define DPORT_MMU_IA_INT_EN_MMU_IA_INT_EN_Msb			0u
#define DPORT_MMU_IA_INT_EN_MMU_IA_INT_EN_Lsb			23u

	/* 0x59C:  */
	uint32_t volatile MPU_IA_INT_EN;
	/*  */
#define DPORT_MPU_IA_INT_EN_MPU_IA_INT_EN_Msb			0u
#define DPORT_MPU_IA_INT_EN_MPU_IA_INT_EN_Lsb			16u

	/* 0x5A0:  */
	uint32_t volatile CACHE_IA_INT_EN;
	/* Interrupt enable bits for various invalid cache access reasons */
#define DPORT_CACHE_IA_INT_EN_CACHE_IA_INT_EN_Msb		0u
#define DPORT_CACHE_IA_INT_EN_CACHE_IA_INT_EN_Lsb		27u
	/* APP CPU invalid access to DROM0 when cache is disabled */
#define DPORT_CACHE_IA_INT_EN_CACHE_IA_INT_APP_DROM0		0u
	/* APP CPU invalid access to IRAM0 when cache is disabled */
#define DPORT_CACHE_IA_INT_EN_CACHE_IA_INT_APP_IRAM0		1u
	/* APP CPU invalid access to IRAM1 when cache is disabled */
#define DPORT_CACHE_IA_INT_EN_CACHE_IA_INT_APP_IRAM1		2u
	/* APP CPU invalid access to IROM0 when cache is disabled */
#define DPORT_CACHE_IA_INT_EN_CACHE_IA_INT_APP_IROM0		3u
	/* APP CPU invalid access to DRAM1 when cache is disabled */
#define DPORT_CACHE_IA_INT_EN_CACHE_IA_INT_APP_DRAM1		4u
	/* APP CPU invalid access to APP CPU cache when cache disabled */
#define DPORT_CACHE_IA_INT_EN_CACHE_IA_INT_APP_OPPOSITE		5u
	/* PRO CPU invalid access to DROM0 when cache is disabled */
#define DPORT_CACHE_IA_INT_EN_CACHE_IA_INT_PRO_DROM0		14u
	/* PRO CPU invalid access to IRAM0 when cache is disabled */
#define DPORT_CACHE_IA_INT_EN_CACHE_IA_INT_PRO_IRAM0		15u
	/* PRO CPU invalid access to IRAM1 when cache is disabled */
#define DPORT_CACHE_IA_INT_EN_CACHE_IA_INT_PRO_IRAM1		16u
	/* PRO CPU invalid access to IROM0 when cache is disabled */
#define DPORT_CACHE_IA_INT_EN_CACHE_IA_INT_PRO_IROM0		17u
	/* PRO CPU invalid access to DRAM1 when cache is disabled */
#define DPORT_CACHE_IA_INT_EN_CACHE_IA_INT_PRO_DRAM1		18u
	/* PRO CPU invalid access to APP CPU cache when cache disabled */
#define DPORT_CACHE_IA_INT_EN_CACHE_IA_INT_PRO_OPPOSITE		19u

	/* 0x5A4:  */
	uint32_t volatile SECURE_BOOT_CTRL;
	/*  */
#define DPORT_SECURE_BOOT_CTRL_SW_BOOTLOADER_SEL		0u

	/* 0x5A8:  */
	uint32_t volatile SPI_DMA_CHAN_SEL;
	/*  */
#define DPORT_SPI_DMA_CHAN_SEL_SPI1_DMA_CHAN_SEL_Msb		0u
#define DPORT_SPI_DMA_CHAN_SEL_SPI1_DMA_CHAN_SEL_Lsb		1u
	/*  */
#define DPORT_SPI_DMA_CHAN_SEL_SPI2_DMA_CHAN_SEL_Msb		2u
#define DPORT_SPI_DMA_CHAN_SEL_SPI2_DMA_CHAN_SEL_Lsb		3u
	/*  */
#define DPORT_SPI_DMA_CHAN_SEL_SPI3_DMA_CHAN_SEL_Msb		4u
#define DPORT_SPI_DMA_CHAN_SEL_SPI3_DMA_CHAN_SEL_Lsb		5u

	/* 0x5AC:  */
	uint32_t volatile PRO_VECBASE_CTRL;
	/*  */
#define DPORT_PRO_VECBASE_CTRL_PRO_OUT_VECBASE_SEL_Msb		0u
#define DPORT_PRO_VECBASE_CTRL_PRO_OUT_VECBASE_SEL_Lsb		1u

	/* 0x5B0:  */
	uint32_t volatile PRO_VECBASE_SET;
	/*  */
#define DPORT_PRO_VECBASE_SET_PRO_OUT_VECBASE_Msb		0u
#define DPORT_PRO_VECBASE_SET_PRO_OUT_VECBASE_Lsb		21u

	/* 0x5B4:  */
	uint32_t volatile APP_VECBASE_CTRL;
	/*  */
#define DPORT_APP_VECBASE_CTRL_APP_OUT_VECBASE_SEL_Msb		0u
#define DPORT_APP_VECBASE_CTRL_APP_OUT_VECBASE_SEL_Lsb		1u

	/* 0x5B8:  */
	uint32_t volatile APP_VECBASE_SET;
	/*  */
#define DPORT_APP_VECBASE_SET_APP_OUT_VECBASE_Msb		0u
#define DPORT_APP_VECBASE_SET_APP_OUT_VECBASE_Lsb		21u

	/* 0x5D8 */
	uint8_t RESERVED0[0xFFC-0x5D8];

	/* 0xFFC:  */
	uint32_t volatile DATE;
	/*  */
#define DPORT_DATE_DATE_Msb					0u
#define DPORT_DATE_DATE_Lsb					27u

};


#define EFUSE ((struct mcu_efuse *)0x3FF5A000)

struct mcu_efuse {

	/* 0x00:  */
	uint32_t volatile BLK0_RDATA0;
	/* read for efuse_wr_disable */
#define EFUSE_BLK0_RDATA0_RD_EFUSE_WR_DIS_Msb			0u
#define EFUSE_BLK0_RDATA0_RD_EFUSE_WR_DIS_Lsb			15u
	/* read for efuse_rd_disable */
#define EFUSE_BLK0_RDATA0_RD_EFUSE_RD_DIS_Msb			16u
#define EFUSE_BLK0_RDATA0_RD_EFUSE_RD_DIS_Lsb			19u
	/* read for flash_crypt_cnt */
#define EFUSE_BLK0_RDATA0_RD_FLASH_CRYPT_CNT_Msb		20u
#define EFUSE_BLK0_RDATA0_RD_FLASH_CRYPT_CNT_Lsb		26u

	/* 0x04:  */
	uint32_t volatile BLK0_RDATA1;
	/* read for low 32bit WIFI_MAC_Address */
#define EFUSE_BLK0_RDATA1_RD_WIFI_MAC_CRC_LOW_Msb		0u
#define EFUSE_BLK0_RDATA1_RD_WIFI_MAC_CRC_LOW_Lsb		31u

	/* 0x08:  */
	uint32_t volatile BLK0_RDATA2;
	/* read for high 24bit WIFI_MAC_Address */
#define EFUSE_BLK0_RDATA2_RD_WIFI_MAC_CRC_HIGH_Msb		0u
#define EFUSE_BLK0_RDATA2_RD_WIFI_MAC_CRC_HIGH_Lsb		23u

	/* 0x0C:  */
	uint32_t volatile BLK0_RDATA3;
	/*  */
#define EFUSE_BLK0_RDATA3_RD_CHIP_VER_DIS_APP_CPU		0u
	/*  */
#define EFUSE_BLK0_RDATA3_RD_CHIP_VER_DIS_BT			1u
	/* most significant bit of chip package */
#define EFUSE_BLK0_RDATA3_RD_CHIP_VER_PKG_4BIT			2u
	/*  */
#define EFUSE_BLK0_RDATA3_RD_CHIP_VER_DIS_CACHE			3u
	/* read for SPI_pad_config_hd */
#define EFUSE_BLK0_RDATA3_RD_SPI_PAD_CONFIG_HD_Msb		4u
#define EFUSE_BLK0_RDATA3_RD_SPI_PAD_CONFIG_HD_Lsb		8u
	/* least significant bits of chip package */
#define EFUSE_BLK0_RDATA3_RD_CHIP_VER_PKG_Msb			9u
#define EFUSE_BLK0_RDATA3_RD_CHIP_VER_PKG_Lsb			11u
	/* If set alongside EFUSE_RD_CHIP_CPU_FREQ_RATED, the ESP32's max CPU frequency is rated for 160MHz. */
#define EFUSE_BLK0_RDATA3_RD_CHIP_CPU_FREQ_LOW			12u
	/* If set, the ESP32's maximum CPU frequency has been rated */
#define EFUSE_BLK0_RDATA3_RD_CHIP_CPU_FREQ_RATED		13u
	/* If set, this bit indicates that BLOCK3[143:96] is reserved for internal use */
#define EFUSE_BLK0_RDATA3_RD_BLK3_PART_RESERVE			14u
	/* bit is set to 1 for rev1 silicon */
#define EFUSE_BLK0_RDATA3_RD_CHIP_VER_REV1			15u

	/* 0x10:  */
	uint32_t volatile BLK0_RDATA4;
	/*  */
#define EFUSE_BLK0_RDATA4_RD_CK8M_FREQ_Msb			0u
#define EFUSE_BLK0_RDATA4_RD_CK8M_FREQ_Lsb			7u
	/* True ADC reference voltage */
#define EFUSE_BLK0_RDATA4_RD_ADC_VREF_Msb			8u
#define EFUSE_BLK0_RDATA4_RD_ADC_VREF_Lsb			12u
	/*  */
#define EFUSE_BLK0_RDATA4_RD_SDIO_DREFH_Msb			8u
#define EFUSE_BLK0_RDATA4_RD_SDIO_DREFH_Lsb			9u
	/*  */
#define EFUSE_BLK0_RDATA4_RD_SDIO_DREFM_Msb			10u
#define EFUSE_BLK0_RDATA4_RD_SDIO_DREFM_Lsb			11u
	/*  */
#define EFUSE_BLK0_RDATA4_RD_SDIO_DREFL_Msb			12u
#define EFUSE_BLK0_RDATA4_RD_SDIO_DREFL_Lsb			13u
	/* read for XPD_SDIO_REG */
#define EFUSE_BLK0_RDATA4_RD_XPD_SDIO				14u
	/* read for SDIO_TIEH */
#define EFUSE_BLK0_RDATA4_RD_SDIO_TIEH				15u
	/* read for sdio_force */
#define EFUSE_BLK0_RDATA4_RD_SDIO_FORCE				16u

	/* 0x14:  */
	uint32_t volatile BLK0_RDATA5;
	/* read for SPI_pad_config_clk */
#define EFUSE_BLK0_RDATA5_RD_SPI_PAD_CONFIG_CLK_Msb		0u
#define EFUSE_BLK0_RDATA5_RD_SPI_PAD_CONFIG_CLK_Lsb		4u
	/* read for SPI_pad_config_q */
#define EFUSE_BLK0_RDATA5_RD_SPI_PAD_CONFIG_Q_Msb		5u
#define EFUSE_BLK0_RDATA5_RD_SPI_PAD_CONFIG_Q_Lsb		9u
	/* read for SPI_pad_config_d */
#define EFUSE_BLK0_RDATA5_RD_SPI_PAD_CONFIG_D_Msb		10u
#define EFUSE_BLK0_RDATA5_RD_SPI_PAD_CONFIG_D_Lsb		14u
	/* read for SPI_pad_config_cs0 */
#define EFUSE_BLK0_RDATA5_RD_SPI_PAD_CONFIG_CS0_Msb		15u
#define EFUSE_BLK0_RDATA5_RD_SPI_PAD_CONFIG_CS0_Lsb		19u
	/*  */
#define EFUSE_BLK0_RDATA5_RD_INST_CONFIG_Msb			20u
#define EFUSE_BLK0_RDATA5_RD_INST_CONFIG_Lsb			27u
	/* This field stores the voltage level for CPU to run at 240 MHz, or for flash/PSRAM to run at 80 MHz.0x0: level 7; 0x1: level 6; 0x2: level 5; 0x3: level 4. (RO) */
#define EFUSE_BLK0_RDATA5_RD_VOL_LEVEL_HP_INV_Msb		22u
#define EFUSE_BLK0_RDATA5_RD_VOL_LEVEL_HP_INV_Lsb		23u
	/*  */
#define EFUSE_BLK0_RDATA5_RD_DIG_VOL_L6_Msb			24u
#define EFUSE_BLK0_RDATA5_RD_DIG_VOL_L6_Lsb			27u
	/* read for flash_crypt_config */
#define EFUSE_BLK0_RDATA5_RD_FLASH_CRYPT_CONFIG_Msb		28u
#define EFUSE_BLK0_RDATA5_RD_FLASH_CRYPT_CONFIG_Lsb		31u

	/* 0x18:  */
	uint32_t volatile BLK0_RDATA6;
	/* read for coding_scheme */
#define EFUSE_BLK0_RDATA6_RD_CODING_SCHEME_Msb			0u
#define EFUSE_BLK0_RDATA6_RD_CODING_SCHEME_Lsb			1u
	/* read for console_debug_disable */
#define EFUSE_BLK0_RDATA6_RD_CONSOLE_DEBUG_DISABLE		2u
	/*  */
#define EFUSE_BLK0_RDATA6_RD_DISABLE_SDIO_HOST			3u
	/* read for abstract_done_0 */
#define EFUSE_BLK0_RDATA6_RD_ABS_DONE_0				4u
	/* read for abstract_done_1 */
#define EFUSE_BLK0_RDATA6_RD_ABS_DONE_1				5u
	/* read for JTAG_disable */
#define EFUSE_BLK0_RDATA6_RD_DISABLE_JTAG			6u
	/* read for download_dis_encrypt */
#define EFUSE_BLK0_RDATA6_RD_DISABLE_DL_ENCRYPT			7u
	/* read for download_dis_decrypt */
#define EFUSE_BLK0_RDATA6_RD_DISABLE_DL_DECRYPT			8u
	/* read for download_dis_cache */
#define EFUSE_BLK0_RDATA6_RD_DISABLE_DL_CACHE			9u
	/* read for key_status */
#define EFUSE_BLK0_RDATA6_RD_KEY_STATUS				10u

	/* 0x1C:  */
	uint32_t volatile BLK0_WDATA0;
	/* program for efuse_wr_disable */
#define EFUSE_BLK0_WDATA0_WR_DIS_Msb				0u
#define EFUSE_BLK0_WDATA0_WR_DIS_Lsb				15u
	/* program for efuse_rd_disable */
#define EFUSE_BLK0_WDATA0_RD_DIS_Msb				16u
#define EFUSE_BLK0_WDATA0_RD_DIS_Lsb				19u
	/* program for flash_crypt_cnt */
#define EFUSE_BLK0_WDATA0_FLASH_CRYPT_CNT_Msb			20u
#define EFUSE_BLK0_WDATA0_FLASH_CRYPT_CNT_Lsb			26u

	/* 0x20:  */
	uint32_t volatile BLK0_WDATA1;
	/* program for low 32bit WIFI_MAC_Address */
#define EFUSE_BLK0_WDATA1_WIFI_MAC_CRC_LOW_Msb			0u
#define EFUSE_BLK0_WDATA1_WIFI_MAC_CRC_LOW_Lsb			31u

	/* 0x24:  */
	uint32_t volatile BLK0_WDATA2;
	/* program for high 24bit WIFI_MAC_Address */
#define EFUSE_BLK0_WDATA2_WIFI_MAC_CRC_HIGH_Msb			0u
#define EFUSE_BLK0_WDATA2_WIFI_MAC_CRC_HIGH_Lsb			23u

	/* 0x28:  */
	uint32_t volatile BLK0_WDATA3;
	/*  */
#define EFUSE_BLK0_WDATA3_CHIP_VER_DIS_APP_CPU			0u
	/*  */
#define EFUSE_BLK0_WDATA3_CHIP_VER_DIS_BT			1u
	/* most significant bit of chip package */
#define EFUSE_BLK0_WDATA3_CHIP_VER_PKG_4BIT			2u
	/*  */
#define EFUSE_BLK0_WDATA3_CHIP_VER_DIS_CACHE			3u
	/* program for SPI_pad_config_hd */
#define EFUSE_BLK0_WDATA3_SPI_PAD_CONFIG_HD_Msb			4u
#define EFUSE_BLK0_WDATA3_SPI_PAD_CONFIG_HD_Lsb			8u
	/* least significant bits of chip package */
#define EFUSE_BLK0_WDATA3_CHIP_VER_PKG_Msb			9u
#define EFUSE_BLK0_WDATA3_CHIP_VER_PKG_Lsb			11u
	/* If set alongside EFUSE_CHIP_CPU_FREQ_RATED, the ESP32's max CPU frequency is rated for 160MHz. */
#define EFUSE_BLK0_WDATA3_CHIP_CPU_FREQ_LOW			12u
	/* If set, the ESP32's maximum CPU frequency has been rated */
#define EFUSE_BLK0_WDATA3_CHIP_CPU_FREQ_RATED			13u
	/* If set, this bit indicates that BLOCK3[143:96] is reserved for internal use */
#define EFUSE_BLK0_WDATA3_BLK3_PART_RESERVE			14u
	/*  */
#define EFUSE_BLK0_WDATA3_CHIP_VER_REV1				15u

	/* 0x2C:  */
	uint32_t volatile BLK0_WDATA4;
	/*  */
#define EFUSE_BLK0_WDATA4_CK8M_FREQ_Msb				0u
#define EFUSE_BLK0_WDATA4_CK8M_FREQ_Lsb				7u
	/* True ADC reference voltage */
#define EFUSE_BLK0_WDATA4_ADC_VREF_Msb				8u
#define EFUSE_BLK0_WDATA4_ADC_VREF_Lsb				12u
	/*  */
#define EFUSE_BLK0_WDATA4_SDIO_DREFH_Msb			8u
#define EFUSE_BLK0_WDATA4_SDIO_DREFH_Lsb			9u
	/*  */
#define EFUSE_BLK0_WDATA4_SDIO_DREFM_Msb			10u
#define EFUSE_BLK0_WDATA4_SDIO_DREFM_Lsb			11u
	/*  */
#define EFUSE_BLK0_WDATA4_SDIO_DREFL_Msb			12u
#define EFUSE_BLK0_WDATA4_SDIO_DREFL_Lsb			13u
	/* program for XPD_SDIO_REG */
#define EFUSE_BLK0_WDATA4_XPD_SDIO				14u
	/* program for SDIO_TIEH */
#define EFUSE_BLK0_WDATA4_SDIO_TIEH				15u
	/* program for sdio_force */
#define EFUSE_BLK0_WDATA4_SDIO_FORCE				16u

	/* 0x30:  */
	uint32_t volatile BLK0_WDATA5;
	/* program for SPI_pad_config_clk */
#define EFUSE_BLK0_WDATA5_SPI_PAD_CONFIG_CLK_Msb		0u
#define EFUSE_BLK0_WDATA5_SPI_PAD_CONFIG_CLK_Lsb		4u
	/* program for SPI_pad_config_q */
#define EFUSE_BLK0_WDATA5_SPI_PAD_CONFIG_Q_Msb			5u
#define EFUSE_BLK0_WDATA5_SPI_PAD_CONFIG_Q_Lsb			9u
	/* program for SPI_pad_config_d */
#define EFUSE_BLK0_WDATA5_SPI_PAD_CONFIG_D_Msb			10u
#define EFUSE_BLK0_WDATA5_SPI_PAD_CONFIG_D_Lsb			14u
	/* program for SPI_pad_config_cs0 */
#define EFUSE_BLK0_WDATA5_SPI_PAD_CONFIG_CS0_Msb		15u
#define EFUSE_BLK0_WDATA5_SPI_PAD_CONFIG_CS0_Lsb		19u
	/*  */
#define EFUSE_BLK0_WDATA5_INST_CONFIG_Msb			20u
#define EFUSE_BLK0_WDATA5_INST_CONFIG_Lsb			27u
	/* This field stores the voltage level for CPU to run at 240 MHz, or for flash/PSRAM to run at 80 MHz.0x0: level 7; 0x1: level 6; 0x2: level 5; 0x3: level 4. (R/W) */
#define EFUSE_BLK0_WDATA5_VOL_LEVEL_HP_INV_Msb			22u
#define EFUSE_BLK0_WDATA5_VOL_LEVEL_HP_INV_Lsb			23u
	/*  */
#define EFUSE_BLK0_WDATA5_DIG_VOL_L6_Msb			24u
#define EFUSE_BLK0_WDATA5_DIG_VOL_L6_Lsb			27u
	/* program for flash_crypt_config */
#define EFUSE_BLK0_WDATA5_FLASH_CRYPT_CONFIG_Msb		28u
#define EFUSE_BLK0_WDATA5_FLASH_CRYPT_CONFIG_Lsb		31u

	/* 0x34:  */
	uint32_t volatile BLK0_WDATA6;
	/* program for coding_scheme */
#define EFUSE_BLK0_WDATA6_CODING_SCHEME_Msb			0u
#define EFUSE_BLK0_WDATA6_CODING_SCHEME_Lsb			1u
	/* program for console_debug_disable */
#define EFUSE_BLK0_WDATA6_CONSOLE_DEBUG_DISABLE			2u
	/*  */
#define EFUSE_BLK0_WDATA6_DISABLE_SDIO_HOST			3u
	/* program for abstract_done_0 */
#define EFUSE_BLK0_WDATA6_ABS_DONE_0				4u
	/* program for abstract_done_1 */
#define EFUSE_BLK0_WDATA6_ABS_DONE_1				5u
	/* program for JTAG_disable */
#define EFUSE_BLK0_WDATA6_DISABLE_JTAG				6u
	/* program for download_dis_encrypt */
#define EFUSE_BLK0_WDATA6_DISABLE_DL_ENCRYPT			7u
	/* program for download_dis_decrypt */
#define EFUSE_BLK0_WDATA6_DISABLE_DL_DECRYPT			8u
	/* program for download_dis_cache */
#define EFUSE_BLK0_WDATA6_DISABLE_DL_CACHE			9u
	/* program for key_status */
#define EFUSE_BLK0_WDATA6_KEY_STATUS				10u

	/* 0x38:  */
	uint32_t volatile BLK1_RDATA0;
	/* read for BLOCK1 */
#define EFUSE_BLK1_RDATA0_BLK1_DOUT0_Msb			0u
#define EFUSE_BLK1_RDATA0_BLK1_DOUT0_Lsb			31u

	/* 0x3C:  */
	uint32_t volatile BLK1_RDATA1;
	/* read for BLOCK1 */
#define EFUSE_BLK1_RDATA1_BLK1_DOUT1_Msb			0u
#define EFUSE_BLK1_RDATA1_BLK1_DOUT1_Lsb			31u

	/* 0x40:  */
	uint32_t volatile BLK1_RDATA2;
	/* read for BLOCK1 */
#define EFUSE_BLK1_RDATA2_BLK1_DOUT2_Msb			0u
#define EFUSE_BLK1_RDATA2_BLK1_DOUT2_Lsb			31u

	/* 0x44:  */
	uint32_t volatile BLK1_RDATA3;
	/* read for BLOCK1 */
#define EFUSE_BLK1_RDATA3_BLK1_DOUT3_Msb			0u
#define EFUSE_BLK1_RDATA3_BLK1_DOUT3_Lsb			31u

	/* 0x48:  */
	uint32_t volatile BLK1_RDATA4;
	/* read for BLOCK1 */
#define EFUSE_BLK1_RDATA4_BLK1_DOUT4_Msb			0u
#define EFUSE_BLK1_RDATA4_BLK1_DOUT4_Lsb			31u

	/* 0x4C:  */
	uint32_t volatile BLK1_RDATA5;
	/* read for BLOCK1 */
#define EFUSE_BLK1_RDATA5_BLK1_DOUT5_Msb			0u
#define EFUSE_BLK1_RDATA5_BLK1_DOUT5_Lsb			31u

	/* 0x50:  */
	uint32_t volatile BLK1_RDATA6;
	/* read for BLOCK1 */
#define EFUSE_BLK1_RDATA6_BLK1_DOUT6_Msb			0u
#define EFUSE_BLK1_RDATA6_BLK1_DOUT6_Lsb			31u

	/* 0x54:  */
	uint32_t volatile BLK1_RDATA7;
	/* read for BLOCK1 */
#define EFUSE_BLK1_RDATA7_BLK1_DOUT7_Msb			0u
#define EFUSE_BLK1_RDATA7_BLK1_DOUT7_Lsb			31u

	/* 0x58:  */
	uint32_t volatile BLK2_RDATA0;
	/* read for BLOCK2 */
#define EFUSE_BLK2_RDATA0_BLK2_DOUT0_Msb			0u
#define EFUSE_BLK2_RDATA0_BLK2_DOUT0_Lsb			31u

	/* 0x5C:  */
	uint32_t volatile BLK2_RDATA1;
	/* read for BLOCK2 */
#define EFUSE_BLK2_RDATA1_BLK2_DOUT1_Msb			0u
#define EFUSE_BLK2_RDATA1_BLK2_DOUT1_Lsb			31u

	/* 0x60:  */
	uint32_t volatile BLK2_RDATA2;
	/* read for BLOCK2 */
#define EFUSE_BLK2_RDATA2_BLK2_DOUT2_Msb			0u
#define EFUSE_BLK2_RDATA2_BLK2_DOUT2_Lsb			31u

	/* 0x64:  */
	uint32_t volatile BLK2_RDATA3;
	/* read for BLOCK2 */
#define EFUSE_BLK2_RDATA3_BLK2_DOUT3_Msb			0u
#define EFUSE_BLK2_RDATA3_BLK2_DOUT3_Lsb			31u

	/* 0x68:  */
	uint32_t volatile BLK2_RDATA4;
	/* read for BLOCK2 */
#define EFUSE_BLK2_RDATA4_BLK2_DOUT4_Msb			0u
#define EFUSE_BLK2_RDATA4_BLK2_DOUT4_Lsb			31u

	/* 0x6C:  */
	uint32_t volatile BLK2_RDATA5;
	/* read for BLOCK2 */
#define EFUSE_BLK2_RDATA5_BLK2_DOUT5_Msb			0u
#define EFUSE_BLK2_RDATA5_BLK2_DOUT5_Lsb			31u

	/* 0x70:  */
	uint32_t volatile BLK2_RDATA6;
	/* read for BLOCK2 */
#define EFUSE_BLK2_RDATA6_BLK2_DOUT6_Msb			0u
#define EFUSE_BLK2_RDATA6_BLK2_DOUT6_Lsb			31u

	/* 0x74:  */
	uint32_t volatile BLK2_RDATA7;
	/* read for BLOCK2 */
#define EFUSE_BLK2_RDATA7_BLK2_DOUT7_Msb			0u
#define EFUSE_BLK2_RDATA7_BLK2_DOUT7_Lsb			31u

	/* 0x78:  */
	uint32_t volatile BLK3_RDATA0;
	/* read for BLOCK3 */
#define EFUSE_BLK3_RDATA0_BLK3_DOUT0_Msb			0u
#define EFUSE_BLK3_RDATA0_BLK3_DOUT0_Lsb			31u

	/* 0x7C:  */
	uint32_t volatile BLK3_RDATA1;
	/* read for BLOCK3 */
#define EFUSE_BLK3_RDATA1_BLK3_DOUT1_Msb			0u
#define EFUSE_BLK3_RDATA1_BLK3_DOUT1_Lsb			31u

	/* 0x80:  */
	uint32_t volatile BLK3_RDATA2;
	/* read for BLOCK3 */
#define EFUSE_BLK3_RDATA2_BLK3_DOUT2_Msb			0u
#define EFUSE_BLK3_RDATA2_BLK3_DOUT2_Lsb			31u

	/* 0x84:  */
	uint32_t volatile BLK3_RDATA3;
	/* read for BLOCK3 */
#define EFUSE_BLK3_RDATA3_BLK3_DOUT3_Msb			0u
#define EFUSE_BLK3_RDATA3_BLK3_DOUT3_Lsb			31u
	/* ADC1 Two Point calibration low point. */
#define EFUSE_BLK3_RDATA3_RD_ADC1_TP_LOW_Msb			0u
#define EFUSE_BLK3_RDATA3_RD_ADC1_TP_LOW_Lsb			6u
	/* ADC1 Two Point calibration high point. */
#define EFUSE_BLK3_RDATA3_RD_ADC1_TP_HIGH_Msb			7u
#define EFUSE_BLK3_RDATA3_RD_ADC1_TP_HIGH_Lsb			15u
	/* ADC2 Two Point calibration low point. */
#define EFUSE_BLK3_RDATA3_RD_ADC2_TP_LOW_Msb			16u
#define EFUSE_BLK3_RDATA3_RD_ADC2_TP_LOW_Lsb			22u
	/* ADC2 Two Point calibration high point. */
#define EFUSE_BLK3_RDATA3_RD_ADC2_TP_HIGH_Msb			23u
#define EFUSE_BLK3_RDATA3_RD_ADC2_TP_HIGH_Lsb			31u

	/* 0x88:  */
	uint32_t volatile BLK3_RDATA4;
	/* read for BLOCK3 */
#define EFUSE_BLK3_RDATA4_BLK3_DOUT4_Msb			0u
#define EFUSE_BLK3_RDATA4_BLK3_DOUT4_Lsb			31u
	/* Reserved for future calibration use. */
#define EFUSE_BLK3_RDATA4_RD_CAL_RESERVED_Msb			0u
#define EFUSE_BLK3_RDATA4_RD_CAL_RESERVED_Lsb			15u

	/* 0x8C:  */
	uint32_t volatile BLK3_RDATA5;
	/* read for BLOCK3 */
#define EFUSE_BLK3_RDATA5_BLK3_DOUT5_Msb			0u
#define EFUSE_BLK3_RDATA5_BLK3_DOUT5_Lsb			31u

	/* 0x90:  */
	uint32_t volatile BLK3_RDATA6;
	/* read for BLOCK3 */
#define EFUSE_BLK3_RDATA6_BLK3_DOUT6_Msb			0u
#define EFUSE_BLK3_RDATA6_BLK3_DOUT6_Lsb			31u

	/* 0x94:  */
	uint32_t volatile BLK3_RDATA7;
	/* read for BLOCK3 */
#define EFUSE_BLK3_RDATA7_BLK3_DOUT7_Msb			0u
#define EFUSE_BLK3_RDATA7_BLK3_DOUT7_Lsb			31u

	/* 0x98:  */
	uint32_t volatile BLK1_WDATA0;
	/* program for BLOCK1 */
#define EFUSE_BLK1_WDATA0_BLK1_DIN0_Msb				0u
#define EFUSE_BLK1_WDATA0_BLK1_DIN0_Lsb				31u

	/* 0x9C:  */
	uint32_t volatile BLK1_WDATA1;
	/* program for BLOCK1 */
#define EFUSE_BLK1_WDATA1_BLK1_DIN1_Msb				0u
#define EFUSE_BLK1_WDATA1_BLK1_DIN1_Lsb				31u

	/* 0xA0:  */
	uint32_t volatile BLK1_WDATA2;
	/* program for BLOCK1 */
#define EFUSE_BLK1_WDATA2_BLK1_DIN2_Msb				0u
#define EFUSE_BLK1_WDATA2_BLK1_DIN2_Lsb				31u

	/* 0xA4:  */
	uint32_t volatile BLK1_WDATA3;
	/* program for BLOCK1 */
#define EFUSE_BLK1_WDATA3_BLK1_DIN3_Msb				0u
#define EFUSE_BLK1_WDATA3_BLK1_DIN3_Lsb				31u

	/* 0xA8:  */
	uint32_t volatile BLK1_WDATA4;
	/* program for BLOCK1 */
#define EFUSE_BLK1_WDATA4_BLK1_DIN4_Msb				0u
#define EFUSE_BLK1_WDATA4_BLK1_DIN4_Lsb				31u

	/* 0xAC:  */
	uint32_t volatile BLK1_WDATA5;
	/* program for BLOCK1 */
#define EFUSE_BLK1_WDATA5_BLK1_DIN5_Msb				0u
#define EFUSE_BLK1_WDATA5_BLK1_DIN5_Lsb				31u

	/* 0xB0:  */
	uint32_t volatile BLK1_WDATA6;
	/* program for BLOCK1 */
#define EFUSE_BLK1_WDATA6_BLK1_DIN6_Msb				0u
#define EFUSE_BLK1_WDATA6_BLK1_DIN6_Lsb				31u

	/* 0xB4:  */
	uint32_t volatile BLK1_WDATA7;
	/* program for BLOCK1 */
#define EFUSE_BLK1_WDATA7_BLK1_DIN7_Msb				0u
#define EFUSE_BLK1_WDATA7_BLK1_DIN7_Lsb				31u

	/* 0xB8:  */
	uint32_t volatile BLK2_WDATA0;
	/* program for BLOCK2 */
#define EFUSE_BLK2_WDATA0_BLK2_DIN0_Msb				0u
#define EFUSE_BLK2_WDATA0_BLK2_DIN0_Lsb				31u

	/* 0xBC:  */
	uint32_t volatile BLK2_WDATA1;
	/* program for BLOCK2 */
#define EFUSE_BLK2_WDATA1_BLK2_DIN1_Msb				0u
#define EFUSE_BLK2_WDATA1_BLK2_DIN1_Lsb				31u

	/* 0xC0:  */
	uint32_t volatile BLK2_WDATA2;
	/* program for BLOCK2 */
#define EFUSE_BLK2_WDATA2_BLK2_DIN2_Msb				0u
#define EFUSE_BLK2_WDATA2_BLK2_DIN2_Lsb				31u

	/* 0xC4:  */
	uint32_t volatile BLK2_WDATA3;
	/* program for BLOCK2 */
#define EFUSE_BLK2_WDATA3_BLK2_DIN3_Msb				0u
#define EFUSE_BLK2_WDATA3_BLK2_DIN3_Lsb				31u

	/* 0xC8:  */
	uint32_t volatile BLK2_WDATA4;
	/* program for BLOCK2 */
#define EFUSE_BLK2_WDATA4_BLK2_DIN4_Msb				0u
#define EFUSE_BLK2_WDATA4_BLK2_DIN4_Lsb				31u

	/* 0xCC:  */
	uint32_t volatile BLK2_WDATA5;
	/* program for BLOCK2 */
#define EFUSE_BLK2_WDATA5_BLK2_DIN5_Msb				0u
#define EFUSE_BLK2_WDATA5_BLK2_DIN5_Lsb				31u

	/* 0xD0:  */
	uint32_t volatile BLK2_WDATA6;
	/* program for BLOCK2 */
#define EFUSE_BLK2_WDATA6_BLK2_DIN6_Msb				0u
#define EFUSE_BLK2_WDATA6_BLK2_DIN6_Lsb				31u

	/* 0xD4:  */
	uint32_t volatile BLK2_WDATA7;
	/* program for BLOCK2 */
#define EFUSE_BLK2_WDATA7_BLK2_DIN7_Msb				0u
#define EFUSE_BLK2_WDATA7_BLK2_DIN7_Lsb				31u

	/* 0xD8:  */
	uint32_t volatile BLK3_WDATA0;
	/* program for BLOCK3 */
#define EFUSE_BLK3_WDATA0_BLK3_DIN0_Msb				0u
#define EFUSE_BLK3_WDATA0_BLK3_DIN0_Lsb				31u

	/* 0xDC:  */
	uint32_t volatile BLK3_WDATA1;
	/* program for BLOCK3 */
#define EFUSE_BLK3_WDATA1_BLK3_DIN1_Msb				0u
#define EFUSE_BLK3_WDATA1_BLK3_DIN1_Lsb				31u

	/* 0xE0:  */
	uint32_t volatile BLK3_WDATA2;
	/* program for BLOCK3 */
#define EFUSE_BLK3_WDATA2_BLK3_DIN2_Msb				0u
#define EFUSE_BLK3_WDATA2_BLK3_DIN2_Lsb				31u

	/* 0xE4:  */
	uint32_t volatile BLK3_WDATA3;
	/* program for BLOCK3 */
#define EFUSE_BLK3_WDATA3_BLK3_DIN3_Msb				0u
#define EFUSE_BLK3_WDATA3_BLK3_DIN3_Lsb				31u
	/* ADC1 Two Point calibration low point. */
#define EFUSE_BLK3_WDATA3_ADC1_TP_LOW_Msb			0u
#define EFUSE_BLK3_WDATA3_ADC1_TP_LOW_Lsb			6u
	/* ADC1 Two Point calibration high point. */
#define EFUSE_BLK3_WDATA3_ADC1_TP_HIGH_Msb			7u
#define EFUSE_BLK3_WDATA3_ADC1_TP_HIGH_Lsb			15u
	/* ADC2 Two Point calibration low point. */
#define EFUSE_BLK3_WDATA3_ADC2_TP_LOW_Msb			16u
#define EFUSE_BLK3_WDATA3_ADC2_TP_LOW_Lsb			22u
	/* ADC2 Two Point calibration high point. */
#define EFUSE_BLK3_WDATA3_ADC2_TP_HIGH_Msb			23u
#define EFUSE_BLK3_WDATA3_ADC2_TP_HIGH_Lsb			31u

	/* 0xE8:  */
	uint32_t volatile BLK3_WDATA4;
	/* program for BLOCK3 */
#define EFUSE_BLK3_WDATA4_BLK3_DIN4_Msb				0u
#define EFUSE_BLK3_WDATA4_BLK3_DIN4_Lsb				31u
	/* Reserved for future calibration use. */
#define EFUSE_BLK3_WDATA4_CAL_RESERVED_Msb			0u
#define EFUSE_BLK3_WDATA4_CAL_RESERVED_Lsb			15u

	/* 0xEC:  */
	uint32_t volatile BLK3_WDATA5;
	/* program for BLOCK3 */
#define EFUSE_BLK3_WDATA5_BLK3_DIN5_Msb				0u
#define EFUSE_BLK3_WDATA5_BLK3_DIN5_Lsb				31u

	/* 0xF0:  */
	uint32_t volatile BLK3_WDATA6;
	/* program for BLOCK3 */
#define EFUSE_BLK3_WDATA6_BLK3_DIN6_Msb				0u
#define EFUSE_BLK3_WDATA6_BLK3_DIN6_Lsb				31u

	/* 0xF4:  */
	uint32_t volatile BLK3_WDATA7;
	/* program for BLOCK3 */
#define EFUSE_BLK3_WDATA7_BLK3_DIN7_Msb				0u
#define EFUSE_BLK3_WDATA7_BLK3_DIN7_Lsb				31u

	/* 0xF8:  */
	uint32_t volatile CLK;
	/* efuse timing configure */
#define EFUSE_CLK_SEL0_Msb					0u
#define EFUSE_CLK_SEL0_Lsb					7u
	/* efuse timing configure */
#define EFUSE_CLK_SEL1_Msb					8u
#define EFUSE_CLK_SEL1_Lsb					15u
	/*  */
#define EFUSE_CLK_EN						16u

	/* 0xFC:  */
	uint32_t volatile CONF;
	/* efuse operation code */
#define EFUSE_CONF_OP_CODE_Msb					0u
#define EFUSE_CONF_OP_CODE_Lsb					15u
	/*  */
#define EFUSE_CONF_FORCE_NO_WR_RD_DIS				16u

	/* 0x100:  */
	uint32_t volatile STATUS;
	/*  */
#define EFUSE_STATUS_DEBUG_Msb					0u
#define EFUSE_STATUS_DEBUG_Lsb					31u

	/* 0x104:  */
	uint32_t volatile CMD;
	/* command for read */
#define EFUSE_CMD_READ_CMD					0u
	/* command for program */
#define EFUSE_CMD_PGM_CMD					1u

	/* 0x108:  */
	uint32_t volatile INT_RAW;
	/* read done interrupt raw status */
#define EFUSE_INT_RAW_READ_DONE_INT_RAW				0u
	/* program done interrupt raw status */
#define EFUSE_INT_RAW_PGM_DONE_INT_RAW				1u

	/* 0x10C:  */
	uint32_t volatile INT_ST;
	/* read done interrupt status */
#define EFUSE_INT_ST_READ_DONE_INT_ST				0u
	/* program done interrupt status */
#define EFUSE_INT_ST_PGM_DONE_INT_ST				1u

	/* 0x110:  */
	uint32_t volatile INT_ENA;
	/* read done interrupt enable */
#define EFUSE_INT_ENA_READ_DONE_INT_ENA				0u
	/* program done interrupt enable */
#define EFUSE_INT_ENA_PGM_DONE_INT_ENA				1u

	/* 0x114:  */
	uint32_t volatile INT_CLR;
	/* read done interrupt clear */
#define EFUSE_INT_CLR_READ_DONE_INT_CLR				0u
	/* program done interrupt clear */
#define EFUSE_INT_CLR_PGM_DONE_INT_CLR				1u

	/* 0x118:  */
	uint32_t volatile DAC_CONF;
	/* efuse timing configure */
#define EFUSE_DAC_CONF_DAC_CLK_DIV_Msb				0u
#define EFUSE_DAC_CONF_DAC_CLK_DIV_Lsb				7u
	/*  */
#define EFUSE_DAC_CONF_DAC_CLK_PAD_SEL				8u

	/* 0x11C:  */
	uint32_t volatile DEC_STATUS;
	/* the decode result of 3/4 coding scheme has warning */
#define EFUSE_DEC_STATUS_DEC_WARNINGS_Msb			0u
#define EFUSE_DEC_STATUS_DEC_WARNINGS_Lsb			11u

	/* 0x13C */
	uint8_t RESERVED0[0x1FC-0x13C];

	/* 0x1FC:  */
	uint32_t volatile DATE;
	/*  */
#define EFUSE_DATE_DATE_Msb					0u
#define EFUSE_DATE_DATE_Lsb					31u

};


#define FLASH_ENCRYPTION ((struct mcu_flash_encryption *)0x3FF46000)

struct mcu_flash_encryption {

	/* 0x00:  */
	uint32_t volatile BUFFER_%S;
	/* Data buffers for encryption. */
#define FLASH_ENCRYPTION_BUFFER_%S_BUFFER_Msb			0u
#define FLASH_ENCRYPTION_BUFFER_%S_BUFFER_Lsb			7u

	/* 0x20:  */
	uint32_t volatile START;
	/* Set this bit to start encryption operation on data buffer. */
#define FLASH_ENCRYPTION_START_FLASH_START_Msb			0u
#define FLASH_ENCRYPTION_START_FLASH_START_Lsb			7u

	/* 0x24:  */
	uint32_t volatile ADDRESS;
	/* The physical address on the off-chip flash must be 8-word boundary aligned. */
#define FLASH_ENCRYPTION_ADDRESS_ADDRESS_Msb			0u
#define FLASH_ENCRYPTION_ADDRESS_ADDRESS_Lsb			7u

	/* 0x28:  */
	uint32_t volatile DONE;
	/* Set this bit when encryption operation is complete. */
#define FLASH_ENCRYPTION_DONE_FLASH_DONE			0u

};


#define FRC_TIMER ((struct mcu_frc_timer *)0x3FF47000)

struct mcu_frc_timer {

	/* 0x00:  */
	uint32_t volatile TIMER_LOAD;
	/*  */
#define FRC_TIMER_TIMER_LOAD_VALUE_Msb				0u
#define FRC_TIMER_TIMER_LOAD_VALUE_Lsb				7u

	/* 0x04:  */
	uint32_t volatile TIMER_COUNT;
	/*  */
#define FRC_TIMER_TIMER_COUNT_TIMER_COUNT_Msb			0u
#define FRC_TIMER_TIMER_COUNT_TIMER_COUNT_Lsb			7u

	/* 0x08:  */
	uint32_t volatile TIMER_CTRL;
	/*  */
#define FRC_TIMER_TIMER_CTRL_TIMER_PRESCALER_Msb		1u
#define FRC_TIMER_TIMER_CTRL_TIMER_PRESCALER_Lsb		8u

	/* 0x0C:  */
	uint32_t volatile TIMER_INT;
	/*  */
#define FRC_TIMER_TIMER_INT_CLR					0u

	/* 0x10:  */
	uint32_t volatile TIMER_ALARM;
	/*  */
#define FRC_TIMER_TIMER_ALARM_TIMER_ALARM_Msb			0u
#define FRC_TIMER_TIMER_ALARM_TIMER_ALARM_Lsb			7u

};


#define GPIO ((struct mcu_gpio *)0x3FF44000)

struct mcu_gpio {

	/* 0x00:  */
	uint32_t volatile BT_SELECT;
	/* NA */
#define GPIO_BT_SELECT_BT_SEL_Msb				0u
#define GPIO_BT_SELECT_BT_SEL_Lsb				31u

	/* 0x04:  */
	uint32_t volatile OUT;
	/* GPIO0~31 output value */
#define GPIO_OUT_DATA_Msb					0u
#define GPIO_OUT_DATA_Lsb					31u

	/* 0x08:  */
	uint32_t volatile OUT_W1TS;
	/* GPIO0~31 output value write 1 to set */
#define GPIO_OUT_W1TS_OUT_DATA_W1TS_Msb				0u
#define GPIO_OUT_W1TS_OUT_DATA_W1TS_Lsb				31u

	/* 0x0C:  */
	uint32_t volatile OUT_W1TC;
	/* GPIO0~31 output value write 1 to clear */
#define GPIO_OUT_W1TC_OUT_DATA_W1TC_Msb				0u
#define GPIO_OUT_W1TC_OUT_DATA_W1TC_Lsb				31u

	/* 0x10:  */
	uint32_t volatile OUT1;
	/* GPIO32~39 output value */
#define GPIO_OUT1_DATA_Msb					0u
#define GPIO_OUT1_DATA_Lsb					7u

	/* 0x14:  */
	uint32_t volatile OUT1_W1TS;
	/* GPIO32~39 output value write 1 to set */
#define GPIO_OUT1_W1TS_OUT1_DATA_W1TS_Msb			0u
#define GPIO_OUT1_W1TS_OUT1_DATA_W1TS_Lsb			7u

	/* 0x18:  */
	uint32_t volatile OUT1_W1TC;
	/* GPIO32~39 output value write 1 to clear */
#define GPIO_OUT1_W1TC_OUT1_DATA_W1TC_Msb			0u
#define GPIO_OUT1_W1TC_OUT1_DATA_W1TC_Lsb			7u

	/* 0x1C:  */
	uint32_t volatile SDIO_SELECT;
	/* SDIO PADS on/off control from outside */
#define GPIO_SDIO_SELECT_SDIO_SEL_Msb				0u
#define GPIO_SDIO_SELECT_SDIO_SEL_Lsb				7u

	/* 0x20:  */
	uint32_t volatile ENABLE;
	/* GPIO0~31 output enable */
#define GPIO_ENABLE_DATA_Msb					0u
#define GPIO_ENABLE_DATA_Lsb					31u

	/* 0x24:  */
	uint32_t volatile ENABLE_W1TS;
	/* GPIO0~31 output enable write 1 to set */
#define GPIO_ENABLE_W1TS_ENABLE_DATA_W1TS_Msb			0u
#define GPIO_ENABLE_W1TS_ENABLE_DATA_W1TS_Lsb			31u

	/* 0x28:  */
	uint32_t volatile ENABLE_W1TC;
	/* GPIO0~31 output enable write 1 to clear */
#define GPIO_ENABLE_W1TC_ENABLE_DATA_W1TC_Msb			0u
#define GPIO_ENABLE_W1TC_ENABLE_DATA_W1TC_Lsb			31u

	/* 0x2C:  */
	uint32_t volatile ENABLE1;
	/* GPIO32~39 output enable */
#define GPIO_ENABLE1_DATA_Msb					0u
#define GPIO_ENABLE1_DATA_Lsb					7u

	/* 0x30:  */
	uint32_t volatile ENABLE1_W1TS;
	/* GPIO32~39 output enable write 1 to set */
#define GPIO_ENABLE1_W1TS_ENABLE1_DATA_W1TS_Msb			0u
#define GPIO_ENABLE1_W1TS_ENABLE1_DATA_W1TS_Lsb			7u

	/* 0x34:  */
	uint32_t volatile ENABLE1_W1TC;
	/* GPIO32~39 output enable write 1 to clear */
#define GPIO_ENABLE1_W1TC_ENABLE1_DATA_W1TC_Msb			0u
#define GPIO_ENABLE1_W1TC_ENABLE1_DATA_W1TC_Lsb			7u

	/* 0x38:  */
	uint32_t volatile STRAP;
	/* {10'b0, MTDI, GPIO0, GPIO2, GPIO4, MTDO, GPIO5} */
#define GPIO_STRAP_STRAPPING_Msb				0u
#define GPIO_STRAP_STRAPPING_Lsb				15u

	/* 0x3C:  */
	uint32_t volatile IN;
	/* GPIO0~31 input value */
#define GPIO_IN_DATA_NEXT_Msb					0u
#define GPIO_IN_DATA_NEXT_Lsb					31u

	/* 0x40:  */
	uint32_t volatile IN1;
	/* GPIO32~39 input value */
#define GPIO_IN1_DATA_NEXT_Msb					0u
#define GPIO_IN1_DATA_NEXT_Lsb					7u

	/* 0x44:  */
	uint32_t volatile STATUS;
	/* GPIO0~31 interrupt status */
#define GPIO_STATUS_INT_Msb					0u
#define GPIO_STATUS_INT_Lsb					31u

	/* 0x48:  */
	uint32_t volatile STATUS_W1TS;
	/* GPIO0~31 interrupt status write 1 to set */
#define GPIO_STATUS_W1TS_STATUS_INT_W1TS_Msb			0u
#define GPIO_STATUS_W1TS_STATUS_INT_W1TS_Lsb			31u

	/* 0x4C:  */
	uint32_t volatile STATUS_W1TC;
	/* GPIO0~31 interrupt status write 1 to clear */
#define GPIO_STATUS_W1TC_STATUS_INT_W1TC_Msb			0u
#define GPIO_STATUS_W1TC_STATUS_INT_W1TC_Lsb			31u

	/* 0x50:  */
	uint32_t volatile STATUS1;
	/* GPIO32~39 interrupt status */
#define GPIO_STATUS1_INT_Msb					0u
#define GPIO_STATUS1_INT_Lsb					7u

	/* 0x54:  */
	uint32_t volatile STATUS1_W1TS;
	/* GPIO32~39 interrupt status write 1 to set */
#define GPIO_STATUS1_W1TS_STATUS1_INT_W1TS_Msb			0u
#define GPIO_STATUS1_W1TS_STATUS1_INT_W1TS_Lsb			7u

	/* 0x58:  */
	uint32_t volatile STATUS1_W1TC;
	/* GPIO32~39 interrupt status write 1 to clear */
#define GPIO_STATUS1_W1TC_STATUS1_INT_W1TC_Msb			0u
#define GPIO_STATUS1_W1TC_STATUS1_INT_W1TC_Lsb			7u

	/* 0x60:  */
	uint32_t volatile ACPU_INT;
	/* GPIO0~31 APP CPU interrupt status */
#define GPIO_ACPU_INT_APPCPU_INT_Msb				0u
#define GPIO_ACPU_INT_APPCPU_INT_Lsb				31u

	/* 0x64:  */
	uint32_t volatile ACPU_NMI_INT;
	/* GPIO0~31 APP CPU non-maskable interrupt status */
#define GPIO_ACPU_NMI_INT_APPCPU_NMI_INT_Msb			0u
#define GPIO_ACPU_NMI_INT_APPCPU_NMI_INT_Lsb			31u

	/* 0x68:  */
	uint32_t volatile PCPU_INT;
	/* GPIO0~31 PRO CPU interrupt status */
#define GPIO_PCPU_INT_PROCPU_INT_Msb				0u
#define GPIO_PCPU_INT_PROCPU_INT_Lsb				31u

	/* 0x6C:  */
	uint32_t volatile PCPU_NMI_INT;
	/* GPIO0~31 PRO CPU non-maskable interrupt status */
#define GPIO_PCPU_NMI_INT_PROCPU_NMI_INT_Msb			0u
#define GPIO_PCPU_NMI_INT_PROCPU_NMI_INT_Lsb			31u

	/* 0x70:  */
	uint32_t volatile CPUSDIO_INT;
	/* SDIO's extent GPIO0~31 interrupt */
#define GPIO_CPUSDIO_INT_SDIO_INT_Msb				0u
#define GPIO_CPUSDIO_INT_SDIO_INT_Lsb				31u

	/* 0x74:  */
	uint32_t volatile ACPU_INT1;
	/* GPIO32~39 APP CPU interrupt status */
#define GPIO_ACPU_INT1_APPCPU_INT_H_Msb				0u
#define GPIO_ACPU_INT1_APPCPU_INT_H_Lsb				7u

	/* 0x78:  */
	uint32_t volatile ACPU_NMI_INT1;
	/* GPIO32~39 APP CPU non-maskable interrupt status */
#define GPIO_ACPU_NMI_INT1_APPCPU_NMI_INT_H_Msb			0u
#define GPIO_ACPU_NMI_INT1_APPCPU_NMI_INT_H_Lsb			7u

	/* 0x7C:  */
	uint32_t volatile PCPU_INT1;
	/* GPIO32~39 PRO CPU interrupt status */
#define GPIO_PCPU_INT1_PROCPU_INT_H_Msb				0u
#define GPIO_PCPU_INT1_PROCPU_INT_H_Lsb				7u

	/* 0x80:  */
	uint32_t volatile PCPU_NMI_INT1;
	/* GPIO32~39 PRO CPU non-maskable interrupt status */
#define GPIO_PCPU_NMI_INT1_PROCPU_NMI_INT_H_Msb			0u
#define GPIO_PCPU_NMI_INT1_PROCPU_NMI_INT_H_Lsb			7u

	/* 0x84:  */
	uint32_t volatile CPUSDIO_INT1;
	/* SDIO's extent GPIO32~39 interrupt */
#define GPIO_CPUSDIO_INT1_SDIO_INT_H_Msb			0u
#define GPIO_CPUSDIO_INT1_SDIO_INT_H_Lsb			7u
	/*  */
#define GPIO_CPUSDIO_INT1_PIN_PAD_DRIVER			2u
	/*  */
#define GPIO_CPUSDIO_INT1_PIN_INT_TYPE_Msb			7u
#define GPIO_CPUSDIO_INT1_PIN_INT_TYPE_Lsb			9u
	/*  */
#define GPIO_CPUSDIO_INT1_PIN_WAKEUP_ENABLE			10u
	/*  */
#define GPIO_CPUSDIO_INT1_PIN_CONFIG_Msb			11u
#define GPIO_CPUSDIO_INT1_PIN_CONFIG_Lsb			12u
	/*  */
#define GPIO_CPUSDIO_INT1_PIN_INT_ENA_Msb			13u
#define GPIO_CPUSDIO_INT1_PIN_INT_ENA_Lsb			17u

	/* 0x88:  */
	uint32_t volatile PIN%S;
	/* if set to : normal output  if set to 1: open drain */
#define GPIO_PIN%S_PIN_PAD_DRIVER				2u
	/* if set to : GPIO interrupt disable  if set to 1: rising edge trigger  if set to 2: falling edge trigger  if set to 3: any edge trigger  if set to 4: low level trigger  if set to 5: high level trigger */
#define GPIO_PIN%S_PIN_INT_TYPE_Msb				7u
#define GPIO_PIN%S_PIN_INT_TYPE_Lsb				9u
	/* GPIO wake up enable  only available in light sleep */
#define GPIO_PIN%S_PIN_WAKEUP_ENABLE				10u
	/* NA */
#define GPIO_PIN%S_PIN_CONFIG_Msb				11u
#define GPIO_PIN%S_PIN_CONFIG_Lsb				12u
	/* bit: APP CPU interrupt enable  bit1: APP CPU non-maskable interrupt enable  bit3: PRO CPU interrupt enable  bit4:  PRO CPU non-maskable interrupt enable  bit5: SDIO's extent interrupt enable */
#define GPIO_PIN%S_PIN_INT_ENA_Msb				13u
#define GPIO_PIN%S_PIN_INT_ENA_Lsb				17u

	/* 0xA8 */
	uint8_t RESERVED0[0x128-0xA8];

	/* 0x128:  */
	uint32_t volatile CALI_CONF;
	/*  */
#define GPIO_CALI_CONF_CALI_RTC_MAX_Msb				0u
#define GPIO_CALI_CONF_CALI_RTC_MAX_Lsb				9u
	/*  */
#define GPIO_CALI_CONF_CALI_START				31u

	/* 0x12C:  */
	uint32_t volatile CALI_DATA;
	/*  */
#define GPIO_CALI_DATA_CALI_VALUE_SYNC2_Msb			0u
#define GPIO_CALI_DATA_CALI_VALUE_SYNC2_Lsb			19u
	/*  */
#define GPIO_CALI_DATA_CALI_RDY_REAL				30u
	/*  */
#define GPIO_CALI_DATA_CALI_RDY_SYNC2				31u

	/* 0x130:  */
	uint32_t volatile FUNC%S_IN_SEL_CFG;
	/* select one of the 256 inputs */
#define GPIO_FUNC%S_IN_SEL_CFG_IN_SEL_Msb			0u
#define GPIO_FUNC%S_IN_SEL_CFG_IN_SEL_Lsb			5u
	/* revert the value of the input if you want to revert  please set the value to 1 */
#define GPIO_FUNC%S_IN_SEL_CFG_IN_INV_SEL			6u
	/* if the slow signal bypass the io matrix or not if you want  setting the value to 1 */
#define GPIO_FUNC%S_IN_SEL_CFG_SEL				7u

	/* 0x150 */
	uint8_t RESERVED1[0x530-0x150];

	/* 0x530:  */
	uint32_t volatile FUNC%S_OUT_SEL_CFG;
	/* select one of the 256 output to 4 GPIO */
#define GPIO_FUNC%S_OUT_SEL_CFG_OUT_SEL_Msb			0u
#define GPIO_FUNC%S_OUT_SEL_CFG_OUT_SEL_Lsb			8u
	/* invert the output value  if you want to revert the output value  setting the value to 1 */
#define GPIO_FUNC%S_OUT_SEL_CFG_INV_SEL				9u
	/* weather using the logical oen signal or not using the value setting by the register */
#define GPIO_FUNC%S_OUT_SEL_CFG_OEN_SEL				10u
	/* invert the output enable value  if you want to revert the output enable value  setting the value to 1 */
#define GPIO_FUNC%S_OUT_SEL_CFG_OEN_INV_SEL			11u

};


#define GPIO_SD ((struct mcu_gpio_sd *)0x3FF44F00)

struct mcu_gpio_sd {

	/* 0x00:  */
	uint32_t volatile SIGMADELTA0;
	/*  */
#define GPIO_SD_SIGMADELTA0_GPIO_SD0_IN_Msb			0u
#define GPIO_SD_SIGMADELTA0_GPIO_SD0_IN_Lsb			7u
	/*  */
#define GPIO_SD_SIGMADELTA0_GPIO_SD0_PRESCALE_Msb		8u
#define GPIO_SD_SIGMADELTA0_GPIO_SD0_PRESCALE_Lsb		15u

	/* 0x04:  */
	uint32_t volatile SIGMADELTA1;
	/*  */
#define GPIO_SD_SIGMADELTA1_GPIO_SD1_IN_Msb			0u
#define GPIO_SD_SIGMADELTA1_GPIO_SD1_IN_Lsb			7u
	/*  */
#define GPIO_SD_SIGMADELTA1_GPIO_SD1_PRESCALE_Msb		8u
#define GPIO_SD_SIGMADELTA1_GPIO_SD1_PRESCALE_Lsb		15u

	/* 0x08:  */
	uint32_t volatile SIGMADELTA2;
	/*  */
#define GPIO_SD_SIGMADELTA2_GPIO_SD2_IN_Msb			0u
#define GPIO_SD_SIGMADELTA2_GPIO_SD2_IN_Lsb			7u
	/*  */
#define GPIO_SD_SIGMADELTA2_GPIO_SD2_PRESCALE_Msb		8u
#define GPIO_SD_SIGMADELTA2_GPIO_SD2_PRESCALE_Lsb		15u

	/* 0x0C:  */
	uint32_t volatile SIGMADELTA3;
	/*  */
#define GPIO_SD_SIGMADELTA3_GPIO_SD3_IN_Msb			0u
#define GPIO_SD_SIGMADELTA3_GPIO_SD3_IN_Lsb			7u
	/*  */
#define GPIO_SD_SIGMADELTA3_GPIO_SD3_PRESCALE_Msb		8u
#define GPIO_SD_SIGMADELTA3_GPIO_SD3_PRESCALE_Lsb		15u

	/* 0x10:  */
	uint32_t volatile SIGMADELTA4;
	/*  */
#define GPIO_SD_SIGMADELTA4_GPIO_SD4_IN_Msb			0u
#define GPIO_SD_SIGMADELTA4_GPIO_SD4_IN_Lsb			7u
	/*  */
#define GPIO_SD_SIGMADELTA4_GPIO_SD4_PRESCALE_Msb		8u
#define GPIO_SD_SIGMADELTA4_GPIO_SD4_PRESCALE_Lsb		15u

	/* 0x14:  */
	uint32_t volatile SIGMADELTA5;
	/*  */
#define GPIO_SD_SIGMADELTA5_GPIO_SD5_IN_Msb			0u
#define GPIO_SD_SIGMADELTA5_GPIO_SD5_IN_Lsb			7u
	/*  */
#define GPIO_SD_SIGMADELTA5_GPIO_SD5_PRESCALE_Msb		8u
#define GPIO_SD_SIGMADELTA5_GPIO_SD5_PRESCALE_Lsb		15u

	/* 0x18:  */
	uint32_t volatile SIGMADELTA6;
	/*  */
#define GPIO_SD_SIGMADELTA6_GPIO_SD6_IN_Msb			0u
#define GPIO_SD_SIGMADELTA6_GPIO_SD6_IN_Lsb			7u
	/*  */
#define GPIO_SD_SIGMADELTA6_GPIO_SD6_PRESCALE_Msb		8u
#define GPIO_SD_SIGMADELTA6_GPIO_SD6_PRESCALE_Lsb		15u

	/* 0x1C:  */
	uint32_t volatile SIGMADELTA7;
	/*  */
#define GPIO_SD_SIGMADELTA7_GPIO_SD7_IN_Msb			0u
#define GPIO_SD_SIGMADELTA7_GPIO_SD7_IN_Lsb			7u
	/*  */
#define GPIO_SD_SIGMADELTA7_GPIO_SD7_PRESCALE_Msb		8u
#define GPIO_SD_SIGMADELTA7_GPIO_SD7_PRESCALE_Lsb		15u

	/* 0x20:  */
	uint32_t volatile SIGMADELTA_CG;
	/*  */
#define GPIO_SD_SIGMADELTA_CG_GPIO_SD_CLK_EN			31u

	/* 0x24:  */
	uint32_t volatile SIGMADELTA_MISC;
	/*  */
#define GPIO_SD_SIGMADELTA_MISC_GPIO_SPI_SWAP			31u

	/* 0x28:  */
	uint32_t volatile SIGMADELTA_VERSION;
	/*  */
#define GPIO_SD_SIGMADELTA_VERSION_GPIO_SD_DATE_Msb		0u
#define GPIO_SD_SIGMADELTA_VERSION_GPIO_SD_DATE_Lsb		27u

};


#define HINF ((struct mcu_hinf *)0x3FF4B000)

struct mcu_hinf {

	/* 0x00:  */
	uint32_t volatile CFG_DATA0;
	/*  */
#define HINF_CFG_DATA0_USER_ID_FN1_Msb				0u
#define HINF_CFG_DATA0_USER_ID_FN1_Lsb				15u
	/*  */
#define HINF_CFG_DATA0_DEVICE_ID_FN1_Msb			16u
#define HINF_CFG_DATA0_DEVICE_ID_FN1_Lsb			31u

	/* 0x04:  */
	uint32_t volatile CFG_DATA1;
	/*  */
#define HINF_CFG_DATA1_SDIO_ENABLE				0u
	/*  */
#define HINF_CFG_DATA1_SDIO_IOREADY1				1u
	/*  */
#define HINF_CFG_DATA1_HIGHSPEED_ENABLE				2u
	/*  */
#define HINF_CFG_DATA1_HIGHSPEED_MODE				3u
	/*  */
#define HINF_CFG_DATA1_SDIO_CD_ENABLE				4u
	/*  */
#define HINF_CFG_DATA1_SDIO_IOREADY2				5u
	/*  */
#define HINF_CFG_DATA1_SDIO_INT_MASK				6u
	/*  */
#define HINF_CFG_DATA1_IOENABLE2				7u
	/*  */
#define HINF_CFG_DATA1_CD_DISABLE				8u
	/*  */
#define HINF_CFG_DATA1_FUNC1_EPS				9u
	/*  */
#define HINF_CFG_DATA1_EMP					10u
	/*  */
#define HINF_CFG_DATA1_IOENABLE1				11u
	/*  */
#define HINF_CFG_DATA1_SDIO20_CONF0_Msb				12u
#define HINF_CFG_DATA1_SDIO20_CONF0_Lsb				15u
	/*  */
#define HINF_CFG_DATA1_SDIO_VER_Msb				16u
#define HINF_CFG_DATA1_SDIO_VER_Lsb				27u
	/*  */
#define HINF_CFG_DATA1_FUNC2_EPS				28u
	/*  */
#define HINF_CFG_DATA1_SDIO20_CONF1_Msb				29u
#define HINF_CFG_DATA1_SDIO20_CONF1_Lsb				31u

	/* 0x1C:  */
	uint32_t volatile CFG_DATA7;
	/*  */
#define HINF_CFG_DATA7_PIN_STATE_Msb				0u
#define HINF_CFG_DATA7_PIN_STATE_Lsb				7u
	/*  */
#define HINF_CFG_DATA7_CHIP_STATE_Msb				8u
#define HINF_CFG_DATA7_CHIP_STATE_Lsb				15u
	/*  */
#define HINF_CFG_DATA7_SDIO_RST					16u
	/*  */
#define HINF_CFG_DATA7_SDIO_IOREADY0				17u

	/* 0x20:  */
	uint32_t volatile CIS_CONF0;
	/*  */
#define HINF_CIS_CONF0_CIS_CONF_W0_Msb				0u
#define HINF_CIS_CONF0_CIS_CONF_W0_Lsb				31u

	/* 0x24:  */
	uint32_t volatile CIS_CONF1;
	/*  */
#define HINF_CIS_CONF1_CIS_CONF_W1_Msb				0u
#define HINF_CIS_CONF1_CIS_CONF_W1_Lsb				31u

	/* 0x28:  */
	uint32_t volatile CIS_CONF2;
	/*  */
#define HINF_CIS_CONF2_CIS_CONF_W2_Msb				0u
#define HINF_CIS_CONF2_CIS_CONF_W2_Lsb				31u

	/* 0x2C:  */
	uint32_t volatile CIS_CONF3;
	/*  */
#define HINF_CIS_CONF3_CIS_CONF_W3_Msb				0u
#define HINF_CIS_CONF3_CIS_CONF_W3_Lsb				31u

	/* 0x30:  */
	uint32_t volatile CIS_CONF4;
	/*  */
#define HINF_CIS_CONF4_CIS_CONF_W4_Msb				0u
#define HINF_CIS_CONF4_CIS_CONF_W4_Lsb				31u

	/* 0x34:  */
	uint32_t volatile CIS_CONF5;
	/*  */
#define HINF_CIS_CONF5_CIS_CONF_W5_Msb				0u
#define HINF_CIS_CONF5_CIS_CONF_W5_Lsb				31u

	/* 0x38:  */
	uint32_t volatile CIS_CONF6;
	/*  */
#define HINF_CIS_CONF6_CIS_CONF_W6_Msb				0u
#define HINF_CIS_CONF6_CIS_CONF_W6_Lsb				31u

	/* 0x3C:  */
	uint32_t volatile CIS_CONF7;
	/*  */
#define HINF_CIS_CONF7_CIS_CONF_W7_Msb				0u
#define HINF_CIS_CONF7_CIS_CONF_W7_Lsb				31u

	/* 0x40:  */
	uint32_t volatile CFG_DATA16;
	/*  */
#define HINF_CFG_DATA16_USER_ID_FN2_Msb				0u
#define HINF_CFG_DATA16_USER_ID_FN2_Lsb				15u
	/*  */
#define HINF_CFG_DATA16_DEVICE_ID_FN2_Msb			16u
#define HINF_CFG_DATA16_DEVICE_ID_FN2_Lsb			31u

	/* 0x60 */
	uint8_t RESERVED0[0xFC-0x60];

	/* 0xFC:  */
	uint32_t volatile DATE;
	/*  */
#define HINF_DATE_SDIO_DATE_Msb					0u
#define HINF_DATE_SDIO_DATE_Lsb					31u

};


#define I2C0 ((struct mcu_i2c0 *)0x3FF53000)

struct mcu_i2c0 {

	/* 0x00:  */
	uint32_t volatile SCL_LOW_PERIOD;
	/* This register is used to configure the  low level width of SCL clock. */
#define I2C0_SCL_LOW_PERIOD_SCL_LOW_PERIOD_Msb			0u
#define I2C0_SCL_LOW_PERIOD_SCL_LOW_PERIOD_Lsb			13u

	/* 0x04:  */
	uint32_t volatile CTR;
	/* 1: normally ouput sda data   0: exchange the function of sda_o and sda_oe (sda_o is the original internal output sda signal sda_oe is the enable bit for the internal output sda signal) */
#define I2C0_CTR_SDA_FORCE_OUT					0u
	/* 1: normally ouput scl clock  0: exchange the function of scl_o and scl_oe (scl_o is the original internal output scl signal  scl_oe is the enable bit for the internal output scl signal) */
#define I2C0_CTR_SCL_FORCE_OUT					1u
	/* Set this bit to sample data in SCL low level. */
#define I2C0_CTR_SAMPLE_SCL_LEVEL				2u
	/* Set this bit to configure the module as i2c master  clear this bit to configure the module as i2c slave. */
#define I2C0_CTR_MS_MODE					4u
	/* Set this bit to start sending data in txfifo. */
#define I2C0_CTR_TRANS_START					5u
	/* This bit is used to control the sending mode for  data need to be send. */
#define I2C0_CTR_TX_LSB_FIRST					6u
	/* This bit is used to control the storage mode for received datas. */
#define I2C0_CTR_RX_LSB_FIRST					7u
	/* This is the clock gating control bit for reading or writing registers. */
#define I2C0_CTR_CLK_EN						8u

	/* 0x08:  */
	uint32_t volatile SR;
	/* This register stores the value of ACK bit. */
#define I2C0_SR_ACK_REC						0u
	/* when in slave mode  1: master read slave  0: master write slave. */
#define I2C0_SR_SLAVE_RW					1u
	/* when I2C takes more than time_out_reg clocks to receive a data then this register changes to high level. */
#define I2C0_SR_TIME_OUT					2u
	/* when I2C lost control of SDA line  this register changes to high level. */
#define I2C0_SR_ARB_LOST					3u
	/* 1:I2C bus is busy transferring data. */
#define I2C0_SR_BUS_BUSY					4u
	/* when configured as i2c slave  and the address send by master is equal to slave's address  then this bit will be high level. */
#define I2C0_SR_SLAVE_ADDRESSED					5u
	/* This register changes to high level when one byte is transferred. */
#define I2C0_SR_BYTE_TRANS					6u
	/* This register represent the amount of data need to send. */
#define I2C0_SR_RXFIFO_CNT_Msb					8u
#define I2C0_SR_RXFIFO_CNT_Lsb					13u
	/* This register stores the amount of received data  in ram. */
#define I2C0_SR_TXFIFO_CNT_Msb					18u
#define I2C0_SR_TXFIFO_CNT_Lsb					23u
	/* This register stores the value of state machine for i2c module. */
#define I2C0_SR_SCL_MAIN_STATE_LAST_Msb				24u
#define I2C0_SR_SCL_MAIN_STATE_LAST_Lsb				26u
	/* This register stores the value of state machine to produce SCL. */
#define I2C0_SR_SCL_STATE_LAST_Msb				28u
#define I2C0_SR_SCL_STATE_LAST_Lsb				30u

	/* 0x0C:  */
	uint32_t volatile TO;
	/* This register is used to configure the max clock number of receiving  a data. */
#define I2C0_TO_TIME_OUT_Msb					0u
#define I2C0_TO_TIME_OUT_Lsb					19u

	/* 0x10:  */
	uint32_t volatile SLAVE_ADDR;
	/* when configured as i2c slave  this register is used to configure slave's address. */
#define I2C0_SLAVE_ADDR_SLAVE_ADDR_Msb				0u
#define I2C0_SLAVE_ADDR_SLAVE_ADDR_Lsb				14u
	/* This register is used to enable slave 10bit address mode. */
#define I2C0_SLAVE_ADDR_ADDR_10BIT_EN				31u

	/* 0x14:  */
	uint32_t volatile RXFIFO_ST;
	/* This is the offset address of the last receiving data as described in nonfifo_rx_thres_register. */
#define I2C0_RXFIFO_ST_RXFIFO_START_ADDR_Msb			0u
#define I2C0_RXFIFO_ST_RXFIFO_START_ADDR_Lsb			4u
	/* This is the offset address of the first receiving data as described in nonfifo_rx_thres_register. */
#define I2C0_RXFIFO_ST_RXFIFO_END_ADDR_Msb			5u
#define I2C0_RXFIFO_ST_RXFIFO_END_ADDR_Lsb			9u
	/* This is the offset address of the first  sending data as described in nonfifo_tx_thres register. */
#define I2C0_RXFIFO_ST_TXFIFO_START_ADDR_Msb			10u
#define I2C0_RXFIFO_ST_TXFIFO_START_ADDR_Lsb			14u
	/* This is the offset address of the last  sending data as described in nonfifo_tx_thres register. */
#define I2C0_RXFIFO_ST_TXFIFO_END_ADDR_Msb			15u
#define I2C0_RXFIFO_ST_TXFIFO_END_ADDR_Lsb			19u

	/* 0x18:  */
	uint32_t volatile FIFO_CONF;
	/*  */
#define I2C0_FIFO_CONF_RXFIFO_FULL_THRHD_Msb			0u
#define I2C0_FIFO_CONF_RXFIFO_FULL_THRHD_Lsb			4u
	/* Config txfifo empty threhd value when using apb fifo access */
#define I2C0_FIFO_CONF_TXFIFO_EMPTY_THRHD_Msb			5u
#define I2C0_FIFO_CONF_TXFIFO_EMPTY_THRHD_Lsb			9u
	/* Set this bit to enble apb nonfifo access. */
#define I2C0_FIFO_CONF_NONFIFO_EN				10u
	/* When this bit is set to 1 then the byte after address represent the offset address of I2C Slave's ram. */
#define I2C0_FIFO_CONF_FIFO_ADDR_CFG_EN				11u
	/* Set this bit to reset rx fifo when using apb fifo access. */
#define I2C0_FIFO_CONF_RX_FIFO_RST				12u
	/* Set this bit to reset tx fifo when using apb fifo access. */
#define I2C0_FIFO_CONF_TX_FIFO_RST				13u
	/* when I2C receives more than nonfifo_rx_thres data  it will produce rx_send_full_int_raw interrupt and update the current offset address of the receiving data. */
#define I2C0_FIFO_CONF_NONFIFO_RX_THRES_Msb			14u
#define I2C0_FIFO_CONF_NONFIFO_RX_THRES_Lsb			19u
	/* when I2C sends more than nonfifo_tx_thres data  it will produce tx_send_empty_int_raw interrupt and update the current offset address of the sending data. */
#define I2C0_FIFO_CONF_NONFIFO_TX_THRES_Msb			20u
#define I2C0_FIFO_CONF_NONFIFO_TX_THRES_Lsb			25u

	/* 0x20:  */
	uint32_t volatile INT_RAW;
	/* The raw interrupt status bit for rxfifo full when use apb fifo access. */
#define I2C0_INT_RAW_RXFIFO_FULL_INT_RAW			0u
	/* The raw interrupt status bit for txfifo empty when use apb fifo access. */
#define I2C0_INT_RAW_TXFIFO_EMPTY_INT_RAW			1u
	/* The raw interrupt status bit for receiving data overflow when use apb fifo access. */
#define I2C0_INT_RAW_RXFIFO_OVF_INT_RAW				2u
	/* The raw interrupt status bit for end_detect_int interrupt. */
#define I2C0_INT_RAW_END_DETECT_INT_RAW				3u
	/* The raw interrupt status bit for slave_tran_comp_int interrupt. */
#define I2C0_INT_RAW_SLAVE_TRAN_COMP_INT_RAW			4u
	/* The raw interrupt status bit for arbitration_lost_int interrupt.when I2C lost the usage right of I2C BUS it will produce arbitration_lost_int interrupt. */
#define I2C0_INT_RAW_ARBITRATION_LOST_INT_RAW			5u
	/* The raw interrupt status bit for master_tra_comp_int interrupt. */
#define I2C0_INT_RAW_MASTER_TRAN_COMP_INT_RAW			6u
	/* The raw interrupt status bit for trans_complete_int interrupt. */
#define I2C0_INT_RAW_TRANS_COMPLETE_INT_RAW			7u
	/* The raw interrupt status bit for time_out_int interrupt. */
#define I2C0_INT_RAW_TIME_OUT_INT_RAW				8u
	/* The raw interrupt status bit for trans_start_int interrupt. */
#define I2C0_INT_RAW_TRANS_START_INT_RAW			9u
	/* The raw interrupt status bit for ack_err_int interrupt. */
#define I2C0_INT_RAW_ACK_ERR_INT_RAW				10u
	/* The raw interrupt status bit for rx_rec_full_int interrupt. */
#define I2C0_INT_RAW_RX_REC_FULL_INT_RAW			11u
	/* The raw interrupt status bit for tx_send_empty_int interrupt.when I2C sends more data than nonfifo_tx_thres  it will produce tx_send_empty_int interrupt.. */
#define I2C0_INT_RAW_TX_SEND_EMPTY_INT_RAW			12u

	/* 0x24:  */
	uint32_t volatile INT_CLR;
	/* Set this bit to clear the rxfifo_full_int interrupt. */
#define I2C0_INT_CLR_RXFIFO_FULL_INT_CLR			0u
	/* Set this bit to clear the txfifo_empty_int interrupt. */
#define I2C0_INT_CLR_TXFIFO_EMPTY_INT_CLR			1u
	/* Set this bit to clear the rxfifo_ovf_int interrupt. */
#define I2C0_INT_CLR_RXFIFO_OVF_INT_CLR				2u
	/* Set this bit to clear the end_detect_int interrupt. */
#define I2C0_INT_CLR_END_DETECT_INT_CLR				3u
	/* Set this bit to clear the slave_tran_comp_int interrupt. */
#define I2C0_INT_CLR_SLAVE_TRAN_COMP_INT_CLR			4u
	/* Set this bit to clear the arbitration_lost_int interrupt. */
#define I2C0_INT_CLR_ARBITRATION_LOST_INT_CLR			5u
	/* Set this bit to clear the master_tran_comp interrupt. */
#define I2C0_INT_CLR_MASTER_TRAN_COMP_INT_CLR			6u
	/* Set this bit to clear the trans_complete_int interrupt. */
#define I2C0_INT_CLR_TRANS_COMPLETE_INT_CLR			7u
	/* Set this bit to clear the time_out_int interrupt. */
#define I2C0_INT_CLR_TIME_OUT_INT_CLR				8u
	/* Set this bit to clear the trans_start_int interrupt. */
#define I2C0_INT_CLR_TRANS_START_INT_CLR			9u
	/* Set this bit to clear the ack_err_int interrupt. */
#define I2C0_INT_CLR_ACK_ERR_INT_CLR				10u
	/* Set this bit to clear the rx_rec_full_int interrupt. */
#define I2C0_INT_CLR_RX_REC_FULL_INT_CLR			11u
	/* Set this bit to clear the tx_send_empty_int interrupt. */
#define I2C0_INT_CLR_TX_SEND_EMPTY_INT_CLR			12u

	/* 0x28:  */
	uint32_t volatile INT_ENA;
	/* The enable bit for rxfifo_full_int interrupt. */
#define I2C0_INT_ENA_RXFIFO_FULL_INT_ENA			0u
	/* The enable bit for txfifo_empty_int interrupt. */
#define I2C0_INT_ENA_TXFIFO_EMPTY_INT_ENA			1u
	/* The enable bit for rxfifo_ovf_int interrupt. */
#define I2C0_INT_ENA_RXFIFO_OVF_INT_ENA				2u
	/* The enable bit for end_detect_int interrupt. */
#define I2C0_INT_ENA_END_DETECT_INT_ENA				3u
	/* The enable bit for slave_tran_comp_int interrupt. */
#define I2C0_INT_ENA_SLAVE_TRAN_COMP_INT_ENA			4u
	/* The enable bit for arbitration_lost_int interrupt. */
#define I2C0_INT_ENA_ARBITRATION_LOST_INT_ENA			5u
	/* The enable bit for master_tran_comp_int interrupt. */
#define I2C0_INT_ENA_MASTER_TRAN_COMP_INT_ENA			6u
	/* The enable bit for trans_complete_int interrupt. */
#define I2C0_INT_ENA_TRANS_COMPLETE_INT_ENA			7u
	/* The enable bit for time_out_int interrupt. */
#define I2C0_INT_ENA_TIME_OUT_INT_ENA				8u
	/* The enable bit for trans_start_int interrupt. */
#define I2C0_INT_ENA_TRANS_START_INT_ENA			9u
	/* The enable bit for ack_err_int interrupt. */
#define I2C0_INT_ENA_ACK_ERR_INT_ENA				10u
	/* The enable bit for rx_rec_full_int interrupt. */
#define I2C0_INT_ENA_RX_REC_FULL_INT_ENA			11u
	/* The enable bit for tx_send_empty_int interrupt. */
#define I2C0_INT_ENA_TX_SEND_EMPTY_INT_ENA			12u

	/* 0x2C:  */
	uint32_t volatile INT_STATUS;
	/* The masked interrupt status for rxfifo_full_int interrupt. */
#define I2C0_INT_STATUS_RXFIFO_FULL_INT_ST			0u
	/* The masked interrupt status for txfifo_empty_int interrupt. */
#define I2C0_INT_STATUS_TXFIFO_EMPTY_INT_ST			1u
	/* The masked interrupt status for rxfifo_ovf_int interrupt. */
#define I2C0_INT_STATUS_RXFIFO_OVF_INT_ST			2u
	/* The masked interrupt status for end_detect_int interrupt. */
#define I2C0_INT_STATUS_END_DETECT_INT_ST			3u
	/* The masked interrupt status for slave_tran_comp_int interrupt. */
#define I2C0_INT_STATUS_SLAVE_TRAN_COMP_INT_ST			4u
	/* The masked interrupt status for arbitration_lost_int interrupt. */
#define I2C0_INT_STATUS_ARBITRATION_LOST_INT_ST			5u
	/* The masked interrupt status for master_tran_comp_int interrupt. */
#define I2C0_INT_STATUS_MASTER_TRAN_COMP_INT_ST			6u
	/* The masked interrupt status for trans_complete_int interrupt. */
#define I2C0_INT_STATUS_TRANS_COMPLETE_INT_ST			7u
	/* The masked interrupt status for time_out_int interrupt. */
#define I2C0_INT_STATUS_TIME_OUT_INT_ST				8u
	/* The masked interrupt status for trans_start_int interrupt. */
#define I2C0_INT_STATUS_TRANS_START_INT_ST			9u
	/* The masked interrupt status for ack_err_int interrupt. */
#define I2C0_INT_STATUS_ACK_ERR_INT_ST				10u
	/* The masked interrupt status for rx_rec_full_int interrupt. */
#define I2C0_INT_STATUS_RX_REC_FULL_INT_ST			11u
	/* The masked interrupt status for tx_send_empty_int interrupt. */
#define I2C0_INT_STATUS_TX_SEND_EMPTY_INT_ST			12u

	/* 0x30:  */
	uint32_t volatile SDA_HOLD;
	/* This register is used to configure the clock num I2C used to hold the data after the negedge of SCL. */
#define I2C0_SDA_HOLD_TIME_Msb					0u
#define I2C0_SDA_HOLD_TIME_Lsb					9u

	/* 0x34:  */
	uint32_t volatile SDA_SAMPLE;
	/* This register is used to configure the clock num I2C used to sample data on SDA after the posedge of SCL */
#define I2C0_SDA_SAMPLE_TIME_Msb				0u
#define I2C0_SDA_SAMPLE_TIME_Lsb				9u

	/* 0x38:  */
	uint32_t volatile SCL_HIGH_PERIOD;
	/* This register is used to configure the clock num during SCL is low level. */
#define I2C0_SCL_HIGH_PERIOD_SCL_HIGH_PERIOD_Msb		0u
#define I2C0_SCL_HIGH_PERIOD_SCL_HIGH_PERIOD_Lsb		13u

	/* 0x40:  */
	uint32_t volatile SCL_START_HOLD;
	/* This register is used to configure the clock num between the negedge of SDA and negedge of SCL for start mark. */
#define I2C0_SCL_START_HOLD_TIME_Msb				0u
#define I2C0_SCL_START_HOLD_TIME_Lsb				9u

	/* 0x44:  */
	uint32_t volatile SCL_RSTART_SETUP;
	/* This register is used to configure the clock num between the posedge of SCL and the negedge of SDA for restart mark. */
#define I2C0_SCL_RSTART_SETUP_TIME_Msb				0u
#define I2C0_SCL_RSTART_SETUP_TIME_Lsb				9u

	/* 0x48:  */
	uint32_t volatile SCL_STOP_HOLD;
	/* This register is used to configure the clock num after the STOP bit's posedge. */
#define I2C0_SCL_STOP_HOLD_TIME_Msb				0u
#define I2C0_SCL_STOP_HOLD_TIME_Lsb				13u

	/* 0x4C:  */
	uint32_t volatile SCL_STOP_SETUP;
	/* This register is used to configure the clock num between the posedge of SCL and the posedge of SDA. */
#define I2C0_SCL_STOP_SETUP_TIME_Msb				0u
#define I2C0_SCL_STOP_SETUP_TIME_Lsb				9u

	/* 0x50:  */
	uint32_t volatile SCL_FILTER_CFG;
	/* When input SCL's pulse width is smaller than this register value  I2C ignores this pulse. */
#define I2C0_SCL_FILTER_CFG_SCL_FILTER_THRES_Msb		0u
#define I2C0_SCL_FILTER_CFG_SCL_FILTER_THRES_Lsb		2u
	/* This is the filter enable bit for SCL. */
#define I2C0_SCL_FILTER_CFG_SCL_FILTER_EN			3u

	/* 0x54:  */
	uint32_t volatile SDA_FILTER_CFG;
	/* When input SCL's pulse width is smaller than this register value  I2C ignores this pulse. */
#define I2C0_SDA_FILTER_CFG_SDA_FILTER_THRES_Msb		0u
#define I2C0_SDA_FILTER_CFG_SDA_FILTER_THRES_Lsb		2u
	/* This is the filter enable bit for SDA. */
#define I2C0_SDA_FILTER_CFG_SDA_FILTER_EN			3u

	/* 0x58:  */
	uint32_t volatile COMD%S;
	/* This is the content of command. */
#define I2C0_COMD%S_COMMAND_Msb					0u
#define I2C0_COMD%S_COMMAND_Lsb					13u
	/* When command is done in I2C Master mode  this bit changes to high level. */
#define I2C0_COMD%S_COMMAND_DONE				31u

	/* 0x78 */
	uint8_t RESERVED0[0xF8-0x78];

	/* 0xF8:  */
	uint32_t volatile DATE;
	/*  */
#define I2C0_DATE_DATE_Msb					0u
#define I2C0_DATE_DATE_Lsb					31u

	/* 0x100:  */
	uint32_t volatile FIFO_START_ADDR;

};


#define I2C1 ((struct mcu_i2c1 *)0x3FF67000)

struct mcu_i2c1 {

};


#define I2S0 ((struct mcu_i2s0 *)0x3FF4F000)

struct mcu_i2s0 {

	/* 0x08:  */
	uint32_t volatile CONF;
	/*  */
#define I2S0_CONF_TX_RESET					0u
	/*  */
#define I2S0_CONF_RX_RESET					1u
	/*  */
#define I2S0_CONF_TX_FIFO_RESET					2u
	/*  */
#define I2S0_CONF_RX_FIFO_RESET					3u
	/*  */
#define I2S0_CONF_TX_START					4u
	/*  */
#define I2S0_CONF_RX_START					5u
	/*  */
#define I2S0_CONF_TX_SLAVE_MOD					6u
	/*  */
#define I2S0_CONF_RX_SLAVE_MOD					7u
	/*  */
#define I2S0_CONF_TX_RIGHT_FIRST				8u
	/*  */
#define I2S0_CONF_RX_RIGHT_FIRST				9u
	/*  */
#define I2S0_CONF_TX_MSB_SHIFT					10u
	/*  */
#define I2S0_CONF_RX_MSB_SHIFT					11u
	/*  */
#define I2S0_CONF_TX_SHORT_SYNC					12u
	/*  */
#define I2S0_CONF_RX_SHORT_SYNC					13u
	/*  */
#define I2S0_CONF_TX_MONO					14u
	/*  */
#define I2S0_CONF_RX_MONO					15u
	/*  */
#define I2S0_CONF_TX_MSB_RIGHT					16u
	/*  */
#define I2S0_CONF_RX_MSB_RIGHT					17u
	/*  */
#define I2S0_CONF_SIG_LOOPBACK					18u

	/* 0x0C:  */
	uint32_t volatile INT_RAW;
	/*  */
#define I2S0_INT_RAW_RX_TAKE_DATA_INT_RAW			0u
	/*  */
#define I2S0_INT_RAW_TX_PUT_DATA_INT_RAW			1u
	/*  */
#define I2S0_INT_RAW_RX_WFULL_INT_RAW				2u
	/*  */
#define I2S0_INT_RAW_RX_REMPTY_INT_RAW				3u
	/*  */
#define I2S0_INT_RAW_TX_WFULL_INT_RAW				4u
	/*  */
#define I2S0_INT_RAW_TX_REMPTY_INT_RAW				5u
	/*  */
#define I2S0_INT_RAW_RX_HUNG_INT_RAW				6u
	/*  */
#define I2S0_INT_RAW_TX_HUNG_INT_RAW				7u
	/*  */
#define I2S0_INT_RAW_IN_DONE_INT_RAW				8u
	/*  */
#define I2S0_INT_RAW_IN_SUC_EOF_INT_RAW				9u
	/*  */
#define I2S0_INT_RAW_IN_ERR_EOF_INT_RAW				10u
	/*  */
#define I2S0_INT_RAW_OUT_DONE_INT_RAW				11u
	/*  */
#define I2S0_INT_RAW_OUT_EOF_INT_RAW				12u
	/*  */
#define I2S0_INT_RAW_IN_DSCR_ERR_INT_RAW			13u
	/*  */
#define I2S0_INT_RAW_OUT_DSCR_ERR_INT_RAW			14u
	/*  */
#define I2S0_INT_RAW_IN_DSCR_EMPTY_INT_RAW			15u
	/*  */
#define I2S0_INT_RAW_OUT_TOTAL_EOF_INT_RAW			16u

	/* 0x10:  */
	uint32_t volatile INT_ST;
	/*  */
#define I2S0_INT_ST_RX_TAKE_DATA_INT_ST				0u
	/*  */
#define I2S0_INT_ST_TX_PUT_DATA_INT_ST				1u
	/*  */
#define I2S0_INT_ST_RX_WFULL_INT_ST				2u
	/*  */
#define I2S0_INT_ST_RX_REMPTY_INT_ST				3u
	/*  */
#define I2S0_INT_ST_TX_WFULL_INT_ST				4u
	/*  */
#define I2S0_INT_ST_TX_REMPTY_INT_ST				5u
	/*  */
#define I2S0_INT_ST_RX_HUNG_INT_ST				6u
	/*  */
#define I2S0_INT_ST_TX_HUNG_INT_ST				7u
	/*  */
#define I2S0_INT_ST_IN_DONE_INT_ST				8u
	/*  */
#define I2S0_INT_ST_IN_SUC_EOF_INT_ST				9u
	/*  */
#define I2S0_INT_ST_IN_ERR_EOF_INT_ST				10u
	/*  */
#define I2S0_INT_ST_OUT_DONE_INT_ST				11u
	/*  */
#define I2S0_INT_ST_OUT_EOF_INT_ST				12u
	/*  */
#define I2S0_INT_ST_IN_DSCR_ERR_INT_ST				13u
	/*  */
#define I2S0_INT_ST_OUT_DSCR_ERR_INT_ST				14u
	/*  */
#define I2S0_INT_ST_IN_DSCR_EMPTY_INT_ST			15u
	/*  */
#define I2S0_INT_ST_OUT_TOTAL_EOF_INT_ST			16u

	/* 0x14:  */
	uint32_t volatile INT_ENA;
	/*  */
#define I2S0_INT_ENA_RX_TAKE_DATA_INT_ENA			0u
	/*  */
#define I2S0_INT_ENA_TX_PUT_DATA_INT_ENA			1u
	/*  */
#define I2S0_INT_ENA_RX_WFULL_INT_ENA				2u
	/*  */
#define I2S0_INT_ENA_RX_REMPTY_INT_ENA				3u
	/*  */
#define I2S0_INT_ENA_TX_WFULL_INT_ENA				4u
	/*  */
#define I2S0_INT_ENA_TX_REMPTY_INT_ENA				5u
	/*  */
#define I2S0_INT_ENA_RX_HUNG_INT_ENA				6u
	/*  */
#define I2S0_INT_ENA_TX_HUNG_INT_ENA				7u
	/*  */
#define I2S0_INT_ENA_IN_DONE_INT_ENA				8u
	/*  */
#define I2S0_INT_ENA_IN_SUC_EOF_INT_ENA				9u
	/*  */
#define I2S0_INT_ENA_IN_ERR_EOF_INT_ENA				10u
	/*  */
#define I2S0_INT_ENA_OUT_DONE_INT_ENA				11u
	/*  */
#define I2S0_INT_ENA_OUT_EOF_INT_ENA				12u
	/*  */
#define I2S0_INT_ENA_IN_DSCR_ERR_INT_ENA			13u
	/*  */
#define I2S0_INT_ENA_OUT_DSCR_ERR_INT_ENA			14u
	/*  */
#define I2S0_INT_ENA_IN_DSCR_EMPTY_INT_ENA			15u
	/*  */
#define I2S0_INT_ENA_OUT_TOTAL_EOF_INT_ENA			16u

	/* 0x18:  */
	uint32_t volatile INT_CLR;
	/*  */
#define I2S0_INT_CLR_TAKE_DATA_INT_CLR				0u
	/*  */
#define I2S0_INT_CLR_PUT_DATA_INT_CLR				1u
	/*  */
#define I2S0_INT_CLR_RX_WFULL_INT_CLR				2u
	/*  */
#define I2S0_INT_CLR_RX_REMPTY_INT_CLR				3u
	/*  */
#define I2S0_INT_CLR_TX_WFULL_INT_CLR				4u
	/*  */
#define I2S0_INT_CLR_TX_REMPTY_INT_CLR				5u
	/*  */
#define I2S0_INT_CLR_RX_HUNG_INT_CLR				6u
	/*  */
#define I2S0_INT_CLR_TX_HUNG_INT_CLR				7u
	/*  */
#define I2S0_INT_CLR_IN_DONE_INT_CLR				8u
	/*  */
#define I2S0_INT_CLR_IN_SUC_EOF_INT_CLR				9u
	/*  */
#define I2S0_INT_CLR_IN_ERR_EOF_INT_CLR				10u
	/*  */
#define I2S0_INT_CLR_OUT_DONE_INT_CLR				11u
	/*  */
#define I2S0_INT_CLR_OUT_EOF_INT_CLR				12u
	/*  */
#define I2S0_INT_CLR_IN_DSCR_ERR_INT_CLR			13u
	/*  */
#define I2S0_INT_CLR_OUT_DSCR_ERR_INT_CLR			14u
	/*  */
#define I2S0_INT_CLR_IN_DSCR_EMPTY_INT_CLR			15u
	/*  */
#define I2S0_INT_CLR_OUT_TOTAL_EOF_INT_CLR			16u

	/* 0x1C:  */
	uint32_t volatile TIMING;
	/*  */
#define I2S0_TIMING_TX_BCK_IN_DELAY_Msb				0u
#define I2S0_TIMING_TX_BCK_IN_DELAY_Lsb				1u
	/*  */
#define I2S0_TIMING_TX_WS_IN_DELAY_Msb				2u
#define I2S0_TIMING_TX_WS_IN_DELAY_Lsb				3u
	/*  */
#define I2S0_TIMING_RX_BCK_IN_DELAY_Msb				4u
#define I2S0_TIMING_RX_BCK_IN_DELAY_Lsb				5u
	/*  */
#define I2S0_TIMING_RX_WS_IN_DELAY_Msb				6u
#define I2S0_TIMING_RX_WS_IN_DELAY_Lsb				7u
	/*  */
#define I2S0_TIMING_RX_SD_IN_DELAY_Msb				8u
#define I2S0_TIMING_RX_SD_IN_DELAY_Lsb				9u
	/*  */
#define I2S0_TIMING_TX_BCK_OUT_DELAY_Msb			10u
#define I2S0_TIMING_TX_BCK_OUT_DELAY_Lsb			11u
	/*  */
#define I2S0_TIMING_TX_WS_OUT_DELAY_Msb				12u
#define I2S0_TIMING_TX_WS_OUT_DELAY_Lsb				13u
	/*  */
#define I2S0_TIMING_TX_SD_OUT_DELAY_Msb				14u
#define I2S0_TIMING_TX_SD_OUT_DELAY_Lsb				15u
	/*  */
#define I2S0_TIMING_RX_WS_OUT_DELAY_Msb				16u
#define I2S0_TIMING_RX_WS_OUT_DELAY_Lsb				17u
	/*  */
#define I2S0_TIMING_RX_BCK_OUT_DELAY_Msb			18u
#define I2S0_TIMING_RX_BCK_OUT_DELAY_Lsb			19u
	/*  */
#define I2S0_TIMING_TX_DSYNC_SW					20u
	/*  */
#define I2S0_TIMING_RX_DSYNC_SW					21u
	/*  */
#define I2S0_TIMING_DATA_ENABLE_DELAY_Msb			22u
#define I2S0_TIMING_DATA_ENABLE_DELAY_Lsb			23u
	/*  */
#define I2S0_TIMING_TX_BCK_IN_INV				24u

	/* 0x20:  */
	uint32_t volatile FIFO_CONF;
	/*  */
#define I2S0_FIFO_CONF_RX_DATA_NUM_Msb				0u
#define I2S0_FIFO_CONF_RX_DATA_NUM_Lsb				5u
	/*  */
#define I2S0_FIFO_CONF_TX_DATA_NUM_Msb				6u
#define I2S0_FIFO_CONF_TX_DATA_NUM_Lsb				11u
	/*  */
#define I2S0_FIFO_CONF_DSCR_EN					12u
	/*  */
#define I2S0_FIFO_CONF_TX_FIFO_MOD_Msb				13u
#define I2S0_FIFO_CONF_TX_FIFO_MOD_Lsb				15u
	/*  */
#define I2S0_FIFO_CONF_RX_FIFO_MOD_Msb				16u
#define I2S0_FIFO_CONF_RX_FIFO_MOD_Lsb				18u
	/*  */
#define I2S0_FIFO_CONF_TX_FIFO_MOD_FORCE_EN			19u
	/*  */
#define I2S0_FIFO_CONF_RX_FIFO_MOD_FORCE_EN			20u

	/* 0x24:  */
	uint32_t volatile RXEOF_NUM;
	/*  */
#define I2S0_RXEOF_NUM_RX_EOF_NUM_Msb				0u
#define I2S0_RXEOF_NUM_RX_EOF_NUM_Lsb				31u

	/* 0x28:  */
	uint32_t volatile CONF_SIGLE_DATA;
	/*  */
#define I2S0_CONF_SIGLE_DATA_SIGLE_DATA_Msb			0u
#define I2S0_CONF_SIGLE_DATA_SIGLE_DATA_Lsb			31u

	/* 0x2C:  */
	uint32_t volatile CONF_CHAN;
	/*  */
#define I2S0_CONF_CHAN_TX_CHAN_MOD_Msb				0u
#define I2S0_CONF_CHAN_TX_CHAN_MOD_Lsb				2u
	/*  */
#define I2S0_CONF_CHAN_RX_CHAN_MOD_Msb				3u
#define I2S0_CONF_CHAN_RX_CHAN_MOD_Lsb				4u

	/* 0x30:  */
	uint32_t volatile OUT_LINK;
	/*  */
#define I2S0_OUT_LINK_OUTLINK_ADDR_Msb				0u
#define I2S0_OUT_LINK_OUTLINK_ADDR_Lsb				19u
	/*  */
#define I2S0_OUT_LINK_OUTLINK_STOP				28u
	/*  */
#define I2S0_OUT_LINK_OUTLINK_START				29u
	/*  */
#define I2S0_OUT_LINK_OUTLINK_RESTART				30u
	/*  */
#define I2S0_OUT_LINK_OUTLINK_PARK				31u

	/* 0x34:  */
	uint32_t volatile IN_LINK;
	/*  */
#define I2S0_IN_LINK_INLINK_ADDR_Msb				0u
#define I2S0_IN_LINK_INLINK_ADDR_Lsb				19u
	/*  */
#define I2S0_IN_LINK_INLINK_STOP				28u
	/*  */
#define I2S0_IN_LINK_INLINK_START				29u
	/*  */
#define I2S0_IN_LINK_INLINK_RESTART				30u
	/*  */
#define I2S0_IN_LINK_INLINK_PARK				31u

	/* 0x38:  */
	uint32_t volatile OUT_EOF_DES_ADDR;
	/*  */
#define I2S0_OUT_EOF_DES_ADDR_OUT_EOF_DES_ADDR_Msb		0u
#define I2S0_OUT_EOF_DES_ADDR_OUT_EOF_DES_ADDR_Lsb		31u

	/* 0x3C:  */
	uint32_t volatile IN_EOF_DES_ADDR;
	/*  */
#define I2S0_IN_EOF_DES_ADDR_IN_SUC_EOF_DES_ADDR_Msb		0u
#define I2S0_IN_EOF_DES_ADDR_IN_SUC_EOF_DES_ADDR_Lsb		31u

	/* 0x40:  */
	uint32_t volatile OUT_EOF_BFR_DES_ADDR;
	/*  */
#define I2S0_OUT_EOF_BFR_DES_ADDR_OUT_EOF_BFR_DES_ADDR_Msb	0u
#define I2S0_OUT_EOF_BFR_DES_ADDR_OUT_EOF_BFR_DES_ADDR_Lsb	31u

	/* 0x44:  */
	uint32_t volatile AHB_TEST;
	/*  */
#define I2S0_AHB_TEST_AHB_TESTMODE_Msb				0u
#define I2S0_AHB_TEST_AHB_TESTMODE_Lsb				2u
	/*  */
#define I2S0_AHB_TEST_AHB_TESTADDR_Msb				4u
#define I2S0_AHB_TEST_AHB_TESTADDR_Lsb				5u

	/* 0x48:  */
	uint32_t volatile INLINK_DSCR;
	/*  */
#define I2S0_INLINK_DSCR_INLINK_DSCR_Msb			0u
#define I2S0_INLINK_DSCR_INLINK_DSCR_Lsb			31u

	/* 0x4C:  */
	uint32_t volatile INLINK_DSCR_BF0;
	/*  */
#define I2S0_INLINK_DSCR_BF0_INLINK_DSCR_BF0_Msb		0u
#define I2S0_INLINK_DSCR_BF0_INLINK_DSCR_BF0_Lsb		31u

	/* 0x50:  */
	uint32_t volatile INLINK_DSCR_BF1;
	/*  */
#define I2S0_INLINK_DSCR_BF1_INLINK_DSCR_BF1_Msb		0u
#define I2S0_INLINK_DSCR_BF1_INLINK_DSCR_BF1_Lsb		31u

	/* 0x54:  */
	uint32_t volatile OUTLINK_DSCR;
	/*  */
#define I2S0_OUTLINK_DSCR_OUTLINK_DSCR_Msb			0u
#define I2S0_OUTLINK_DSCR_OUTLINK_DSCR_Lsb			31u

	/* 0x58:  */
	uint32_t volatile OUTLINK_DSCR_BF0;
	/*  */
#define I2S0_OUTLINK_DSCR_BF0_OUTLINK_DSCR_BF0_Msb		0u
#define I2S0_OUTLINK_DSCR_BF0_OUTLINK_DSCR_BF0_Lsb		31u

	/* 0x5C:  */
	uint32_t volatile OUTLINK_DSCR_BF1;
	/*  */
#define I2S0_OUTLINK_DSCR_BF1_OUTLINK_DSCR_BF1_Msb		0u
#define I2S0_OUTLINK_DSCR_BF1_OUTLINK_DSCR_BF1_Lsb		31u

	/* 0x60:  */
	uint32_t volatile LC_CONF;
	/*  */
#define I2S0_LC_CONF_IN_RST					0u
	/*  */
#define I2S0_LC_CONF_OUT_RST					1u
	/*  */
#define I2S0_LC_CONF_AHBM_FIFO_RST				2u
	/*  */
#define I2S0_LC_CONF_AHBM_RST					3u
	/*  */
#define I2S0_LC_CONF_OUT_LOOP_TEST				4u
	/*  */
#define I2S0_LC_CONF_IN_LOOP_TEST				5u
	/*  */
#define I2S0_LC_CONF_OUT_AUTO_WRBACK				6u
	/*  */
#define I2S0_LC_CONF_OUT_NO_RESTART_CLR				7u
	/*  */
#define I2S0_LC_CONF_OUT_EOF_MODE				8u
	/*  */
#define I2S0_LC_CONF_OUTDSCR_BURST_EN				9u
	/*  */
#define I2S0_LC_CONF_INDSCR_BURST_EN				10u
	/*  */
#define I2S0_LC_CONF_OUT_DATA_BURST_EN				11u
	/*  */
#define I2S0_LC_CONF_CHECK_OWNER				12u
	/*  */
#define I2S0_LC_CONF_MEM_TRANS_EN				13u

	/* 0x64:  */
	uint32_t volatile OUTFIFO_PUSH;
	/*  */
#define I2S0_OUTFIFO_PUSH_OUTFIFO_WDATA_Msb			0u
#define I2S0_OUTFIFO_PUSH_OUTFIFO_WDATA_Lsb			8u
	/*  */
#define I2S0_OUTFIFO_PUSH_OUTFIFO_PUSH				16u

	/* 0x68:  */
	uint32_t volatile INFIFO_POP;
	/*  */
#define I2S0_INFIFO_POP_INFIFO_RDATA_Msb			0u
#define I2S0_INFIFO_POP_INFIFO_RDATA_Lsb			11u
	/*  */
#define I2S0_INFIFO_POP_INFIFO_POP				16u

	/* 0x6C:  */
	uint32_t volatile LC_STATE0;
	/*  */
#define I2S0_LC_STATE0_LC_STATE0_Msb				0u
#define I2S0_LC_STATE0_LC_STATE0_Lsb				31u

	/* 0x70:  */
	uint32_t volatile LC_STATE1;
	/*  */
#define I2S0_LC_STATE1_LC_STATE1_Msb				0u
#define I2S0_LC_STATE1_LC_STATE1_Lsb				31u

	/* 0x74:  */
	uint32_t volatile LC_HUNG_CONF;
	/*  */
#define I2S0_LC_HUNG_CONF_LC_FIFO_TIMEOUT_Msb			0u
#define I2S0_LC_HUNG_CONF_LC_FIFO_TIMEOUT_Lsb			7u
	/*  */
#define I2S0_LC_HUNG_CONF_LC_FIFO_TIMEOUT_SHIFT_Msb		8u
#define I2S0_LC_HUNG_CONF_LC_FIFO_TIMEOUT_SHIFT_Lsb		10u
	/*  */
#define I2S0_LC_HUNG_CONF_LC_FIFO_TIMEOUT_ENA			11u

	/* 0x80:  */
	uint32_t volatile CVSD_CONF0;
	/*  */
#define I2S0_CVSD_CONF0_CVSD_Y_MAX_Msb				0u
#define I2S0_CVSD_CONF0_CVSD_Y_MAX_Lsb				15u
	/*  */
#define I2S0_CVSD_CONF0_CVSD_Y_MIN_Msb				16u
#define I2S0_CVSD_CONF0_CVSD_Y_MIN_Lsb				31u

	/* 0x84:  */
	uint32_t volatile CVSD_CONF1;
	/*  */
#define I2S0_CVSD_CONF1_CVSD_SIGMA_MAX_Msb			0u
#define I2S0_CVSD_CONF1_CVSD_SIGMA_MAX_Lsb			15u
	/*  */
#define I2S0_CVSD_CONF1_CVSD_SIGMA_MIN_Msb			16u
#define I2S0_CVSD_CONF1_CVSD_SIGMA_MIN_Lsb			31u

	/* 0x88:  */
	uint32_t volatile CVSD_CONF2;
	/*  */
#define I2S0_CVSD_CONF2_CVSD_K_Msb				0u
#define I2S0_CVSD_CONF2_CVSD_K_Lsb				2u
	/*  */
#define I2S0_CVSD_CONF2_CVSD_J_Msb				3u
#define I2S0_CVSD_CONF2_CVSD_J_Lsb				5u
	/*  */
#define I2S0_CVSD_CONF2_CVSD_BETA_Msb				6u
#define I2S0_CVSD_CONF2_CVSD_BETA_Lsb				15u
	/*  */
#define I2S0_CVSD_CONF2_CVSD_H_Msb				16u
#define I2S0_CVSD_CONF2_CVSD_H_Lsb				18u

	/* 0x8C:  */
	uint32_t volatile PLC_CONF0;
	/*  */
#define I2S0_PLC_CONF0_GOOD_PACK_MAX_Msb			0u
#define I2S0_PLC_CONF0_GOOD_PACK_MAX_Lsb			5u
	/*  */
#define I2S0_PLC_CONF0_N_ERR_SEG_Msb				6u
#define I2S0_PLC_CONF0_N_ERR_SEG_Lsb				8u
	/*  */
#define I2S0_PLC_CONF0_SHIFT_RATE_Msb				9u
#define I2S0_PLC_CONF0_SHIFT_RATE_Lsb				11u
	/*  */
#define I2S0_PLC_CONF0_MAX_SLIDE_SAMPLE_Msb			12u
#define I2S0_PLC_CONF0_MAX_SLIDE_SAMPLE_Lsb			19u
	/*  */
#define I2S0_PLC_CONF0_PACK_LEN_8K_Msb				20u
#define I2S0_PLC_CONF0_PACK_LEN_8K_Lsb				24u
	/*  */
#define I2S0_PLC_CONF0_N_MIN_ERR_Msb				25u
#define I2S0_PLC_CONF0_N_MIN_ERR_Lsb				27u

	/* 0x90:  */
	uint32_t volatile PLC_CONF1;
	/*  */
#define I2S0_PLC_CONF1_BAD_CEF_ATTEN_PARA_Msb			0u
#define I2S0_PLC_CONF1_BAD_CEF_ATTEN_PARA_Lsb			7u
	/*  */
#define I2S0_PLC_CONF1_BAD_CEF_ATTEN_PARA_SHIFT_Msb		8u
#define I2S0_PLC_CONF1_BAD_CEF_ATTEN_PARA_SHIFT_Lsb		11u
	/*  */
#define I2S0_PLC_CONF1_BAD_OLA_WIN2_PARA_SHIFT_Msb		12u
#define I2S0_PLC_CONF1_BAD_OLA_WIN2_PARA_SHIFT_Lsb		15u
	/*  */
#define I2S0_PLC_CONF1_BAD_OLA_WIN2_PARA_Msb			16u
#define I2S0_PLC_CONF1_BAD_OLA_WIN2_PARA_Lsb			23u
	/*  */
#define I2S0_PLC_CONF1_SLIDE_WIN_LEN_Msb			24u
#define I2S0_PLC_CONF1_SLIDE_WIN_LEN_Lsb			31u

	/* 0x94:  */
	uint32_t volatile PLC_CONF2;
	/*  */
#define I2S0_PLC_CONF2_CVSD_SEG_MOD_Msb				0u
#define I2S0_PLC_CONF2_CVSD_SEG_MOD_Lsb				1u
	/*  */
#define I2S0_PLC_CONF2_MIN_PERIOD_Msb				2u
#define I2S0_PLC_CONF2_MIN_PERIOD_Lsb				6u

	/* 0x98:  */
	uint32_t volatile ESCO_CONF0;
	/*  */
#define I2S0_ESCO_CONF0_ESCO_EN					0u
	/*  */
#define I2S0_ESCO_CONF0_ESCO_CHAN_MOD				1u
	/*  */
#define I2S0_ESCO_CONF0_ESCO_CVSD_DEC_PACK_ERR			2u
	/*  */
#define I2S0_ESCO_CONF0_ESCO_CVSD_PACK_LEN_8K_Msb		3u
#define I2S0_ESCO_CONF0_ESCO_CVSD_PACK_LEN_8K_Lsb		7u
	/*  */
#define I2S0_ESCO_CONF0_ESCO_CVSD_INF_EN			8u
	/*  */
#define I2S0_ESCO_CONF0_CVSD_DEC_START				9u
	/*  */
#define I2S0_ESCO_CONF0_CVSD_DEC_RESET				10u
	/*  */
#define I2S0_ESCO_CONF0_PLC_EN					11u
	/*  */
#define I2S0_ESCO_CONF0_PLC2DMA_EN				12u

	/* 0x9C:  */
	uint32_t volatile SCO_CONF0;
	/*  */
#define I2S0_SCO_CONF0_SCO_WITH_I2S_EN				0u
	/*  */
#define I2S0_SCO_CONF0_SCO_NO_I2S_EN				1u
	/*  */
#define I2S0_SCO_CONF0_CVSD_ENC_START				2u
	/*  */
#define I2S0_SCO_CONF0_CVSD_ENC_RESET				3u

	/* 0xA0:  */
	uint32_t volatile CONF1;
	/*  */
#define I2S0_CONF1_TX_PCM_CONF_Msb				0u
#define I2S0_CONF1_TX_PCM_CONF_Lsb				2u
	/*  */
#define I2S0_CONF1_TX_PCM_BYPASS				3u
	/*  */
#define I2S0_CONF1_RX_PCM_CONF_Msb				4u
#define I2S0_CONF1_RX_PCM_CONF_Lsb				6u
	/*  */
#define I2S0_CONF1_RX_PCM_BYPASS				7u
	/*  */
#define I2S0_CONF1_TX_STOP_EN					8u
	/*  */
#define I2S0_CONF1_TX_ZEROS_RM_EN				9u

	/* 0xA4:  */
	uint32_t volatile PD_CONF;
	/*  */
#define I2S0_PD_CONF_FIFO_FORCE_PD				0u
	/*  */
#define I2S0_PD_CONF_FIFO_FORCE_PU				1u
	/*  */
#define I2S0_PD_CONF_PLC_MEM_FORCE_PD				2u
	/*  */
#define I2S0_PD_CONF_PLC_MEM_FORCE_PU				3u

	/* 0xA8:  */
	uint32_t volatile CONF2;
	/*  */
#define I2S0_CONF2_CAMERA_EN					0u
	/*  */
#define I2S0_CONF2_LCD_TX_WRX2_EN				1u
	/*  */
#define I2S0_CONF2_LCD_TX_SDX2_EN				2u
	/*  */
#define I2S0_CONF2_DATA_ENABLE_TEST_EN				3u
	/*  */
#define I2S0_CONF2_DATA_ENABLE					4u
	/*  */
#define I2S0_CONF2_LCD_EN					5u
	/*  */
#define I2S0_CONF2_EXT_ADC_START_EN				6u
	/*  */
#define I2S0_CONF2_INTER_VALID_EN				7u

	/* 0xAC:  */
	uint32_t volatile CLKM_CONF;
	/*  */
#define I2S0_CLKM_CONF_CLKM_DIV_NUM_Msb				0u
#define I2S0_CLKM_CONF_CLKM_DIV_NUM_Lsb				7u
	/*  */
#define I2S0_CLKM_CONF_CLKM_DIV_B_Msb				8u
#define I2S0_CLKM_CONF_CLKM_DIV_B_Lsb				13u
	/*  */
#define I2S0_CLKM_CONF_CLKM_DIV_A_Msb				14u
#define I2S0_CLKM_CONF_CLKM_DIV_A_Lsb				19u
	/*  */
#define I2S0_CLKM_CONF_CLK_EN					20u
	/*  */
#define I2S0_CLKM_CONF_CLKA_ENA					21u

	/* 0xB0:  */
	uint32_t volatile SAMPLE_RATE_CONF;
	/*  */
#define I2S0_SAMPLE_RATE_CONF_TX_BCK_DIV_NUM_Msb		0u
#define I2S0_SAMPLE_RATE_CONF_TX_BCK_DIV_NUM_Lsb		5u
	/*  */
#define I2S0_SAMPLE_RATE_CONF_RX_BCK_DIV_NUM_Msb		6u
#define I2S0_SAMPLE_RATE_CONF_RX_BCK_DIV_NUM_Lsb		11u
	/*  */
#define I2S0_SAMPLE_RATE_CONF_TX_BITS_MOD_Msb			12u
#define I2S0_SAMPLE_RATE_CONF_TX_BITS_MOD_Lsb			17u
	/*  */
#define I2S0_SAMPLE_RATE_CONF_RX_BITS_MOD_Msb			18u
#define I2S0_SAMPLE_RATE_CONF_RX_BITS_MOD_Lsb			23u

	/* 0xB4:  */
	uint32_t volatile PDM_CONF;
	/*  */
#define I2S0_PDM_CONF_TX_PDM_EN					0u
	/*  */
#define I2S0_PDM_CONF_RX_PDM_EN					1u
	/*  */
#define I2S0_PDM_CONF_PCM2PDM_CONV_EN				2u
	/*  */
#define I2S0_PDM_CONF_PDM2PCM_CONV_EN				3u
	/*  */
#define I2S0_PDM_CONF_TX_PDM_SINC_OSR2_Msb			4u
#define I2S0_PDM_CONF_TX_PDM_SINC_OSR2_Lsb			7u
	/*  */
#define I2S0_PDM_CONF_TX_PDM_PRESCALE_Msb			8u
#define I2S0_PDM_CONF_TX_PDM_PRESCALE_Lsb			15u
	/*  */
#define I2S0_PDM_CONF_TX_PDM_HP_IN_SHIFT_Msb			16u
#define I2S0_PDM_CONF_TX_PDM_HP_IN_SHIFT_Lsb			17u
	/*  */
#define I2S0_PDM_CONF_TX_PDM_LP_IN_SHIFT_Msb			18u
#define I2S0_PDM_CONF_TX_PDM_LP_IN_SHIFT_Lsb			19u
	/*  */
#define I2S0_PDM_CONF_TX_PDM_SINC_IN_SHIFT_Msb			20u
#define I2S0_PDM_CONF_TX_PDM_SINC_IN_SHIFT_Lsb			21u
	/*  */
#define I2S0_PDM_CONF_TX_PDM_SIGMADELTA_IN_SHIFT_Msb		22u
#define I2S0_PDM_CONF_TX_PDM_SIGMADELTA_IN_SHIFT_Lsb		23u
	/*  */
#define I2S0_PDM_CONF_RX_PDM_SINC_DSR_16_EN			24u
	/*  */
#define I2S0_PDM_CONF_TX_PDM_HP_BYPASS				25u

	/* 0xB8:  */
	uint32_t volatile PDM_FREQ_CONF;
	/*  */
#define I2S0_PDM_FREQ_CONF_TX_PDM_FS_Msb			0u
#define I2S0_PDM_FREQ_CONF_TX_PDM_FS_Lsb			9u
	/*  */
#define I2S0_PDM_FREQ_CONF_TX_PDM_FP_Msb			10u
#define I2S0_PDM_FREQ_CONF_TX_PDM_FP_Lsb			19u

	/* 0xBC:  */
	uint32_t volatile STATE;
	/*  */
#define I2S0_STATE_TX_IDLE					0u
	/*  */
#define I2S0_STATE_TX_FIFO_RESET_BACK				1u
	/*  */
#define I2S0_STATE_RX_FIFO_RESET_BACK				2u

	/* 0xDC */
	uint8_t RESERVED0[0xFC-0xDC];

	/* 0xFC:  */
	uint32_t volatile DATE;
	/*  */
#define I2S0_DATE_I2SDATE_Msb					0u
#define I2S0_DATE_I2SDATE_Lsb					31u

};


#define I2S1 ((struct mcu_i2s1 *)0x3FF6D000)

struct mcu_i2s1 {

};


#define IO_MUX ((struct mcu_io_mux *)0x3FF49000)

struct mcu_io_mux {

	/* 0x00:  */
	uint32_t volatile PIN_CTRL;
	/* If you want to output clock for I2S0 to: CLK_OUT1, then set PIN_CTRL[3:0] = 0x0; CLK_OUT2, then set PIN_CTRL[3:0] = 0x0 and PIN_CTRL[7:4] = 0x0; CLK_OUT3, then set PIN_CTRL[3:0] = 0x0 and PIN_CTRL[11:8] = 0x0. */
#define IO_MUX_PIN_CTRL_CLK1_Msb				0u
#define IO_MUX_PIN_CTRL_CLK1_Lsb				3u
	/* If you want to output clock for I2S0 to: CLK_OUT1, then set PIN_CTRL[3:0] = 0x0; CLK_OUT2, then set PIN_CTRL[3:0] = 0x0 and PIN_CTRL[7:4] = 0x0; CLK_OUT3, then set PIN_CTRL[3:0] = 0x0 and PIN_CTRL[11:8] = 0x0. */
#define IO_MUX_PIN_CTRL_CLK2_Msb				4u
#define IO_MUX_PIN_CTRL_CLK2_Lsb				7u
	/* If you want to output clock for I2S0 to: CLK_OUT1, then set PIN_CTRL[3:0] = 0x0; CLK_OUT2, then set PIN_CTRL[3:0] = 0x0 and PIN_CTRL[7:4] = 0x0; CLK_OUT3, then set PIN_CTRL[3:0] = 0x0 and PIN_CTRL[11:8] = 0x0. */
#define IO_MUX_PIN_CTRL_CLK3_Msb				8u
#define IO_MUX_PIN_CTRL_CLK3_Lsb				11u

	/* 0x04:  */
	uint32_t volatile GPIO36;
	/* Output enable of the pad in sleep mode. */
#define IO_MUX_GPIO36_MCU_OE					0u
	/* Sleep mode selection of this pad. */
#define IO_MUX_GPIO36_SLP_SEL					1u
	/* Pull-down enable of the pad during sleep mode. */
#define IO_MUX_GPIO36_MCU_WPD					2u
	/* Pull-up enable of the pad during sleep mode. */
#define IO_MUX_GPIO36_MCU_WPU					3u
	/* Input enable of the pad during sleep mode. */
#define IO_MUX_GPIO36_MCU_IE					4u
	/* Select the drive strength of the pad during sleep mode. */
#define IO_MUX_GPIO36_MCU_DRV_Msb				5u
#define IO_MUX_GPIO36_MCU_DRV_Lsb				6u
	/* Pull-down enable of the pad. */
#define IO_MUX_GPIO36_FUN_WPD					7u
	/* Pull-up enable of the pad. */
#define IO_MUX_GPIO36_FUN_WPU					8u
	/* Input enable of the pad. */
#define IO_MUX_GPIO36_FUN_IE					9u
	/* Select the drive strength of the pad. */
#define IO_MUX_GPIO36_FUN_DRV_Msb				10u
#define IO_MUX_GPIO36_FUN_DRV_Lsb				11u
	/* Select the IO_MUX function for this signal. */
#define IO_MUX_GPIO36_MCU_SEL_Msb				12u
#define IO_MUX_GPIO36_MCU_SEL_Lsb				14u

	/* 0x08:  */
	uint32_t volatile GPIO37;
	/* Output enable of the pad in sleep mode. */
#define IO_MUX_GPIO37_MCU_OE					0u
	/* Sleep mode selection of this pad. */
#define IO_MUX_GPIO37_SLP_SEL					1u
	/* Pull-down enable of the pad during sleep mode. */
#define IO_MUX_GPIO37_MCU_WPD					2u
	/* Pull-up enable of the pad during sleep mode. */
#define IO_MUX_GPIO37_MCU_WPU					3u
	/* Input enable of the pad during sleep mode. */
#define IO_MUX_GPIO37_MCU_IE					4u
	/* Select the drive strength of the pad during sleep mode. */
#define IO_MUX_GPIO37_MCU_DRV_Msb				5u
#define IO_MUX_GPIO37_MCU_DRV_Lsb				6u
	/* Pull-down enable of the pad. */
#define IO_MUX_GPIO37_FUN_WPD					7u
	/* Pull-up enable of the pad. */
#define IO_MUX_GPIO37_FUN_WPU					8u
	/* Input enable of the pad. */
#define IO_MUX_GPIO37_FUN_IE					9u
	/* Select the drive strength of the pad. */
#define IO_MUX_GPIO37_FUN_DRV_Msb				10u
#define IO_MUX_GPIO37_FUN_DRV_Lsb				11u
	/* Select the IO_MUX function for this signal. */
#define IO_MUX_GPIO37_MCU_SEL_Msb				12u
#define IO_MUX_GPIO37_MCU_SEL_Lsb				14u

	/* 0x0C:  */
	uint32_t volatile GPIO38;
	/* Output enable of the pad in sleep mode. */
#define IO_MUX_GPIO38_MCU_OE					0u
	/* Sleep mode selection of this pad. */
#define IO_MUX_GPIO38_SLP_SEL					1u
	/* Pull-down enable of the pad during sleep mode. */
#define IO_MUX_GPIO38_MCU_WPD					2u
	/* Pull-up enable of the pad during sleep mode. */
#define IO_MUX_GPIO38_MCU_WPU					3u
	/* Input enable of the pad during sleep mode. */
#define IO_MUX_GPIO38_MCU_IE					4u
	/* Select the drive strength of the pad during sleep mode. */
#define IO_MUX_GPIO38_MCU_DRV_Msb				5u
#define IO_MUX_GPIO38_MCU_DRV_Lsb				6u
	/* Pull-down enable of the pad. */
#define IO_MUX_GPIO38_FUN_WPD					7u
	/* Pull-up enable of the pad. */
#define IO_MUX_GPIO38_FUN_WPU					8u
	/* Input enable of the pad. */
#define IO_MUX_GPIO38_FUN_IE					9u
	/* Select the drive strength of the pad. */
#define IO_MUX_GPIO38_FUN_DRV_Msb				10u
#define IO_MUX_GPIO38_FUN_DRV_Lsb				11u
	/* Select the IO_MUX function for this signal. */
#define IO_MUX_GPIO38_MCU_SEL_Msb				12u
#define IO_MUX_GPIO38_MCU_SEL_Lsb				14u

	/* 0x10:  */
	uint32_t volatile GPIO39;
	/* Output enable of the pad in sleep mode. */
#define IO_MUX_GPIO39_MCU_OE					0u
	/* Sleep mode selection of this pad. */
#define IO_MUX_GPIO39_SLP_SEL					1u
	/* Pull-down enable of the pad during sleep mode. */
#define IO_MUX_GPIO39_MCU_WPD					2u
	/* Pull-up enable of the pad during sleep mode. */
#define IO_MUX_GPIO39_MCU_WPU					3u
	/* Input enable of the pad during sleep mode. */
#define IO_MUX_GPIO39_MCU_IE					4u
	/* Select the drive strength of the pad during sleep mode. */
#define IO_MUX_GPIO39_MCU_DRV_Msb				5u
#define IO_MUX_GPIO39_MCU_DRV_Lsb				6u
	/* Pull-down enable of the pad. */
#define IO_MUX_GPIO39_FUN_WPD					7u
	/* Pull-up enable of the pad. */
#define IO_MUX_GPIO39_FUN_WPU					8u
	/* Input enable of the pad. */
#define IO_MUX_GPIO39_FUN_IE					9u
	/* Select the drive strength of the pad. */
#define IO_MUX_GPIO39_FUN_DRV_Msb				10u
#define IO_MUX_GPIO39_FUN_DRV_Lsb				11u
	/* Select the IO_MUX function for this signal. */
#define IO_MUX_GPIO39_MCU_SEL_Msb				12u
#define IO_MUX_GPIO39_MCU_SEL_Lsb				14u

	/* 0x14:  */
	uint32_t volatile GPIO34;
	/* Output enable of the pad in sleep mode. */
#define IO_MUX_GPIO34_MCU_OE					0u
	/* Sleep mode selection of this pad. */
#define IO_MUX_GPIO34_SLP_SEL					1u
	/* Pull-down enable of the pad during sleep mode. */
#define IO_MUX_GPIO34_MCU_WPD					2u
	/* Pull-up enable of the pad during sleep mode. */
#define IO_MUX_GPIO34_MCU_WPU					3u
	/* Input enable of the pad during sleep mode. */
#define IO_MUX_GPIO34_MCU_IE					4u
	/* Select the drive strength of the pad during sleep mode. */
#define IO_MUX_GPIO34_MCU_DRV_Msb				5u
#define IO_MUX_GPIO34_MCU_DRV_Lsb				6u
	/* Pull-down enable of the pad. */
#define IO_MUX_GPIO34_FUN_WPD					7u
	/* Pull-up enable of the pad. */
#define IO_MUX_GPIO34_FUN_WPU					8u
	/* Input enable of the pad. */
#define IO_MUX_GPIO34_FUN_IE					9u
	/* Select the drive strength of the pad. */
#define IO_MUX_GPIO34_FUN_DRV_Msb				10u
#define IO_MUX_GPIO34_FUN_DRV_Lsb				11u
	/* Select the IO_MUX function for this signal. */
#define IO_MUX_GPIO34_MCU_SEL_Msb				12u
#define IO_MUX_GPIO34_MCU_SEL_Lsb				14u

	/* 0x18:  */
	uint32_t volatile GPIO35;
	/* Output enable of the pad in sleep mode. */
#define IO_MUX_GPIO35_MCU_OE					0u
	/* Sleep mode selection of this pad. */
#define IO_MUX_GPIO35_SLP_SEL					1u
	/* Pull-down enable of the pad during sleep mode. */
#define IO_MUX_GPIO35_MCU_WPD					2u
	/* Pull-up enable of the pad during sleep mode. */
#define IO_MUX_GPIO35_MCU_WPU					3u
	/* Input enable of the pad during sleep mode. */
#define IO_MUX_GPIO35_MCU_IE					4u
	/* Select the drive strength of the pad during sleep mode. */
#define IO_MUX_GPIO35_MCU_DRV_Msb				5u
#define IO_MUX_GPIO35_MCU_DRV_Lsb				6u
	/* Pull-down enable of the pad. */
#define IO_MUX_GPIO35_FUN_WPD					7u
	/* Pull-up enable of the pad. */
#define IO_MUX_GPIO35_FUN_WPU					8u
	/* Input enable of the pad. */
#define IO_MUX_GPIO35_FUN_IE					9u
	/* Select the drive strength of the pad. */
#define IO_MUX_GPIO35_FUN_DRV_Msb				10u
#define IO_MUX_GPIO35_FUN_DRV_Lsb				11u
	/* Select the IO_MUX function for this signal. */
#define IO_MUX_GPIO35_MCU_SEL_Msb				12u
#define IO_MUX_GPIO35_MCU_SEL_Lsb				14u

	/* 0x1C:  */
	uint32_t volatile GPIO32;
	/* Output enable of the pad in sleep mode. */
#define IO_MUX_GPIO32_MCU_OE					0u
	/* Sleep mode selection of this pad. */
#define IO_MUX_GPIO32_SLP_SEL					1u
	/* Pull-down enable of the pad during sleep mode. */
#define IO_MUX_GPIO32_MCU_WPD					2u
	/* Pull-up enable of the pad during sleep mode. */
#define IO_MUX_GPIO32_MCU_WPU					3u
	/* Input enable of the pad during sleep mode. */
#define IO_MUX_GPIO32_MCU_IE					4u
	/* Select the drive strength of the pad during sleep mode. */
#define IO_MUX_GPIO32_MCU_DRV_Msb				5u
#define IO_MUX_GPIO32_MCU_DRV_Lsb				6u
	/* Pull-down enable of the pad. */
#define IO_MUX_GPIO32_FUN_WPD					7u
	/* Pull-up enable of the pad. */
#define IO_MUX_GPIO32_FUN_WPU					8u
	/* Input enable of the pad. */
#define IO_MUX_GPIO32_FUN_IE					9u
	/* Select the drive strength of the pad. */
#define IO_MUX_GPIO32_FUN_DRV_Msb				10u
#define IO_MUX_GPIO32_FUN_DRV_Lsb				11u
	/* Select the IO_MUX function for this signal. */
#define IO_MUX_GPIO32_MCU_SEL_Msb				12u
#define IO_MUX_GPIO32_MCU_SEL_Lsb				14u

	/* 0x20:  */
	uint32_t volatile GPIO33;
	/* Output enable of the pad in sleep mode. */
#define IO_MUX_GPIO33_MCU_OE					0u
	/* Sleep mode selection of this pad. */
#define IO_MUX_GPIO33_SLP_SEL					1u
	/* Pull-down enable of the pad during sleep mode. */
#define IO_MUX_GPIO33_MCU_WPD					2u
	/* Pull-up enable of the pad during sleep mode. */
#define IO_MUX_GPIO33_MCU_WPU					3u
	/* Input enable of the pad during sleep mode. */
#define IO_MUX_GPIO33_MCU_IE					4u
	/* Select the drive strength of the pad during sleep mode. */
#define IO_MUX_GPIO33_MCU_DRV_Msb				5u
#define IO_MUX_GPIO33_MCU_DRV_Lsb				6u
	/* Pull-down enable of the pad. */
#define IO_MUX_GPIO33_FUN_WPD					7u
	/* Pull-up enable of the pad. */
#define IO_MUX_GPIO33_FUN_WPU					8u
	/* Input enable of the pad. */
#define IO_MUX_GPIO33_FUN_IE					9u
	/* Select the drive strength of the pad. */
#define IO_MUX_GPIO33_FUN_DRV_Msb				10u
#define IO_MUX_GPIO33_FUN_DRV_Lsb				11u
	/* Select the IO_MUX function for this signal. */
#define IO_MUX_GPIO33_MCU_SEL_Msb				12u
#define IO_MUX_GPIO33_MCU_SEL_Lsb				14u

	/* 0x24:  */
	uint32_t volatile GPIO25;
	/* Output enable of the pad in sleep mode. */
#define IO_MUX_GPIO25_MCU_OE					0u
	/* Sleep mode selection of this pad. */
#define IO_MUX_GPIO25_SLP_SEL					1u
	/* Pull-down enable of the pad during sleep mode. */
#define IO_MUX_GPIO25_MCU_WPD					2u
	/* Pull-up enable of the pad during sleep mode. */
#define IO_MUX_GPIO25_MCU_WPU					3u
	/* Input enable of the pad during sleep mode. */
#define IO_MUX_GPIO25_MCU_IE					4u
	/* Select the drive strength of the pad during sleep mode. */
#define IO_MUX_GPIO25_MCU_DRV_Msb				5u
#define IO_MUX_GPIO25_MCU_DRV_Lsb				6u
	/* Pull-down enable of the pad. */
#define IO_MUX_GPIO25_FUN_WPD					7u
	/* Pull-up enable of the pad. */
#define IO_MUX_GPIO25_FUN_WPU					8u
	/* Input enable of the pad. */
#define IO_MUX_GPIO25_FUN_IE					9u
	/* Select the drive strength of the pad. */
#define IO_MUX_GPIO25_FUN_DRV_Msb				10u
#define IO_MUX_GPIO25_FUN_DRV_Lsb				11u
	/* Select the IO_MUX function for this signal. */
#define IO_MUX_GPIO25_MCU_SEL_Msb				12u
#define IO_MUX_GPIO25_MCU_SEL_Lsb				14u

	/* 0x28:  */
	uint32_t volatile GPIO26;
	/* Output enable of the pad in sleep mode. */
#define IO_MUX_GPIO26_MCU_OE					0u
	/* Sleep mode selection of this pad. */
#define IO_MUX_GPIO26_SLP_SEL					1u
	/* Pull-down enable of the pad during sleep mode. */
#define IO_MUX_GPIO26_MCU_WPD					2u
	/* Pull-up enable of the pad during sleep mode. */
#define IO_MUX_GPIO26_MCU_WPU					3u
	/* Input enable of the pad during sleep mode. */
#define IO_MUX_GPIO26_MCU_IE					4u
	/* Select the drive strength of the pad during sleep mode. */
#define IO_MUX_GPIO26_MCU_DRV_Msb				5u
#define IO_MUX_GPIO26_MCU_DRV_Lsb				6u
	/* Pull-down enable of the pad. */
#define IO_MUX_GPIO26_FUN_WPD					7u
	/* Pull-up enable of the pad. */
#define IO_MUX_GPIO26_FUN_WPU					8u
	/* Input enable of the pad. */
#define IO_MUX_GPIO26_FUN_IE					9u
	/* Select the drive strength of the pad. */
#define IO_MUX_GPIO26_FUN_DRV_Msb				10u
#define IO_MUX_GPIO26_FUN_DRV_Lsb				11u
	/* Select the IO_MUX function for this signal. */
#define IO_MUX_GPIO26_MCU_SEL_Msb				12u
#define IO_MUX_GPIO26_MCU_SEL_Lsb				14u

	/* 0x2C:  */
	uint32_t volatile GPIO27;
	/* Output enable of the pad in sleep mode. */
#define IO_MUX_GPIO27_MCU_OE					0u
	/* Sleep mode selection of this pad. */
#define IO_MUX_GPIO27_SLP_SEL					1u
	/* Pull-down enable of the pad during sleep mode. */
#define IO_MUX_GPIO27_MCU_WPD					2u
	/* Pull-up enable of the pad during sleep mode. */
#define IO_MUX_GPIO27_MCU_WPU					3u
	/* Input enable of the pad during sleep mode. */
#define IO_MUX_GPIO27_MCU_IE					4u
	/* Select the drive strength of the pad during sleep mode. */
#define IO_MUX_GPIO27_MCU_DRV_Msb				5u
#define IO_MUX_GPIO27_MCU_DRV_Lsb				6u
	/* Pull-down enable of the pad. */
#define IO_MUX_GPIO27_FUN_WPD					7u
	/* Pull-up enable of the pad. */
#define IO_MUX_GPIO27_FUN_WPU					8u
	/* Input enable of the pad. */
#define IO_MUX_GPIO27_FUN_IE					9u
	/* Select the drive strength of the pad. */
#define IO_MUX_GPIO27_FUN_DRV_Msb				10u
#define IO_MUX_GPIO27_FUN_DRV_Lsb				11u
	/* Select the IO_MUX function for this signal. */
#define IO_MUX_GPIO27_MCU_SEL_Msb				12u
#define IO_MUX_GPIO27_MCU_SEL_Lsb				14u

	/* 0x30:  */
	uint32_t volatile GPIO14;
	/* Output enable of the pad in sleep mode. */
#define IO_MUX_GPIO14_MCU_OE					0u
	/* Sleep mode selection of this pad. */
#define IO_MUX_GPIO14_SLP_SEL					1u
	/* Pull-down enable of the pad during sleep mode. */
#define IO_MUX_GPIO14_MCU_WPD					2u
	/* Pull-up enable of the pad during sleep mode. */
#define IO_MUX_GPIO14_MCU_WPU					3u
	/* Input enable of the pad during sleep mode. */
#define IO_MUX_GPIO14_MCU_IE					4u
	/* Select the drive strength of the pad during sleep mode. */
#define IO_MUX_GPIO14_MCU_DRV_Msb				5u
#define IO_MUX_GPIO14_MCU_DRV_Lsb				6u
	/* Pull-down enable of the pad. */
#define IO_MUX_GPIO14_FUN_WPD					7u
	/* Pull-up enable of the pad. */
#define IO_MUX_GPIO14_FUN_WPU					8u
	/* Input enable of the pad. */
#define IO_MUX_GPIO14_FUN_IE					9u
	/* Select the drive strength of the pad. */
#define IO_MUX_GPIO14_FUN_DRV_Msb				10u
#define IO_MUX_GPIO14_FUN_DRV_Lsb				11u
	/* Select the IO_MUX function for this signal. */
#define IO_MUX_GPIO14_MCU_SEL_Msb				12u
#define IO_MUX_GPIO14_MCU_SEL_Lsb				14u

	/* 0x34:  */
	uint32_t volatile GPIO12;
	/* Output enable of the pad in sleep mode. */
#define IO_MUX_GPIO12_MCU_OE					0u
	/* Sleep mode selection of this pad. */
#define IO_MUX_GPIO12_SLP_SEL					1u
	/* Pull-down enable of the pad during sleep mode. */
#define IO_MUX_GPIO12_MCU_WPD					2u
	/* Pull-up enable of the pad during sleep mode. */
#define IO_MUX_GPIO12_MCU_WPU					3u
	/* Input enable of the pad during sleep mode. */
#define IO_MUX_GPIO12_MCU_IE					4u
	/* Select the drive strength of the pad during sleep mode. */
#define IO_MUX_GPIO12_MCU_DRV_Msb				5u
#define IO_MUX_GPIO12_MCU_DRV_Lsb				6u
	/* Pull-down enable of the pad. */
#define IO_MUX_GPIO12_FUN_WPD					7u
	/* Pull-up enable of the pad. */
#define IO_MUX_GPIO12_FUN_WPU					8u
	/* Input enable of the pad. */
#define IO_MUX_GPIO12_FUN_IE					9u
	/* Select the drive strength of the pad. */
#define IO_MUX_GPIO12_FUN_DRV_Msb				10u
#define IO_MUX_GPIO12_FUN_DRV_Lsb				11u
	/* Select the IO_MUX function for this signal. */
#define IO_MUX_GPIO12_MCU_SEL_Msb				12u
#define IO_MUX_GPIO12_MCU_SEL_Lsb				14u

	/* 0x38:  */
	uint32_t volatile GPIO13;
	/* Output enable of the pad in sleep mode. */
#define IO_MUX_GPIO13_MCU_OE					0u
	/* Sleep mode selection of this pad. */
#define IO_MUX_GPIO13_SLP_SEL					1u
	/* Pull-down enable of the pad during sleep mode. */
#define IO_MUX_GPIO13_MCU_WPD					2u
	/* Pull-up enable of the pad during sleep mode. */
#define IO_MUX_GPIO13_MCU_WPU					3u
	/* Input enable of the pad during sleep mode. */
#define IO_MUX_GPIO13_MCU_IE					4u
	/* Select the drive strength of the pad during sleep mode. */
#define IO_MUX_GPIO13_MCU_DRV_Msb				5u
#define IO_MUX_GPIO13_MCU_DRV_Lsb				6u
	/* Pull-down enable of the pad. */
#define IO_MUX_GPIO13_FUN_WPD					7u
	/* Pull-up enable of the pad. */
#define IO_MUX_GPIO13_FUN_WPU					8u
	/* Input enable of the pad. */
#define IO_MUX_GPIO13_FUN_IE					9u
	/* Select the drive strength of the pad. */
#define IO_MUX_GPIO13_FUN_DRV_Msb				10u
#define IO_MUX_GPIO13_FUN_DRV_Lsb				11u
	/* Select the IO_MUX function for this signal. */
#define IO_MUX_GPIO13_MCU_SEL_Msb				12u
#define IO_MUX_GPIO13_MCU_SEL_Lsb				14u

	/* 0x3C:  */
	uint32_t volatile GPIO15;
	/* Output enable of the pad in sleep mode. */
#define IO_MUX_GPIO15_MCU_OE					0u
	/* Sleep mode selection of this pad. */
#define IO_MUX_GPIO15_SLP_SEL					1u
	/* Pull-down enable of the pad during sleep mode. */
#define IO_MUX_GPIO15_MCU_WPD					2u
	/* Pull-up enable of the pad during sleep mode. */
#define IO_MUX_GPIO15_MCU_WPU					3u
	/* Input enable of the pad during sleep mode. */
#define IO_MUX_GPIO15_MCU_IE					4u
	/* Select the drive strength of the pad during sleep mode. */
#define IO_MUX_GPIO15_MCU_DRV_Msb				5u
#define IO_MUX_GPIO15_MCU_DRV_Lsb				6u
	/* Pull-down enable of the pad. */
#define IO_MUX_GPIO15_FUN_WPD					7u
	/* Pull-up enable of the pad. */
#define IO_MUX_GPIO15_FUN_WPU					8u
	/* Input enable of the pad. */
#define IO_MUX_GPIO15_FUN_IE					9u
	/* Select the drive strength of the pad. */
#define IO_MUX_GPIO15_FUN_DRV_Msb				10u
#define IO_MUX_GPIO15_FUN_DRV_Lsb				11u
	/* Select the IO_MUX function for this signal. */
#define IO_MUX_GPIO15_MCU_SEL_Msb				12u
#define IO_MUX_GPIO15_MCU_SEL_Lsb				14u

	/* 0x40:  */
	uint32_t volatile GPIO2;
	/* Output enable of the pad in sleep mode. */
#define IO_MUX_GPIO2_MCU_OE					0u
	/* Sleep mode selection of this pad. */
#define IO_MUX_GPIO2_SLP_SEL					1u
	/* Pull-down enable of the pad during sleep mode. */
#define IO_MUX_GPIO2_MCU_WPD					2u
	/* Pull-up enable of the pad during sleep mode. */
#define IO_MUX_GPIO2_MCU_WPU					3u
	/* Input enable of the pad during sleep mode. */
#define IO_MUX_GPIO2_MCU_IE					4u
	/* Select the drive strength of the pad during sleep mode. */
#define IO_MUX_GPIO2_MCU_DRV_Msb				5u
#define IO_MUX_GPIO2_MCU_DRV_Lsb				6u
	/* Pull-down enable of the pad. */
#define IO_MUX_GPIO2_FUN_WPD					7u
	/* Pull-up enable of the pad. */
#define IO_MUX_GPIO2_FUN_WPU					8u
	/* Input enable of the pad. */
#define IO_MUX_GPIO2_FUN_IE					9u
	/* Select the drive strength of the pad. */
#define IO_MUX_GPIO2_FUN_DRV_Msb				10u
#define IO_MUX_GPIO2_FUN_DRV_Lsb				11u
	/* Select the IO_MUX function for this signal. */
#define IO_MUX_GPIO2_MCU_SEL_Msb				12u
#define IO_MUX_GPIO2_MCU_SEL_Lsb				14u

	/* 0x44:  */
	uint32_t volatile GPIO0;
	/* Output enable of the pad in sleep mode. */
#define IO_MUX_GPIO0_MCU_OE					0u
	/* Sleep mode selection of this pad. */
#define IO_MUX_GPIO0_SLP_SEL					1u
	/* Pull-down enable of the pad during sleep mode. */
#define IO_MUX_GPIO0_MCU_WPD					2u
	/* Pull-up enable of the pad during sleep mode. */
#define IO_MUX_GPIO0_MCU_WPU					3u
	/* Input enable of the pad during sleep mode. */
#define IO_MUX_GPIO0_MCU_IE					4u
	/* Select the drive strength of the pad during sleep mode. */
#define IO_MUX_GPIO0_MCU_DRV_Msb				5u
#define IO_MUX_GPIO0_MCU_DRV_Lsb				6u
	/* Pull-down enable of the pad. */
#define IO_MUX_GPIO0_FUN_WPD					7u
	/* Pull-up enable of the pad. */
#define IO_MUX_GPIO0_FUN_WPU					8u
	/* Input enable of the pad. */
#define IO_MUX_GPIO0_FUN_IE					9u
	/* Select the drive strength of the pad. */
#define IO_MUX_GPIO0_FUN_DRV_Msb				10u
#define IO_MUX_GPIO0_FUN_DRV_Lsb				11u
	/* Select the IO_MUX function for this signal. */
#define IO_MUX_GPIO0_MCU_SEL_Msb				12u
#define IO_MUX_GPIO0_MCU_SEL_Lsb				14u

	/* 0x48:  */
	uint32_t volatile GPIO4;
	/* Output enable of the pad in sleep mode. */
#define IO_MUX_GPIO4_MCU_OE					0u
	/* Sleep mode selection of this pad. */
#define IO_MUX_GPIO4_SLP_SEL					1u
	/* Pull-down enable of the pad during sleep mode. */
#define IO_MUX_GPIO4_MCU_WPD					2u
	/* Pull-up enable of the pad during sleep mode. */
#define IO_MUX_GPIO4_MCU_WPU					3u
	/* Input enable of the pad during sleep mode. */
#define IO_MUX_GPIO4_MCU_IE					4u
	/* Select the drive strength of the pad during sleep mode. */
#define IO_MUX_GPIO4_MCU_DRV_Msb				5u
#define IO_MUX_GPIO4_MCU_DRV_Lsb				6u
	/* Pull-down enable of the pad. */
#define IO_MUX_GPIO4_FUN_WPD					7u
	/* Pull-up enable of the pad. */
#define IO_MUX_GPIO4_FUN_WPU					8u
	/* Input enable of the pad. */
#define IO_MUX_GPIO4_FUN_IE					9u
	/* Select the drive strength of the pad. */
#define IO_MUX_GPIO4_FUN_DRV_Msb				10u
#define IO_MUX_GPIO4_FUN_DRV_Lsb				11u
	/* Select the IO_MUX function for this signal. */
#define IO_MUX_GPIO4_MCU_SEL_Msb				12u
#define IO_MUX_GPIO4_MCU_SEL_Lsb				14u

	/* 0x4C:  */
	uint32_t volatile GPIO16;
	/* Output enable of the pad in sleep mode. */
#define IO_MUX_GPIO16_MCU_OE					0u
	/* Sleep mode selection of this pad. */
#define IO_MUX_GPIO16_SLP_SEL					1u
	/* Pull-down enable of the pad during sleep mode. */
#define IO_MUX_GPIO16_MCU_WPD					2u
	/* Pull-up enable of the pad during sleep mode. */
#define IO_MUX_GPIO16_MCU_WPU					3u
	/* Input enable of the pad during sleep mode. */
#define IO_MUX_GPIO16_MCU_IE					4u
	/* Select the drive strength of the pad during sleep mode. */
#define IO_MUX_GPIO16_MCU_DRV_Msb				5u
#define IO_MUX_GPIO16_MCU_DRV_Lsb				6u
	/* Pull-down enable of the pad. */
#define IO_MUX_GPIO16_FUN_WPD					7u
	/* Pull-up enable of the pad. */
#define IO_MUX_GPIO16_FUN_WPU					8u
	/* Input enable of the pad. */
#define IO_MUX_GPIO16_FUN_IE					9u
	/* Select the drive strength of the pad. */
#define IO_MUX_GPIO16_FUN_DRV_Msb				10u
#define IO_MUX_GPIO16_FUN_DRV_Lsb				11u
	/* Select the IO_MUX function for this signal. */
#define IO_MUX_GPIO16_MCU_SEL_Msb				12u
#define IO_MUX_GPIO16_MCU_SEL_Lsb				14u

	/* 0x50:  */
	uint32_t volatile GPIO17;
	/* Output enable of the pad in sleep mode. */
#define IO_MUX_GPIO17_MCU_OE					0u
	/* Sleep mode selection of this pad. */
#define IO_MUX_GPIO17_SLP_SEL					1u
	/* Pull-down enable of the pad during sleep mode. */
#define IO_MUX_GPIO17_MCU_WPD					2u
	/* Pull-up enable of the pad during sleep mode. */
#define IO_MUX_GPIO17_MCU_WPU					3u
	/* Input enable of the pad during sleep mode. */
#define IO_MUX_GPIO17_MCU_IE					4u
	/* Select the drive strength of the pad during sleep mode. */
#define IO_MUX_GPIO17_MCU_DRV_Msb				5u
#define IO_MUX_GPIO17_MCU_DRV_Lsb				6u
	/* Pull-down enable of the pad. */
#define IO_MUX_GPIO17_FUN_WPD					7u
	/* Pull-up enable of the pad. */
#define IO_MUX_GPIO17_FUN_WPU					8u
	/* Input enable of the pad. */
#define IO_MUX_GPIO17_FUN_IE					9u
	/* Select the drive strength of the pad. */
#define IO_MUX_GPIO17_FUN_DRV_Msb				10u
#define IO_MUX_GPIO17_FUN_DRV_Lsb				11u
	/* Select the IO_MUX function for this signal. */
#define IO_MUX_GPIO17_MCU_SEL_Msb				12u
#define IO_MUX_GPIO17_MCU_SEL_Lsb				14u

	/* 0x54:  */
	uint32_t volatile GPIO9;
	/* Output enable of the pad in sleep mode. */
#define IO_MUX_GPIO9_MCU_OE					0u
	/* Sleep mode selection of this pad. */
#define IO_MUX_GPIO9_SLP_SEL					1u
	/* Pull-down enable of the pad during sleep mode. */
#define IO_MUX_GPIO9_MCU_WPD					2u
	/* Pull-up enable of the pad during sleep mode. */
#define IO_MUX_GPIO9_MCU_WPU					3u
	/* Input enable of the pad during sleep mode. */
#define IO_MUX_GPIO9_MCU_IE					4u
	/* Select the drive strength of the pad during sleep mode. */
#define IO_MUX_GPIO9_MCU_DRV_Msb				5u
#define IO_MUX_GPIO9_MCU_DRV_Lsb				6u
	/* Pull-down enable of the pad. */
#define IO_MUX_GPIO9_FUN_WPD					7u
	/* Pull-up enable of the pad. */
#define IO_MUX_GPIO9_FUN_WPU					8u
	/* Input enable of the pad. */
#define IO_MUX_GPIO9_FUN_IE					9u
	/* Select the drive strength of the pad. */
#define IO_MUX_GPIO9_FUN_DRV_Msb				10u
#define IO_MUX_GPIO9_FUN_DRV_Lsb				11u
	/* Select the IO_MUX function for this signal. */
#define IO_MUX_GPIO9_MCU_SEL_Msb				12u
#define IO_MUX_GPIO9_MCU_SEL_Lsb				14u

	/* 0x58:  */
	uint32_t volatile GPIO10;
	/* Output enable of the pad in sleep mode. */
#define IO_MUX_GPIO10_MCU_OE					0u
	/* Sleep mode selection of this pad. */
#define IO_MUX_GPIO10_SLP_SEL					1u
	/* Pull-down enable of the pad during sleep mode. */
#define IO_MUX_GPIO10_MCU_WPD					2u
	/* Pull-up enable of the pad during sleep mode. */
#define IO_MUX_GPIO10_MCU_WPU					3u
	/* Input enable of the pad during sleep mode. */
#define IO_MUX_GPIO10_MCU_IE					4u
	/* Select the drive strength of the pad during sleep mode. */
#define IO_MUX_GPIO10_MCU_DRV_Msb				5u
#define IO_MUX_GPIO10_MCU_DRV_Lsb				6u
	/* Pull-down enable of the pad. */
#define IO_MUX_GPIO10_FUN_WPD					7u
	/* Pull-up enable of the pad. */
#define IO_MUX_GPIO10_FUN_WPU					8u
	/* Input enable of the pad. */
#define IO_MUX_GPIO10_FUN_IE					9u
	/* Select the drive strength of the pad. */
#define IO_MUX_GPIO10_FUN_DRV_Msb				10u
#define IO_MUX_GPIO10_FUN_DRV_Lsb				11u
	/* Select the IO_MUX function for this signal. */
#define IO_MUX_GPIO10_MCU_SEL_Msb				12u
#define IO_MUX_GPIO10_MCU_SEL_Lsb				14u

	/* 0x5C:  */
	uint32_t volatile GPIO11;
	/* Output enable of the pad in sleep mode. */
#define IO_MUX_GPIO11_MCU_OE					0u
	/* Sleep mode selection of this pad. */
#define IO_MUX_GPIO11_SLP_SEL					1u
	/* Pull-down enable of the pad during sleep mode. */
#define IO_MUX_GPIO11_MCU_WPD					2u
	/* Pull-up enable of the pad during sleep mode. */
#define IO_MUX_GPIO11_MCU_WPU					3u
	/* Input enable of the pad during sleep mode. */
#define IO_MUX_GPIO11_MCU_IE					4u
	/* Select the drive strength of the pad during sleep mode. */
#define IO_MUX_GPIO11_MCU_DRV_Msb				5u
#define IO_MUX_GPIO11_MCU_DRV_Lsb				6u
	/* Pull-down enable of the pad. */
#define IO_MUX_GPIO11_FUN_WPD					7u
	/* Pull-up enable of the pad. */
#define IO_MUX_GPIO11_FUN_WPU					8u
	/* Input enable of the pad. */
#define IO_MUX_GPIO11_FUN_IE					9u
	/* Select the drive strength of the pad. */
#define IO_MUX_GPIO11_FUN_DRV_Msb				10u
#define IO_MUX_GPIO11_FUN_DRV_Lsb				11u
	/* Select the IO_MUX function for this signal. */
#define IO_MUX_GPIO11_MCU_SEL_Msb				12u
#define IO_MUX_GPIO11_MCU_SEL_Lsb				14u

	/* 0x60:  */
	uint32_t volatile GPIO6;
	/* Output enable of the pad in sleep mode. */
#define IO_MUX_GPIO6_MCU_OE					0u
	/* Sleep mode selection of this pad. */
#define IO_MUX_GPIO6_SLP_SEL					1u
	/* Pull-down enable of the pad during sleep mode. */
#define IO_MUX_GPIO6_MCU_WPD					2u
	/* Pull-up enable of the pad during sleep mode. */
#define IO_MUX_GPIO6_MCU_WPU					3u
	/* Input enable of the pad during sleep mode. */
#define IO_MUX_GPIO6_MCU_IE					4u
	/* Select the drive strength of the pad during sleep mode. */
#define IO_MUX_GPIO6_MCU_DRV_Msb				5u
#define IO_MUX_GPIO6_MCU_DRV_Lsb				6u
	/* Pull-down enable of the pad. */
#define IO_MUX_GPIO6_FUN_WPD					7u
	/* Pull-up enable of the pad. */
#define IO_MUX_GPIO6_FUN_WPU					8u
	/* Input enable of the pad. */
#define IO_MUX_GPIO6_FUN_IE					9u
	/* Select the drive strength of the pad. */
#define IO_MUX_GPIO6_FUN_DRV_Msb				10u
#define IO_MUX_GPIO6_FUN_DRV_Lsb				11u
	/* Select the IO_MUX function for this signal. */
#define IO_MUX_GPIO6_MCU_SEL_Msb				12u
#define IO_MUX_GPIO6_MCU_SEL_Lsb				14u

	/* 0x64:  */
	uint32_t volatile GPIO7;
	/* Output enable of the pad in sleep mode. */
#define IO_MUX_GPIO7_MCU_OE					0u
	/* Sleep mode selection of this pad. */
#define IO_MUX_GPIO7_SLP_SEL					1u
	/* Pull-down enable of the pad during sleep mode. */
#define IO_MUX_GPIO7_MCU_WPD					2u
	/* Pull-up enable of the pad during sleep mode. */
#define IO_MUX_GPIO7_MCU_WPU					3u
	/* Input enable of the pad during sleep mode. */
#define IO_MUX_GPIO7_MCU_IE					4u
	/* Select the drive strength of the pad during sleep mode. */
#define IO_MUX_GPIO7_MCU_DRV_Msb				5u
#define IO_MUX_GPIO7_MCU_DRV_Lsb				6u
	/* Pull-down enable of the pad. */
#define IO_MUX_GPIO7_FUN_WPD					7u
	/* Pull-up enable of the pad. */
#define IO_MUX_GPIO7_FUN_WPU					8u
	/* Input enable of the pad. */
#define IO_MUX_GPIO7_FUN_IE					9u
	/* Select the drive strength of the pad. */
#define IO_MUX_GPIO7_FUN_DRV_Msb				10u
#define IO_MUX_GPIO7_FUN_DRV_Lsb				11u
	/* Select the IO_MUX function for this signal. */
#define IO_MUX_GPIO7_MCU_SEL_Msb				12u
#define IO_MUX_GPIO7_MCU_SEL_Lsb				14u

	/* 0x68:  */
	uint32_t volatile GPIO8;
	/* Output enable of the pad in sleep mode. */
#define IO_MUX_GPIO8_MCU_OE					0u
	/* Sleep mode selection of this pad. */
#define IO_MUX_GPIO8_SLP_SEL					1u
	/* Pull-down enable of the pad during sleep mode. */
#define IO_MUX_GPIO8_MCU_WPD					2u
	/* Pull-up enable of the pad during sleep mode. */
#define IO_MUX_GPIO8_MCU_WPU					3u
	/* Input enable of the pad during sleep mode. */
#define IO_MUX_GPIO8_MCU_IE					4u
	/* Select the drive strength of the pad during sleep mode. */
#define IO_MUX_GPIO8_MCU_DRV_Msb				5u
#define IO_MUX_GPIO8_MCU_DRV_Lsb				6u
	/* Pull-down enable of the pad. */
#define IO_MUX_GPIO8_FUN_WPD					7u
	/* Pull-up enable of the pad. */
#define IO_MUX_GPIO8_FUN_WPU					8u
	/* Input enable of the pad. */
#define IO_MUX_GPIO8_FUN_IE					9u
	/* Select the drive strength of the pad. */
#define IO_MUX_GPIO8_FUN_DRV_Msb				10u
#define IO_MUX_GPIO8_FUN_DRV_Lsb				11u
	/* Select the IO_MUX function for this signal. */
#define IO_MUX_GPIO8_MCU_SEL_Msb				12u
#define IO_MUX_GPIO8_MCU_SEL_Lsb				14u

	/* 0x6C:  */
	uint32_t volatile GPIO5;
	/* Output enable of the pad in sleep mode. */
#define IO_MUX_GPIO5_MCU_OE					0u
	/* Sleep mode selection of this pad. */
#define IO_MUX_GPIO5_SLP_SEL					1u
	/* Pull-down enable of the pad during sleep mode. */
#define IO_MUX_GPIO5_MCU_WPD					2u
	/* Pull-up enable of the pad during sleep mode. */
#define IO_MUX_GPIO5_MCU_WPU					3u
	/* Input enable of the pad during sleep mode. */
#define IO_MUX_GPIO5_MCU_IE					4u
	/* Select the drive strength of the pad during sleep mode. */
#define IO_MUX_GPIO5_MCU_DRV_Msb				5u
#define IO_MUX_GPIO5_MCU_DRV_Lsb				6u
	/* Pull-down enable of the pad. */
#define IO_MUX_GPIO5_FUN_WPD					7u
	/* Pull-up enable of the pad. */
#define IO_MUX_GPIO5_FUN_WPU					8u
	/* Input enable of the pad. */
#define IO_MUX_GPIO5_FUN_IE					9u
	/* Select the drive strength of the pad. */
#define IO_MUX_GPIO5_FUN_DRV_Msb				10u
#define IO_MUX_GPIO5_FUN_DRV_Lsb				11u
	/* Select the IO_MUX function for this signal. */
#define IO_MUX_GPIO5_MCU_SEL_Msb				12u
#define IO_MUX_GPIO5_MCU_SEL_Lsb				14u

	/* 0x70:  */
	uint32_t volatile GPIO18;
	/* Output enable of the pad in sleep mode. */
#define IO_MUX_GPIO18_MCU_OE					0u
	/* Sleep mode selection of this pad. */
#define IO_MUX_GPIO18_SLP_SEL					1u
	/* Pull-down enable of the pad during sleep mode. */
#define IO_MUX_GPIO18_MCU_WPD					2u
	/* Pull-up enable of the pad during sleep mode. */
#define IO_MUX_GPIO18_MCU_WPU					3u
	/* Input enable of the pad during sleep mode. */
#define IO_MUX_GPIO18_MCU_IE					4u
	/* Select the drive strength of the pad during sleep mode. */
#define IO_MUX_GPIO18_MCU_DRV_Msb				5u
#define IO_MUX_GPIO18_MCU_DRV_Lsb				6u
	/* Pull-down enable of the pad. */
#define IO_MUX_GPIO18_FUN_WPD					7u
	/* Pull-up enable of the pad. */
#define IO_MUX_GPIO18_FUN_WPU					8u
	/* Input enable of the pad. */
#define IO_MUX_GPIO18_FUN_IE					9u
	/* Select the drive strength of the pad. */
#define IO_MUX_GPIO18_FUN_DRV_Msb				10u
#define IO_MUX_GPIO18_FUN_DRV_Lsb				11u
	/* Select the IO_MUX function for this signal. */
#define IO_MUX_GPIO18_MCU_SEL_Msb				12u
#define IO_MUX_GPIO18_MCU_SEL_Lsb				14u

	/* 0x74:  */
	uint32_t volatile GPIO19;
	/* Output enable of the pad in sleep mode. */
#define IO_MUX_GPIO19_MCU_OE					0u
	/* Sleep mode selection of this pad. */
#define IO_MUX_GPIO19_SLP_SEL					1u
	/* Pull-down enable of the pad during sleep mode. */
#define IO_MUX_GPIO19_MCU_WPD					2u
	/* Pull-up enable of the pad during sleep mode. */
#define IO_MUX_GPIO19_MCU_WPU					3u
	/* Input enable of the pad during sleep mode. */
#define IO_MUX_GPIO19_MCU_IE					4u
	/* Select the drive strength of the pad during sleep mode. */
#define IO_MUX_GPIO19_MCU_DRV_Msb				5u
#define IO_MUX_GPIO19_MCU_DRV_Lsb				6u
	/* Pull-down enable of the pad. */
#define IO_MUX_GPIO19_FUN_WPD					7u
	/* Pull-up enable of the pad. */
#define IO_MUX_GPIO19_FUN_WPU					8u
	/* Input enable of the pad. */
#define IO_MUX_GPIO19_FUN_IE					9u
	/* Select the drive strength of the pad. */
#define IO_MUX_GPIO19_FUN_DRV_Msb				10u
#define IO_MUX_GPIO19_FUN_DRV_Lsb				11u
	/* Select the IO_MUX function for this signal. */
#define IO_MUX_GPIO19_MCU_SEL_Msb				12u
#define IO_MUX_GPIO19_MCU_SEL_Lsb				14u

	/* 0x78:  */
	uint32_t volatile GPIO20;
	/* Output enable of the pad in sleep mode. */
#define IO_MUX_GPIO20_MCU_OE					0u
	/* Sleep mode selection of this pad. */
#define IO_MUX_GPIO20_SLP_SEL					1u
	/* Pull-down enable of the pad during sleep mode. */
#define IO_MUX_GPIO20_MCU_WPD					2u
	/* Pull-up enable of the pad during sleep mode. */
#define IO_MUX_GPIO20_MCU_WPU					3u
	/* Input enable of the pad during sleep mode. */
#define IO_MUX_GPIO20_MCU_IE					4u
	/* Select the drive strength of the pad during sleep mode. */
#define IO_MUX_GPIO20_MCU_DRV_Msb				5u
#define IO_MUX_GPIO20_MCU_DRV_Lsb				6u
	/* Pull-down enable of the pad. */
#define IO_MUX_GPIO20_FUN_WPD					7u
	/* Pull-up enable of the pad. */
#define IO_MUX_GPIO20_FUN_WPU					8u
	/* Input enable of the pad. */
#define IO_MUX_GPIO20_FUN_IE					9u
	/* Select the drive strength of the pad. */
#define IO_MUX_GPIO20_FUN_DRV_Msb				10u
#define IO_MUX_GPIO20_FUN_DRV_Lsb				11u
	/* Select the IO_MUX function for this signal. */
#define IO_MUX_GPIO20_MCU_SEL_Msb				12u
#define IO_MUX_GPIO20_MCU_SEL_Lsb				14u

	/* 0x7C:  */
	uint32_t volatile GPIO21;
	/* Output enable of the pad in sleep mode. */
#define IO_MUX_GPIO21_MCU_OE					0u
	/* Sleep mode selection of this pad. */
#define IO_MUX_GPIO21_SLP_SEL					1u
	/* Pull-down enable of the pad during sleep mode. */
#define IO_MUX_GPIO21_MCU_WPD					2u
	/* Pull-up enable of the pad during sleep mode. */
#define IO_MUX_GPIO21_MCU_WPU					3u
	/* Input enable of the pad during sleep mode. */
#define IO_MUX_GPIO21_MCU_IE					4u
	/* Select the drive strength of the pad during sleep mode. */
#define IO_MUX_GPIO21_MCU_DRV_Msb				5u
#define IO_MUX_GPIO21_MCU_DRV_Lsb				6u
	/* Pull-down enable of the pad. */
#define IO_MUX_GPIO21_FUN_WPD					7u
	/* Pull-up enable of the pad. */
#define IO_MUX_GPIO21_FUN_WPU					8u
	/* Input enable of the pad. */
#define IO_MUX_GPIO21_FUN_IE					9u
	/* Select the drive strength of the pad. */
#define IO_MUX_GPIO21_FUN_DRV_Msb				10u
#define IO_MUX_GPIO21_FUN_DRV_Lsb				11u
	/* Select the IO_MUX function for this signal. */
#define IO_MUX_GPIO21_MCU_SEL_Msb				12u
#define IO_MUX_GPIO21_MCU_SEL_Lsb				14u

	/* 0x80:  */
	uint32_t volatile GPIO22;
	/* Output enable of the pad in sleep mode. */
#define IO_MUX_GPIO22_MCU_OE					0u
	/* Sleep mode selection of this pad. */
#define IO_MUX_GPIO22_SLP_SEL					1u
	/* Pull-down enable of the pad during sleep mode. */
#define IO_MUX_GPIO22_MCU_WPD					2u
	/* Pull-up enable of the pad during sleep mode. */
#define IO_MUX_GPIO22_MCU_WPU					3u
	/* Input enable of the pad during sleep mode. */
#define IO_MUX_GPIO22_MCU_IE					4u
	/* Select the drive strength of the pad during sleep mode. */
#define IO_MUX_GPIO22_MCU_DRV_Msb				5u
#define IO_MUX_GPIO22_MCU_DRV_Lsb				6u
	/* Pull-down enable of the pad. */
#define IO_MUX_GPIO22_FUN_WPD					7u
	/* Pull-up enable of the pad. */
#define IO_MUX_GPIO22_FUN_WPU					8u
	/* Input enable of the pad. */
#define IO_MUX_GPIO22_FUN_IE					9u
	/* Select the drive strength of the pad. */
#define IO_MUX_GPIO22_FUN_DRV_Msb				10u
#define IO_MUX_GPIO22_FUN_DRV_Lsb				11u
	/* Select the IO_MUX function for this signal. */
#define IO_MUX_GPIO22_MCU_SEL_Msb				12u
#define IO_MUX_GPIO22_MCU_SEL_Lsb				14u

	/* 0x84:  */
	uint32_t volatile GPIO3;
	/* Output enable of the pad in sleep mode. */
#define IO_MUX_GPIO3_MCU_OE					0u
	/* Sleep mode selection of this pad. */
#define IO_MUX_GPIO3_SLP_SEL					1u
	/* Pull-down enable of the pad during sleep mode. */
#define IO_MUX_GPIO3_MCU_WPD					2u
	/* Pull-up enable of the pad during sleep mode. */
#define IO_MUX_GPIO3_MCU_WPU					3u
	/* Input enable of the pad during sleep mode. */
#define IO_MUX_GPIO3_MCU_IE					4u
	/* Select the drive strength of the pad during sleep mode. */
#define IO_MUX_GPIO3_MCU_DRV_Msb				5u
#define IO_MUX_GPIO3_MCU_DRV_Lsb				6u
	/* Pull-down enable of the pad. */
#define IO_MUX_GPIO3_FUN_WPD					7u
	/* Pull-up enable of the pad. */
#define IO_MUX_GPIO3_FUN_WPU					8u
	/* Input enable of the pad. */
#define IO_MUX_GPIO3_FUN_IE					9u
	/* Select the drive strength of the pad. */
#define IO_MUX_GPIO3_FUN_DRV_Msb				10u
#define IO_MUX_GPIO3_FUN_DRV_Lsb				11u
	/* Select the IO_MUX function for this signal. */
#define IO_MUX_GPIO3_MCU_SEL_Msb				12u
#define IO_MUX_GPIO3_MCU_SEL_Lsb				14u

	/* 0x88:  */
	uint32_t volatile GPIO1;
	/* Output enable of the pad in sleep mode. */
#define IO_MUX_GPIO1_MCU_OE					0u
	/* Sleep mode selection of this pad. */
#define IO_MUX_GPIO1_SLP_SEL					1u
	/* Pull-down enable of the pad during sleep mode. */
#define IO_MUX_GPIO1_MCU_WPD					2u
	/* Pull-up enable of the pad during sleep mode. */
#define IO_MUX_GPIO1_MCU_WPU					3u
	/* Input enable of the pad during sleep mode. */
#define IO_MUX_GPIO1_MCU_IE					4u
	/* Select the drive strength of the pad during sleep mode. */
#define IO_MUX_GPIO1_MCU_DRV_Msb				5u
#define IO_MUX_GPIO1_MCU_DRV_Lsb				6u
	/* Pull-down enable of the pad. */
#define IO_MUX_GPIO1_FUN_WPD					7u
	/* Pull-up enable of the pad. */
#define IO_MUX_GPIO1_FUN_WPU					8u
	/* Input enable of the pad. */
#define IO_MUX_GPIO1_FUN_IE					9u
	/* Select the drive strength of the pad. */
#define IO_MUX_GPIO1_FUN_DRV_Msb				10u
#define IO_MUX_GPIO1_FUN_DRV_Lsb				11u
	/* Select the IO_MUX function for this signal. */
#define IO_MUX_GPIO1_MCU_SEL_Msb				12u
#define IO_MUX_GPIO1_MCU_SEL_Lsb				14u

	/* 0x8C:  */
	uint32_t volatile GPIO23;
	/* Output enable of the pad in sleep mode. */
#define IO_MUX_GPIO23_MCU_OE					0u
	/* Sleep mode selection of this pad. */
#define IO_MUX_GPIO23_SLP_SEL					1u
	/* Pull-down enable of the pad during sleep mode. */
#define IO_MUX_GPIO23_MCU_WPD					2u
	/* Pull-up enable of the pad during sleep mode. */
#define IO_MUX_GPIO23_MCU_WPU					3u
	/* Input enable of the pad during sleep mode. */
#define IO_MUX_GPIO23_MCU_IE					4u
	/* Select the drive strength of the pad during sleep mode. */
#define IO_MUX_GPIO23_MCU_DRV_Msb				5u
#define IO_MUX_GPIO23_MCU_DRV_Lsb				6u
	/* Pull-down enable of the pad. */
#define IO_MUX_GPIO23_FUN_WPD					7u
	/* Pull-up enable of the pad. */
#define IO_MUX_GPIO23_FUN_WPU					8u
	/* Input enable of the pad. */
#define IO_MUX_GPIO23_FUN_IE					9u
	/* Select the drive strength of the pad. */
#define IO_MUX_GPIO23_FUN_DRV_Msb				10u
#define IO_MUX_GPIO23_FUN_DRV_Lsb				11u
	/* Select the IO_MUX function for this signal. */
#define IO_MUX_GPIO23_MCU_SEL_Msb				12u
#define IO_MUX_GPIO23_MCU_SEL_Lsb				14u

	/* 0x90:  */
	uint32_t volatile GPIO24;
	/* Output enable of the pad in sleep mode. */
#define IO_MUX_GPIO24_MCU_OE					0u
	/* Sleep mode selection of this pad. */
#define IO_MUX_GPIO24_SLP_SEL					1u
	/* Pull-down enable of the pad during sleep mode. */
#define IO_MUX_GPIO24_MCU_WPD					2u
	/* Pull-up enable of the pad during sleep mode. */
#define IO_MUX_GPIO24_MCU_WPU					3u
	/* Input enable of the pad during sleep mode. */
#define IO_MUX_GPIO24_MCU_IE					4u
	/* Select the drive strength of the pad during sleep mode. */
#define IO_MUX_GPIO24_MCU_DRV_Msb				5u
#define IO_MUX_GPIO24_MCU_DRV_Lsb				6u
	/* Pull-down enable of the pad. */
#define IO_MUX_GPIO24_FUN_WPD					7u
	/* Pull-up enable of the pad. */
#define IO_MUX_GPIO24_FUN_WPU					8u
	/* Input enable of the pad. */
#define IO_MUX_GPIO24_FUN_IE					9u
	/* Select the drive strength of the pad. */
#define IO_MUX_GPIO24_FUN_DRV_Msb				10u
#define IO_MUX_GPIO24_FUN_DRV_Lsb				11u
	/* Select the IO_MUX function for this signal. */
#define IO_MUX_GPIO24_MCU_SEL_Msb				12u
#define IO_MUX_GPIO24_MCU_SEL_Lsb				14u

};


#define LEDC ((struct mcu_ledc *)0x3FF59000)

struct mcu_ledc {

	/* 0x00:  */
	uint32_t volatile HSCH0_CONF0;
	/* There are four high speed timers  the two bits are used to select one of them for high speed channel0. */
#define LEDC_HSCH0_CONF0_TIMER_SEL_HSCH0_Msb			0u
#define LEDC_HSCH0_CONF0_TIMER_SEL_HSCH0_Lsb			1u
	/* This is the output enable control bit for high speed channel0 */
#define LEDC_HSCH0_CONF0_SIG_OUT_EN_HSCH0			2u
	/* This bit is used to control the output value when high speed channel0 is off. */
#define LEDC_HSCH0_CONF0_IDLE_LV_HSCH0				3u
	/* This bit is clock gating control signal. */
#define LEDC_HSCH0_CONF0_CLK_EN					31u

	/* 0x04:  */
	uint32_t volatile HSCH0_HPOINT;
	/* The output value changes to high when htimerx(x=[0 3]) selected by high speed channel0 has reached reg_hpoint_hsch0[19:0] */
#define LEDC_HSCH0_HPOINT_HPOINT_HSCH0_Msb			0u
#define LEDC_HSCH0_HPOINT_HPOINT_HSCH0_Lsb			19u

	/* 0x08:  */
	uint32_t volatile HSCH0_DUTY;
	/* This register represents the current duty of the output signal for high speed channel0. */
#define LEDC_HSCH0_DUTY_DUTY_HSCH0_Msb				0u
#define LEDC_HSCH0_DUTY_DUTY_HSCH0_Lsb				24u

	/* 0x0C:  */
	uint32_t volatile HSCH0_CONF1;
	/* This register controls the increase or decrease step scale for high speed channel0. */
#define LEDC_HSCH0_CONF1_DUTY_SCALE_HSCH0_Msb			0u
#define LEDC_HSCH0_CONF1_DUTY_SCALE_HSCH0_Lsb			9u
	/* This register is used to increase or decrease the duty every reg_duty_cycle_hsch0 cycles for high speed channel0. */
#define LEDC_HSCH0_CONF1_DUTY_CYCLE_HSCH0_Msb			10u
#define LEDC_HSCH0_CONF1_DUTY_CYCLE_HSCH0_Lsb			19u
	/* This register is used to control the num of increased or decreased times for high speed channel0. */
#define LEDC_HSCH0_CONF1_DUTY_NUM_HSCH0_Msb			20u
#define LEDC_HSCH0_CONF1_DUTY_NUM_HSCH0_Lsb			29u
	/* This register is used to increase the duty of output signal or decrease the duty of output signal for high speed channel0. */
#define LEDC_HSCH0_CONF1_DUTY_INC_HSCH0				30u
	/* When reg_duty_num_hsch0 reg_duty_cycle_hsch0 and reg_duty_scale_hsch0 has been configured. */
#define LEDC_HSCH0_CONF1_DUTY_START_HSCH0			31u

	/* 0x10:  */
	uint32_t volatile HSCH0_DUTY_R;

	/* 0x14:  */
	uint32_t volatile HSCH1_CONF0;
	/* There are four high speed timers  the two bits are used to select one of them for high speed channel1. */
#define LEDC_HSCH1_CONF0_TIMER_SEL_HSCH1_Msb			0u
#define LEDC_HSCH1_CONF0_TIMER_SEL_HSCH1_Lsb			1u
	/* This is the output enable control bit for high speed channel1 */
#define LEDC_HSCH1_CONF0_SIG_OUT_EN_HSCH1			2u
	/* This bit is used to control the output value when high speed channel1 is off. */
#define LEDC_HSCH1_CONF0_IDLE_LV_HSCH1				3u

	/* 0x18:  */
	uint32_t volatile HSCH1_HPOINT;
	/* The output value changes to high when htimerx(x=[0 3]) selected by high speed channel1 has reached reg_hpoint_hsch1[19:0] */
#define LEDC_HSCH1_HPOINT_HPOINT_HSCH1_Msb			0u
#define LEDC_HSCH1_HPOINT_HPOINT_HSCH1_Lsb			19u

	/* 0x1C:  */
	uint32_t volatile HSCH1_DUTY;
	/* This register represents the current duty of the output signal for high speed channel1. */
#define LEDC_HSCH1_DUTY_DUTY_HSCH1_Msb				0u
#define LEDC_HSCH1_DUTY_DUTY_HSCH1_Lsb				24u

	/* 0x20:  */
	uint32_t volatile HSCH1_CONF1;
	/* This register controls the increase or decrease step scale for high speed channel1. */
#define LEDC_HSCH1_CONF1_DUTY_SCALE_HSCH1_Msb			0u
#define LEDC_HSCH1_CONF1_DUTY_SCALE_HSCH1_Lsb			9u
	/* This register is used to increase or decrease the duty every reg_duty_cycle_hsch1 cycles for high speed channel1. */
#define LEDC_HSCH1_CONF1_DUTY_CYCLE_HSCH1_Msb			10u
#define LEDC_HSCH1_CONF1_DUTY_CYCLE_HSCH1_Lsb			19u
	/* This register is used to control the num of increased or decreased times for high speed channel1. */
#define LEDC_HSCH1_CONF1_DUTY_NUM_HSCH1_Msb			20u
#define LEDC_HSCH1_CONF1_DUTY_NUM_HSCH1_Lsb			29u
	/* This register is used to increase the duty of output signal or decrease the duty of output signal for high speed channel1. */
#define LEDC_HSCH1_CONF1_DUTY_INC_HSCH1				30u
	/* When reg_duty_num_hsch1 reg_duty_cycle_hsch1 and reg_duty_scale_hsch1 has been configured. */
#define LEDC_HSCH1_CONF1_DUTY_START_HSCH1			31u

	/* 0x24:  */
	uint32_t volatile HSCH1_DUTY_R;

	/* 0x28:  */
	uint32_t volatile HSCH2_CONF0;
	/* There are four high speed timers  the two bits are used to select one of them for high speed channel2. */
#define LEDC_HSCH2_CONF0_TIMER_SEL_HSCH2_Msb			0u
#define LEDC_HSCH2_CONF0_TIMER_SEL_HSCH2_Lsb			1u
	/* This is the output enable control bit for high speed channel2 */
#define LEDC_HSCH2_CONF0_SIG_OUT_EN_HSCH2			2u
	/* This bit is used to control the output value when high speed channel2 is off. */
#define LEDC_HSCH2_CONF0_IDLE_LV_HSCH2				3u

	/* 0x2C:  */
	uint32_t volatile HSCH2_HPOINT;
	/* The output value changes to high when htimerx(x=[0 3]) selected by high speed channel2 has reached reg_hpoint_hsch2[19:0] */
#define LEDC_HSCH2_HPOINT_HPOINT_HSCH2_Msb			0u
#define LEDC_HSCH2_HPOINT_HPOINT_HSCH2_Lsb			19u

	/* 0x30:  */
	uint32_t volatile HSCH2_DUTY;
	/* This register represents the current duty of the output signal for high speed channel2. */
#define LEDC_HSCH2_DUTY_DUTY_HSCH2_Msb				0u
#define LEDC_HSCH2_DUTY_DUTY_HSCH2_Lsb				24u

	/* 0x34:  */
	uint32_t volatile HSCH2_CONF1;
	/* This register controls the increase or decrease step scale for high speed channel2. */
#define LEDC_HSCH2_CONF1_DUTY_SCALE_HSCH2_Msb			0u
#define LEDC_HSCH2_CONF1_DUTY_SCALE_HSCH2_Lsb			9u
	/* This register is used to increase or decrease the duty every reg_duty_cycle_hsch2 cycles for high speed channel2. */
#define LEDC_HSCH2_CONF1_DUTY_CYCLE_HSCH2_Msb			10u
#define LEDC_HSCH2_CONF1_DUTY_CYCLE_HSCH2_Lsb			19u
	/* This register is used to control the num of increased or decreased times for high speed channel2. */
#define LEDC_HSCH2_CONF1_DUTY_NUM_HSCH2_Msb			20u
#define LEDC_HSCH2_CONF1_DUTY_NUM_HSCH2_Lsb			29u
	/* This register is used to increase the duty of output signal or decrease the duty of output signal for high speed channel2. */
#define LEDC_HSCH2_CONF1_DUTY_INC_HSCH2				30u
	/* When reg_duty_num_hsch2 reg_duty_cycle_hsch2 and reg_duty_scale_hsch2 has been configured. */
#define LEDC_HSCH2_CONF1_DUTY_START_HSCH2			31u

	/* 0x38:  */
	uint32_t volatile HSCH2_DUTY_R;

	/* 0x3C:  */
	uint32_t volatile HSCH3_CONF0;
	/* There are four high speed timers  the two bits are used to select one of them for high speed channel3. */
#define LEDC_HSCH3_CONF0_TIMER_SEL_HSCH3_Msb			0u
#define LEDC_HSCH3_CONF0_TIMER_SEL_HSCH3_Lsb			1u
	/* This is the output enable control bit for high speed channel3 */
#define LEDC_HSCH3_CONF0_SIG_OUT_EN_HSCH3			2u
	/* This bit is used to control the output value when high speed channel3 is off. */
#define LEDC_HSCH3_CONF0_IDLE_LV_HSCH3				3u

	/* 0x40:  */
	uint32_t volatile HSCH3_HPOINT;
	/* The output value changes to high when htimerx(x=[0 3]) selected by high speed channel3 has reached reg_hpoint_hsch3[19:0] */
#define LEDC_HSCH3_HPOINT_HPOINT_HSCH3_Msb			0u
#define LEDC_HSCH3_HPOINT_HPOINT_HSCH3_Lsb			19u

	/* 0x44:  */
	uint32_t volatile HSCH3_DUTY;
	/* This register represents the current duty of the output signal for high speed channel3. */
#define LEDC_HSCH3_DUTY_DUTY_HSCH3_Msb				0u
#define LEDC_HSCH3_DUTY_DUTY_HSCH3_Lsb				24u

	/* 0x48:  */
	uint32_t volatile HSCH3_CONF1;
	/* This register controls the increase or decrease step scale for high speed channel3. */
#define LEDC_HSCH3_CONF1_DUTY_SCALE_HSCH3_Msb			0u
#define LEDC_HSCH3_CONF1_DUTY_SCALE_HSCH3_Lsb			9u
	/* This register is used to increase or decrease the duty every reg_duty_cycle_hsch3 cycles for high speed channel3. */
#define LEDC_HSCH3_CONF1_DUTY_CYCLE_HSCH3_Msb			10u
#define LEDC_HSCH3_CONF1_DUTY_CYCLE_HSCH3_Lsb			19u
	/* This register is used to control the num of increased or decreased times for high speed channel3. */
#define LEDC_HSCH3_CONF1_DUTY_NUM_HSCH3_Msb			20u
#define LEDC_HSCH3_CONF1_DUTY_NUM_HSCH3_Lsb			29u
	/* This register is used to increase the duty of output signal or decrease the duty of output signal for high speed channel3. */
#define LEDC_HSCH3_CONF1_DUTY_INC_HSCH3				30u
	/* When reg_duty_num_hsch3 reg_duty_cycle_hsch3 and reg_duty_scale_hsch3 has been configured. */
#define LEDC_HSCH3_CONF1_DUTY_START_HSCH3			31u

	/* 0x4C:  */
	uint32_t volatile HSCH3_DUTY_R;

	/* 0x50:  */
	uint32_t volatile HSCH4_CONF0;
	/* There are four high speed timers  the two bits are used to select one of them for high speed channel4. */
#define LEDC_HSCH4_CONF0_TIMER_SEL_HSCH4_Msb			0u
#define LEDC_HSCH4_CONF0_TIMER_SEL_HSCH4_Lsb			1u
	/* This is the output enable control bit for high speed channel4 */
#define LEDC_HSCH4_CONF0_SIG_OUT_EN_HSCH4			2u
	/* This bit is used to control the output value when high speed channel4 is off. */
#define LEDC_HSCH4_CONF0_IDLE_LV_HSCH4				3u

	/* 0x54:  */
	uint32_t volatile HSCH4_HPOINT;
	/* The output value changes to high when htimerx(x=[0 3]) selected by high speed channel4 has reached reg_hpoint_hsch4[19:0] */
#define LEDC_HSCH4_HPOINT_HPOINT_HSCH4_Msb			0u
#define LEDC_HSCH4_HPOINT_HPOINT_HSCH4_Lsb			19u

	/* 0x58:  */
	uint32_t volatile HSCH4_DUTY;
	/* This register represents the current duty of the output signal for high speed channel4. */
#define LEDC_HSCH4_DUTY_DUTY_HSCH4_Msb				0u
#define LEDC_HSCH4_DUTY_DUTY_HSCH4_Lsb				24u

	/* 0x5C:  */
	uint32_t volatile HSCH4_CONF1;
	/* This register controls the increase or decrease step scale for high speed channel4. */
#define LEDC_HSCH4_CONF1_DUTY_SCALE_HSCH4_Msb			0u
#define LEDC_HSCH4_CONF1_DUTY_SCALE_HSCH4_Lsb			9u
	/* This register is used to increase or decrease the duty every reg_duty_cycle_hsch4 cycles for high speed channel4. */
#define LEDC_HSCH4_CONF1_DUTY_CYCLE_HSCH4_Msb			10u
#define LEDC_HSCH4_CONF1_DUTY_CYCLE_HSCH4_Lsb			19u
	/* This register is used to control the num of increased or decreased times for high speed channel1. */
#define LEDC_HSCH4_CONF1_DUTY_NUM_HSCH4_Msb			20u
#define LEDC_HSCH4_CONF1_DUTY_NUM_HSCH4_Lsb			29u
	/* This register is used to increase the duty of output signal or decrease the duty of output signal for high speed channel4. */
#define LEDC_HSCH4_CONF1_DUTY_INC_HSCH4				30u
	/* When reg_duty_num_hsch1 reg_duty_cycle_hsch1 and reg_duty_scale_hsch1 has been configured. */
#define LEDC_HSCH4_CONF1_DUTY_START_HSCH4			31u

	/* 0x60:  */
	uint32_t volatile HSCH4_DUTY_R;

	/* 0x64:  */
	uint32_t volatile HSCH5_CONF0;
	/* There are four high speed timers  the two bits are used to select one of them for high speed channel5. */
#define LEDC_HSCH5_CONF0_TIMER_SEL_HSCH5_Msb			0u
#define LEDC_HSCH5_CONF0_TIMER_SEL_HSCH5_Lsb			1u
	/* This is the output enable control bit for high speed channel5. */
#define LEDC_HSCH5_CONF0_SIG_OUT_EN_HSCH5			2u
	/* This bit is used to control the output value when high speed channel5 is off. */
#define LEDC_HSCH5_CONF0_IDLE_LV_HSCH5				3u

	/* 0x68:  */
	uint32_t volatile HSCH5_HPOINT;
	/* The output value changes to high when htimerx(x=[0 3]) selected by high speed channel5 has reached reg_hpoint_hsch5[19:0] */
#define LEDC_HSCH5_HPOINT_HPOINT_HSCH5_Msb			0u
#define LEDC_HSCH5_HPOINT_HPOINT_HSCH5_Lsb			19u

	/* 0x6C:  */
	uint32_t volatile HSCH5_DUTY;
	/* This register represents the current duty of the output signal for high speed channel5. */
#define LEDC_HSCH5_DUTY_DUTY_HSCH5_Msb				0u
#define LEDC_HSCH5_DUTY_DUTY_HSCH5_Lsb				24u

	/* 0x70:  */
	uint32_t volatile HSCH5_CONF1;
	/* This register controls the increase or decrease step scale for high speed channel5. */
#define LEDC_HSCH5_CONF1_DUTY_SCALE_HSCH5_Msb			0u
#define LEDC_HSCH5_CONF1_DUTY_SCALE_HSCH5_Lsb			9u
	/* This register is used to increase or decrease the duty every reg_duty_cycle_hsch5 cycles for high speed channel5. */
#define LEDC_HSCH5_CONF1_DUTY_CYCLE_HSCH5_Msb			10u
#define LEDC_HSCH5_CONF1_DUTY_CYCLE_HSCH5_Lsb			19u
	/* This register is used to control the num of increased or decreased times for high speed channel5. */
#define LEDC_HSCH5_CONF1_DUTY_NUM_HSCH5_Msb			20u
#define LEDC_HSCH5_CONF1_DUTY_NUM_HSCH5_Lsb			29u
	/* This register is used to increase the duty of output signal or decrease the duty of output signal for high speed channel5. */
#define LEDC_HSCH5_CONF1_DUTY_INC_HSCH5				30u
	/* When reg_duty_num_hsch5 reg_duty_cycle_hsch5 and reg_duty_scale_hsch5 has been configured. */
#define LEDC_HSCH5_CONF1_DUTY_START_HSCH5			31u

	/* 0x74:  */
	uint32_t volatile HSCH5_DUTY_R;

	/* 0x78:  */
	uint32_t volatile HSCH6_CONF0;
	/* There are four high speed timers  the two bits are used to select one of them for high speed channel6. */
#define LEDC_HSCH6_CONF0_TIMER_SEL_HSCH6_Msb			0u
#define LEDC_HSCH6_CONF0_TIMER_SEL_HSCH6_Lsb			1u
	/* This is the output enable control bit for high speed channel6 */
#define LEDC_HSCH6_CONF0_SIG_OUT_EN_HSCH6			2u
	/* This bit is used to control the output value when high speed channel6 is off. */
#define LEDC_HSCH6_CONF0_IDLE_LV_HSCH6				3u

	/* 0x7C:  */
	uint32_t volatile HSCH6_HPOINT;
	/* The output value changes to high when htimerx(x=[0 3]) selected by high speed channel6 has reached reg_hpoint_hsch6[19:0] */
#define LEDC_HSCH6_HPOINT_HPOINT_HSCH6_Msb			0u
#define LEDC_HSCH6_HPOINT_HPOINT_HSCH6_Lsb			19u

	/* 0x80:  */
	uint32_t volatile HSCH6_DUTY;
	/* This register represents the current duty of the output signal for high speed channel6. */
#define LEDC_HSCH6_DUTY_DUTY_HSCH6_Msb				0u
#define LEDC_HSCH6_DUTY_DUTY_HSCH6_Lsb				24u

	/* 0x84:  */
	uint32_t volatile HSCH6_CONF1;
	/* This register controls the increase or decrease step scale for high speed channel6. */
#define LEDC_HSCH6_CONF1_DUTY_SCALE_HSCH6_Msb			0u
#define LEDC_HSCH6_CONF1_DUTY_SCALE_HSCH6_Lsb			9u
	/* This register is used to increase or decrease the duty every reg_duty_cycle_hsch6 cycles for high speed channel6. */
#define LEDC_HSCH6_CONF1_DUTY_CYCLE_HSCH6_Msb			10u
#define LEDC_HSCH6_CONF1_DUTY_CYCLE_HSCH6_Lsb			19u
	/* This register is used to control the num of increased or decreased times for high speed channel6. */
#define LEDC_HSCH6_CONF1_DUTY_NUM_HSCH6_Msb			20u
#define LEDC_HSCH6_CONF1_DUTY_NUM_HSCH6_Lsb			29u
	/* This register is used to increase the duty of output signal or decrease the duty of output signal for high speed channel6. */
#define LEDC_HSCH6_CONF1_DUTY_INC_HSCH6				30u
	/* When reg_duty_num_hsch1 reg_duty_cycle_hsch1 and reg_duty_scale_hsch1 has been configured. */
#define LEDC_HSCH6_CONF1_DUTY_START_HSCH6			31u

	/* 0x88:  */
	uint32_t volatile HSCH6_DUTY_R;

	/* 0x8C:  */
	uint32_t volatile HSCH7_CONF0;
	/* There are four high speed timers  the two bits are used to select one of them for high speed channel7. */
#define LEDC_HSCH7_CONF0_TIMER_SEL_HSCH7_Msb			0u
#define LEDC_HSCH7_CONF0_TIMER_SEL_HSCH7_Lsb			1u
	/* This is the output enable control bit for high speed channel7. */
#define LEDC_HSCH7_CONF0_SIG_OUT_EN_HSCH7			2u
	/* This bit is used to control the output value when high speed channel7 is off. */
#define LEDC_HSCH7_CONF0_IDLE_LV_HSCH7				3u

	/* 0x90:  */
	uint32_t volatile HSCH7_HPOINT;
	/* The output value changes to high when htimerx(x=[0 3]) selected by high speed channel7 has reached reg_hpoint_hsch7[19:0] */
#define LEDC_HSCH7_HPOINT_HPOINT_HSCH7_Msb			0u
#define LEDC_HSCH7_HPOINT_HPOINT_HSCH7_Lsb			19u

	/* 0x94:  */
	uint32_t volatile HSCH7_DUTY;
	/* This register represents the current duty of the output signal for high speed channel7. */
#define LEDC_HSCH7_DUTY_DUTY_HSCH7_Msb				0u
#define LEDC_HSCH7_DUTY_DUTY_HSCH7_Lsb				24u

	/* 0x98:  */
	uint32_t volatile HSCH7_CONF1;
	/* This register controls the increase or decrease step scale for high speed channel7. */
#define LEDC_HSCH7_CONF1_DUTY_SCALE_HSCH7_Msb			0u
#define LEDC_HSCH7_CONF1_DUTY_SCALE_HSCH7_Lsb			9u
	/* This register is used to increase or decrease the duty every reg_duty_cycle_hsch7 cycles for high speed channel7. */
#define LEDC_HSCH7_CONF1_DUTY_CYCLE_HSCH7_Msb			10u
#define LEDC_HSCH7_CONF1_DUTY_CYCLE_HSCH7_Lsb			19u
	/* This register is used to control the num of increased or decreased times for high speed channel6. */
#define LEDC_HSCH7_CONF1_DUTY_NUM_HSCH7_Msb			20u
#define LEDC_HSCH7_CONF1_DUTY_NUM_HSCH7_Lsb			29u
	/* This register is used to increase the duty of output signal or decrease the duty of output signal for high speed channel6. */
#define LEDC_HSCH7_CONF1_DUTY_INC_HSCH7				30u
	/* When reg_duty_num_hsch1 reg_duty_cycle_hsch1 and reg_duty_scale_hsch1 has been configured. */
#define LEDC_HSCH7_CONF1_DUTY_START_HSCH7			31u

	/* 0x9C:  */
	uint32_t volatile HSCH7_DUTY_R;

	/* 0xA0:  */
	uint32_t volatile LSCH0_CONF0;
	/* There are four low speed timers  the two bits are used to select one of them for low speed channel0. */
#define LEDC_LSCH0_CONF0_TIMER_SEL_LSCH0_Msb			0u
#define LEDC_LSCH0_CONF0_TIMER_SEL_LSCH0_Lsb			1u
	/* This is the output enable control bit for low speed channel0. */
#define LEDC_LSCH0_CONF0_SIG_OUT_EN_LSCH0			2u
	/* This bit is used to control the output value when low speed channel0 is off. */
#define LEDC_LSCH0_CONF0_IDLE_LV_LSCH0				3u
	/* This bit is used to update register LEDC_LSCH0_HPOINT and LEDC_LSCH0_DUTY for low speed channel0. */
#define LEDC_LSCH0_CONF0_PARA_UP_LSCH0				4u

	/* 0xA4:  */
	uint32_t volatile LSCH0_HPOINT;
	/* The output value changes to high when lstimerx(x=[0 3]) selected by low speed channel0 has reached reg_hpoint_lsch0[19:0] */
#define LEDC_LSCH0_HPOINT_HPOINT_LSCH0_Msb			0u
#define LEDC_LSCH0_HPOINT_HPOINT_LSCH0_Lsb			19u

	/* 0xA8:  */
	uint32_t volatile LSCH0_DUTY;
	/* This register represents the current duty of the output signal for low speed channel0. */
#define LEDC_LSCH0_DUTY_DUTY_LSCH0_Msb				0u
#define LEDC_LSCH0_DUTY_DUTY_LSCH0_Lsb				24u

	/* 0xAC:  */
	uint32_t volatile LSCH0_CONF1;
	/* This register controls the increase or decrease step scale for low speed channel0. */
#define LEDC_LSCH0_CONF1_DUTY_SCALE_LSCH0_Msb			0u
#define LEDC_LSCH0_CONF1_DUTY_SCALE_LSCH0_Lsb			9u
	/* This register is used to increase or decrease the duty every reg_duty_cycle_lsch0 cycles for low speed channel0. */
#define LEDC_LSCH0_CONF1_DUTY_CYCLE_LSCH0_Msb			10u
#define LEDC_LSCH0_CONF1_DUTY_CYCLE_LSCH0_Lsb			19u
	/* This register is used to control the num of increased or decreased times for low speed channel6. */
#define LEDC_LSCH0_CONF1_DUTY_NUM_LSCH0_Msb			20u
#define LEDC_LSCH0_CONF1_DUTY_NUM_LSCH0_Lsb			29u
	/* This register is used to increase the duty of output signal or decrease the duty of output signal for low speed channel6. */
#define LEDC_LSCH0_CONF1_DUTY_INC_LSCH0				30u
	/* When reg_duty_num_hsch1 reg_duty_cycle_hsch1 and reg_duty_scale_hsch1 has been configured. */
#define LEDC_LSCH0_CONF1_DUTY_START_LSCH0			31u

	/* 0xB0:  */
	uint32_t volatile LSCH0_DUTY_R;

	/* 0xB4:  */
	uint32_t volatile LSCH1_CONF0;
	/* There are four low speed timers  the two bits are used to select one of them for low speed channel1. */
#define LEDC_LSCH1_CONF0_TIMER_SEL_LSCH1_Msb			0u
#define LEDC_LSCH1_CONF0_TIMER_SEL_LSCH1_Lsb			1u
	/* This is the output enable control bit for low speed channel1. */
#define LEDC_LSCH1_CONF0_SIG_OUT_EN_LSCH1			2u
	/* This bit is used to control the output value when low speed channel1 is off. */
#define LEDC_LSCH1_CONF0_IDLE_LV_LSCH1				3u
	/* This bit is used to update register LEDC_LSCH1_HPOINT and LEDC_LSCH1_DUTY for low speed channel1. */
#define LEDC_LSCH1_CONF0_PARA_UP_LSCH1				4u

	/* 0xB8:  */
	uint32_t volatile LSCH1_HPOINT;
	/* The output value changes to high when lstimerx(x=[0 3]) selected by low speed channel1 has reached reg_hpoint_lsch1[19:0] */
#define LEDC_LSCH1_HPOINT_HPOINT_LSCH1_Msb			0u
#define LEDC_LSCH1_HPOINT_HPOINT_LSCH1_Lsb			19u

	/* 0xBC:  */
	uint32_t volatile LSCH1_DUTY;
	/* This register represents the current duty of the output signal for low speed channel1. */
#define LEDC_LSCH1_DUTY_DUTY_LSCH1_Msb				0u
#define LEDC_LSCH1_DUTY_DUTY_LSCH1_Lsb				24u

	/* 0xC0:  */
	uint32_t volatile LSCH1_CONF1;
	/* This register controls the increase or decrease step scale for low speed channel1. */
#define LEDC_LSCH1_CONF1_DUTY_SCALE_LSCH1_Msb			0u
#define LEDC_LSCH1_CONF1_DUTY_SCALE_LSCH1_Lsb			9u
	/* This register is used to increase or decrease the duty every reg_duty_cycle_lsch1 cycles for low speed channel1. */
#define LEDC_LSCH1_CONF1_DUTY_CYCLE_LSCH1_Msb			10u
#define LEDC_LSCH1_CONF1_DUTY_CYCLE_LSCH1_Lsb			19u
	/* This register is used to control the num of increased or decreased times for low speed channel1. */
#define LEDC_LSCH1_CONF1_DUTY_NUM_LSCH1_Msb			20u
#define LEDC_LSCH1_CONF1_DUTY_NUM_LSCH1_Lsb			29u
	/* This register is used to increase the duty of output signal or decrease the duty of output signal for low speed channel1. */
#define LEDC_LSCH1_CONF1_DUTY_INC_LSCH1				30u
	/* When reg_duty_num_hsch1 reg_duty_cycle_hsch1 and reg_duty_scale_hsch1 has been configured. */
#define LEDC_LSCH1_CONF1_DUTY_START_LSCH1			31u

	/* 0xC4:  */
	uint32_t volatile LSCH1_DUTY_R;

	/* 0xC8:  */
	uint32_t volatile LSCH2_CONF0;
	/* There are four low speed timers  the two bits are used to select one of them for low speed channel2. */
#define LEDC_LSCH2_CONF0_TIMER_SEL_LSCH2_Msb			0u
#define LEDC_LSCH2_CONF0_TIMER_SEL_LSCH2_Lsb			1u
	/* This is the output enable control bit for low speed channel2. */
#define LEDC_LSCH2_CONF0_SIG_OUT_EN_LSCH2			2u
	/* This bit is used to control the output value when low speed channel2 is off. */
#define LEDC_LSCH2_CONF0_IDLE_LV_LSCH2				3u
	/* This bit is used to update register LEDC_LSCH2_HPOINT and LEDC_LSCH2_DUTY for low speed channel2. */
#define LEDC_LSCH2_CONF0_PARA_UP_LSCH2				4u

	/* 0xCC:  */
	uint32_t volatile LSCH2_HPOINT;
	/* The output value changes to high when lstimerx(x=[0 3]) selected by low speed channel2 has reached reg_hpoint_lsch2[19:0] */
#define LEDC_LSCH2_HPOINT_HPOINT_LSCH2_Msb			0u
#define LEDC_LSCH2_HPOINT_HPOINT_LSCH2_Lsb			19u

	/* 0xD0:  */
	uint32_t volatile LSCH2_DUTY;
	/* This register represents the current duty of the output signal for low speed channel2. */
#define LEDC_LSCH2_DUTY_DUTY_LSCH2_Msb				0u
#define LEDC_LSCH2_DUTY_DUTY_LSCH2_Lsb				24u

	/* 0xD4:  */
	uint32_t volatile LSCH2_CONF1;
	/* This register controls the increase or decrease step scale for low speed channel2. */
#define LEDC_LSCH2_CONF1_DUTY_SCALE_LSCH2_Msb			0u
#define LEDC_LSCH2_CONF1_DUTY_SCALE_LSCH2_Lsb			9u
	/* This register is used to increase or decrease the duty every reg_duty_cycle_lsch2 cycles for low speed channel2. */
#define LEDC_LSCH2_CONF1_DUTY_CYCLE_LSCH2_Msb			10u
#define LEDC_LSCH2_CONF1_DUTY_CYCLE_LSCH2_Lsb			19u
	/* This register is used to control the num of increased or decreased times for low speed channel2. */
#define LEDC_LSCH2_CONF1_DUTY_NUM_LSCH2_Msb			20u
#define LEDC_LSCH2_CONF1_DUTY_NUM_LSCH2_Lsb			29u
	/* This register is used to increase the duty of output signal or decrease the duty of output signal for low speed channel2. */
#define LEDC_LSCH2_CONF1_DUTY_INC_LSCH2				30u
	/* When reg_duty_num_hsch2 reg_duty_cycle_hsch2 and reg_duty_scale_hsch2 has been configured. */
#define LEDC_LSCH2_CONF1_DUTY_START_LSCH2			31u

	/* 0xD8:  */
	uint32_t volatile LSCH2_DUTY_R;

	/* 0xDC:  */
	uint32_t volatile LSCH3_CONF0;
	/* There are four low speed timers  the two bits are used to select one of them for low speed channel3. */
#define LEDC_LSCH3_CONF0_TIMER_SEL_LSCH3_Msb			0u
#define LEDC_LSCH3_CONF0_TIMER_SEL_LSCH3_Lsb			1u
	/* This is the output enable control bit for low speed channel3. */
#define LEDC_LSCH3_CONF0_SIG_OUT_EN_LSCH3			2u
	/* This bit is used to control the output value when low speed channel3 is off. */
#define LEDC_LSCH3_CONF0_IDLE_LV_LSCH3				3u
	/* This bit is used to update register LEDC_LSCH3_HPOINT and LEDC_LSCH3_DUTY for low speed channel3. */
#define LEDC_LSCH3_CONF0_PARA_UP_LSCH3				4u

	/* 0xE0:  */
	uint32_t volatile LSCH3_HPOINT;
	/* The output value changes to high when lstimerx(x=[0 3]) selected by low speed channel3 has reached reg_hpoint_lsch3[19:0] */
#define LEDC_LSCH3_HPOINT_HPOINT_LSCH3_Msb			0u
#define LEDC_LSCH3_HPOINT_HPOINT_LSCH3_Lsb			19u

	/* 0xE4:  */
	uint32_t volatile LSCH3_DUTY;
	/* This register represents the current duty of the output signal for low speed channel3. */
#define LEDC_LSCH3_DUTY_DUTY_LSCH3_Msb				0u
#define LEDC_LSCH3_DUTY_DUTY_LSCH3_Lsb				24u

	/* 0xE8:  */
	uint32_t volatile LSCH3_CONF1;
	/* This register controls the increase or decrease step scale for low speed channel3. */
#define LEDC_LSCH3_CONF1_DUTY_SCALE_LSCH3_Msb			0u
#define LEDC_LSCH3_CONF1_DUTY_SCALE_LSCH3_Lsb			9u
	/* This register is used to increase or decrease the duty every reg_duty_cycle_lsch3 cycles for low speed channel3. */
#define LEDC_LSCH3_CONF1_DUTY_CYCLE_LSCH3_Msb			10u
#define LEDC_LSCH3_CONF1_DUTY_CYCLE_LSCH3_Lsb			19u
	/* This register is used to control the num of increased or decreased times for low speed channel3. */
#define LEDC_LSCH3_CONF1_DUTY_NUM_LSCH3_Msb			20u
#define LEDC_LSCH3_CONF1_DUTY_NUM_LSCH3_Lsb			29u
	/* This register is used to increase the duty of output signal or decrease the duty of output signal for low speed channel3. */
#define LEDC_LSCH3_CONF1_DUTY_INC_LSCH3				30u
	/* When reg_duty_num_hsch3 reg_duty_cycle_hsch3 and reg_duty_scale_hsch3 has been configured. */
#define LEDC_LSCH3_CONF1_DUTY_START_LSCH3			31u

	/* 0xEC:  */
	uint32_t volatile LSCH3_DUTY_R;

	/* 0xF0:  */
	uint32_t volatile LSCH4_CONF0;
	/* There are four low speed timers  the two bits are used to select one of them for low speed channel4. */
#define LEDC_LSCH4_CONF0_TIMER_SEL_LSCH4_Msb			0u
#define LEDC_LSCH4_CONF0_TIMER_SEL_LSCH4_Lsb			1u
	/* This is the output enable control bit for low speed channel4. */
#define LEDC_LSCH4_CONF0_SIG_OUT_EN_LSCH4			2u
	/* This bit is used to control the output value when low speed channel4 is off. */
#define LEDC_LSCH4_CONF0_IDLE_LV_LSCH4				3u
	/* This bit is used to update register LEDC_LSCH4_HPOINT and LEDC_LSCH4_DUTY for low speed channel4. */
#define LEDC_LSCH4_CONF0_PARA_UP_LSCH4				4u

	/* 0xF4:  */
	uint32_t volatile LSCH4_HPOINT;
	/* The output value changes to high when lstimerx(x=[0 3]) selected by low speed channel4 has reached reg_hpoint_lsch4[19:0] */
#define LEDC_LSCH4_HPOINT_HPOINT_LSCH4_Msb			0u
#define LEDC_LSCH4_HPOINT_HPOINT_LSCH4_Lsb			19u

	/* 0xF8:  */
	uint32_t volatile LSCH4_DUTY;
	/* This register represents the current duty of the output signal for low speed channel4. */
#define LEDC_LSCH4_DUTY_DUTY_LSCH4_Msb				0u
#define LEDC_LSCH4_DUTY_DUTY_LSCH4_Lsb				24u

	/* 0xFC:  */
	uint32_t volatile LSCH4_CONF1;
	/* This register controls the increase or decrease step scale for low speed channel4. */
#define LEDC_LSCH4_CONF1_DUTY_SCALE_LSCH4_Msb			0u
#define LEDC_LSCH4_CONF1_DUTY_SCALE_LSCH4_Lsb			9u
	/* This register is used to increase or decrease the duty every reg_duty_cycle_lsch4 cycles for low speed channel4. */
#define LEDC_LSCH4_CONF1_DUTY_CYCLE_LSCH4_Msb			10u
#define LEDC_LSCH4_CONF1_DUTY_CYCLE_LSCH4_Lsb			19u
	/* This register is used to control the num of increased or decreased times for low speed channel4. */
#define LEDC_LSCH4_CONF1_DUTY_NUM_LSCH4_Msb			20u
#define LEDC_LSCH4_CONF1_DUTY_NUM_LSCH4_Lsb			29u
	/* This register is used to increase the duty of output signal or decrease the duty of output signal for low speed channel4. */
#define LEDC_LSCH4_CONF1_DUTY_INC_LSCH4				30u
	/* When reg_duty_num_hsch4  reg_duty_cycle_hsch4 and reg_duty_scale_hsch4 has been configured. */
#define LEDC_LSCH4_CONF1_DUTY_START_LSCH4			31u

	/* 0x100:  */
	uint32_t volatile LSCH4_DUTY_R;

	/* 0x104:  */
	uint32_t volatile LSCH5_CONF0;
	/* There are four low speed timers  the two bits are used to select one of them for low speed channel5. */
#define LEDC_LSCH5_CONF0_TIMER_SEL_LSCH5_Msb			0u
#define LEDC_LSCH5_CONF0_TIMER_SEL_LSCH5_Lsb			1u
	/* This is the output enable control bit for low speed channel5. */
#define LEDC_LSCH5_CONF0_SIG_OUT_EN_LSCH5			2u
	/* This bit is used to control the output value when low speed channel5 is off. */
#define LEDC_LSCH5_CONF0_IDLE_LV_LSCH5				3u
	/* This bit is used to update register LEDC_LSCH5_HPOINT and LEDC_LSCH5_DUTY for low speed channel5. */
#define LEDC_LSCH5_CONF0_PARA_UP_LSCH5				4u

	/* 0x108:  */
	uint32_t volatile LSCH5_HPOINT;
	/* The output value changes to high when lstimerx(x=[0 3]) selected by low speed channel5 has reached reg_hpoint_lsch5[19:0] */
#define LEDC_LSCH5_HPOINT_HPOINT_LSCH5_Msb			0u
#define LEDC_LSCH5_HPOINT_HPOINT_LSCH5_Lsb			19u

	/* 0x10C:  */
	uint32_t volatile LSCH5_DUTY;
	/* This register represents the current duty of the output signal for low speed channel5. */
#define LEDC_LSCH5_DUTY_DUTY_LSCH5_Msb				0u
#define LEDC_LSCH5_DUTY_DUTY_LSCH5_Lsb				24u

	/* 0x110:  */
	uint32_t volatile LSCH5_CONF1;
	/* This register controls the increase or decrease step scale for low speed channel5. */
#define LEDC_LSCH5_CONF1_DUTY_SCALE_LSCH5_Msb			0u
#define LEDC_LSCH5_CONF1_DUTY_SCALE_LSCH5_Lsb			9u
	/* This register is used to increase or decrease the duty every reg_duty_cycle_lsch5 cycles for low speed channel4. */
#define LEDC_LSCH5_CONF1_DUTY_CYCLE_LSCH5_Msb			10u
#define LEDC_LSCH5_CONF1_DUTY_CYCLE_LSCH5_Lsb			19u
	/* This register is used to control the num of increased or decreased times for low speed channel5. */
#define LEDC_LSCH5_CONF1_DUTY_NUM_LSCH5_Msb			20u
#define LEDC_LSCH5_CONF1_DUTY_NUM_LSCH5_Lsb			29u
	/* This register is used to increase the duty of output signal or decrease the duty of output signal for low speed channel5. */
#define LEDC_LSCH5_CONF1_DUTY_INC_LSCH5				30u
	/* When reg_duty_num_hsch4  reg_duty_cycle_hsch4 and reg_duty_scale_hsch4 has been configured. */
#define LEDC_LSCH5_CONF1_DUTY_START_LSCH5			31u

	/* 0x114:  */
	uint32_t volatile LSCH5_DUTY_R;

	/* 0x118:  */
	uint32_t volatile LSCH6_CONF0;
	/* There are four low speed timers  the two bits are used to select one of them for low speed channel6. */
#define LEDC_LSCH6_CONF0_TIMER_SEL_LSCH6_Msb			0u
#define LEDC_LSCH6_CONF0_TIMER_SEL_LSCH6_Lsb			1u
	/* This is the output enable control bit for low speed channel6. */
#define LEDC_LSCH6_CONF0_SIG_OUT_EN_LSCH6			2u
	/* This bit is used to control the output value when low speed channel6 is off. */
#define LEDC_LSCH6_CONF0_IDLE_LV_LSCH6				3u
	/* This bit is used to update register LEDC_LSCH6_HPOINT and LEDC_LSCH6_DUTY for low speed channel6. */
#define LEDC_LSCH6_CONF0_PARA_UP_LSCH6				4u

	/* 0x11C:  */
	uint32_t volatile LSCH6_HPOINT;
	/* The output value changes to high when lstimerx(x=[0 3]) selected by low speed channel6 has reached reg_hpoint_lsch6[19:0] */
#define LEDC_LSCH6_HPOINT_HPOINT_LSCH6_Msb			0u
#define LEDC_LSCH6_HPOINT_HPOINT_LSCH6_Lsb			19u

	/* 0x120:  */
	uint32_t volatile LSCH6_DUTY;
	/* This register represents the current duty of the output signal for low speed channel6. */
#define LEDC_LSCH6_DUTY_DUTY_LSCH6_Msb				0u
#define LEDC_LSCH6_DUTY_DUTY_LSCH6_Lsb				24u

	/* 0x124:  */
	uint32_t volatile LSCH6_CONF1;
	/* This register controls the increase or decrease step scale for low speed channel6. */
#define LEDC_LSCH6_CONF1_DUTY_SCALE_LSCH6_Msb			0u
#define LEDC_LSCH6_CONF1_DUTY_SCALE_LSCH6_Lsb			9u
	/* This register is used to increase or decrease the duty every reg_duty_cycle_lsch6 cycles for low speed channel6. */
#define LEDC_LSCH6_CONF1_DUTY_CYCLE_LSCH6_Msb			10u
#define LEDC_LSCH6_CONF1_DUTY_CYCLE_LSCH6_Lsb			19u
	/* This register is used to control the num of increased or decreased times for low speed channel6. */
#define LEDC_LSCH6_CONF1_DUTY_NUM_LSCH6_Msb			20u
#define LEDC_LSCH6_CONF1_DUTY_NUM_LSCH6_Lsb			29u
	/* This register is used to increase the duty of output signal or decrease the duty of output signal for low speed channel6. */
#define LEDC_LSCH6_CONF1_DUTY_INC_LSCH6				30u
	/* When reg_duty_num_hsch6  reg_duty_cycle_hsch6 and reg_duty_scale_hsch6 has been configured. */
#define LEDC_LSCH6_CONF1_DUTY_START_LSCH6			31u

	/* 0x128:  */
	uint32_t volatile LSCH6_DUTY_R;

	/* 0x12C:  */
	uint32_t volatile LSCH7_CONF0;
	/* There are four low speed timers  the two bits are used to select one of them for low speed channel7. */
#define LEDC_LSCH7_CONF0_TIMER_SEL_LSCH7_Msb			0u
#define LEDC_LSCH7_CONF0_TIMER_SEL_LSCH7_Lsb			1u
	/* This is the output enable control bit for low speed channel7. */
#define LEDC_LSCH7_CONF0_SIG_OUT_EN_LSCH7			2u
	/* This bit is used to control the output value when low speed channel7 is off. */
#define LEDC_LSCH7_CONF0_IDLE_LV_LSCH7				3u
	/* This bit is used to update register LEDC_LSCH7_HPOINT and LEDC_LSCH7_DUTY for low speed channel7. */
#define LEDC_LSCH7_CONF0_PARA_UP_LSCH7				4u

	/* 0x130:  */
	uint32_t volatile LSCH7_HPOINT;
	/* The output value changes to high when lstimerx(x=[0 3]) selected by low speed channel7 has reached reg_hpoint_lsch7[19:0] */
#define LEDC_LSCH7_HPOINT_HPOINT_LSCH7_Msb			0u
#define LEDC_LSCH7_HPOINT_HPOINT_LSCH7_Lsb			19u

	/* 0x134:  */
	uint32_t volatile LSCH7_DUTY;
	/* This register represents the current duty of the output signal for low speed channel7. */
#define LEDC_LSCH7_DUTY_DUTY_LSCH7_Msb				0u
#define LEDC_LSCH7_DUTY_DUTY_LSCH7_Lsb				24u

	/* 0x138:  */
	uint32_t volatile LSCH7_CONF1;
	/* This register controls the increase or decrease step scale for low speed channel7. */
#define LEDC_LSCH7_CONF1_DUTY_SCALE_LSCH7_Msb			0u
#define LEDC_LSCH7_CONF1_DUTY_SCALE_LSCH7_Lsb			9u
	/* This register is used to increase or decrease the duty every reg_duty_cycle_lsch7 cycles for low speed channel7. */
#define LEDC_LSCH7_CONF1_DUTY_CYCLE_LSCH7_Msb			10u
#define LEDC_LSCH7_CONF1_DUTY_CYCLE_LSCH7_Lsb			19u
	/* This register is used to control the num of increased or decreased times for low speed channel4. */
#define LEDC_LSCH7_CONF1_DUTY_NUM_LSCH7_Msb			20u
#define LEDC_LSCH7_CONF1_DUTY_NUM_LSCH7_Lsb			29u
	/* This register is used to increase the duty of output signal or decrease the duty of output signal for low speed channel4. */
#define LEDC_LSCH7_CONF1_DUTY_INC_LSCH7				30u
	/* When reg_duty_num_hsch4  reg_duty_cycle_hsch4 and reg_duty_scale_hsch4 has been configured. */
#define LEDC_LSCH7_CONF1_DUTY_START_LSCH7			31u

	/* 0x13C:  */
	uint32_t volatile LSCH7_DUTY_R;

	/* 0x140:  */
	uint32_t volatile HSTIMER0_CONF;
	/* This register controls the range of the counter in high speed timer0. */
#define LEDC_HSTIMER0_CONF_HSTIMER0_DUTY_RES_Msb		0u
#define LEDC_HSTIMER0_CONF_HSTIMER0_DUTY_RES_Lsb		4u
	/* This register is used to configure parameter for divider in high speed timer0 the least significant eight bits represent the decimal part. */
#define LEDC_HSTIMER0_CONF_DIV_NUM_HSTIMER0_Msb			5u
#define LEDC_HSTIMER0_CONF_DIV_NUM_HSTIMER0_Lsb			22u
	/* This bit is used to pause the counter in high speed timer0 */
#define LEDC_HSTIMER0_CONF_HSTIMER0_PAUSE			23u
	/* This bit is used to reset high speed timer0 the counter will be 0 after reset. */
#define LEDC_HSTIMER0_CONF_HSTIMER0_RST				24u
	/* This bit is used to choose apb_clk or ref_tick for high speed timer0. */
#define LEDC_HSTIMER0_CONF_TICK_SEL_HSTIMER0			25u
	/*  */
#define LEDC_HSTIMER0_CONF_HSTIMER0_LIM_Msb			31u
#define LEDC_HSTIMER0_CONF_HSTIMER0_LIM_Lsb			35u

	/* 0x144:  */
	uint32_t volatile HSTIMER0_VALUE;
	/* software can read this register to get the current counter value in high speed timer0 */
#define LEDC_HSTIMER0_VALUE_HSTIMER0_CNT_Msb			0u
#define LEDC_HSTIMER0_VALUE_HSTIMER0_CNT_Lsb			19u

	/* 0x148:  */
	uint32_t volatile HSTIMER1_CONF;
	/* This register controls the range of the counter in high speed timer1. */
#define LEDC_HSTIMER1_CONF_HSTIMER1_DUTY_RES_Msb		0u
#define LEDC_HSTIMER1_CONF_HSTIMER1_DUTY_RES_Lsb		4u
	/* This register is used to configure parameter for divider in high speed timer1 the least significant eight bits represent the decimal part. */
#define LEDC_HSTIMER1_CONF_DIV_NUM_HSTIMER1_Msb			5u
#define LEDC_HSTIMER1_CONF_DIV_NUM_HSTIMER1_Lsb			22u
	/* This bit is used to pause the counter in high speed timer1 */
#define LEDC_HSTIMER1_CONF_HSTIMER1_PAUSE			23u
	/* This bit is used to reset high speed timer1 the counter will be 0 after reset. */
#define LEDC_HSTIMER1_CONF_HSTIMER1_RST				24u
	/* This bit is used to choose apb_clk or ref_tick for high speed timer1. */
#define LEDC_HSTIMER1_CONF_TICK_SEL_HSTIMER1			25u
	/*  */
#define LEDC_HSTIMER1_CONF_HSTIMER1_LIM_Msb			31u
#define LEDC_HSTIMER1_CONF_HSTIMER1_LIM_Lsb			35u

	/* 0x14C:  */
	uint32_t volatile HSTIMER1_VALUE;
	/* software can read this register to get the current counter value in high speed timer1. */
#define LEDC_HSTIMER1_VALUE_HSTIMER1_CNT_Msb			0u
#define LEDC_HSTIMER1_VALUE_HSTIMER1_CNT_Lsb			19u

	/* 0x150:  */
	uint32_t volatile HSTIMER2_CONF;
	/* This register controls the range of the counter in high speed timer2. */
#define LEDC_HSTIMER2_CONF_HSTIMER2_DUTY_RES_Msb		0u
#define LEDC_HSTIMER2_CONF_HSTIMER2_DUTY_RES_Lsb		4u
	/* This register is used to configure parameter for divider in high speed timer2 the least significant eight bits represent the decimal part. */
#define LEDC_HSTIMER2_CONF_DIV_NUM_HSTIMER2_Msb			5u
#define LEDC_HSTIMER2_CONF_DIV_NUM_HSTIMER2_Lsb			22u
	/* This bit is used to pause the counter in high speed timer2 */
#define LEDC_HSTIMER2_CONF_HSTIMER2_PAUSE			23u
	/* This bit is used to reset high speed timer2 the counter will be 0 after reset. */
#define LEDC_HSTIMER2_CONF_HSTIMER2_RST				24u
	/* This bit is used to choose apb_clk or ref_tick for high speed timer2. */
#define LEDC_HSTIMER2_CONF_TICK_SEL_HSTIMER2			25u
	/*  */
#define LEDC_HSTIMER2_CONF_HSTIMER2_LIM_Msb			31u
#define LEDC_HSTIMER2_CONF_HSTIMER2_LIM_Lsb			35u

	/* 0x154:  */
	uint32_t volatile HSTIMER2_VALUE;
	/* software can read this register to get the current counter value in high speed timer2 */
#define LEDC_HSTIMER2_VALUE_HSTIMER2_CNT_Msb			0u
#define LEDC_HSTIMER2_VALUE_HSTIMER2_CNT_Lsb			19u

	/* 0x158:  */
	uint32_t volatile HSTIMER3_CONF;
	/* This register controls the range of the counter in high speed timer3. */
#define LEDC_HSTIMER3_CONF_HSTIMER3_DUTY_RES_Msb		0u
#define LEDC_HSTIMER3_CONF_HSTIMER3_DUTY_RES_Lsb		4u
	/* This register is used to configure parameter for divider in high speed timer3 the least significant eight bits represent the decimal part. */
#define LEDC_HSTIMER3_CONF_DIV_NUM_HSTIMER3_Msb			5u
#define LEDC_HSTIMER3_CONF_DIV_NUM_HSTIMER3_Lsb			22u
	/* This bit is used to pause the counter in high speed timer3 */
#define LEDC_HSTIMER3_CONF_HSTIMER3_PAUSE			23u
	/* This bit is used to reset high speed timer3 the counter will be 0 after reset. */
#define LEDC_HSTIMER3_CONF_HSTIMER3_RST				24u
	/* This bit is used to choose apb_clk or ref_tick for high speed timer3. */
#define LEDC_HSTIMER3_CONF_TICK_SEL_HSTIMER3			25u
	/*  */
#define LEDC_HSTIMER3_CONF_HSTIMER3_LIM_Msb			31u
#define LEDC_HSTIMER3_CONF_HSTIMER3_LIM_Lsb			35u

	/* 0x15C:  */
	uint32_t volatile HSTIMER3_VALUE;
	/* software can read this register to get the current counter value in high speed timer3 */
#define LEDC_HSTIMER3_VALUE_HSTIMER3_CNT_Msb			0u
#define LEDC_HSTIMER3_VALUE_HSTIMER3_CNT_Lsb			19u

	/* 0x160:  */
	uint32_t volatile LSTIMER0_CONF;
	/* This register controls the range of the counter in low speed timer0. */
#define LEDC_LSTIMER0_CONF_LSTIMER0_DUTY_RES_Msb		0u
#define LEDC_LSTIMER0_CONF_LSTIMER0_DUTY_RES_Lsb		4u
	/* This register is used to configure parameter for divider in low speed timer0 the least significant eight bits represent the decimal part. */
#define LEDC_LSTIMER0_CONF_DIV_NUM_LSTIMER0_Msb			5u
#define LEDC_LSTIMER0_CONF_DIV_NUM_LSTIMER0_Lsb			22u
	/* This bit is used to pause the counter in low speed timer0. */
#define LEDC_LSTIMER0_CONF_LSTIMER0_PAUSE			23u
	/* This bit is used to reset low speed timer0 the counter will be 0 after reset. */
#define LEDC_LSTIMER0_CONF_LSTIMER0_RST				24u
	/* This bit is used to choose slow_clk or ref_tick for low speed timer0. */
#define LEDC_LSTIMER0_CONF_TICK_SEL_LSTIMER0			25u
	/* Set this bit  to update  reg_div_num_lstime0 and  reg_lstimer0_lim. */
#define LEDC_LSTIMER0_CONF_LSTIMER0_PARA_UP			26u
	/*  */
#define LEDC_LSTIMER0_CONF_LSTIMER0_LIM_Msb			31u
#define LEDC_LSTIMER0_CONF_LSTIMER0_LIM_Lsb			35u

	/* 0x164:  */
	uint32_t volatile LSTIMER0_VALUE;
	/* software can read this register to get the current counter value in low speed timer0. */
#define LEDC_LSTIMER0_VALUE_LSTIMER0_CNT_Msb			0u
#define LEDC_LSTIMER0_VALUE_LSTIMER0_CNT_Lsb			19u

	/* 0x168:  */
	uint32_t volatile LSTIMER1_CONF;
	/* This register controls the range of the counter in low speed timer1. */
#define LEDC_LSTIMER1_CONF_LSTIMER1_DUTY_RES_Msb		0u
#define LEDC_LSTIMER1_CONF_LSTIMER1_DUTY_RES_Lsb		4u
	/* This register is used to configure parameter for divider in low speed timer1 the least significant eight bits represent the decimal part. */
#define LEDC_LSTIMER1_CONF_DIV_NUM_LSTIMER1_Msb			5u
#define LEDC_LSTIMER1_CONF_DIV_NUM_LSTIMER1_Lsb			22u
	/* This bit is used to pause the counter in low speed timer1. */
#define LEDC_LSTIMER1_CONF_LSTIMER1_PAUSE			23u
	/* This bit is used to reset low speed timer1 the counter will be 0 after reset. */
#define LEDC_LSTIMER1_CONF_LSTIMER1_RST				24u
	/* This bit is used to choose slow_clk or ref_tick for low speed timer1. */
#define LEDC_LSTIMER1_CONF_TICK_SEL_LSTIMER1			25u
	/* Set this bit  to update  reg_div_num_lstime1 and  reg_lstimer1_lim. */
#define LEDC_LSTIMER1_CONF_LSTIMER1_PARA_UP			26u
	/*  */
#define LEDC_LSTIMER1_CONF_LSTIMER1_LIM_Msb			31u
#define LEDC_LSTIMER1_CONF_LSTIMER1_LIM_Lsb			35u

	/* 0x16C:  */
	uint32_t volatile LSTIMER1_VALUE;
	/* software can read this register to get the current counter value in low speed timer1. */
#define LEDC_LSTIMER1_VALUE_LSTIMER1_CNT_Msb			0u
#define LEDC_LSTIMER1_VALUE_LSTIMER1_CNT_Lsb			19u

	/* 0x170:  */
	uint32_t volatile LSTIMER2_CONF;
	/* This register controls the range of the counter in low speed timer2. */
#define LEDC_LSTIMER2_CONF_LSTIMER2_DUTY_RES_Msb		0u
#define LEDC_LSTIMER2_CONF_LSTIMER2_DUTY_RES_Lsb		4u
	/* This register is used to configure parameter for divider in low speed timer2 the least significant eight bits represent the decimal part. */
#define LEDC_LSTIMER2_CONF_DIV_NUM_LSTIMER2_Msb			5u
#define LEDC_LSTIMER2_CONF_DIV_NUM_LSTIMER2_Lsb			22u
	/* This bit is used to pause the counter in low speed timer2. */
#define LEDC_LSTIMER2_CONF_LSTIMER2_PAUSE			23u
	/* This bit is used to reset low speed timer2 the counter will be 0 after reset. */
#define LEDC_LSTIMER2_CONF_LSTIMER2_RST				24u
	/* This bit is used to choose slow_clk or ref_tick for low speed timer2. */
#define LEDC_LSTIMER2_CONF_TICK_SEL_LSTIMER2			25u
	/* Set this bit  to update  reg_div_num_lstime2 and  reg_lstimer2_lim. */
#define LEDC_LSTIMER2_CONF_LSTIMER2_PARA_UP			26u
	/*  */
#define LEDC_LSTIMER2_CONF_LSTIMER2_LIM_Msb			31u
#define LEDC_LSTIMER2_CONF_LSTIMER2_LIM_Lsb			35u

	/* 0x174:  */
	uint32_t volatile LSTIMER2_VALUE;
	/* software can read this register to get the current counter value in low speed timer2. */
#define LEDC_LSTIMER2_VALUE_LSTIMER2_CNT_Msb			0u
#define LEDC_LSTIMER2_VALUE_LSTIMER2_CNT_Lsb			19u

	/* 0x178:  */
	uint32_t volatile LSTIMER3_CONF;
	/* This register controls the range of the counter in low speed timer3. */
#define LEDC_LSTIMER3_CONF_LSTIMER3_DUTY_RES_Msb		0u
#define LEDC_LSTIMER3_CONF_LSTIMER3_DUTY_RES_Lsb		4u
	/* This register is used to configure parameter for divider in low speed timer3 the least significant eight bits represent the decimal part. */
#define LEDC_LSTIMER3_CONF_DIV_NUM_LSTIMER3_Msb			5u
#define LEDC_LSTIMER3_CONF_DIV_NUM_LSTIMER3_Lsb			22u
	/* This bit is used to pause the counter in low speed timer3. */
#define LEDC_LSTIMER3_CONF_LSTIMER3_PAUSE			23u
	/* This bit is used to reset low speed timer3 the counter will be 0 after reset. */
#define LEDC_LSTIMER3_CONF_LSTIMER3_RST				24u
	/* This bit is used to choose slow_clk or ref_tick for low speed timer3. */
#define LEDC_LSTIMER3_CONF_TICK_SEL_LSTIMER3			25u
	/* Set this bit  to update  reg_div_num_lstime3 and  reg_lstimer3_lim. */
#define LEDC_LSTIMER3_CONF_LSTIMER3_PARA_UP			26u
	/*  */
#define LEDC_LSTIMER3_CONF_LSTIMER3_LIM_Msb			31u
#define LEDC_LSTIMER3_CONF_LSTIMER3_LIM_Lsb			35u

	/* 0x17C:  */
	uint32_t volatile LSTIMER3_VALUE;
	/* software can read this register to get the current counter value in low speed timer3. */
#define LEDC_LSTIMER3_VALUE_LSTIMER3_CNT_Msb			0u
#define LEDC_LSTIMER3_VALUE_LSTIMER3_CNT_Lsb			19u

	/* 0x180:  */
	uint32_t volatile INT_RAW;
	/* The interrupt raw bit for high speed channel0  counter overflow. */
#define LEDC_INT_RAW_HSTIMER0_OVF_INT_RAW			0u
	/* The interrupt raw bit for high speed channel1  counter overflow. */
#define LEDC_INT_RAW_HSTIMER1_OVF_INT_RAW			1u
	/* The interrupt raw bit for high speed channel2  counter overflow. */
#define LEDC_INT_RAW_HSTIMER2_OVF_INT_RAW			2u
	/* The interrupt raw bit for high speed channel3  counter overflow. */
#define LEDC_INT_RAW_HSTIMER3_OVF_INT_RAW			3u
	/* The interrupt raw bit for low speed channel0  counter overflow. */
#define LEDC_INT_RAW_LSTIMER0_OVF_INT_RAW			4u
	/* The interrupt raw bit for low speed channel1  counter overflow. */
#define LEDC_INT_RAW_LSTIMER1_OVF_INT_RAW			5u
	/* The interrupt raw bit for low speed channel2  counter overflow. */
#define LEDC_INT_RAW_LSTIMER2_OVF_INT_RAW			6u
	/* The interrupt raw bit for low speed channel3  counter overflow. */
#define LEDC_INT_RAW_LSTIMER3_OVF_INT_RAW			7u
	/* The interrupt raw bit for high speed channel 0 duty change done. */
#define LEDC_INT_RAW_DUTY_CHNG_END_HSCH0_INT_RAW		8u
	/* The interrupt raw bit for high speed channel 1 duty change done. */
#define LEDC_INT_RAW_DUTY_CHNG_END_HSCH1_INT_RAW		9u
	/* The interrupt raw bit for high speed channel 2 duty change done. */
#define LEDC_INT_RAW_DUTY_CHNG_END_HSCH2_INT_RAW		10u
	/* The interrupt raw bit for high speed channel 3 duty change done. */
#define LEDC_INT_RAW_DUTY_CHNG_END_HSCH3_INT_RAW		11u
	/* The interrupt raw bit for high speed channel 4 duty change done. */
#define LEDC_INT_RAW_DUTY_CHNG_END_HSCH4_INT_RAW		12u
	/* The interrupt raw bit for high speed channel 5 duty change done. */
#define LEDC_INT_RAW_DUTY_CHNG_END_HSCH5_INT_RAW		13u
	/* The interrupt raw bit for high speed channel 6 duty change done. */
#define LEDC_INT_RAW_DUTY_CHNG_END_HSCH6_INT_RAW		14u
	/* The interrupt raw bit for high speed channel 7 duty change done. */
#define LEDC_INT_RAW_DUTY_CHNG_END_HSCH7_INT_RAW		15u
	/* The interrupt raw bit for low speed channel 0 duty change done. */
#define LEDC_INT_RAW_DUTY_CHNG_END_LSCH0_INT_RAW		16u
	/* The interrupt raw bit for low speed channel 1 duty change done. */
#define LEDC_INT_RAW_DUTY_CHNG_END_LSCH1_INT_RAW		17u
	/* The interrupt raw bit for low speed channel 2 duty change done. */
#define LEDC_INT_RAW_DUTY_CHNG_END_LSCH2_INT_RAW		18u
	/* The interrupt raw bit for low speed channel 3 duty change done. */
#define LEDC_INT_RAW_DUTY_CHNG_END_LSCH3_INT_RAW		19u
	/* The interrupt raw bit for low speed channel 4 duty change done. */
#define LEDC_INT_RAW_DUTY_CHNG_END_LSCH4_INT_RAW		20u
	/* The interrupt raw bit for low speed channel 5 duty change done. */
#define LEDC_INT_RAW_DUTY_CHNG_END_LSCH5_INT_RAW		21u
	/* The interrupt raw bit for low speed channel 6 duty change done. */
#define LEDC_INT_RAW_DUTY_CHNG_END_LSCH6_INT_RAW		22u
	/* The interrupt raw bit for low speed channel 7 duty change done. */
#define LEDC_INT_RAW_DUTY_CHNG_END_LSCH7_INT_RAW		23u

	/* 0x184:  */
	uint32_t volatile INT_ST;
	/* The interrupt status bit for high speed channel0  counter overflow event. */
#define LEDC_INT_ST_HSTIMER0_OVF_INT_ST				0u
	/* The interrupt status bit for high speed channel1  counter overflow event. */
#define LEDC_INT_ST_HSTIMER1_OVF_INT_ST				1u
	/* The interrupt status bit for high speed channel2  counter overflow event. */
#define LEDC_INT_ST_HSTIMER2_OVF_INT_ST				2u
	/* The interrupt status bit for high speed channel3  counter overflow event. */
#define LEDC_INT_ST_HSTIMER3_OVF_INT_ST				3u
	/* The interrupt status bit for low speed channel0  counter overflow event. */
#define LEDC_INT_ST_LSTIMER0_OVF_INT_ST				4u
	/* The interrupt status bit for low speed channel1  counter overflow event. */
#define LEDC_INT_ST_LSTIMER1_OVF_INT_ST				5u
	/* The interrupt status bit for low speed channel2  counter overflow event. */
#define LEDC_INT_ST_LSTIMER2_OVF_INT_ST				6u
	/* The interrupt status bit for low speed channel3  counter overflow event. */
#define LEDC_INT_ST_LSTIMER3_OVF_INT_ST				7u
	/* The interrupt status bit for high speed channel 0 duty change done event. */
#define LEDC_INT_ST_DUTY_CHNG_END_HSCH0_INT_ST			8u
	/* The interrupt status bit for high speed channel 1 duty change done event. */
#define LEDC_INT_ST_DUTY_CHNG_END_HSCH1_INT_ST			9u
	/* The interrupt status bit for high speed channel 2 duty change done event. */
#define LEDC_INT_ST_DUTY_CHNG_END_HSCH2_INT_ST			10u
	/* The interrupt status bit for high speed channel 3 duty change done event. */
#define LEDC_INT_ST_DUTY_CHNG_END_HSCH3_INT_ST			11u
	/* The interrupt status bit for high speed channel 4 duty change done event. */
#define LEDC_INT_ST_DUTY_CHNG_END_HSCH4_INT_ST			12u
	/* The interrupt status bit for high speed channel 5 duty change done event. */
#define LEDC_INT_ST_DUTY_CHNG_END_HSCH5_INT_ST			13u
	/* The interrupt status bit for high speed channel 6 duty change done event. */
#define LEDC_INT_ST_DUTY_CHNG_END_HSCH6_INT_ST			14u
	/* The interrupt status bit for high speed channel 7 duty change done event. */
#define LEDC_INT_ST_DUTY_CHNG_END_HSCH7_INT_ST			15u
	/* The interrupt status bit for low speed channel 0 duty change done event. */
#define LEDC_INT_ST_DUTY_CHNG_END_LSCH0_INT_ST			16u
	/* The interrupt status bit for low speed channel 1 duty change done event. */
#define LEDC_INT_ST_DUTY_CHNG_END_LSCH1_INT_ST			17u
	/* The interrupt status bit for low speed channel 2 duty change done event. */
#define LEDC_INT_ST_DUTY_CHNG_END_LSCH2_INT_ST			18u
	/* The interrupt status bit for low speed channel 3 duty change done event. */
#define LEDC_INT_ST_DUTY_CHNG_END_LSCH3_INT_ST			19u
	/* The interrupt status bit for low speed channel 4 duty change done event. */
#define LEDC_INT_ST_DUTY_CHNG_END_LSCH4_INT_ST			20u
	/* The interrupt status bit for low speed channel 5 duty change done event. */
#define LEDC_INT_ST_DUTY_CHNG_END_LSCH5_INT_ST			21u
	/* The interrupt status bit for low speed channel 6 duty change done event. */
#define LEDC_INT_ST_DUTY_CHNG_END_LSCH6_INT_ST			22u
	/* The interrupt status bit for low speed channel 7 duty change done event */
#define LEDC_INT_ST_DUTY_CHNG_END_LSCH7_INT_ST			23u

	/* 0x188:  */
	uint32_t volatile INT_ENA;
	/* The interrupt enable bit for high speed channel0  counter overflow interrupt. */
#define LEDC_INT_ENA_HSTIMER0_OVF_INT_ENA			0u
	/* The interrupt enable bit for high speed channel1  counter overflow interrupt. */
#define LEDC_INT_ENA_HSTIMER1_OVF_INT_ENA			1u
	/* The interrupt enable bit for high speed channel2  counter overflow interrupt. */
#define LEDC_INT_ENA_HSTIMER2_OVF_INT_ENA			2u
	/* The interrupt enable bit for high speed channel3  counter overflow interrupt. */
#define LEDC_INT_ENA_HSTIMER3_OVF_INT_ENA			3u
	/* The interrupt enable bit for low speed channel0  counter overflow interrupt. */
#define LEDC_INT_ENA_LSTIMER0_OVF_INT_ENA			4u
	/* The interrupt enable bit for low speed channel1  counter overflow interrupt. */
#define LEDC_INT_ENA_LSTIMER1_OVF_INT_ENA			5u
	/* The interrupt enable bit for low speed channel2  counter overflow interrupt. */
#define LEDC_INT_ENA_LSTIMER2_OVF_INT_ENA			6u
	/* The interrupt enable bit for low speed channel3  counter overflow interrupt. */
#define LEDC_INT_ENA_LSTIMER3_OVF_INT_ENA			7u
	/* The interrupt enable bit for high speed channel 0 duty change done interrupt. */
#define LEDC_INT_ENA_DUTY_CHNG_END_HSCH0_INT_ENA		8u
	/* The interrupt enable bit for high speed channel 1 duty change done interrupt. */
#define LEDC_INT_ENA_DUTY_CHNG_END_HSCH1_INT_ENA		9u
	/* The interrupt enable bit for high speed channel 2 duty change done interrupt. */
#define LEDC_INT_ENA_DUTY_CHNG_END_HSCH2_INT_ENA		10u
	/* The interrupt enable bit for high speed channel 3 duty change done interrupt. */
#define LEDC_INT_ENA_DUTY_CHNG_END_HSCH3_INT_ENA		11u
	/* The interrupt enable bit for high speed channel 4 duty change done interrupt. */
#define LEDC_INT_ENA_DUTY_CHNG_END_HSCH4_INT_ENA		12u
	/* The interrupt enable bit for high speed channel 5 duty change done interrupt. */
#define LEDC_INT_ENA_DUTY_CHNG_END_HSCH5_INT_ENA		13u
	/* The interrupt enable bit for high speed channel 6 duty change done interrupt. */
#define LEDC_INT_ENA_DUTY_CHNG_END_HSCH6_INT_ENA		14u
	/* The interrupt enable bit for high speed channel 7 duty change done interrupt. */
#define LEDC_INT_ENA_DUTY_CHNG_END_HSCH7_INT_ENA		15u
	/* The interrupt enable bit for low speed channel 0 duty change done interrupt. */
#define LEDC_INT_ENA_DUTY_CHNG_END_LSCH0_INT_ENA		16u
	/* The interrupt enable bit for low speed channel 1 duty change done interrupt. */
#define LEDC_INT_ENA_DUTY_CHNG_END_LSCH1_INT_ENA		17u
	/* The interrupt enable bit for low speed channel 2 duty change done interrupt. */
#define LEDC_INT_ENA_DUTY_CHNG_END_LSCH2_INT_ENA		18u
	/* The interrupt enable bit for low speed channel 3 duty change done interrupt. */
#define LEDC_INT_ENA_DUTY_CHNG_END_LSCH3_INT_ENA		19u
	/* The interrupt enable bit for low speed channel 4 duty change done interrupt. */
#define LEDC_INT_ENA_DUTY_CHNG_END_LSCH4_INT_ENA		20u
	/* The interrupt enable bit for low speed channel 5 duty change done interrupt. */
#define LEDC_INT_ENA_DUTY_CHNG_END_LSCH5_INT_ENA		21u
	/* The interrupt enable bit for low speed channel 6 duty change done interrupt. */
#define LEDC_INT_ENA_DUTY_CHNG_END_LSCH6_INT_ENA		22u
	/* The interrupt enable bit for low speed channel 7 duty change done interrupt. */
#define LEDC_INT_ENA_DUTY_CHNG_END_LSCH7_INT_ENA		23u

	/* 0x18C:  */
	uint32_t volatile INT_CLR;
	/* Set this  bit to clear  high speed channel0  counter overflow interrupt. */
#define LEDC_INT_CLR_HSTIMER0_OVF_INT_CLR			0u
	/* Set this  bit to clear  high speed channel1  counter overflow interrupt. */
#define LEDC_INT_CLR_HSTIMER1_OVF_INT_CLR			1u
	/* Set this  bit to clear  high speed channel2  counter overflow interrupt. */
#define LEDC_INT_CLR_HSTIMER2_OVF_INT_CLR			2u
	/* Set this  bit to clear  high speed channel3  counter overflow interrupt. */
#define LEDC_INT_CLR_HSTIMER3_OVF_INT_CLR			3u
	/* Set this  bit to clear  low speed channel0  counter overflow interrupt. */
#define LEDC_INT_CLR_LSTIMER0_OVF_INT_CLR			4u
	/* Set this  bit to clear  low speed channel1  counter overflow interrupt. */
#define LEDC_INT_CLR_LSTIMER1_OVF_INT_CLR			5u
	/* Set this  bit to clear  low speed channel2  counter overflow interrupt. */
#define LEDC_INT_CLR_LSTIMER2_OVF_INT_CLR			6u
	/* Set this  bit to clear  low speed channel3  counter overflow interrupt. */
#define LEDC_INT_CLR_LSTIMER3_OVF_INT_CLR			7u
	/* Set this  bit to clear  high speed channel 0 duty change done interrupt. */
#define LEDC_INT_CLR_DUTY_CHNG_END_HSCH0_INT_CLR		8u
	/* Set this  bit to clear  high speed channel 1 duty change done interrupt. */
#define LEDC_INT_CLR_DUTY_CHNG_END_HSCH1_INT_CLR		9u
	/* Set this  bit to clear  high speed channel 2 duty change done interrupt. */
#define LEDC_INT_CLR_DUTY_CHNG_END_HSCH2_INT_CLR		10u
	/* Set this  bit to clear  high speed channel 3 duty change done interrupt. */
#define LEDC_INT_CLR_DUTY_CHNG_END_HSCH3_INT_CLR		11u
	/* Set this  bit to clear  high speed channel 4 duty change done interrupt. */
#define LEDC_INT_CLR_DUTY_CHNG_END_HSCH4_INT_CLR		12u
	/* Set this  bit to clear  high speed channel 5 duty change done interrupt. */
#define LEDC_INT_CLR_DUTY_CHNG_END_HSCH5_INT_CLR		13u
	/* Set this  bit to clear  high speed channel 6 duty change done interrupt. */
#define LEDC_INT_CLR_DUTY_CHNG_END_HSCH6_INT_CLR		14u
	/* Set this  bit to clear  high speed channel 7 duty change done interrupt. */
#define LEDC_INT_CLR_DUTY_CHNG_END_HSCH7_INT_CLR		15u
	/* Set this  bit to clear  low speed channel 0 duty change done interrupt. */
#define LEDC_INT_CLR_DUTY_CHNG_END_LSCH0_INT_CLR		16u
	/* Set this  bit to clear  low speed channel 1 duty change done interrupt. */
#define LEDC_INT_CLR_DUTY_CHNG_END_LSCH1_INT_CLR		17u
	/* Set this  bit to clear  low speed channel 2 duty change done interrupt. */
#define LEDC_INT_CLR_DUTY_CHNG_END_LSCH2_INT_CLR		18u
	/* Set this  bit to clear  low speed channel 3 duty change done interrupt. */
#define LEDC_INT_CLR_DUTY_CHNG_END_LSCH3_INT_CLR		19u
	/* Set this  bit to clear  low speed channel 4 duty change done interrupt. */
#define LEDC_INT_CLR_DUTY_CHNG_END_LSCH4_INT_CLR		20u
	/* Set this  bit to clear  low speed channel 5 duty change done interrupt. */
#define LEDC_INT_CLR_DUTY_CHNG_END_LSCH5_INT_CLR		21u
	/* Set this  bit to clear  low speed channel 6 duty change done interrupt. */
#define LEDC_INT_CLR_DUTY_CHNG_END_LSCH6_INT_CLR		22u
	/* Set this  bit to clear  low speed channel 7 duty change done interrupt. */
#define LEDC_INT_CLR_DUTY_CHNG_END_LSCH7_INT_CLR		23u

	/* 0x190:  */
	uint32_t volatile CONF;
	/* This bit is used to set the frequency of slow_clk. */
#define LEDC_CONF_APB_CLK_SEL					0u

	/* 0x1B0 */
	uint8_t RESERVED0[0x1FC-0x1B0];

	/* 0x1FC:  */
	uint32_t volatile DATE;
	/* This register represents the version . */
#define LEDC_DATE_DATE_Msb					0u
#define LEDC_DATE_DATE_Lsb					31u

};


#define PWM0 ((struct mcu_pwm0 *)0x3FF5E000)

struct mcu_pwm0 {

	/* 0x00:  */
	uint32_t volatile CLK_CFG;
	/*  */
#define PWM0_CLK_CFG_CLK_PRESCALE_Msb				0u
#define PWM0_CLK_CFG_CLK_PRESCALE_Lsb				7u

	/* 0x04:  */
	uint32_t volatile TIMER0_CFG0;
	/*  */
#define PWM0_TIMER0_CFG0_TIMER0_PRESCALE_Msb			0u
#define PWM0_TIMER0_CFG0_TIMER0_PRESCALE_Lsb			7u
	/*  */
#define PWM0_TIMER0_CFG0_TIMER0_PERIOD_Msb			8u
#define PWM0_TIMER0_CFG0_TIMER0_PERIOD_Lsb			23u
	/*  */
#define PWM0_TIMER0_CFG0_TIMER0_PERIOD_UPMETHOD_Msb		24u
#define PWM0_TIMER0_CFG0_TIMER0_PERIOD_UPMETHOD_Lsb		25u

	/* 0x08:  */
	uint32_t volatile TIMER0_CFG1;
	/*  */
#define PWM0_TIMER0_CFG1_TIMER0_START_Msb			0u
#define PWM0_TIMER0_CFG1_TIMER0_START_Lsb			2u
	/*  */
#define PWM0_TIMER0_CFG1_TIMER0_MOD_Msb				3u
#define PWM0_TIMER0_CFG1_TIMER0_MOD_Lsb				4u

	/* 0x0C:  */
	uint32_t volatile TIMER0_SYNC;
	/*  */
#define PWM0_TIMER0_SYNC_TIMER0_SYNCI_EN			0u
	/*  */
#define PWM0_TIMER0_SYNC_SW					1u
	/*  */
#define PWM0_TIMER0_SYNC_TIMER0_SYNCO_SEL_Msb			2u
#define PWM0_TIMER0_SYNC_TIMER0_SYNCO_SEL_Lsb			3u
	/*  */
#define PWM0_TIMER0_SYNC_TIMER0_PHASE_Msb			4u
#define PWM0_TIMER0_SYNC_TIMER0_PHASE_Lsb			19u
	/*  */
#define PWM0_TIMER0_SYNC_TIMER0_PHASE_DIRECTION			20u

	/* 0x10:  */
	uint32_t volatile TIMER0_STATUS;
	/*  */
#define PWM0_TIMER0_STATUS_TIMER0_VALUE_Msb			0u
#define PWM0_TIMER0_STATUS_TIMER0_VALUE_Lsb			15u
	/*  */
#define PWM0_TIMER0_STATUS_TIMER0_DIRECTION			16u

	/* 0x14:  */
	uint32_t volatile TIMER1_CFG0;
	/*  */
#define PWM0_TIMER1_CFG0_TIMER1_PRESCALE_Msb			0u
#define PWM0_TIMER1_CFG0_TIMER1_PRESCALE_Lsb			7u
	/*  */
#define PWM0_TIMER1_CFG0_TIMER1_PERIOD_Msb			8u
#define PWM0_TIMER1_CFG0_TIMER1_PERIOD_Lsb			23u
	/*  */
#define PWM0_TIMER1_CFG0_TIMER1_PERIOD_UPMETHOD_Msb		24u
#define PWM0_TIMER1_CFG0_TIMER1_PERIOD_UPMETHOD_Lsb		25u

	/* 0x18:  */
	uint32_t volatile TIMER1_CFG1;
	/*  */
#define PWM0_TIMER1_CFG1_TIMER1_START_Msb			0u
#define PWM0_TIMER1_CFG1_TIMER1_START_Lsb			2u
	/*  */
#define PWM0_TIMER1_CFG1_TIMER1_MOD_Msb				3u
#define PWM0_TIMER1_CFG1_TIMER1_MOD_Lsb				4u

	/* 0x1C:  */
	uint32_t volatile TIMER1_SYNC;
	/*  */
#define PWM0_TIMER1_SYNC_TIMER1_SYNCI_EN			0u
	/*  */
#define PWM0_TIMER1_SYNC_SW					1u
	/*  */
#define PWM0_TIMER1_SYNC_TIMER1_SYNCO_SEL_Msb			2u
#define PWM0_TIMER1_SYNC_TIMER1_SYNCO_SEL_Lsb			3u
	/*  */
#define PWM0_TIMER1_SYNC_TIMER1_PHASE_Msb			4u
#define PWM0_TIMER1_SYNC_TIMER1_PHASE_Lsb			19u
	/*  */
#define PWM0_TIMER1_SYNC_TIMER1_PHASE_DIRECTION			20u

	/* 0x20:  */
	uint32_t volatile TIMER1_STATUS;
	/*  */
#define PWM0_TIMER1_STATUS_TIMER1_VALUE_Msb			0u
#define PWM0_TIMER1_STATUS_TIMER1_VALUE_Lsb			15u
	/*  */
#define PWM0_TIMER1_STATUS_TIMER1_DIRECTION			16u

	/* 0x24:  */
	uint32_t volatile TIMER2_CFG0;
	/*  */
#define PWM0_TIMER2_CFG0_TIMER2_PRESCALE_Msb			0u
#define PWM0_TIMER2_CFG0_TIMER2_PRESCALE_Lsb			7u
	/*  */
#define PWM0_TIMER2_CFG0_TIMER2_PERIOD_Msb			8u
#define PWM0_TIMER2_CFG0_TIMER2_PERIOD_Lsb			23u
	/*  */
#define PWM0_TIMER2_CFG0_TIMER2_PERIOD_UPMETHOD_Msb		24u
#define PWM0_TIMER2_CFG0_TIMER2_PERIOD_UPMETHOD_Lsb		25u

	/* 0x28:  */
	uint32_t volatile TIMER2_CFG1;
	/*  */
#define PWM0_TIMER2_CFG1_TIMER2_START_Msb			0u
#define PWM0_TIMER2_CFG1_TIMER2_START_Lsb			2u
	/*  */
#define PWM0_TIMER2_CFG1_TIMER2_MOD_Msb				3u
#define PWM0_TIMER2_CFG1_TIMER2_MOD_Lsb				4u

	/* 0x2C:  */
	uint32_t volatile TIMER2_SYNC;
	/*  */
#define PWM0_TIMER2_SYNC_TIMER2_SYNCI_EN			0u
	/*  */
#define PWM0_TIMER2_SYNC_SW					1u
	/*  */
#define PWM0_TIMER2_SYNC_TIMER2_SYNCO_SEL_Msb			2u
#define PWM0_TIMER2_SYNC_TIMER2_SYNCO_SEL_Lsb			3u
	/*  */
#define PWM0_TIMER2_SYNC_TIMER2_PHASE_Msb			4u
#define PWM0_TIMER2_SYNC_TIMER2_PHASE_Lsb			19u
	/*  */
#define PWM0_TIMER2_SYNC_TIMER2_PHASE_DIRECTION			20u

	/* 0x30:  */
	uint32_t volatile TIMER2_STATUS;
	/*  */
#define PWM0_TIMER2_STATUS_TIMER2_VALUE_Msb			0u
#define PWM0_TIMER2_STATUS_TIMER2_VALUE_Lsb			15u
	/*  */
#define PWM0_TIMER2_STATUS_TIMER2_DIRECTION			16u

	/* 0x34:  */
	uint32_t volatile TIMER_SYNCI_CFG;
	/*  */
#define PWM0_TIMER_SYNCI_CFG_TIMER0_SYNCISEL_Msb		0u
#define PWM0_TIMER_SYNCI_CFG_TIMER0_SYNCISEL_Lsb		2u
	/*  */
#define PWM0_TIMER_SYNCI_CFG_TIMER1_SYNCISEL_Msb		3u
#define PWM0_TIMER_SYNCI_CFG_TIMER1_SYNCISEL_Lsb		5u
	/*  */
#define PWM0_TIMER_SYNCI_CFG_TIMER2_SYNCISEL_Msb		6u
#define PWM0_TIMER_SYNCI_CFG_TIMER2_SYNCISEL_Lsb		8u
	/*  */
#define PWM0_TIMER_SYNCI_CFG_EXTERNAL_SYNCI0_INVERT		9u
	/*  */
#define PWM0_TIMER_SYNCI_CFG_EXTERNAL_SYNCI1_INVERT		10u
	/*  */
#define PWM0_TIMER_SYNCI_CFG_EXTERNAL_SYNCI2_INVERT		11u

	/* 0x38:  */
	uint32_t volatile OPERATOR_TIMERSEL;
	/*  */
#define PWM0_OPERATOR_TIMERSEL_OPERATOR0_TIMERSEL_Msb		0u
#define PWM0_OPERATOR_TIMERSEL_OPERATOR0_TIMERSEL_Lsb		1u
	/*  */
#define PWM0_OPERATOR_TIMERSEL_OPERATOR1_TIMERSEL_Msb		2u
#define PWM0_OPERATOR_TIMERSEL_OPERATOR1_TIMERSEL_Lsb		3u
	/*  */
#define PWM0_OPERATOR_TIMERSEL_OPERATOR2_TIMERSEL_Msb		4u
#define PWM0_OPERATOR_TIMERSEL_OPERATOR2_TIMERSEL_Lsb		5u

	/* 0x3C:  */
	uint32_t volatile GEN0_STMP_CFG;
	/*  */
#define PWM0_GEN0_STMP_CFG_GEN0_A_UPMETHOD_Msb			0u
#define PWM0_GEN0_STMP_CFG_GEN0_A_UPMETHOD_Lsb			3u
	/*  */
#define PWM0_GEN0_STMP_CFG_GEN0_B_UPMETHOD_Msb			4u
#define PWM0_GEN0_STMP_CFG_GEN0_B_UPMETHOD_Lsb			7u
	/*  */
#define PWM0_GEN0_STMP_CFG_GEN0_A_SHDW_FULL			8u
	/*  */
#define PWM0_GEN0_STMP_CFG_GEN0_B_SHDW_FULL			9u

	/* 0x40:  */
	uint32_t volatile GEN0_TSTMP_A;
	/*  */
#define PWM0_GEN0_TSTMP_A_GEN0_A_Msb				0u
#define PWM0_GEN0_TSTMP_A_GEN0_A_Lsb				15u

	/* 0x44:  */
	uint32_t volatile GEN0_TSTMP_B;
	/*  */
#define PWM0_GEN0_TSTMP_B_GEN0_B_Msb				0u
#define PWM0_GEN0_TSTMP_B_GEN0_B_Lsb				15u

	/* 0x48:  */
	uint32_t volatile GEN0_CFG0;
	/*  */
#define PWM0_GEN0_CFG0_GEN0_CFG_UPMETHOD_Msb			0u
#define PWM0_GEN0_CFG0_GEN0_CFG_UPMETHOD_Lsb			3u
	/*  */
#define PWM0_GEN0_CFG0_GEN0_T0_SEL_Msb				4u
#define PWM0_GEN0_CFG0_GEN0_T0_SEL_Lsb				6u
	/*  */
#define PWM0_GEN0_CFG0_GEN0_T1_SEL_Msb				7u
#define PWM0_GEN0_CFG0_GEN0_T1_SEL_Lsb				9u

	/* 0x4C:  */
	uint32_t volatile GEN0_FORCE;
	/*  */
#define PWM0_GEN0_FORCE_GEN0_CNTUFORCE_UPMETHOD_Msb		0u
#define PWM0_GEN0_FORCE_GEN0_CNTUFORCE_UPMETHOD_Lsb		5u
	/*  */
#define PWM0_GEN0_FORCE_GEN0_A_CNTUFORCE_MODE_Msb		6u
#define PWM0_GEN0_FORCE_GEN0_A_CNTUFORCE_MODE_Lsb		7u
	/*  */
#define PWM0_GEN0_FORCE_GEN0_B_CNTUFORCE_MODE_Msb		8u
#define PWM0_GEN0_FORCE_GEN0_B_CNTUFORCE_MODE_Lsb		9u
	/*  */
#define PWM0_GEN0_FORCE_GEN0_A_NCIFORCE				10u
	/*  */
#define PWM0_GEN0_FORCE_GEN0_A_NCIFORCE_MODE_Msb		11u
#define PWM0_GEN0_FORCE_GEN0_A_NCIFORCE_MODE_Lsb		12u
	/*  */
#define PWM0_GEN0_FORCE_GEN0_B_NCIFORCE				13u
	/*  */
#define PWM0_GEN0_FORCE_GEN0_B_NCIFORCE_MODE_Msb		14u
#define PWM0_GEN0_FORCE_GEN0_B_NCIFORCE_MODE_Lsb		15u

	/* 0x50:  */
	uint32_t volatile GEN0_A;
	/*  */
#define PWM0_GEN0_A_UTEZ_Msb					0u
#define PWM0_GEN0_A_UTEZ_Lsb					1u
	/*  */
#define PWM0_GEN0_A_UTEP_Msb					2u
#define PWM0_GEN0_A_UTEP_Lsb					3u
	/*  */
#define PWM0_GEN0_A_UTEA_Msb					4u
#define PWM0_GEN0_A_UTEA_Lsb					5u
	/*  */
#define PWM0_GEN0_A_UTEB_Msb					6u
#define PWM0_GEN0_A_UTEB_Lsb					7u
	/*  */
#define PWM0_GEN0_A_UT0_Msb					8u
#define PWM0_GEN0_A_UT0_Lsb					9u
	/*  */
#define PWM0_GEN0_A_UT1_Msb					10u
#define PWM0_GEN0_A_UT1_Lsb					11u
	/*  */
#define PWM0_GEN0_A_DTEZ_Msb					12u
#define PWM0_GEN0_A_DTEZ_Lsb					13u
	/*  */
#define PWM0_GEN0_A_DTEP_Msb					14u
#define PWM0_GEN0_A_DTEP_Lsb					15u
	/*  */
#define PWM0_GEN0_A_DTEA_Msb					16u
#define PWM0_GEN0_A_DTEA_Lsb					17u
	/*  */
#define PWM0_GEN0_A_DTEB_Msb					18u
#define PWM0_GEN0_A_DTEB_Lsb					19u
	/*  */
#define PWM0_GEN0_A_DT0_Msb					20u
#define PWM0_GEN0_A_DT0_Lsb					21u
	/*  */
#define PWM0_GEN0_A_DT1_Msb					22u
#define PWM0_GEN0_A_DT1_Lsb					23u

	/* 0x54:  */
	uint32_t volatile GEN0_B;
	/*  */
#define PWM0_GEN0_B_UTEZ_Msb					0u
#define PWM0_GEN0_B_UTEZ_Lsb					1u
	/*  */
#define PWM0_GEN0_B_UTEP_Msb					2u
#define PWM0_GEN0_B_UTEP_Lsb					3u
	/*  */
#define PWM0_GEN0_B_UTEA_Msb					4u
#define PWM0_GEN0_B_UTEA_Lsb					5u
	/*  */
#define PWM0_GEN0_B_UTEB_Msb					6u
#define PWM0_GEN0_B_UTEB_Lsb					7u
	/*  */
#define PWM0_GEN0_B_UT0_Msb					8u
#define PWM0_GEN0_B_UT0_Lsb					9u
	/*  */
#define PWM0_GEN0_B_UT1_Msb					10u
#define PWM0_GEN0_B_UT1_Lsb					11u
	/*  */
#define PWM0_GEN0_B_DTEZ_Msb					12u
#define PWM0_GEN0_B_DTEZ_Lsb					13u
	/*  */
#define PWM0_GEN0_B_DTEP_Msb					14u
#define PWM0_GEN0_B_DTEP_Lsb					15u
	/*  */
#define PWM0_GEN0_B_DTEA_Msb					16u
#define PWM0_GEN0_B_DTEA_Lsb					17u
	/*  */
#define PWM0_GEN0_B_DTEB_Msb					18u
#define PWM0_GEN0_B_DTEB_Lsb					19u
	/*  */
#define PWM0_GEN0_B_DT0_Msb					20u
#define PWM0_GEN0_B_DT0_Lsb					21u
	/*  */
#define PWM0_GEN0_B_DT1_Msb					22u
#define PWM0_GEN0_B_DT1_Lsb					23u

	/* 0x58:  */
	uint32_t volatile DT0_CFG;
	/*  */
#define PWM0_DT0_CFG_DT0_FED_UPMETHOD_Msb			0u
#define PWM0_DT0_CFG_DT0_FED_UPMETHOD_Lsb			3u
	/*  */
#define PWM0_DT0_CFG_DT0_RED_UPMETHOD_Msb			4u
#define PWM0_DT0_CFG_DT0_RED_UPMETHOD_Lsb			7u
	/*  */
#define PWM0_DT0_CFG_DT0_DEB_MODE				8u
	/*  */
#define PWM0_DT0_CFG_DT0_A_OUTSWAP				9u
	/*  */
#define PWM0_DT0_CFG_DT0_B_OUTSWAP				10u
	/*  */
#define PWM0_DT0_CFG_DT0_RED_INSEL				11u
	/*  */
#define PWM0_DT0_CFG_DT0_FED_INSEL				12u
	/*  */
#define PWM0_DT0_CFG_DT0_RED_OUTINVERT				13u
	/*  */
#define PWM0_DT0_CFG_DT0_FED_OUTINVERT				14u
	/*  */
#define PWM0_DT0_CFG_DT0_A_OUTBYPASS				15u
	/*  */
#define PWM0_DT0_CFG_DT0_B_OUTBYPASS				16u
	/*  */
#define PWM0_DT0_CFG_DT0_CLK_SEL				17u

	/* 0x5C:  */
	uint32_t volatile DT0_FED_CFG;
	/*  */
#define PWM0_DT0_FED_CFG_DT0_FED_Msb				0u
#define PWM0_DT0_FED_CFG_DT0_FED_Lsb				15u

	/* 0x60:  */
	uint32_t volatile DT0_RED_CFG;
	/*  */
#define PWM0_DT0_RED_CFG_DT0_RED_Msb				0u
#define PWM0_DT0_RED_CFG_DT0_RED_Lsb				15u

	/* 0x64:  */
	uint32_t volatile CARRIER0_CFG;
	/*  */
#define PWM0_CARRIER0_CFG_CARRIER0_EN				0u
	/*  */
#define PWM0_CARRIER0_CFG_CARRIER0_PRESCALE_Msb			1u
#define PWM0_CARRIER0_CFG_CARRIER0_PRESCALE_Lsb			4u
	/*  */
#define PWM0_CARRIER0_CFG_CARRIER0_DUTY_Msb			5u
#define PWM0_CARRIER0_CFG_CARRIER0_DUTY_Lsb			7u
	/*  */
#define PWM0_CARRIER0_CFG_CARRIER0_OSHTWTH_Msb			8u
#define PWM0_CARRIER0_CFG_CARRIER0_OSHTWTH_Lsb			11u
	/*  */
#define PWM0_CARRIER0_CFG_CARRIER0_OUT_INVERT			12u
	/*  */
#define PWM0_CARRIER0_CFG_CARRIER0_IN_INVERT			13u

	/* 0x68:  */
	uint32_t volatile FH0_CFG0;
	/*  */
#define PWM0_FH0_CFG0_FH0_SW_CBC				0u
	/*  */
#define PWM0_FH0_CFG0_FH0_F2_CBC				1u
	/*  */
#define PWM0_FH0_CFG0_FH0_F1_CBC				2u
	/*  */
#define PWM0_FH0_CFG0_FH0_F0_CBC				3u
	/*  */
#define PWM0_FH0_CFG0_FH0_SW_OST				4u
	/*  */
#define PWM0_FH0_CFG0_FH0_F2_OST				5u
	/*  */
#define PWM0_FH0_CFG0_FH0_F1_OST				6u
	/*  */
#define PWM0_FH0_CFG0_FH0_F0_OST				7u
	/*  */
#define PWM0_FH0_CFG0_FH0_A_CBC_D_Msb				8u
#define PWM0_FH0_CFG0_FH0_A_CBC_D_Lsb				9u
	/*  */
#define PWM0_FH0_CFG0_FH0_A_CBC_U_Msb				10u
#define PWM0_FH0_CFG0_FH0_A_CBC_U_Lsb				11u
	/*  */
#define PWM0_FH0_CFG0_FH0_A_OST_D_Msb				12u
#define PWM0_FH0_CFG0_FH0_A_OST_D_Lsb				13u
	/*  */
#define PWM0_FH0_CFG0_FH0_A_OST_U_Msb				14u
#define PWM0_FH0_CFG0_FH0_A_OST_U_Lsb				15u
	/*  */
#define PWM0_FH0_CFG0_FH0_B_CBC_D_Msb				16u
#define PWM0_FH0_CFG0_FH0_B_CBC_D_Lsb				17u
	/*  */
#define PWM0_FH0_CFG0_FH0_B_CBC_U_Msb				18u
#define PWM0_FH0_CFG0_FH0_B_CBC_U_Lsb				19u
	/*  */
#define PWM0_FH0_CFG0_FH0_B_OST_D_Msb				20u
#define PWM0_FH0_CFG0_FH0_B_OST_D_Lsb				21u
	/*  */
#define PWM0_FH0_CFG0_FH0_B_OST_U_Msb				22u
#define PWM0_FH0_CFG0_FH0_B_OST_U_Lsb				23u

	/* 0x6C:  */
	uint32_t volatile FH0_CFG1;
	/*  */
#define PWM0_FH0_CFG1_FH0_CLR_OST				0u
	/*  */
#define PWM0_FH0_CFG1_FH0_CBCPULSE_Msb				1u
#define PWM0_FH0_CFG1_FH0_CBCPULSE_Lsb				2u
	/*  */
#define PWM0_FH0_CFG1_FH0_FORCE_CBC				3u
	/*  */
#define PWM0_FH0_CFG1_FH0_FORCE_OST				4u

	/* 0x70:  */
	uint32_t volatile FH0_STATUS;
	/*  */
#define PWM0_FH0_STATUS_FH0_CBC_ON				0u
	/*  */
#define PWM0_FH0_STATUS_FH0_OST_ON				1u

	/* 0x74:  */
	uint32_t volatile GEN1_STMP_CFG;
	/*  */
#define PWM0_GEN1_STMP_CFG_GEN1_A_UPMETHOD_Msb			0u
#define PWM0_GEN1_STMP_CFG_GEN1_A_UPMETHOD_Lsb			3u
	/*  */
#define PWM0_GEN1_STMP_CFG_GEN1_B_UPMETHOD_Msb			4u
#define PWM0_GEN1_STMP_CFG_GEN1_B_UPMETHOD_Lsb			7u
	/*  */
#define PWM0_GEN1_STMP_CFG_GEN1_A_SHDW_FULL			8u
	/*  */
#define PWM0_GEN1_STMP_CFG_GEN1_B_SHDW_FULL			9u

	/* 0x78:  */
	uint32_t volatile GEN1_TSTMP_A;
	/*  */
#define PWM0_GEN1_TSTMP_A_GEN1_A_Msb				0u
#define PWM0_GEN1_TSTMP_A_GEN1_A_Lsb				15u

	/* 0x7C:  */
	uint32_t volatile GEN1_TSTMP_B;
	/*  */
#define PWM0_GEN1_TSTMP_B_GEN1_B_Msb				0u
#define PWM0_GEN1_TSTMP_B_GEN1_B_Lsb				15u

	/* 0x80:  */
	uint32_t volatile GEN1_CFG0;
	/*  */
#define PWM0_GEN1_CFG0_GEN1_CFG_UPMETHOD_Msb			0u
#define PWM0_GEN1_CFG0_GEN1_CFG_UPMETHOD_Lsb			3u
	/*  */
#define PWM0_GEN1_CFG0_GEN1_T0_SEL_Msb				4u
#define PWM0_GEN1_CFG0_GEN1_T0_SEL_Lsb				6u
	/*  */
#define PWM0_GEN1_CFG0_GEN1_T1_SEL_Msb				7u
#define PWM0_GEN1_CFG0_GEN1_T1_SEL_Lsb				9u

	/* 0x84:  */
	uint32_t volatile GEN1_FORCE;
	/*  */
#define PWM0_GEN1_FORCE_GEN1_CNTUFORCE_UPMETHOD_Msb		0u
#define PWM0_GEN1_FORCE_GEN1_CNTUFORCE_UPMETHOD_Lsb		5u
	/*  */
#define PWM0_GEN1_FORCE_GEN1_A_CNTUFORCE_MODE_Msb		6u
#define PWM0_GEN1_FORCE_GEN1_A_CNTUFORCE_MODE_Lsb		7u
	/*  */
#define PWM0_GEN1_FORCE_GEN1_B_CNTUFORCE_MODE_Msb		8u
#define PWM0_GEN1_FORCE_GEN1_B_CNTUFORCE_MODE_Lsb		9u
	/*  */
#define PWM0_GEN1_FORCE_GEN1_A_NCIFORCE				10u
	/*  */
#define PWM0_GEN1_FORCE_GEN1_A_NCIFORCE_MODE_Msb		11u
#define PWM0_GEN1_FORCE_GEN1_A_NCIFORCE_MODE_Lsb		12u
	/*  */
#define PWM0_GEN1_FORCE_GEN1_B_NCIFORCE				13u
	/*  */
#define PWM0_GEN1_FORCE_GEN1_B_NCIFORCE_MODE_Msb		14u
#define PWM0_GEN1_FORCE_GEN1_B_NCIFORCE_MODE_Lsb		15u

	/* 0x88:  */
	uint32_t volatile GEN1_A;
	/*  */
#define PWM0_GEN1_A_UTEZ_Msb					0u
#define PWM0_GEN1_A_UTEZ_Lsb					1u
	/*  */
#define PWM0_GEN1_A_UTEP_Msb					2u
#define PWM0_GEN1_A_UTEP_Lsb					3u
	/*  */
#define PWM0_GEN1_A_UTEA_Msb					4u
#define PWM0_GEN1_A_UTEA_Lsb					5u
	/*  */
#define PWM0_GEN1_A_UTEB_Msb					6u
#define PWM0_GEN1_A_UTEB_Lsb					7u
	/*  */
#define PWM0_GEN1_A_UT0_Msb					8u
#define PWM0_GEN1_A_UT0_Lsb					9u
	/*  */
#define PWM0_GEN1_A_UT1_Msb					10u
#define PWM0_GEN1_A_UT1_Lsb					11u
	/*  */
#define PWM0_GEN1_A_DTEZ_Msb					12u
#define PWM0_GEN1_A_DTEZ_Lsb					13u
	/*  */
#define PWM0_GEN1_A_DTEP_Msb					14u
#define PWM0_GEN1_A_DTEP_Lsb					15u
	/*  */
#define PWM0_GEN1_A_DTEA_Msb					16u
#define PWM0_GEN1_A_DTEA_Lsb					17u
	/*  */
#define PWM0_GEN1_A_DTEB_Msb					18u
#define PWM0_GEN1_A_DTEB_Lsb					19u
	/*  */
#define PWM0_GEN1_A_DT0_Msb					20u
#define PWM0_GEN1_A_DT0_Lsb					21u
	/*  */
#define PWM0_GEN1_A_DT1_Msb					22u
#define PWM0_GEN1_A_DT1_Lsb					23u

	/* 0x8C:  */
	uint32_t volatile GEN1_B;
	/*  */
#define PWM0_GEN1_B_UTEZ_Msb					0u
#define PWM0_GEN1_B_UTEZ_Lsb					1u
	/*  */
#define PWM0_GEN1_B_UTEP_Msb					2u
#define PWM0_GEN1_B_UTEP_Lsb					3u
	/*  */
#define PWM0_GEN1_B_UTEA_Msb					4u
#define PWM0_GEN1_B_UTEA_Lsb					5u
	/*  */
#define PWM0_GEN1_B_UTEB_Msb					6u
#define PWM0_GEN1_B_UTEB_Lsb					7u
	/*  */
#define PWM0_GEN1_B_UT0_Msb					8u
#define PWM0_GEN1_B_UT0_Lsb					9u
	/*  */
#define PWM0_GEN1_B_UT1_Msb					10u
#define PWM0_GEN1_B_UT1_Lsb					11u
	/*  */
#define PWM0_GEN1_B_DTEZ_Msb					12u
#define PWM0_GEN1_B_DTEZ_Lsb					13u
	/*  */
#define PWM0_GEN1_B_DTEP_Msb					14u
#define PWM0_GEN1_B_DTEP_Lsb					15u
	/*  */
#define PWM0_GEN1_B_DTEA_Msb					16u
#define PWM0_GEN1_B_DTEA_Lsb					17u
	/*  */
#define PWM0_GEN1_B_DTEB_Msb					18u
#define PWM0_GEN1_B_DTEB_Lsb					19u
	/*  */
#define PWM0_GEN1_B_DT0_Msb					20u
#define PWM0_GEN1_B_DT0_Lsb					21u
	/*  */
#define PWM0_GEN1_B_DT1_Msb					22u
#define PWM0_GEN1_B_DT1_Lsb					23u

	/* 0x90:  */
	uint32_t volatile DT1_CFG;
	/*  */
#define PWM0_DT1_CFG_DT1_FED_UPMETHOD_Msb			0u
#define PWM0_DT1_CFG_DT1_FED_UPMETHOD_Lsb			3u
	/*  */
#define PWM0_DT1_CFG_DT1_RED_UPMETHOD_Msb			4u
#define PWM0_DT1_CFG_DT1_RED_UPMETHOD_Lsb			7u
	/*  */
#define PWM0_DT1_CFG_DT1_DEB_MODE				8u
	/*  */
#define PWM0_DT1_CFG_DT1_A_OUTSWAP				9u
	/*  */
#define PWM0_DT1_CFG_DT1_B_OUTSWAP				10u
	/*  */
#define PWM0_DT1_CFG_DT1_RED_INSEL				11u
	/*  */
#define PWM0_DT1_CFG_DT1_FED_INSEL				12u
	/*  */
#define PWM0_DT1_CFG_DT1_RED_OUTINVERT				13u
	/*  */
#define PWM0_DT1_CFG_DT1_FED_OUTINVERT				14u
	/*  */
#define PWM0_DT1_CFG_DT1_A_OUTBYPASS				15u
	/*  */
#define PWM0_DT1_CFG_DT1_B_OUTBYPASS				16u
	/*  */
#define PWM0_DT1_CFG_DT1_CLK_SEL				17u

	/* 0x94:  */
	uint32_t volatile DT1_FED_CFG;
	/*  */
#define PWM0_DT1_FED_CFG_DT1_FED_Msb				0u
#define PWM0_DT1_FED_CFG_DT1_FED_Lsb				15u

	/* 0x98:  */
	uint32_t volatile DT1_RED_CFG;
	/*  */
#define PWM0_DT1_RED_CFG_DT1_RED_Msb				0u
#define PWM0_DT1_RED_CFG_DT1_RED_Lsb				15u

	/* 0x9C:  */
	uint32_t volatile CARRIER1_CFG;
	/*  */
#define PWM0_CARRIER1_CFG_CARRIER1_EN				0u
	/*  */
#define PWM0_CARRIER1_CFG_CARRIER1_PRESCALE_Msb			1u
#define PWM0_CARRIER1_CFG_CARRIER1_PRESCALE_Lsb			4u
	/*  */
#define PWM0_CARRIER1_CFG_CARRIER1_DUTY_Msb			5u
#define PWM0_CARRIER1_CFG_CARRIER1_DUTY_Lsb			7u
	/*  */
#define PWM0_CARRIER1_CFG_CARRIER1_OSHTWTH_Msb			8u
#define PWM0_CARRIER1_CFG_CARRIER1_OSHTWTH_Lsb			11u
	/*  */
#define PWM0_CARRIER1_CFG_CARRIER1_OUT_INVERT			12u
	/*  */
#define PWM0_CARRIER1_CFG_CARRIER1_IN_INVERT			13u

	/* 0xA0:  */
	uint32_t volatile FH1_CFG0;
	/*  */
#define PWM0_FH1_CFG0_FH1_SW_CBC				0u
	/*  */
#define PWM0_FH1_CFG0_FH1_F2_CBC				1u
	/*  */
#define PWM0_FH1_CFG0_FH1_F1_CBC				2u
	/*  */
#define PWM0_FH1_CFG0_FH1_F0_CBC				3u
	/*  */
#define PWM0_FH1_CFG0_FH1_SW_OST				4u
	/*  */
#define PWM0_FH1_CFG0_FH1_F2_OST				5u
	/*  */
#define PWM0_FH1_CFG0_FH1_F1_OST				6u
	/*  */
#define PWM0_FH1_CFG0_FH1_F0_OST				7u
	/*  */
#define PWM0_FH1_CFG0_FH1_A_CBC_D_Msb				8u
#define PWM0_FH1_CFG0_FH1_A_CBC_D_Lsb				9u
	/*  */
#define PWM0_FH1_CFG0_FH1_A_CBC_U_Msb				10u
#define PWM0_FH1_CFG0_FH1_A_CBC_U_Lsb				11u
	/*  */
#define PWM0_FH1_CFG0_FH1_A_OST_D_Msb				12u
#define PWM0_FH1_CFG0_FH1_A_OST_D_Lsb				13u
	/*  */
#define PWM0_FH1_CFG0_FH1_A_OST_U_Msb				14u
#define PWM0_FH1_CFG0_FH1_A_OST_U_Lsb				15u
	/*  */
#define PWM0_FH1_CFG0_FH1_B_CBC_D_Msb				16u
#define PWM0_FH1_CFG0_FH1_B_CBC_D_Lsb				17u
	/*  */
#define PWM0_FH1_CFG0_FH1_B_CBC_U_Msb				18u
#define PWM0_FH1_CFG0_FH1_B_CBC_U_Lsb				19u
	/*  */
#define PWM0_FH1_CFG0_FH1_B_OST_D_Msb				20u
#define PWM0_FH1_CFG0_FH1_B_OST_D_Lsb				21u
	/*  */
#define PWM0_FH1_CFG0_FH1_B_OST_U_Msb				22u
#define PWM0_FH1_CFG0_FH1_B_OST_U_Lsb				23u

	/* 0xA4:  */
	uint32_t volatile FH1_CFG1;
	/*  */
#define PWM0_FH1_CFG1_FH1_CLR_OST				0u
	/*  */
#define PWM0_FH1_CFG1_FH1_CBCPULSE_Msb				1u
#define PWM0_FH1_CFG1_FH1_CBCPULSE_Lsb				2u
	/*  */
#define PWM0_FH1_CFG1_FH1_FORCE_CBC				3u
	/*  */
#define PWM0_FH1_CFG1_FH1_FORCE_OST				4u

	/* 0xA8:  */
	uint32_t volatile FH1_STATUS;
	/*  */
#define PWM0_FH1_STATUS_FH1_CBC_ON				0u
	/*  */
#define PWM0_FH1_STATUS_FH1_OST_ON				1u

	/* 0xAC:  */
	uint32_t volatile GEN2_STMP_CFG;
	/*  */
#define PWM0_GEN2_STMP_CFG_GEN2_A_UPMETHOD_Msb			0u
#define PWM0_GEN2_STMP_CFG_GEN2_A_UPMETHOD_Lsb			3u
	/*  */
#define PWM0_GEN2_STMP_CFG_GEN2_B_UPMETHOD_Msb			4u
#define PWM0_GEN2_STMP_CFG_GEN2_B_UPMETHOD_Lsb			7u
	/*  */
#define PWM0_GEN2_STMP_CFG_GEN2_A_SHDW_FULL			8u
	/*  */
#define PWM0_GEN2_STMP_CFG_GEN2_B_SHDW_FULL			9u

	/* 0xB0:  */
	uint32_t volatile GEN2_TSTMP_A;
	/*  */
#define PWM0_GEN2_TSTMP_A_GEN2_A_Msb				0u
#define PWM0_GEN2_TSTMP_A_GEN2_A_Lsb				15u

	/* 0xB4:  */
	uint32_t volatile GEN2_TSTMP_B;
	/*  */
#define PWM0_GEN2_TSTMP_B_GEN2_B_Msb				0u
#define PWM0_GEN2_TSTMP_B_GEN2_B_Lsb				15u

	/* 0xB8:  */
	uint32_t volatile GEN2_CFG0;
	/*  */
#define PWM0_GEN2_CFG0_GEN2_CFG_UPMETHOD_Msb			0u
#define PWM0_GEN2_CFG0_GEN2_CFG_UPMETHOD_Lsb			3u
	/*  */
#define PWM0_GEN2_CFG0_GEN2_T0_SEL_Msb				4u
#define PWM0_GEN2_CFG0_GEN2_T0_SEL_Lsb				6u
	/*  */
#define PWM0_GEN2_CFG0_GEN2_T1_SEL_Msb				7u
#define PWM0_GEN2_CFG0_GEN2_T1_SEL_Lsb				9u

	/* 0xBC:  */
	uint32_t volatile GEN2_FORCE;
	/*  */
#define PWM0_GEN2_FORCE_GEN2_CNTUFORCE_UPMETHOD_Msb		0u
#define PWM0_GEN2_FORCE_GEN2_CNTUFORCE_UPMETHOD_Lsb		5u
	/*  */
#define PWM0_GEN2_FORCE_GEN2_A_CNTUFORCE_MODE_Msb		6u
#define PWM0_GEN2_FORCE_GEN2_A_CNTUFORCE_MODE_Lsb		7u
	/*  */
#define PWM0_GEN2_FORCE_GEN2_B_CNTUFORCE_MODE_Msb		8u
#define PWM0_GEN2_FORCE_GEN2_B_CNTUFORCE_MODE_Lsb		9u
	/*  */
#define PWM0_GEN2_FORCE_GEN2_A_NCIFORCE				10u
	/*  */
#define PWM0_GEN2_FORCE_GEN2_A_NCIFORCE_MODE_Msb		11u
#define PWM0_GEN2_FORCE_GEN2_A_NCIFORCE_MODE_Lsb		12u
	/*  */
#define PWM0_GEN2_FORCE_GEN2_B_NCIFORCE				13u
	/*  */
#define PWM0_GEN2_FORCE_GEN2_B_NCIFORCE_MODE_Msb		14u
#define PWM0_GEN2_FORCE_GEN2_B_NCIFORCE_MODE_Lsb		15u

	/* 0xC0:  */
	uint32_t volatile GEN2_A;
	/*  */
#define PWM0_GEN2_A_UTEZ_Msb					0u
#define PWM0_GEN2_A_UTEZ_Lsb					1u
	/*  */
#define PWM0_GEN2_A_UTEP_Msb					2u
#define PWM0_GEN2_A_UTEP_Lsb					3u
	/*  */
#define PWM0_GEN2_A_UTEA_Msb					4u
#define PWM0_GEN2_A_UTEA_Lsb					5u
	/*  */
#define PWM0_GEN2_A_UTEB_Msb					6u
#define PWM0_GEN2_A_UTEB_Lsb					7u
	/*  */
#define PWM0_GEN2_A_UT0_Msb					8u
#define PWM0_GEN2_A_UT0_Lsb					9u
	/*  */
#define PWM0_GEN2_A_UT1_Msb					10u
#define PWM0_GEN2_A_UT1_Lsb					11u
	/*  */
#define PWM0_GEN2_A_DTEZ_Msb					12u
#define PWM0_GEN2_A_DTEZ_Lsb					13u
	/*  */
#define PWM0_GEN2_A_DTEP_Msb					14u
#define PWM0_GEN2_A_DTEP_Lsb					15u
	/*  */
#define PWM0_GEN2_A_DTEA_Msb					16u
#define PWM0_GEN2_A_DTEA_Lsb					17u
	/*  */
#define PWM0_GEN2_A_DTEB_Msb					18u
#define PWM0_GEN2_A_DTEB_Lsb					19u
	/*  */
#define PWM0_GEN2_A_DT0_Msb					20u
#define PWM0_GEN2_A_DT0_Lsb					21u
	/*  */
#define PWM0_GEN2_A_DT1_Msb					22u
#define PWM0_GEN2_A_DT1_Lsb					23u

	/* 0xC4:  */
	uint32_t volatile GEN2_B;
	/*  */
#define PWM0_GEN2_B_UTEZ_Msb					0u
#define PWM0_GEN2_B_UTEZ_Lsb					1u
	/*  */
#define PWM0_GEN2_B_UTEP_Msb					2u
#define PWM0_GEN2_B_UTEP_Lsb					3u
	/*  */
#define PWM0_GEN2_B_UTEA_Msb					4u
#define PWM0_GEN2_B_UTEA_Lsb					5u
	/*  */
#define PWM0_GEN2_B_UTEB_Msb					6u
#define PWM0_GEN2_B_UTEB_Lsb					7u
	/*  */
#define PWM0_GEN2_B_UT0_Msb					8u
#define PWM0_GEN2_B_UT0_Lsb					9u
	/*  */
#define PWM0_GEN2_B_UT1_Msb					10u
#define PWM0_GEN2_B_UT1_Lsb					11u
	/*  */
#define PWM0_GEN2_B_DTEZ_Msb					12u
#define PWM0_GEN2_B_DTEZ_Lsb					13u
	/*  */
#define PWM0_GEN2_B_DTEP_Msb					14u
#define PWM0_GEN2_B_DTEP_Lsb					15u
	/*  */
#define PWM0_GEN2_B_DTEA_Msb					16u
#define PWM0_GEN2_B_DTEA_Lsb					17u
	/*  */
#define PWM0_GEN2_B_DTEB_Msb					18u
#define PWM0_GEN2_B_DTEB_Lsb					19u
	/*  */
#define PWM0_GEN2_B_DT0_Msb					20u
#define PWM0_GEN2_B_DT0_Lsb					21u
	/*  */
#define PWM0_GEN2_B_DT1_Msb					22u
#define PWM0_GEN2_B_DT1_Lsb					23u

	/* 0xC8:  */
	uint32_t volatile DT2_CFG;
	/*  */
#define PWM0_DT2_CFG_DT2_FED_UPMETHOD_Msb			0u
#define PWM0_DT2_CFG_DT2_FED_UPMETHOD_Lsb			3u
	/*  */
#define PWM0_DT2_CFG_DT2_RED_UPMETHOD_Msb			4u
#define PWM0_DT2_CFG_DT2_RED_UPMETHOD_Lsb			7u
	/*  */
#define PWM0_DT2_CFG_DT2_DEB_MODE				8u
	/*  */
#define PWM0_DT2_CFG_DT2_A_OUTSWAP				9u
	/*  */
#define PWM0_DT2_CFG_DT2_B_OUTSWAP				10u
	/*  */
#define PWM0_DT2_CFG_DT2_RED_INSEL				11u
	/*  */
#define PWM0_DT2_CFG_DT2_FED_INSEL				12u
	/*  */
#define PWM0_DT2_CFG_DT2_RED_OUTINVERT				13u
	/*  */
#define PWM0_DT2_CFG_DT2_FED_OUTINVERT				14u
	/*  */
#define PWM0_DT2_CFG_DT2_A_OUTBYPASS				15u
	/*  */
#define PWM0_DT2_CFG_DT2_B_OUTBYPASS				16u
	/*  */
#define PWM0_DT2_CFG_DT2_CLK_SEL				17u

	/* 0xCC:  */
	uint32_t volatile DT2_FED_CFG;
	/*  */
#define PWM0_DT2_FED_CFG_DT2_FED_Msb				0u
#define PWM0_DT2_FED_CFG_DT2_FED_Lsb				15u

	/* 0xD0:  */
	uint32_t volatile DT2_RED_CFG;
	/*  */
#define PWM0_DT2_RED_CFG_DT2_RED_Msb				0u
#define PWM0_DT2_RED_CFG_DT2_RED_Lsb				15u

	/* 0xD4:  */
	uint32_t volatile CARRIER2_CFG;
	/*  */
#define PWM0_CARRIER2_CFG_CARRIER2_EN				0u
	/*  */
#define PWM0_CARRIER2_CFG_CARRIER2_PRESCALE_Msb			1u
#define PWM0_CARRIER2_CFG_CARRIER2_PRESCALE_Lsb			4u
	/*  */
#define PWM0_CARRIER2_CFG_CARRIER2_DUTY_Msb			5u
#define PWM0_CARRIER2_CFG_CARRIER2_DUTY_Lsb			7u
	/*  */
#define PWM0_CARRIER2_CFG_CARRIER2_OSHTWTH_Msb			8u
#define PWM0_CARRIER2_CFG_CARRIER2_OSHTWTH_Lsb			11u
	/*  */
#define PWM0_CARRIER2_CFG_CARRIER2_OUT_INVERT			12u
	/*  */
#define PWM0_CARRIER2_CFG_CARRIER2_IN_INVERT			13u

	/* 0xD8:  */
	uint32_t volatile FH2_CFG0;
	/*  */
#define PWM0_FH2_CFG0_FH2_SW_CBC				0u
	/*  */
#define PWM0_FH2_CFG0_FH2_F2_CBC				1u
	/*  */
#define PWM0_FH2_CFG0_FH2_F1_CBC				2u
	/*  */
#define PWM0_FH2_CFG0_FH2_F0_CBC				3u
	/*  */
#define PWM0_FH2_CFG0_FH2_SW_OST				4u
	/*  */
#define PWM0_FH2_CFG0_FH2_F2_OST				5u
	/*  */
#define PWM0_FH2_CFG0_FH2_F1_OST				6u
	/*  */
#define PWM0_FH2_CFG0_FH2_F0_OST				7u
	/*  */
#define PWM0_FH2_CFG0_FH2_A_CBC_D_Msb				8u
#define PWM0_FH2_CFG0_FH2_A_CBC_D_Lsb				9u
	/*  */
#define PWM0_FH2_CFG0_FH2_A_CBC_U_Msb				10u
#define PWM0_FH2_CFG0_FH2_A_CBC_U_Lsb				11u
	/*  */
#define PWM0_FH2_CFG0_FH2_A_OST_D_Msb				12u
#define PWM0_FH2_CFG0_FH2_A_OST_D_Lsb				13u
	/*  */
#define PWM0_FH2_CFG0_FH2_A_OST_U_Msb				14u
#define PWM0_FH2_CFG0_FH2_A_OST_U_Lsb				15u
	/*  */
#define PWM0_FH2_CFG0_FH2_B_CBC_D_Msb				16u
#define PWM0_FH2_CFG0_FH2_B_CBC_D_Lsb				17u
	/*  */
#define PWM0_FH2_CFG0_FH2_B_CBC_U_Msb				18u
#define PWM0_FH2_CFG0_FH2_B_CBC_U_Lsb				19u
	/*  */
#define PWM0_FH2_CFG0_FH2_B_OST_D_Msb				20u
#define PWM0_FH2_CFG0_FH2_B_OST_D_Lsb				21u
	/*  */
#define PWM0_FH2_CFG0_FH2_B_OST_U_Msb				22u
#define PWM0_FH2_CFG0_FH2_B_OST_U_Lsb				23u

	/* 0xDC:  */
	uint32_t volatile FH2_CFG1;
	/*  */
#define PWM0_FH2_CFG1_FH2_CLR_OST				0u
	/*  */
#define PWM0_FH2_CFG1_FH2_CBCPULSE_Msb				1u
#define PWM0_FH2_CFG1_FH2_CBCPULSE_Lsb				2u
	/*  */
#define PWM0_FH2_CFG1_FH2_FORCE_CBC				3u
	/*  */
#define PWM0_FH2_CFG1_FH2_FORCE_OST				4u

	/* 0xE0:  */
	uint32_t volatile FH2_STATUS;
	/*  */
#define PWM0_FH2_STATUS_FH2_CBC_ON				0u
	/*  */
#define PWM0_FH2_STATUS_FH2_OST_ON				1u

	/* 0xE4:  */
	uint32_t volatile FAULT_DETECT;
	/*  */
#define PWM0_FAULT_DETECT_F0_EN					0u
	/*  */
#define PWM0_FAULT_DETECT_F1_EN					1u
	/*  */
#define PWM0_FAULT_DETECT_F2_EN					2u
	/*  */
#define PWM0_FAULT_DETECT_F0_POLE				3u
	/*  */
#define PWM0_FAULT_DETECT_F1_POLE				4u
	/*  */
#define PWM0_FAULT_DETECT_F2_POLE				5u
	/*  */
#define PWM0_FAULT_DETECT_EVENT_F0				6u
	/*  */
#define PWM0_FAULT_DETECT_EVENT_F1				7u
	/*  */
#define PWM0_FAULT_DETECT_EVENT_F2				8u

	/* 0xE8:  */
	uint32_t volatile CAP_TIMER_CFG;
	/*  */
#define PWM0_CAP_TIMER_CFG_CAP_TIMER_EN				0u
	/*  */
#define PWM0_CAP_TIMER_CFG_CAP_SYNCI_EN				1u
	/*  */
#define PWM0_CAP_TIMER_CFG_CAP_SYNCI_SEL_Msb			2u
#define PWM0_CAP_TIMER_CFG_CAP_SYNCI_SEL_Lsb			4u
	/*  */
#define PWM0_CAP_TIMER_CFG_CAP_SYNC_SW				5u

	/* 0xEC:  */
	uint32_t volatile CAP_TIMER_PHASE;
	/*  */
#define PWM0_CAP_TIMER_PHASE_CAP_TIMER_PHASE_Msb		0u
#define PWM0_CAP_TIMER_PHASE_CAP_TIMER_PHASE_Lsb		31u

	/* 0xF0:  */
	uint32_t volatile CAP_CH0_CFG;
	/*  */
#define PWM0_CAP_CH0_CFG_CAP0_EN				0u
	/*  */
#define PWM0_CAP_CH0_CFG_CAP0_MODE_Msb				1u
#define PWM0_CAP_CH0_CFG_CAP0_MODE_Lsb				2u
	/*  */
#define PWM0_CAP_CH0_CFG_CAP0_PRESCALE_Msb			3u
#define PWM0_CAP_CH0_CFG_CAP0_PRESCALE_Lsb			10u
	/*  */
#define PWM0_CAP_CH0_CFG_CAP0_IN_INVERT				11u
	/*  */
#define PWM0_CAP_CH0_CFG_CAP0_SW				12u

	/* 0xF4:  */
	uint32_t volatile CAP_CH1_CFG;
	/*  */
#define PWM0_CAP_CH1_CFG_CAP1_EN				0u
	/*  */
#define PWM0_CAP_CH1_CFG_CAP1_MODE_Msb				1u
#define PWM0_CAP_CH1_CFG_CAP1_MODE_Lsb				2u
	/*  */
#define PWM0_CAP_CH1_CFG_CAP1_PRESCALE_Msb			3u
#define PWM0_CAP_CH1_CFG_CAP1_PRESCALE_Lsb			10u
	/*  */
#define PWM0_CAP_CH1_CFG_CAP1_IN_INVERT				11u
	/*  */
#define PWM0_CAP_CH1_CFG_CAP1_SW				12u

	/* 0xF8:  */
	uint32_t volatile CAP_CH2_CFG;
	/*  */
#define PWM0_CAP_CH2_CFG_CAP2_EN				0u
	/*  */
#define PWM0_CAP_CH2_CFG_CAP2_MODE_Msb				1u
#define PWM0_CAP_CH2_CFG_CAP2_MODE_Lsb				2u
	/*  */
#define PWM0_CAP_CH2_CFG_CAP2_PRESCALE_Msb			3u
#define PWM0_CAP_CH2_CFG_CAP2_PRESCALE_Lsb			10u
	/*  */
#define PWM0_CAP_CH2_CFG_CAP2_IN_INVERT				11u
	/*  */
#define PWM0_CAP_CH2_CFG_CAP2_SW				12u

	/* 0xFC:  */
	uint32_t volatile CAP_CH0;
	/*  */
#define PWM0_CAP_CH0_CAP0_VALUE_Msb				0u
#define PWM0_CAP_CH0_CAP0_VALUE_Lsb				31u

	/* 0x100:  */
	uint32_t volatile CAP_CH1;
	/*  */
#define PWM0_CAP_CH1_CAP1_VALUE_Msb				0u
#define PWM0_CAP_CH1_CAP1_VALUE_Lsb				31u

	/* 0x104:  */
	uint32_t volatile CAP_CH2;
	/*  */
#define PWM0_CAP_CH2_CAP2_VALUE_Msb				0u
#define PWM0_CAP_CH2_CAP2_VALUE_Lsb				31u

	/* 0x108:  */
	uint32_t volatile CAP_STATUS;
	/*  */
#define PWM0_CAP_STATUS_CAP0_EDGE				0u
	/*  */
#define PWM0_CAP_STATUS_CAP1_EDGE				1u
	/*  */
#define PWM0_CAP_STATUS_CAP2_EDGE				2u

	/* 0x10C:  */
	uint32_t volatile UPDATE_CFG;
	/*  */
#define PWM0_UPDATE_CFG_GLOBAL_UP_EN				0u
	/*  */
#define PWM0_UPDATE_CFG_GLOBAL_FORCE_UP				1u
	/*  */
#define PWM0_UPDATE_CFG_OP0_UP_EN				2u
	/*  */
#define PWM0_UPDATE_CFG_OP0_FORCE_UP				3u
	/*  */
#define PWM0_UPDATE_CFG_OP1_UP_EN				4u
	/*  */
#define PWM0_UPDATE_CFG_OP1_FORCE_UP				5u
	/*  */
#define PWM0_UPDATE_CFG_OP2_UP_EN				6u
	/*  */
#define PWM0_UPDATE_CFG_OP2_FORCE_UP				7u

	/* 0x110:  */
	uint32_t volatile INT_ENA;
	/*  */
#define PWM0_INT_ENA_TIMER0_STOP_INT_ENA			0u
	/*  */
#define PWM0_INT_ENA_TIMER1_STOP_INT_ENA			1u
	/*  */
#define PWM0_INT_ENA_TIMER2_STOP_INT_ENA			2u
	/*  */
#define PWM0_INT_ENA_TIMER0_TEZ_INT_ENA				3u
	/*  */
#define PWM0_INT_ENA_TIMER1_TEZ_INT_ENA				4u
	/*  */
#define PWM0_INT_ENA_TIMER2_TEZ_INT_ENA				5u
	/*  */
#define PWM0_INT_ENA_TIMER0_TEP_INT_ENA				6u
	/*  */
#define PWM0_INT_ENA_TIMER1_TEP_INT_ENA				7u
	/*  */
#define PWM0_INT_ENA_TIMER2_TEP_INT_ENA				8u
	/*  */
#define PWM0_INT_ENA_FAULT0_INT_ENA				9u
	/*  */
#define PWM0_INT_ENA_FAULT1_INT_ENA				10u
	/*  */
#define PWM0_INT_ENA_FAULT2_INT_ENA				11u
	/*  */
#define PWM0_INT_ENA_FAULT0_CLR_INT_ENA				12u
	/*  */
#define PWM0_INT_ENA_FAULT1_CLR_INT_ENA				13u
	/*  */
#define PWM0_INT_ENA_FAULT2_CLR_INT_ENA				14u
	/*  */
#define PWM0_INT_ENA_OP0_TEA_INT_ENA				15u
	/*  */
#define PWM0_INT_ENA_OP1_TEA_INT_ENA				16u
	/*  */
#define PWM0_INT_ENA_OP2_TEA_INT_ENA				17u
	/*  */
#define PWM0_INT_ENA_OP0_TEB_INT_ENA				18u
	/*  */
#define PWM0_INT_ENA_OP1_TEB_INT_ENA				19u
	/*  */
#define PWM0_INT_ENA_OP2_TEB_INT_ENA				20u
	/*  */
#define PWM0_INT_ENA_FH0_CBC_INT_ENA				21u
	/*  */
#define PWM0_INT_ENA_FH1_CBC_INT_ENA				22u
	/*  */
#define PWM0_INT_ENA_FH2_CBC_INT_ENA				23u
	/*  */
#define PWM0_INT_ENA_FH0_OST_INT_ENA				24u
	/*  */
#define PWM0_INT_ENA_FH1_OST_INT_ENA				25u
	/*  */
#define PWM0_INT_ENA_FH2_OST_INT_ENA				26u
	/*  */
#define PWM0_INT_ENA_CAP0_INT_ENA				27u
	/*  */
#define PWM0_INT_ENA_CAP1_INT_ENA				28u
	/*  */
#define PWM0_INT_ENA_CAP2_INT_ENA				29u

	/* 0x114:  */
	uint32_t volatile INT_RAW;
	/*  */
#define PWM0_INT_RAW_TIMER0_STOP_INT_RAW			0u
	/*  */
#define PWM0_INT_RAW_TIMER1_STOP_INT_RAW			1u
	/*  */
#define PWM0_INT_RAW_TIMER2_STOP_INT_RAW			2u
	/*  */
#define PWM0_INT_RAW_TIMER0_TEZ_INT_RAW				3u
	/*  */
#define PWM0_INT_RAW_TIMER1_TEZ_INT_RAW				4u
	/*  */
#define PWM0_INT_RAW_TIMER2_TEZ_INT_RAW				5u
	/*  */
#define PWM0_INT_RAW_TIMER0_TEP_INT_RAW				6u
	/*  */
#define PWM0_INT_RAW_TIMER1_TEP_INT_RAW				7u
	/*  */
#define PWM0_INT_RAW_TIMER2_TEP_INT_RAW				8u
	/*  */
#define PWM0_INT_RAW_FAULT0_INT_RAW				9u
	/*  */
#define PWM0_INT_RAW_FAULT1_INT_RAW				10u
	/*  */
#define PWM0_INT_RAW_FAULT2_INT_RAW				11u
	/*  */
#define PWM0_INT_RAW_FAULT0_CLR_INT_RAW				12u
	/*  */
#define PWM0_INT_RAW_FAULT1_CLR_INT_RAW				13u
	/*  */
#define PWM0_INT_RAW_FAULT2_CLR_INT_RAW				14u
	/*  */
#define PWM0_INT_RAW_OP0_TEA_INT_RAW				15u
	/*  */
#define PWM0_INT_RAW_OP1_TEA_INT_RAW				16u
	/*  */
#define PWM0_INT_RAW_OP2_TEA_INT_RAW				17u
	/*  */
#define PWM0_INT_RAW_OP0_TEB_INT_RAW				18u
	/*  */
#define PWM0_INT_RAW_OP1_TEB_INT_RAW				19u
	/*  */
#define PWM0_INT_RAW_OP2_TEB_INT_RAW				20u
	/*  */
#define PWM0_INT_RAW_FH0_CBC_INT_RAW				21u
	/*  */
#define PWM0_INT_RAW_FH1_CBC_INT_RAW				22u
	/*  */
#define PWM0_INT_RAW_FH2_CBC_INT_RAW				23u
	/*  */
#define PWM0_INT_RAW_FH0_OST_INT_RAW				24u
	/*  */
#define PWM0_INT_RAW_FH1_OST_INT_RAW				25u
	/*  */
#define PWM0_INT_RAW_FH2_OST_INT_RAW				26u
	/*  */
#define PWM0_INT_RAW_CAP0_INT_RAW				27u
	/*  */
#define PWM0_INT_RAW_CAP1_INT_RAW				28u
	/*  */
#define PWM0_INT_RAW_CAP2_INT_RAW				29u

	/* 0x118:  */
	uint32_t volatile INT_ST;
	/*  */
#define PWM0_INT_ST_TIMER0_STOP_INT_ST				0u
	/*  */
#define PWM0_INT_ST_TIMER1_STOP_INT_ST				1u
	/*  */
#define PWM0_INT_ST_TIMER2_STOP_INT_ST				2u
	/*  */
#define PWM0_INT_ST_TIMER0_TEZ_INT_ST				3u
	/*  */
#define PWM0_INT_ST_TIMER1_TEZ_INT_ST				4u
	/*  */
#define PWM0_INT_ST_TIMER2_TEZ_INT_ST				5u
	/*  */
#define PWM0_INT_ST_TIMER0_TEP_INT_ST				6u
	/*  */
#define PWM0_INT_ST_TIMER1_TEP_INT_ST				7u
	/*  */
#define PWM0_INT_ST_TIMER2_TEP_INT_ST				8u
	/*  */
#define PWM0_INT_ST_FAULT0_INT_ST				9u
	/*  */
#define PWM0_INT_ST_FAULT1_INT_ST				10u
	/*  */
#define PWM0_INT_ST_FAULT2_INT_ST				11u
	/*  */
#define PWM0_INT_ST_FAULT0_CLR_INT_ST				12u
	/*  */
#define PWM0_INT_ST_FAULT1_CLR_INT_ST				13u
	/*  */
#define PWM0_INT_ST_FAULT2_CLR_INT_ST				14u
	/*  */
#define PWM0_INT_ST_OP0_TEA_INT_ST				15u
	/*  */
#define PWM0_INT_ST_OP1_TEA_INT_ST				16u
	/*  */
#define PWM0_INT_ST_OP2_TEA_INT_ST				17u
	/*  */
#define PWM0_INT_ST_OP0_TEB_INT_ST				18u
	/*  */
#define PWM0_INT_ST_OP1_TEB_INT_ST				19u
	/*  */
#define PWM0_INT_ST_OP2_TEB_INT_ST				20u
	/*  */
#define PWM0_INT_ST_FH0_CBC_INT_ST				21u
	/*  */
#define PWM0_INT_ST_FH1_CBC_INT_ST				22u
	/*  */
#define PWM0_INT_ST_FH2_CBC_INT_ST				23u
	/*  */
#define PWM0_INT_ST_FH0_OST_INT_ST				24u
	/*  */
#define PWM0_INT_ST_FH1_OST_INT_ST				25u
	/*  */
#define PWM0_INT_ST_FH2_OST_INT_ST				26u
	/*  */
#define PWM0_INT_ST_CAP0_INT_ST					27u
	/*  */
#define PWM0_INT_ST_CAP1_INT_ST					28u
	/*  */
#define PWM0_INT_ST_CAP2_INT_ST					29u

	/* 0x11C:  */
	uint32_t volatile INT_CLR;
	/*  */
#define PWM0_INT_CLR_TIMER0_STOP_INT_CLR			0u
	/*  */
#define PWM0_INT_CLR_TIMER1_STOP_INT_CLR			1u
	/*  */
#define PWM0_INT_CLR_TIMER2_STOP_INT_CLR			2u
	/*  */
#define PWM0_INT_CLR_TIMER0_TEZ_INT_CLR				3u
	/*  */
#define PWM0_INT_CLR_TIMER1_TEZ_INT_CLR				4u
	/*  */
#define PWM0_INT_CLR_TIMER2_TEZ_INT_CLR				5u
	/*  */
#define PWM0_INT_CLR_TIMER0_TEP_INT_CLR				6u
	/*  */
#define PWM0_INT_CLR_TIMER1_TEP_INT_CLR				7u
	/*  */
#define PWM0_INT_CLR_TIMER2_TEP_INT_CLR				8u
	/*  */
#define PWM0_INT_CLR_FAULT0_INT_CLR				9u
	/*  */
#define PWM0_INT_CLR_FAULT1_INT_CLR				10u
	/*  */
#define PWM0_INT_CLR_FAULT2_INT_CLR				11u
	/*  */
#define PWM0_INT_CLR_FAULT0_CLR_INT_CLR				12u
	/*  */
#define PWM0_INT_CLR_FAULT1_CLR_INT_CLR				13u
	/*  */
#define PWM0_INT_CLR_FAULT2_CLR_INT_CLR				14u
	/*  */
#define PWM0_INT_CLR_OP0_TEA_INT_CLR				15u
	/*  */
#define PWM0_INT_CLR_OP1_TEA_INT_CLR				16u
	/*  */
#define PWM0_INT_CLR_OP2_TEA_INT_CLR				17u
	/*  */
#define PWM0_INT_CLR_OP0_TEB_INT_CLR				18u
	/*  */
#define PWM0_INT_CLR_OP1_TEB_INT_CLR				19u
	/*  */
#define PWM0_INT_CLR_OP2_TEB_INT_CLR				20u
	/*  */
#define PWM0_INT_CLR_FH0_CBC_INT_CLR				21u
	/*  */
#define PWM0_INT_CLR_FH1_CBC_INT_CLR				22u
	/*  */
#define PWM0_INT_CLR_FH2_CBC_INT_CLR				23u
	/*  */
#define PWM0_INT_CLR_FH0_OST_INT_CLR				24u
	/*  */
#define PWM0_INT_CLR_FH1_OST_INT_CLR				25u
	/*  */
#define PWM0_INT_CLR_FH2_OST_INT_CLR				26u
	/*  */
#define PWM0_INT_CLR_CAP0_INT_CLR				27u
	/*  */
#define PWM0_INT_CLR_CAP1_INT_CLR				28u
	/*  */
#define PWM0_INT_CLR_CAP2_INT_CLR				29u

	/* 0x120:  */
	uint32_t volatile CLK;
	/*  */
#define PWM0_CLK_EN						0u

	/* 0x124:  */
	uint32_t volatile VERSION;
	/*  */
#define PWM0_VERSION_DATE_Msb					0u
#define PWM0_VERSION_DATE_Lsb					27u

};


#define PWM1 ((struct mcu_pwm1 *)0x3FF6C000)

struct mcu_pwm1 {

};


#define NRX ((struct mcu_nrx *)0x3FF5CC00)

struct mcu_nrx {

	/* 0xD4: WiFi RX control register */
	uint32_t volatile NRXPD_CTRL;
	/*  */
#define NRX_NRXPD_CTRL_DEMAP_FORCE_PD				0u
	/*  */
#define NRX_NRXPD_CTRL_DEMAP_FORCE_PU				1u
	/*  */
#define NRX_NRXPD_CTRL_VIT_FORCE_PD				2u
	/*  */
#define NRX_NRXPD_CTRL_VIT_FORCE_PU				3u
	/*  */
#define NRX_NRXPD_CTRL_RX_ROT_FORCE_PD				4u
	/*  */
#define NRX_NRXPD_CTRL_RX_ROT_FORCE_PU				5u
	/*  */
#define NRX_NRXPD_CTRL_CHAN_EST_FORCE_PD			6u
	/*  */
#define NRX_NRXPD_CTRL_CHAN_EST_FORCE_PU			7u

};


#define PCNT ((struct mcu_pcnt *)0x3FF57000)

struct mcu_pcnt {

	/* 0x00:  */
	uint32_t volatile U0_CONF0;
	/* This register is used to filter pluse whose width is smaller than this value for unit0. */
#define PCNT_U0_CONF0_FILTER_THRES_U0_Msb			0u
#define PCNT_U0_CONF0_FILTER_THRES_U0_Lsb			9u
	/* This is the enable bit for filtering input signals for unit0. */
#define PCNT_U0_CONF0_FILTER_EN_U0				10u
	/* This is the enable bit for comparing unit0's count with 0 value. */
#define PCNT_U0_CONF0_THR_ZERO_EN_U0				11u
	/* This is the enable bit for  comparing unit0's count with thr_h_lim value. */
#define PCNT_U0_CONF0_THR_H_LIM_EN_U0				12u
	/* This is the enable bit for comparing unit0's count with thr_l_lim  value. */
#define PCNT_U0_CONF0_THR_L_LIM_EN_U0				13u
	/* This is the enable bit for comparing unit0's count with  thres0 value. */
#define PCNT_U0_CONF0_THR_THRES0_EN_U0				14u
	/* This is the enable bit for  comparing  unit0's count with thres1 value . */
#define PCNT_U0_CONF0_THR_THRES1_EN_U0				15u
	/* This register is used to control the mode of channel0's input negedge signal for unit0. */
#define PCNT_U0_CONF0_CH0_NEG_MODE_U0_Msb			16u
#define PCNT_U0_CONF0_CH0_NEG_MODE_U0_Lsb			17u
	/* This register is used to control the mode of channel0's input posedge signal for unit0. */
#define PCNT_U0_CONF0_CH0_POS_MODE_U0_Msb			18u
#define PCNT_U0_CONF0_CH0_POS_MODE_U0_Lsb			19u
	/* This register is used to control the mode of channel0's high control signal for unit0. */
#define PCNT_U0_CONF0_CH0_HCTRL_MODE_U0_Msb			20u
#define PCNT_U0_CONF0_CH0_HCTRL_MODE_U0_Lsb			21u
	/* This register is used to control the mode of channel0's low control signal for unit0. */
#define PCNT_U0_CONF0_CH0_LCTRL_MODE_U0_Msb			22u
#define PCNT_U0_CONF0_CH0_LCTRL_MODE_U0_Lsb			23u
	/* This register is used to control the mode of channel1's input negedge signal for unit0. */
#define PCNT_U0_CONF0_CH1_NEG_MODE_U0_Msb			24u
#define PCNT_U0_CONF0_CH1_NEG_MODE_U0_Lsb			25u
	/* This register is used to control the mode of channel1's input posedge signal for unit0. */
#define PCNT_U0_CONF0_CH1_POS_MODE_U0_Msb			26u
#define PCNT_U0_CONF0_CH1_POS_MODE_U0_Lsb			27u
	/* This register is used to control the mode of channel1's high control signal for unit0. */
#define PCNT_U0_CONF0_CH1_HCTRL_MODE_U0_Msb			28u
#define PCNT_U0_CONF0_CH1_HCTRL_MODE_U0_Lsb			29u
	/* This register is used to control the mode of channel1's low control signal for unit0. */
#define PCNT_U0_CONF0_CH1_LCTRL_MODE_U0_Msb			30u
#define PCNT_U0_CONF0_CH1_LCTRL_MODE_U0_Lsb			31u

	/* 0x04:  */
	uint32_t volatile U0_CONF1;
	/* This register is used to configure thres0 value for unit0. */
#define PCNT_U0_CONF1_CNT_THRES0_U0_Msb				0u
#define PCNT_U0_CONF1_CNT_THRES0_U0_Lsb				15u
	/* This register is used to configure  thres1 value for unit0. */
#define PCNT_U0_CONF1_CNT_THRES1_U0_Msb				16u
#define PCNT_U0_CONF1_CNT_THRES1_U0_Lsb				31u

	/* 0x08:  */
	uint32_t volatile U0_CONF2;
	/* This register is used to configure thr_h_lim value for unit0. */
#define PCNT_U0_CONF2_CNT_H_LIM_U0_Msb				0u
#define PCNT_U0_CONF2_CNT_H_LIM_U0_Lsb				15u
	/* This register is used to confiugre thr_l_lim value for unit0. */
#define PCNT_U0_CONF2_CNT_L_LIM_U0_Msb				16u
#define PCNT_U0_CONF2_CNT_L_LIM_U0_Lsb				31u

	/* 0x0C:  */
	uint32_t volatile U1_CONF0;
	/* This register is used to filter pluse whose width is smaller than this value for unit1. */
#define PCNT_U1_CONF0_FILTER_THRES_U1_Msb			0u
#define PCNT_U1_CONF0_FILTER_THRES_U1_Lsb			9u
	/* This is the enable bit for filtering input signals for unit1. */
#define PCNT_U1_CONF0_FILTER_EN_U1				10u
	/* This is the enable bit for comparing unit1's count with 0 value. */
#define PCNT_U1_CONF0_THR_ZERO_EN_U1				11u
	/* This is the enable bit for  comparing unit1's count with thr_h_lim value. */
#define PCNT_U1_CONF0_THR_H_LIM_EN_U1				12u
	/* This is the enable bit for comparing unit1's count with thr_l_lim  value. */
#define PCNT_U1_CONF0_THR_L_LIM_EN_U1				13u
	/* This is the enable bit for comparing unit1's count with  thres0 value. */
#define PCNT_U1_CONF0_THR_THRES0_EN_U1				14u
	/* This is the enable bit for  comparing  unit1's count with thres1 value . */
#define PCNT_U1_CONF0_THR_THRES1_EN_U1				15u
	/* This register is used to control the mode of channel0's input negedge signal for unit1. */
#define PCNT_U1_CONF0_CH0_NEG_MODE_U1_Msb			16u
#define PCNT_U1_CONF0_CH0_NEG_MODE_U1_Lsb			17u
	/* This register is used to control the mode of channel0's input posedge signal for unit1. */
#define PCNT_U1_CONF0_CH0_POS_MODE_U1_Msb			18u
#define PCNT_U1_CONF0_CH0_POS_MODE_U1_Lsb			19u
	/* This register is used to control the mode of channel0's high control signal for unit1. */
#define PCNT_U1_CONF0_CH0_HCTRL_MODE_U1_Msb			20u
#define PCNT_U1_CONF0_CH0_HCTRL_MODE_U1_Lsb			21u
	/* This register is used to control the mode of channel0's low control signal for unit1. */
#define PCNT_U1_CONF0_CH0_LCTRL_MODE_U1_Msb			22u
#define PCNT_U1_CONF0_CH0_LCTRL_MODE_U1_Lsb			23u
	/* This register is used to control the mode of channel1's input negedge signal for unit1. */
#define PCNT_U1_CONF0_CH1_NEG_MODE_U1_Msb			24u
#define PCNT_U1_CONF0_CH1_NEG_MODE_U1_Lsb			25u
	/* This register is used to control the mode of channel1's input posedge signal for unit1. */
#define PCNT_U1_CONF0_CH1_POS_MODE_U1_Msb			26u
#define PCNT_U1_CONF0_CH1_POS_MODE_U1_Lsb			27u
	/* This register is used to control the mode of channel1's high control signal for unit1. */
#define PCNT_U1_CONF0_CH1_HCTRL_MODE_U1_Msb			28u
#define PCNT_U1_CONF0_CH1_HCTRL_MODE_U1_Lsb			29u
	/* This register is used to control the mode of channel1's low control signal for unit1. */
#define PCNT_U1_CONF0_CH1_LCTRL_MODE_U1_Msb			30u
#define PCNT_U1_CONF0_CH1_LCTRL_MODE_U1_Lsb			31u

	/* 0x10:  */
	uint32_t volatile U1_CONF1;
	/* This register is used to configure thres0 value for unit1. */
#define PCNT_U1_CONF1_CNT_THRES0_U1_Msb				0u
#define PCNT_U1_CONF1_CNT_THRES0_U1_Lsb				15u
	/* This register is used to configure  thres1 value for unit1. */
#define PCNT_U1_CONF1_CNT_THRES1_U1_Msb				16u
#define PCNT_U1_CONF1_CNT_THRES1_U1_Lsb				31u

	/* 0x14:  */
	uint32_t volatile U1_CONF2;
	/* This register is used to configure thr_h_lim value for unit1. */
#define PCNT_U1_CONF2_CNT_H_LIM_U1_Msb				0u
#define PCNT_U1_CONF2_CNT_H_LIM_U1_Lsb				15u
	/* This register is used to confiugre thr_l_lim value for unit1. */
#define PCNT_U1_CONF2_CNT_L_LIM_U1_Msb				16u
#define PCNT_U1_CONF2_CNT_L_LIM_U1_Lsb				31u

	/* 0x18:  */
	uint32_t volatile U2_CONF0;
	/* This register is used to filter pluse whose width is smaller than this value for unit2. */
#define PCNT_U2_CONF0_FILTER_THRES_U2_Msb			0u
#define PCNT_U2_CONF0_FILTER_THRES_U2_Lsb			9u
	/* This is the enable bit for filtering input signals for unit2. */
#define PCNT_U2_CONF0_FILTER_EN_U2				10u
	/* This is the enable bit for comparing unit2's count with 0 value. */
#define PCNT_U2_CONF0_THR_ZERO_EN_U2				11u
	/* This is the enable bit for  comparing unit2's count with thr_h_lim value. */
#define PCNT_U2_CONF0_THR_H_LIM_EN_U2				12u
	/* This is the enable bit for comparing unit2's count with thr_l_lim  value. */
#define PCNT_U2_CONF0_THR_L_LIM_EN_U2				13u
	/* This is the enable bit for comparing unit2's count with  thres0 value. */
#define PCNT_U2_CONF0_THR_THRES0_EN_U2				14u
	/* This is the enable bit for  comparing  unit2's count with thres1 value . */
#define PCNT_U2_CONF0_THR_THRES1_EN_U2				15u
	/* This register is used to control the mode of channel0's input negedge signal for unit2. */
#define PCNT_U2_CONF0_CH0_NEG_MODE_U2_Msb			16u
#define PCNT_U2_CONF0_CH0_NEG_MODE_U2_Lsb			17u
	/* This register is used to control the mode of channel0's input posedge signal for unit2. */
#define PCNT_U2_CONF0_CH0_POS_MODE_U2_Msb			18u
#define PCNT_U2_CONF0_CH0_POS_MODE_U2_Lsb			19u
	/* This register is used to control the mode of channel0's high control signal for unit2. */
#define PCNT_U2_CONF0_CH0_HCTRL_MODE_U2_Msb			20u
#define PCNT_U2_CONF0_CH0_HCTRL_MODE_U2_Lsb			21u
	/* This register is used to control the mode of channel0's low control signal for unit2. */
#define PCNT_U2_CONF0_CH0_LCTRL_MODE_U2_Msb			22u
#define PCNT_U2_CONF0_CH0_LCTRL_MODE_U2_Lsb			23u
	/* This register is used to control the mode of channel1's input negedge signal for unit2. */
#define PCNT_U2_CONF0_CH1_NEG_MODE_U2_Msb			24u
#define PCNT_U2_CONF0_CH1_NEG_MODE_U2_Lsb			25u
	/* This register is used to control the mode of channel1's input posedge signal for unit2. */
#define PCNT_U2_CONF0_CH1_POS_MODE_U2_Msb			26u
#define PCNT_U2_CONF0_CH1_POS_MODE_U2_Lsb			27u
	/* This register is used to control the mode of channel1's high control signal for unit2. */
#define PCNT_U2_CONF0_CH1_HCTRL_MODE_U2_Msb			28u
#define PCNT_U2_CONF0_CH1_HCTRL_MODE_U2_Lsb			29u
	/* This register is used to control the mode of channel1's low control signal for unit2. */
#define PCNT_U2_CONF0_CH1_LCTRL_MODE_U2_Msb			30u
#define PCNT_U2_CONF0_CH1_LCTRL_MODE_U2_Lsb			31u

	/* 0x1C:  */
	uint32_t volatile U2_CONF1;
	/* This register is used to configure thres0 value for unit2. */
#define PCNT_U2_CONF1_CNT_THRES0_U2_Msb				0u
#define PCNT_U2_CONF1_CNT_THRES0_U2_Lsb				15u
	/* This register is used to configure  thres1 value for unit2. */
#define PCNT_U2_CONF1_CNT_THRES1_U2_Msb				16u
#define PCNT_U2_CONF1_CNT_THRES1_U2_Lsb				31u

	/* 0x20:  */
	uint32_t volatile U2_CONF2;
	/* This register is used to configure thr_h_lim value for unit2. */
#define PCNT_U2_CONF2_CNT_H_LIM_U2_Msb				0u
#define PCNT_U2_CONF2_CNT_H_LIM_U2_Lsb				15u
	/* This register is used to confiugre thr_l_lim value for unit2. */
#define PCNT_U2_CONF2_CNT_L_LIM_U2_Msb				16u
#define PCNT_U2_CONF2_CNT_L_LIM_U2_Lsb				31u

	/* 0x24:  */
	uint32_t volatile U3_CONF0;
	/* This register is used to filter pluse whose width is smaller than this value for unit3. */
#define PCNT_U3_CONF0_FILTER_THRES_U3_Msb			0u
#define PCNT_U3_CONF0_FILTER_THRES_U3_Lsb			9u
	/* This is the enable bit for filtering input signals for unit3. */
#define PCNT_U3_CONF0_FILTER_EN_U3				10u
	/* This is the enable bit for comparing unit3's count with 0 value. */
#define PCNT_U3_CONF0_THR_ZERO_EN_U3				11u
	/* This is the enable bit for  comparing unit3's count with thr_h_lim value. */
#define PCNT_U3_CONF0_THR_H_LIM_EN_U3				12u
	/* This is the enable bit for comparing unit3's count with thr_l_lim  value. */
#define PCNT_U3_CONF0_THR_L_LIM_EN_U3				13u
	/* This is the enable bit for comparing unit3's count with  thres0 value. */
#define PCNT_U3_CONF0_THR_THRES0_EN_U3				14u
	/* This is the enable bit for  comparing  unit3's count with thres1 value . */
#define PCNT_U3_CONF0_THR_THRES1_EN_U3				15u
	/* This register is used to control the mode of channel0's input negedge signal for unit3. */
#define PCNT_U3_CONF0_CH0_NEG_MODE_U3_Msb			16u
#define PCNT_U3_CONF0_CH0_NEG_MODE_U3_Lsb			17u
	/* This register is used to control the mode of channel0's input posedge signal for unit3. */
#define PCNT_U3_CONF0_CH0_POS_MODE_U3_Msb			18u
#define PCNT_U3_CONF0_CH0_POS_MODE_U3_Lsb			19u
	/* This register is used to control the mode of channel0's high control signal for unit3. */
#define PCNT_U3_CONF0_CH0_HCTRL_MODE_U3_Msb			20u
#define PCNT_U3_CONF0_CH0_HCTRL_MODE_U3_Lsb			21u
	/* This register is used to control the mode of channel0's low control signal for unit3. */
#define PCNT_U3_CONF0_CH0_LCTRL_MODE_U3_Msb			22u
#define PCNT_U3_CONF0_CH0_LCTRL_MODE_U3_Lsb			23u
	/* This register is used to control the mode of channel1's input negedge signal for unit3. */
#define PCNT_U3_CONF0_CH1_NEG_MODE_U3_Msb			24u
#define PCNT_U3_CONF0_CH1_NEG_MODE_U3_Lsb			25u
	/* This register is used to control the mode of channel1's input posedge signal for unit3. */
#define PCNT_U3_CONF0_CH1_POS_MODE_U3_Msb			26u
#define PCNT_U3_CONF0_CH1_POS_MODE_U3_Lsb			27u
	/* This register is used to control the mode of channel1's high control signal for unit3. */
#define PCNT_U3_CONF0_CH1_HCTRL_MODE_U3_Msb			28u
#define PCNT_U3_CONF0_CH1_HCTRL_MODE_U3_Lsb			29u
	/* This register is used to control the mode of channel1's low control signal for unit3. */
#define PCNT_U3_CONF0_CH1_LCTRL_MODE_U3_Msb			30u
#define PCNT_U3_CONF0_CH1_LCTRL_MODE_U3_Lsb			31u

	/* 0x28:  */
	uint32_t volatile U3_CONF1;
	/* This register is used to configure thres0 value for unit3. */
#define PCNT_U3_CONF1_CNT_THRES0_U3_Msb				0u
#define PCNT_U3_CONF1_CNT_THRES0_U3_Lsb				15u
	/* This register is used to configure  thres1 value for unit3. */
#define PCNT_U3_CONF1_CNT_THRES1_U3_Msb				16u
#define PCNT_U3_CONF1_CNT_THRES1_U3_Lsb				31u

	/* 0x2C:  */
	uint32_t volatile U3_CONF2;
	/* This register is used to configure thr_h_lim value for unit3. */
#define PCNT_U3_CONF2_CNT_H_LIM_U3_Msb				0u
#define PCNT_U3_CONF2_CNT_H_LIM_U3_Lsb				15u
	/* This register is used to confiugre thr_l_lim value for unit3. */
#define PCNT_U3_CONF2_CNT_L_LIM_U3_Msb				16u
#define PCNT_U3_CONF2_CNT_L_LIM_U3_Lsb				31u

	/* 0x30:  */
	uint32_t volatile U4_CONF0;
	/* This register is used to filter pluse whose width is smaller than this value for unit4. */
#define PCNT_U4_CONF0_FILTER_THRES_U4_Msb			0u
#define PCNT_U4_CONF0_FILTER_THRES_U4_Lsb			9u
	/* This is the enable bit for filtering input signals for unit4. */
#define PCNT_U4_CONF0_FILTER_EN_U4				10u
	/* This is the enable bit for comparing unit4's count with 0 value. */
#define PCNT_U4_CONF0_THR_ZERO_EN_U4				11u
	/* This is the enable bit for  comparing unit4's count with thr_h_lim value. */
#define PCNT_U4_CONF0_THR_H_LIM_EN_U4				12u
	/* This is the enable bit for comparing unit4's count with thr_l_lim  value. */
#define PCNT_U4_CONF0_THR_L_LIM_EN_U4				13u
	/* This is the enable bit for comparing unit4's count with  thres0 value. */
#define PCNT_U4_CONF0_THR_THRES0_EN_U4				14u
	/* This is the enable bit for  comparing  unit4's count with thres1 value . */
#define PCNT_U4_CONF0_THR_THRES1_EN_U4				15u
	/* This register is used to control the mode of channel0's input negedge signal for unit4. */
#define PCNT_U4_CONF0_CH0_NEG_MODE_U4_Msb			16u
#define PCNT_U4_CONF0_CH0_NEG_MODE_U4_Lsb			17u
	/* This register is used to control the mode of channel0's input posedge signal for unit4. */
#define PCNT_U4_CONF0_CH0_POS_MODE_U4_Msb			18u
#define PCNT_U4_CONF0_CH0_POS_MODE_U4_Lsb			19u
	/* This register is used to control the mode of channel0's high control signal for unit4. */
#define PCNT_U4_CONF0_CH0_HCTRL_MODE_U4_Msb			20u
#define PCNT_U4_CONF0_CH0_HCTRL_MODE_U4_Lsb			21u
	/* This register is used to control the mode of channel0's low control signal for unit4. */
#define PCNT_U4_CONF0_CH0_LCTRL_MODE_U4_Msb			22u
#define PCNT_U4_CONF0_CH0_LCTRL_MODE_U4_Lsb			23u
	/* This register is used to control the mode of channel1's input negedge signal for unit4. */
#define PCNT_U4_CONF0_CH1_NEG_MODE_U4_Msb			24u
#define PCNT_U4_CONF0_CH1_NEG_MODE_U4_Lsb			25u
	/* This register is used to control the mode of channel1's input posedge signal for unit4. */
#define PCNT_U4_CONF0_CH1_POS_MODE_U4_Msb			26u
#define PCNT_U4_CONF0_CH1_POS_MODE_U4_Lsb			27u
	/* This register is used to control the mode of channel1's high control signal for unit4. */
#define PCNT_U4_CONF0_CH1_HCTRL_MODE_U4_Msb			28u
#define PCNT_U4_CONF0_CH1_HCTRL_MODE_U4_Lsb			29u
	/* This register is used to control the mode of channel1's low control signal for unit4. */
#define PCNT_U4_CONF0_CH1_LCTRL_MODE_U4_Msb			30u
#define PCNT_U4_CONF0_CH1_LCTRL_MODE_U4_Lsb			31u

	/* 0x34:  */
	uint32_t volatile U4_CONF1;
	/* This register is used to configure thres0 value for unit4. */
#define PCNT_U4_CONF1_CNT_THRES0_U4_Msb				0u
#define PCNT_U4_CONF1_CNT_THRES0_U4_Lsb				15u
	/* This register is used to configure  thres1 value for unit4. */
#define PCNT_U4_CONF1_CNT_THRES1_U4_Msb				16u
#define PCNT_U4_CONF1_CNT_THRES1_U4_Lsb				31u

	/* 0x38:  */
	uint32_t volatile U4_CONF2;
	/* This register is used to configure thr_h_lim value for unit4. */
#define PCNT_U4_CONF2_CNT_H_LIM_U4_Msb				0u
#define PCNT_U4_CONF2_CNT_H_LIM_U4_Lsb				15u
	/* This register is used to confiugre thr_l_lim value for unit4. */
#define PCNT_U4_CONF2_CNT_L_LIM_U4_Msb				16u
#define PCNT_U4_CONF2_CNT_L_LIM_U4_Lsb				31u

	/* 0x3C:  */
	uint32_t volatile U5_CONF0;
	/* This register is used to filter pluse whose width is smaller than this value for unit5. */
#define PCNT_U5_CONF0_FILTER_THRES_U5_Msb			0u
#define PCNT_U5_CONF0_FILTER_THRES_U5_Lsb			9u
	/* This is the enable bit for filtering input signals for unit5. */
#define PCNT_U5_CONF0_FILTER_EN_U5				10u
	/* This is the enable bit for comparing unit5's count with 0 value. */
#define PCNT_U5_CONF0_THR_ZERO_EN_U5				11u
	/* This is the enable bit for  comparing unit5's count with thr_h_lim value. */
#define PCNT_U5_CONF0_THR_H_LIM_EN_U5				12u
	/* This is the enable bit for comparing unit5's count with thr_l_lim  value. */
#define PCNT_U5_CONF0_THR_L_LIM_EN_U5				13u
	/* This is the enable bit for comparing unit5's count with  thres0 value. */
#define PCNT_U5_CONF0_THR_THRES0_EN_U5				14u
	/* This is the enable bit for  comparing  unit5's count with thres1 value . */
#define PCNT_U5_CONF0_THR_THRES1_EN_U5				15u
	/* This register is used to control the mode of channel0's input negedge signal for unit5. */
#define PCNT_U5_CONF0_CH0_NEG_MODE_U5_Msb			16u
#define PCNT_U5_CONF0_CH0_NEG_MODE_U5_Lsb			17u
	/* This register is used to control the mode of channel0's input posedge signal for unit5. */
#define PCNT_U5_CONF0_CH0_POS_MODE_U5_Msb			18u
#define PCNT_U5_CONF0_CH0_POS_MODE_U5_Lsb			19u
	/* This register is used to control the mode of channel0's high control signal for unit5. */
#define PCNT_U5_CONF0_CH0_HCTRL_MODE_U5_Msb			20u
#define PCNT_U5_CONF0_CH0_HCTRL_MODE_U5_Lsb			21u
	/* This register is used to control the mode of channel0's low control signal for unit5. */
#define PCNT_U5_CONF0_CH0_LCTRL_MODE_U5_Msb			22u
#define PCNT_U5_CONF0_CH0_LCTRL_MODE_U5_Lsb			23u
	/* This register is used to control the mode of channel1's input negedge signal for unit5. */
#define PCNT_U5_CONF0_CH1_NEG_MODE_U5_Msb			24u
#define PCNT_U5_CONF0_CH1_NEG_MODE_U5_Lsb			25u
	/* This register is used to control the mode of channel1's input posedge signal for unit5. */
#define PCNT_U5_CONF0_CH1_POS_MODE_U5_Msb			26u
#define PCNT_U5_CONF0_CH1_POS_MODE_U5_Lsb			27u
	/* This register is used to control the mode of channel1's high control signal for unit5. */
#define PCNT_U5_CONF0_CH1_HCTRL_MODE_U5_Msb			28u
#define PCNT_U5_CONF0_CH1_HCTRL_MODE_U5_Lsb			29u
	/* This register is used to control the mode of channel1's low control signal for unit5. */
#define PCNT_U5_CONF0_CH1_LCTRL_MODE_U5_Msb			30u
#define PCNT_U5_CONF0_CH1_LCTRL_MODE_U5_Lsb			31u

	/* 0x40:  */
	uint32_t volatile U5_CONF1;
	/* This register is used to configure thres0 value for unit5. */
#define PCNT_U5_CONF1_CNT_THRES0_U5_Msb				0u
#define PCNT_U5_CONF1_CNT_THRES0_U5_Lsb				15u
	/* This register is used to configure  thres1 value for unit5. */
#define PCNT_U5_CONF1_CNT_THRES1_U5_Msb				16u
#define PCNT_U5_CONF1_CNT_THRES1_U5_Lsb				31u

	/* 0x44:  */
	uint32_t volatile U5_CONF2;
	/* This register is used to configure thr_h_lim value for unit5. */
#define PCNT_U5_CONF2_CNT_H_LIM_U5_Msb				0u
#define PCNT_U5_CONF2_CNT_H_LIM_U5_Lsb				15u
	/* This register is used to confiugre thr_l_lim value for unit5. */
#define PCNT_U5_CONF2_CNT_L_LIM_U5_Msb				16u
#define PCNT_U5_CONF2_CNT_L_LIM_U5_Lsb				31u

	/* 0x48:  */
	uint32_t volatile U6_CONF0;
	/* This register is used to filter pluse whose width is smaller than this value for unit6. */
#define PCNT_U6_CONF0_FILTER_THRES_U6_Msb			0u
#define PCNT_U6_CONF0_FILTER_THRES_U6_Lsb			9u
	/* This is the enable bit for filtering input signals for unit6. */
#define PCNT_U6_CONF0_FILTER_EN_U6				10u
	/* This is the enable bit for comparing unit6's count with 0 value. */
#define PCNT_U6_CONF0_THR_ZERO_EN_U6				11u
	/* This is the enable bit for  comparing unit6's count with thr_h_lim value. */
#define PCNT_U6_CONF0_THR_H_LIM_EN_U6				12u
	/* This is the enable bit for comparing unit6's count with thr_l_lim  value. */
#define PCNT_U6_CONF0_THR_L_LIM_EN_U6				13u
	/* This is the enable bit for comparing unit6's count with  thres0 value. */
#define PCNT_U6_CONF0_THR_THRES0_EN_U6				14u
	/* This is the enable bit for  comparing  unit6's count with thres1 value . */
#define PCNT_U6_CONF0_THR_THRES1_EN_U6				15u
	/* This register is used to control the mode of channel0's input negedge signal for unit6. */
#define PCNT_U6_CONF0_CH0_NEG_MODE_U6_Msb			16u
#define PCNT_U6_CONF0_CH0_NEG_MODE_U6_Lsb			17u
	/* This register is used to control the mode of channel0's input posedge signal for unit6. */
#define PCNT_U6_CONF0_CH0_POS_MODE_U6_Msb			18u
#define PCNT_U6_CONF0_CH0_POS_MODE_U6_Lsb			19u
	/* This register is used to control the mode of channel0's high control signal for unit6. */
#define PCNT_U6_CONF0_CH0_HCTRL_MODE_U6_Msb			20u
#define PCNT_U6_CONF0_CH0_HCTRL_MODE_U6_Lsb			21u
	/* This register is used to control the mode of channel0's low control signal for unit6. */
#define PCNT_U6_CONF0_CH0_LCTRL_MODE_U6_Msb			22u
#define PCNT_U6_CONF0_CH0_LCTRL_MODE_U6_Lsb			23u
	/* This register is used to control the mode of channel1's input negedge signal for unit6. */
#define PCNT_U6_CONF0_CH1_NEG_MODE_U6_Msb			24u
#define PCNT_U6_CONF0_CH1_NEG_MODE_U6_Lsb			25u
	/* This register is used to control the mode of channel1's input posedge signal for unit6. */
#define PCNT_U6_CONF0_CH1_POS_MODE_U6_Msb			26u
#define PCNT_U6_CONF0_CH1_POS_MODE_U6_Lsb			27u
	/* This register is used to control the mode of channel1's high control signal for unit6. */
#define PCNT_U6_CONF0_CH1_HCTRL_MODE_U6_Msb			28u
#define PCNT_U6_CONF0_CH1_HCTRL_MODE_U6_Lsb			29u
	/* This register is used to control the mode of channel1's low control signal for unit6. */
#define PCNT_U6_CONF0_CH1_LCTRL_MODE_U6_Msb			30u
#define PCNT_U6_CONF0_CH1_LCTRL_MODE_U6_Lsb			31u

	/* 0x4C:  */
	uint32_t volatile U6_CONF1;
	/* This register is used to configure thres0 value for unit6. */
#define PCNT_U6_CONF1_CNT_THRES0_U6_Msb				0u
#define PCNT_U6_CONF1_CNT_THRES0_U6_Lsb				15u
	/* This register is used to configure  thres1 value for unit6. */
#define PCNT_U6_CONF1_CNT_THRES1_U6_Msb				16u
#define PCNT_U6_CONF1_CNT_THRES1_U6_Lsb				31u

	/* 0x50:  */
	uint32_t volatile U6_CONF2;
	/* This register is used to configure thr_h_lim value for unit6. */
#define PCNT_U6_CONF2_CNT_H_LIM_U6_Msb				0u
#define PCNT_U6_CONF2_CNT_H_LIM_U6_Lsb				15u
	/* This register is used to confiugre thr_l_lim value for unit6. */
#define PCNT_U6_CONF2_CNT_L_LIM_U6_Msb				16u
#define PCNT_U6_CONF2_CNT_L_LIM_U6_Lsb				31u

	/* 0x54:  */
	uint32_t volatile U7_CONF0;
	/* This register is used to filter pluse whose width is smaller than this value for unit7. */
#define PCNT_U7_CONF0_FILTER_THRES_U7_Msb			0u
#define PCNT_U7_CONF0_FILTER_THRES_U7_Lsb			9u
	/* This is the enable bit for filtering input signals for unit7. */
#define PCNT_U7_CONF0_FILTER_EN_U7				10u
	/* This is the enable bit for comparing unit7's count with 0 value. */
#define PCNT_U7_CONF0_THR_ZERO_EN_U7				11u
	/* This is the enable bit for  comparing unit7's count with thr_h_lim value. */
#define PCNT_U7_CONF0_THR_H_LIM_EN_U7				12u
	/* This is the enable bit for comparing unit7's count with thr_l_lim  value. */
#define PCNT_U7_CONF0_THR_L_LIM_EN_U7				13u
	/* This is the enable bit for comparing unit7's count with  thres0 value. */
#define PCNT_U7_CONF0_THR_THRES0_EN_U7				14u
	/* This is the enable bit for  comparing  unit7's count with thres1 value . */
#define PCNT_U7_CONF0_THR_THRES1_EN_U7				15u
	/* This register is used to control the mode of channel0's input negedge signal for unit7. */
#define PCNT_U7_CONF0_CH0_NEG_MODE_U7_Msb			16u
#define PCNT_U7_CONF0_CH0_NEG_MODE_U7_Lsb			17u
	/* This register is used to control the mode of channel0's input posedge signal for unit7. */
#define PCNT_U7_CONF0_CH0_POS_MODE_U7_Msb			18u
#define PCNT_U7_CONF0_CH0_POS_MODE_U7_Lsb			19u
	/* This register is used to control the mode of channel0's high control signal for unit7. */
#define PCNT_U7_CONF0_CH0_HCTRL_MODE_U7_Msb			20u
#define PCNT_U7_CONF0_CH0_HCTRL_MODE_U7_Lsb			21u
	/* This register is used to control the mode of channel0's low control signal for unit7. */
#define PCNT_U7_CONF0_CH0_LCTRL_MODE_U7_Msb			22u
#define PCNT_U7_CONF0_CH0_LCTRL_MODE_U7_Lsb			23u
	/* This register is used to control the mode of channel1's input negedge signal for unit7. */
#define PCNT_U7_CONF0_CH1_NEG_MODE_U7_Msb			24u
#define PCNT_U7_CONF0_CH1_NEG_MODE_U7_Lsb			25u
	/* This register is used to control the mode of channel1's input posedge signal for unit7. */
#define PCNT_U7_CONF0_CH1_POS_MODE_U7_Msb			26u
#define PCNT_U7_CONF0_CH1_POS_MODE_U7_Lsb			27u
	/* This register is used to control the mode of channel1's high control signal for unit7. */
#define PCNT_U7_CONF0_CH1_HCTRL_MODE_U7_Msb			28u
#define PCNT_U7_CONF0_CH1_HCTRL_MODE_U7_Lsb			29u
	/* This register is used to control the mode of channel1's low control signal for unit7. */
#define PCNT_U7_CONF0_CH1_LCTRL_MODE_U7_Msb			30u
#define PCNT_U7_CONF0_CH1_LCTRL_MODE_U7_Lsb			31u

	/* 0x58:  */
	uint32_t volatile U7_CONF1;
	/* This register is used to configure thres0 value for unit7. */
#define PCNT_U7_CONF1_CNT_THRES0_U7_Msb				0u
#define PCNT_U7_CONF1_CNT_THRES0_U7_Lsb				15u
	/* This register is used to configure  thres1 value for unit7. */
#define PCNT_U7_CONF1_CNT_THRES1_U7_Msb				16u
#define PCNT_U7_CONF1_CNT_THRES1_U7_Lsb				31u

	/* 0x5C:  */
	uint32_t volatile U7_CONF2;
	/* This register is used to configure thr_h_lim value for unit7. */
#define PCNT_U7_CONF2_CNT_H_LIM_U7_Msb				0u
#define PCNT_U7_CONF2_CNT_H_LIM_U7_Lsb				15u
	/* This register is used to confiugre thr_l_lim value for unit7. */
#define PCNT_U7_CONF2_CNT_L_LIM_U7_Msb				16u
#define PCNT_U7_CONF2_CNT_L_LIM_U7_Lsb				31u

	/* 0x60:  */
	uint32_t volatile U0_CNT;
	/* This register stores the current pulse count value for unit0. */
#define PCNT_U0_CNT_PLUS_CNT_U0_Msb				0u
#define PCNT_U0_CNT_PLUS_CNT_U0_Lsb				15u

	/* 0x64:  */
	uint32_t volatile U1_CNT;
	/* This register stores the current pulse count value for unit1. */
#define PCNT_U1_CNT_PLUS_CNT_U1_Msb				0u
#define PCNT_U1_CNT_PLUS_CNT_U1_Lsb				15u

	/* 0x68:  */
	uint32_t volatile U2_CNT;
	/* This register stores the current pulse count value for unit2. */
#define PCNT_U2_CNT_PLUS_CNT_U2_Msb				0u
#define PCNT_U2_CNT_PLUS_CNT_U2_Lsb				15u

	/* 0x6C:  */
	uint32_t volatile U3_CNT;
	/* This register stores the current pulse count value for unit3. */
#define PCNT_U3_CNT_PLUS_CNT_U3_Msb				0u
#define PCNT_U3_CNT_PLUS_CNT_U3_Lsb				15u

	/* 0x70:  */
	uint32_t volatile U4_CNT;
	/* This register stores the current pulse count value for unit4. */
#define PCNT_U4_CNT_PLUS_CNT_U4_Msb				0u
#define PCNT_U4_CNT_PLUS_CNT_U4_Lsb				15u

	/* 0x74:  */
	uint32_t volatile U5_CNT;
	/* This register stores the current pulse count value for unit5. */
#define PCNT_U5_CNT_PLUS_CNT_U5_Msb				0u
#define PCNT_U5_CNT_PLUS_CNT_U5_Lsb				15u

	/* 0x78:  */
	uint32_t volatile U6_CNT;
	/* This register stores the current pulse count value for unit6. */
#define PCNT_U6_CNT_PLUS_CNT_U6_Msb				0u
#define PCNT_U6_CNT_PLUS_CNT_U6_Lsb				15u

	/* 0x7C:  */
	uint32_t volatile U7_CNT;
	/* This register stores the current pulse count value for unit7. */
#define PCNT_U7_CNT_PLUS_CNT_U7_Msb				0u
#define PCNT_U7_CNT_PLUS_CNT_U7_Lsb				15u

	/* 0x80:  */
	uint32_t volatile INT_RAW;
	/* This is the interrupt raw bit for channel0 event. */
#define PCNT_INT_RAW_CNT_THR_EVENT_U0_INT_RAW			0u
	/* This is the interrupt raw bit for channel1 event. */
#define PCNT_INT_RAW_CNT_THR_EVENT_U1_INT_RAW			1u
	/* This is the interrupt raw bit for channel2 event. */
#define PCNT_INT_RAW_CNT_THR_EVENT_U2_INT_RAW			2u
	/* This is the interrupt raw bit for channel3 event. */
#define PCNT_INT_RAW_CNT_THR_EVENT_U3_INT_RAW			3u
	/* This is the interrupt raw bit for channel4 event. */
#define PCNT_INT_RAW_CNT_THR_EVENT_U4_INT_RAW			4u
	/* This is the interrupt raw bit for channel5 event. */
#define PCNT_INT_RAW_CNT_THR_EVENT_U5_INT_RAW			5u
	/* This is the interrupt raw bit for channel6 event. */
#define PCNT_INT_RAW_CNT_THR_EVENT_U6_INT_RAW			6u
	/* This is the interrupt raw bit for channel7 event. */
#define PCNT_INT_RAW_CNT_THR_EVENT_U7_INT_RAW			7u

	/* 0x84:  */
	uint32_t volatile INT_ST;
	/* This is the  interrupt status bit for channel0 event. */
#define PCNT_INT_ST_CNT_THR_EVENT_U0_INT_ST			0u
	/* This is the  interrupt status bit for channel1 event. */
#define PCNT_INT_ST_CNT_THR_EVENT_U1_INT_ST			1u
	/* This is the  interrupt status bit for channel2 event. */
#define PCNT_INT_ST_CNT_THR_EVENT_U2_INT_ST			2u
	/* This is the  interrupt status bit for channel3 event. */
#define PCNT_INT_ST_CNT_THR_EVENT_U3_INT_ST			3u
	/* This is the  interrupt status bit for channel4 event. */
#define PCNT_INT_ST_CNT_THR_EVENT_U4_INT_ST			4u
	/* This is the  interrupt status bit for channel5 event. */
#define PCNT_INT_ST_CNT_THR_EVENT_U5_INT_ST			5u
	/* This is the  interrupt status bit for channel6 event. */
#define PCNT_INT_ST_CNT_THR_EVENT_U6_INT_ST			6u
	/* This is the  interrupt status bit for channel7 event. */
#define PCNT_INT_ST_CNT_THR_EVENT_U7_INT_ST			7u

	/* 0x88:  */
	uint32_t volatile INT_ENA;
	/* This is the  interrupt enable bit for channel0 event. */
#define PCNT_INT_ENA_CNT_THR_EVENT_U0_INT_ENA			0u
	/* This is the  interrupt enable bit for channel1 event. */
#define PCNT_INT_ENA_CNT_THR_EVENT_U1_INT_ENA			1u
	/* This is the  interrupt enable bit for channel2 event. */
#define PCNT_INT_ENA_CNT_THR_EVENT_U2_INT_ENA			2u
	/* This is the  interrupt enable bit for channel3 event. */
#define PCNT_INT_ENA_CNT_THR_EVENT_U3_INT_ENA			3u
	/* This is the  interrupt enable bit for channel4 event. */
#define PCNT_INT_ENA_CNT_THR_EVENT_U4_INT_ENA			4u
	/* This is the  interrupt enable bit for channel5 event. */
#define PCNT_INT_ENA_CNT_THR_EVENT_U5_INT_ENA			5u
	/* This is the  interrupt enable bit for channel6 event. */
#define PCNT_INT_ENA_CNT_THR_EVENT_U6_INT_ENA			6u
	/* This is the  interrupt enable bit for channel7 event. */
#define PCNT_INT_ENA_CNT_THR_EVENT_U7_INT_ENA			7u

	/* 0x8C:  */
	uint32_t volatile INT_CLR;
	/* Set this bit to clear channel0 event interrupt. */
#define PCNT_INT_CLR_CNT_THR_EVENT_U0_INT_CLR			0u
	/* Set this bit to clear channel1 event interrupt. */
#define PCNT_INT_CLR_CNT_THR_EVENT_U1_INT_CLR			1u
	/* Set this bit to clear channel2 event interrupt. */
#define PCNT_INT_CLR_CNT_THR_EVENT_U2_INT_CLR			2u
	/* Set this bit to clear channel3 event interrupt. */
#define PCNT_INT_CLR_CNT_THR_EVENT_U3_INT_CLR			3u
	/* Set this bit to clear channel4 event interrupt. */
#define PCNT_INT_CLR_CNT_THR_EVENT_U4_INT_CLR			4u
	/* Set this bit to clear channel5 event interrupt. */
#define PCNT_INT_CLR_CNT_THR_EVENT_U5_INT_CLR			5u
	/* Set this bit to clear channel6 event interrupt. */
#define PCNT_INT_CLR_CNT_THR_EVENT_U6_INT_CLR			6u
	/* Set this bit to clear channel7 event interrupt. */
#define PCNT_INT_CLR_CNT_THR_EVENT_U7_INT_CLR			7u

	/* 0x90:  */
	uint32_t volatile U0_STATUS;
	/*  */
#define PCNT_U0_STATUS_CORE_STATUS_U0_Msb			0u
#define PCNT_U0_STATUS_CORE_STATUS_U0_Lsb			31u
	/*  */
#define PCNT_U0_STATUS_STATUS_CNT_MODE_Msb			0u
#define PCNT_U0_STATUS_STATUS_CNT_MODE_Lsb			1u
	/*  */
#define PCNT_U0_STATUS_STATUS_THRES1				2u
	/*  */
#define PCNT_U0_STATUS_STATUS_THRES0				3u
	/*  */
#define PCNT_U0_STATUS_STATUS_L_LIM				4u
	/*  */
#define PCNT_U0_STATUS_STATUS_H_LIM				5u
	/*  */
#define PCNT_U0_STATUS_STATUS_ZERO				6u

	/* 0x94:  */
	uint32_t volatile U1_STATUS;
	/*  */
#define PCNT_U1_STATUS_CORE_STATUS_U1_Msb			0u
#define PCNT_U1_STATUS_CORE_STATUS_U1_Lsb			31u

	/* 0x98:  */
	uint32_t volatile U2_STATUS;
	/*  */
#define PCNT_U2_STATUS_CORE_STATUS_U2_Msb			0u
#define PCNT_U2_STATUS_CORE_STATUS_U2_Lsb			31u

	/* 0x9C:  */
	uint32_t volatile U3_STATUS;
	/*  */
#define PCNT_U3_STATUS_CORE_STATUS_U3_Msb			0u
#define PCNT_U3_STATUS_CORE_STATUS_U3_Lsb			31u

	/* 0xA0:  */
	uint32_t volatile U4_STATUS;
	/*  */
#define PCNT_U4_STATUS_CORE_STATUS_U4_Msb			0u
#define PCNT_U4_STATUS_CORE_STATUS_U4_Lsb			31u

	/* 0xA4:  */
	uint32_t volatile U5_STATUS;
	/*  */
#define PCNT_U5_STATUS_CORE_STATUS_U5_Msb			0u
#define PCNT_U5_STATUS_CORE_STATUS_U5_Lsb			31u

	/* 0xA8:  */
	uint32_t volatile U6_STATUS;
	/*  */
#define PCNT_U6_STATUS_CORE_STATUS_U6_Msb			0u
#define PCNT_U6_STATUS_CORE_STATUS_U6_Lsb			31u

	/* 0xAC:  */
	uint32_t volatile U7_STATUS;
	/*  */
#define PCNT_U7_STATUS_CORE_STATUS_U7_Msb			0u
#define PCNT_U7_STATUS_CORE_STATUS_U7_Lsb			31u

	/* 0xB0:  */
	uint32_t volatile CTRL;
	/* Set this bit to clear unit0's counter. */
#define PCNT_CTRL_PLUS_CNT_RST_U0				0u
	/* Set this bit to pause unit0's counter. */
#define PCNT_CTRL_CNT_PAUSE_U0					1u
	/* Set this bit to clear unit1's counter. */
#define PCNT_CTRL_PLUS_CNT_RST_U1				2u
	/* Set this bit to pause unit1's counter. */
#define PCNT_CTRL_CNT_PAUSE_U1					3u
	/* Set this bit to clear unit2's counter. */
#define PCNT_CTRL_PLUS_CNT_RST_U2				4u
	/* Set this bit to pause unit2's counter. */
#define PCNT_CTRL_CNT_PAUSE_U2					5u
	/* Set this bit to clear unit3's counter. */
#define PCNT_CTRL_PLUS_CNT_RST_U3				6u
	/* Set this bit to pause unit3's counter. */
#define PCNT_CTRL_CNT_PAUSE_U3					7u
	/* Set this bit to clear unit4's counter. */
#define PCNT_CTRL_PLUS_CNT_RST_U4				8u
	/* Set this bit to pause unit4's counter. */
#define PCNT_CTRL_CNT_PAUSE_U4					9u
	/* Set this bit to clear unit5's counter. */
#define PCNT_CTRL_PLUS_CNT_RST_U5				10u
	/* Set this bit to pause unit5's counter. */
#define PCNT_CTRL_CNT_PAUSE_U5					11u
	/* Set this bit to clear unit6's counter. */
#define PCNT_CTRL_PLUS_CNT_RST_U6				12u
	/* Set this bit to pause unit6's counter. */
#define PCNT_CTRL_CNT_PAUSE_U6					13u
	/* Set this bit to clear unit7's counter. */
#define PCNT_CTRL_PLUS_CNT_RST_U7				14u
	/* Set this bit to pause unit7's counter. */
#define PCNT_CTRL_CNT_PAUSE_U7					15u
	/*  */
#define PCNT_CTRL_CLK_EN					16u

	/* 0xD0 */
	uint8_t RESERVED0[0xFC-0xD0];

	/* 0xFC:  */
	uint32_t volatile DATE;
	/*  */
#define PCNT_DATE_DATE_Msb					0u
#define PCNT_DATE_DATE_Lsb					31u

};


#define RMT ((struct mcu_rmt *)0x3FF56000)

struct mcu_rmt {

	/* 0x00:  */
	uint32_t volatile CH0DATA;

	/* 0x04:  */
	uint32_t volatile CH1DATA;

	/* 0x08:  */
	uint32_t volatile CH2DATA;

	/* 0x0C:  */
	uint32_t volatile CH3DATA;

	/* 0x10:  */
	uint32_t volatile CH4DATA;

	/* 0x14:  */
	uint32_t volatile CH5DATA;

	/* 0x18:  */
	uint32_t volatile CH6DATA;

	/* 0x1C:  */
	uint32_t volatile CH7DATA;

	/* 0x20:  */
	uint32_t volatile CH0CONF0;
	/* This register is used to configure the  frequency divider's factor in channel0. */
#define RMT_CH0CONF0_DIV_CNT_CH0_Msb				0u
#define RMT_CH0CONF0_DIV_CNT_CH0_Lsb				7u
	/* In receive mode when no edge is detected on the input signal for longer than reg_idle_thres_ch0 then the receive process is done. */
#define RMT_CH0CONF0_IDLE_THRES_CH0_Msb				8u
#define RMT_CH0CONF0_IDLE_THRES_CH0_Lsb				23u
	/* This register is used to configure the the amount of memory blocks allocated to channel0. */
#define RMT_CH0CONF0_MEM_SIZE_CH0_Msb				24u
#define RMT_CH0CONF0_MEM_SIZE_CH0_Lsb				27u
	/* This is the carrier modulation enable control bit for channel0. */
#define RMT_CH0CONF0_CARRIER_EN_CH0				28u
	/* This bit is used to configure the way carrier wave is modulated for  channel0.1'b1:transmit on low output level  1'b0:transmit  on high output level. */
#define RMT_CH0CONF0_CARRIER_OUT_LV_CH0				29u
	/* This bit is used to reduce power consumed by mem. */
#define RMT_CH0CONF0_MEM_PD					30u
	/* This bit  is used  to control clock.when software config RMT internal registers  it controls the register clock. */
#define RMT_CH0CONF0_CLK_EN					31u

	/* 0x24:  */
	uint32_t volatile CH0CONF1;
	/* Set this bit to start sending data for channel0. */
#define RMT_CH0CONF1_TX_START_CH0				0u
	/* Set this bit to enbale receving data for channel0. */
#define RMT_CH0CONF1_RX_EN_CH0					1u
	/* Set this bit to reset write ram address for channel0 by receiver access. */
#define RMT_CH0CONF1_MEM_WR_RST_CH0				2u
	/* Set this bit to reset read ram address for channel0 by transmitter access. */
#define RMT_CH0CONF1_MEM_RD_RST_CH0				3u
	/* Set this bit to reset W/R ram address for channel0 by apb fifo access */
#define RMT_CH0CONF1_APB_MEM_RST_CH0				4u
	/* This is the mark of channel0's ram usage right.1'b1：receiver uses the ram  0：transmitter uses the ram */
#define RMT_CH0CONF1_MEM_OWNER_CH0				5u
	/* Set this bit to continue sending  from the first data to the last data in channel0 again and again. */
#define RMT_CH0CONF1_TX_CONTI_MODE_CH0				6u
	/* This is the receive filter enable bit for channel0. */
#define RMT_CH0CONF1_RX_FILTER_EN_CH0				7u
	/* in receive mode  channel0 ignore input pulse when the pulse width is smaller then this value. */
#define RMT_CH0CONF1_RX_FILTER_THRES_CH0_Msb			8u
#define RMT_CH0CONF1_RX_FILTER_THRES_CH0_Lsb			15u
	/* This bit is used to reset divider in channel0. */
#define RMT_CH0CONF1_REF_CNT_RST_CH0				16u
	/* This bit is used to select base clock. */
#define RMT_CH0CONF1_REF_ALWAYS_ON_CH0				17u
	/* This bit configures the output signal's level for channel0 in IDLE state. */
#define RMT_CH0CONF1_IDLE_OUT_LV_CH0				18u
	/* This is the output enable control bit for channel0 in IDLE state. */
#define RMT_CH0CONF1_IDLE_OUT_EN_CH0				19u

	/* 0x28:  */
	uint32_t volatile CH1CONF0;
	/* This register is used to configure the  frequency divider's factor in channel1. */
#define RMT_CH1CONF0_DIV_CNT_CH1_Msb				0u
#define RMT_CH1CONF0_DIV_CNT_CH1_Lsb				7u
	/* This register is used to configure the the amount of memory blocks allocated to channel1. */
#define RMT_CH1CONF0_IDLE_THRES_CH1_Msb				8u
#define RMT_CH1CONF0_IDLE_THRES_CH1_Lsb				23u
	/* This register is used to configure the the amount of memory blocks allocated to channel1. */
#define RMT_CH1CONF0_MEM_SIZE_CH1_Msb				24u
#define RMT_CH1CONF0_MEM_SIZE_CH1_Lsb				27u
	/* This is the carrier modulation enable control bit for channel1. */
#define RMT_CH1CONF0_CARRIER_EN_CH1				28u
	/* This bit is used to configure the way carrier wave is modulated for  channel1.1'b1:transmit on low output level  1'b0:transmit  on high output level. */
#define RMT_CH1CONF0_CARRIER_OUT_LV_CH1				29u

	/* 0x2C:  */
	uint32_t volatile CH1CONF1;
	/* Set this bit to start sending data for channel1. */
#define RMT_CH1CONF1_TX_START_CH1				0u
	/* Set this bit to enbale receving data for channel1. */
#define RMT_CH1CONF1_RX_EN_CH1					1u
	/* Set this bit to reset write ram address for channel1 by receiver access. */
#define RMT_CH1CONF1_MEM_WR_RST_CH1				2u
	/* Set this bit to reset read ram address for channel1 by transmitter access. */
#define RMT_CH1CONF1_MEM_RD_RST_CH1				3u
	/* Set this bit to reset W/R ram address for channel1 by apb fifo access */
#define RMT_CH1CONF1_APB_MEM_RST_CH1				4u
	/* This is the mark of channel1's ram usage right.1'b1：receiver uses the ram  0：transmitter uses the ram */
#define RMT_CH1CONF1_MEM_OWNER_CH1				5u
	/* Set this bit to continue sending  from the first data to the last data in channel1 again and again. */
#define RMT_CH1CONF1_TX_CONTI_MODE_CH1				6u
	/* This is the receive filter enable bit for channel1. */
#define RMT_CH1CONF1_RX_FILTER_EN_CH1				7u
	/* in receive mode  channel1 ignore input pulse when the pulse width is smaller then this value. */
#define RMT_CH1CONF1_RX_FILTER_THRES_CH1_Msb			8u
#define RMT_CH1CONF1_RX_FILTER_THRES_CH1_Lsb			15u
	/* This bit is used to reset divider in channel1. */
#define RMT_CH1CONF1_REF_CNT_RST_CH1				16u
	/* This bit is used to select base clock. */
#define RMT_CH1CONF1_REF_ALWAYS_ON_CH1				17u
	/* This bit configures the output signal's level for channel1 in IDLE state. */
#define RMT_CH1CONF1_IDLE_OUT_LV_CH1				18u
	/* This is the output enable control bit for channel1 in IDLE state. */
#define RMT_CH1CONF1_IDLE_OUT_EN_CH1				19u

	/* 0x30:  */
	uint32_t volatile CH2CONF0;
	/* This register is used to configure the  frequency divider's factor in channel2. */
#define RMT_CH2CONF0_DIV_CNT_CH2_Msb				0u
#define RMT_CH2CONF0_DIV_CNT_CH2_Lsb				7u
	/* In receive mode when the counter's value is bigger than reg_idle_thres_ch2 then the receive process is done. */
#define RMT_CH2CONF0_IDLE_THRES_CH2_Msb				8u
#define RMT_CH2CONF0_IDLE_THRES_CH2_Lsb				23u
	/* This register is used to configure the the amount of memory blocks allocated to channel2. */
#define RMT_CH2CONF0_MEM_SIZE_CH2_Msb				24u
#define RMT_CH2CONF0_MEM_SIZE_CH2_Lsb				27u
	/* This is the carrier modulation enable control bit for channel2. */
#define RMT_CH2CONF0_CARRIER_EN_CH2				28u
	/* This bit is used to configure carrier wave's position for channel2.1'b1:add on low level  1'b0:add  on high level. */
#define RMT_CH2CONF0_CARRIER_OUT_LV_CH2				29u

	/* 0x34:  */
	uint32_t volatile CH2CONF1;
	/* Set this bit to start sending data for channel2. */
#define RMT_CH2CONF1_TX_START_CH2				0u
	/* Set this bit to enbale receving data for channel2. */
#define RMT_CH2CONF1_RX_EN_CH2					1u
	/* Set this bit to reset write ram address for channel2 by receiver access. */
#define RMT_CH2CONF1_MEM_WR_RST_CH2				2u
	/* Set this bit to reset read ram address for channel2 by transmitter access. */
#define RMT_CH2CONF1_MEM_RD_RST_CH2				3u
	/* Set this bit to reset W/R ram address for channel2 by apb fifo access */
#define RMT_CH2CONF1_APB_MEM_RST_CH2				4u
	/* This is the mark of channel2's ram usage right.1'b1：receiver uses the ram  0：transmitter uses the ram */
#define RMT_CH2CONF1_MEM_OWNER_CH2				5u
	/* Set this bit to continue sending  from the first data to the last data in channel2. */
#define RMT_CH2CONF1_TX_CONTI_MODE_CH2				6u
	/* This is the receive filter enable bit for channel2. */
#define RMT_CH2CONF1_RX_FILTER_EN_CH2				7u
	/* in receive mode  channel2 ignore input pulse when the pulse width is smaller then this value. */
#define RMT_CH2CONF1_RX_FILTER_THRES_CH2_Msb			8u
#define RMT_CH2CONF1_RX_FILTER_THRES_CH2_Lsb			15u
	/* This bit is used to reset divider in channel2. */
#define RMT_CH2CONF1_REF_CNT_RST_CH2				16u
	/* This bit is used to select base clock. */
#define RMT_CH2CONF1_REF_ALWAYS_ON_CH2				17u
	/* This bit configures the output signal's level for channel2 in IDLE state. */
#define RMT_CH2CONF1_IDLE_OUT_LV_CH2				18u
	/* This is the output enable control bit for channel2 in IDLE state. */
#define RMT_CH2CONF1_IDLE_OUT_EN_CH2				19u

	/* 0x38:  */
	uint32_t volatile CH3CONF0;
	/* This register is used to configure the  frequency divider's factor in channel3. */
#define RMT_CH3CONF0_DIV_CNT_CH3_Msb				0u
#define RMT_CH3CONF0_DIV_CNT_CH3_Lsb				7u
	/* In receive mode when the counter's value is bigger than reg_idle_thres_ch3 then the receive process is done. */
#define RMT_CH3CONF0_IDLE_THRES_CH3_Msb				8u
#define RMT_CH3CONF0_IDLE_THRES_CH3_Lsb				23u
	/* This register is used to configure the the amount of memory blocks allocated to channel3. */
#define RMT_CH3CONF0_MEM_SIZE_CH3_Msb				24u
#define RMT_CH3CONF0_MEM_SIZE_CH3_Lsb				27u
	/* This is the carrier modulation enable control bit for channel3. */
#define RMT_CH3CONF0_CARRIER_EN_CH3				28u
	/* This bit is used to configure carrier wave's position for channel3.1'b1:add on low level  1'b0:add  on high level. */
#define RMT_CH3CONF0_CARRIER_OUT_LV_CH3				29u

	/* 0x3C:  */
	uint32_t volatile CH3CONF1;
	/* Set this bit to start sending data for channel3. */
#define RMT_CH3CONF1_TX_START_CH3				0u
	/* Set this bit to enbale receving data for channel3. */
#define RMT_CH3CONF1_RX_EN_CH3					1u
	/* Set this bit to reset write ram address for channel3 by receiver access. */
#define RMT_CH3CONF1_MEM_WR_RST_CH3				2u
	/* Set this bit to reset read ram address for channel3 by transmitter access. */
#define RMT_CH3CONF1_MEM_RD_RST_CH3				3u
	/* Set this bit to reset W/R ram address for channel3 by apb fifo access */
#define RMT_CH3CONF1_APB_MEM_RST_CH3				4u
	/* This is the mark of channel3's ram usage right.1'b1：receiver uses the ram  0：transmitter uses the ram */
#define RMT_CH3CONF1_MEM_OWNER_CH3				5u
	/* Set this bit to continue sending  from the first data to the last data in channel3. */
#define RMT_CH3CONF1_TX_CONTI_MODE_CH3				6u
	/* This is the receive filter enable bit for channel3. */
#define RMT_CH3CONF1_RX_FILTER_EN_CH3				7u
	/* in receive mode  channel3 ignore input pulse when the pulse width is smaller then this value. */
#define RMT_CH3CONF1_RX_FILTER_THRES_CH3_Msb			8u
#define RMT_CH3CONF1_RX_FILTER_THRES_CH3_Lsb			15u
	/* This bit is used to reset divider in channel3. */
#define RMT_CH3CONF1_REF_CNT_RST_CH3				16u
	/* This bit is used to select base clock. */
#define RMT_CH3CONF1_REF_ALWAYS_ON_CH3				17u
	/* This bit configures the output signal's level for channel3 in IDLE state. */
#define RMT_CH3CONF1_IDLE_OUT_LV_CH3				18u
	/* This is the output enable control bit for channel3 in IDLE state. */
#define RMT_CH3CONF1_IDLE_OUT_EN_CH3				19u

	/* 0x40:  */
	uint32_t volatile CH4CONF0;
	/* This register is used to configure the  frequency divider's factor in channel4. */
#define RMT_CH4CONF0_DIV_CNT_CH4_Msb				0u
#define RMT_CH4CONF0_DIV_CNT_CH4_Lsb				7u
	/* In receive mode when the counter's value is bigger than reg_idle_thres_ch4 then the receive process is done. */
#define RMT_CH4CONF0_IDLE_THRES_CH4_Msb				8u
#define RMT_CH4CONF0_IDLE_THRES_CH4_Lsb				23u
	/* This register is used to configure the the amount of memory blocks allocated to channel4. */
#define RMT_CH4CONF0_MEM_SIZE_CH4_Msb				24u
#define RMT_CH4CONF0_MEM_SIZE_CH4_Lsb				27u
	/* This is the carrier modulation enable control bit for channel4. */
#define RMT_CH4CONF0_CARRIER_EN_CH4				28u
	/* This bit is used to configure carrier wave's position for channel4.1'b1:add on low level  1'b0:add  on high level. */
#define RMT_CH4CONF0_CARRIER_OUT_LV_CH4				29u

	/* 0x44:  */
	uint32_t volatile CH4CONF1;
	/* Set this bit to start sending data for channel4. */
#define RMT_CH4CONF1_TX_START_CH4				0u
	/* Set this bit to enbale receving data for channel4. */
#define RMT_CH4CONF1_RX_EN_CH4					1u
	/* Set this bit to reset write ram address for channel4 by receiver access. */
#define RMT_CH4CONF1_MEM_WR_RST_CH4				2u
	/* Set this bit to reset read ram address for channel4 by transmitter access. */
#define RMT_CH4CONF1_MEM_RD_RST_CH4				3u
	/* Set this bit to reset W/R ram address for channel4 by apb fifo access */
#define RMT_CH4CONF1_APB_MEM_RST_CH4				4u
	/* This is the mark of channel4's ram usage right.1'b1：receiver uses the ram  0：transmitter uses the ram */
#define RMT_CH4CONF1_MEM_OWNER_CH4				5u
	/* Set this bit to continue sending  from the first data to the last data in channel4. */
#define RMT_CH4CONF1_TX_CONTI_MODE_CH4				6u
	/* This is the receive filter enable bit for channel4. */
#define RMT_CH4CONF1_RX_FILTER_EN_CH4				7u
	/* in receive mode  channel4 ignore input pulse when the pulse width is smaller then this value. */
#define RMT_CH4CONF1_RX_FILTER_THRES_CH4_Msb			8u
#define RMT_CH4CONF1_RX_FILTER_THRES_CH4_Lsb			15u
	/* This bit is used to reset divider in channel4. */
#define RMT_CH4CONF1_REF_CNT_RST_CH4				16u
	/* This bit is used to select base clock. */
#define RMT_CH4CONF1_REF_ALWAYS_ON_CH4				17u
	/* This bit configures the output signal's level for channel4 in IDLE state. */
#define RMT_CH4CONF1_IDLE_OUT_LV_CH4				18u
	/* This is the output enable control bit for channel4 in IDLE state. */
#define RMT_CH4CONF1_IDLE_OUT_EN_CH4				19u

	/* 0x48:  */
	uint32_t volatile CH5CONF0;
	/* This register is used to configure the  frequency divider's factor in channel5. */
#define RMT_CH5CONF0_DIV_CNT_CH5_Msb				0u
#define RMT_CH5CONF0_DIV_CNT_CH5_Lsb				7u
	/* In receive mode when the counter's value is bigger than reg_idle_thres_ch5 then the receive process is done. */
#define RMT_CH5CONF0_IDLE_THRES_CH5_Msb				8u
#define RMT_CH5CONF0_IDLE_THRES_CH5_Lsb				23u
	/* This register is used to configure the the amount of memory blocks allocated to channel5. */
#define RMT_CH5CONF0_MEM_SIZE_CH5_Msb				24u
#define RMT_CH5CONF0_MEM_SIZE_CH5_Lsb				27u
	/* This is the carrier modulation enable control bit for channel5. */
#define RMT_CH5CONF0_CARRIER_EN_CH5				28u
	/* This bit is used to configure carrier wave's position for channel5.1'b1:add on low level  1'b0:add  on high level. */
#define RMT_CH5CONF0_CARRIER_OUT_LV_CH5				29u

	/* 0x4C:  */
	uint32_t volatile CH5CONF1;
	/* Set this bit to start sending data for channel5. */
#define RMT_CH5CONF1_TX_START_CH5				0u
	/* Set this bit to enbale receving data for channel5. */
#define RMT_CH5CONF1_RX_EN_CH5					1u
	/* Set this bit to reset write ram address for channel5 by receiver access. */
#define RMT_CH5CONF1_MEM_WR_RST_CH5				2u
	/* Set this bit to reset read ram address for channel5 by transmitter access. */
#define RMT_CH5CONF1_MEM_RD_RST_CH5				3u
	/* Set this bit to reset W/R ram address for channel5 by apb fifo access */
#define RMT_CH5CONF1_APB_MEM_RST_CH5				4u
	/* This is the mark of channel5's ram usage right.1'b1：receiver uses the ram  0：transmitter uses the ram */
#define RMT_CH5CONF1_MEM_OWNER_CH5				5u
	/* Set this bit to continue sending  from the first data to the last data in channel5. */
#define RMT_CH5CONF1_TX_CONTI_MODE_CH5				6u
	/* This is the receive filter enable bit for channel5. */
#define RMT_CH5CONF1_RX_FILTER_EN_CH5				7u
	/* in receive mode  channel5 ignore input pulse when the pulse width is smaller then this value. */
#define RMT_CH5CONF1_RX_FILTER_THRES_CH5_Msb			8u
#define RMT_CH5CONF1_RX_FILTER_THRES_CH5_Lsb			15u
	/* This bit is used to reset divider in channel5. */
#define RMT_CH5CONF1_REF_CNT_RST_CH5				16u
	/* This bit is used to select base clock. */
#define RMT_CH5CONF1_REF_ALWAYS_ON_CH5				17u
	/* This bit configures the output signal's level for channel5 in IDLE state. */
#define RMT_CH5CONF1_IDLE_OUT_LV_CH5				18u
	/* This is the output enable control bit for channel5 in IDLE state. */
#define RMT_CH5CONF1_IDLE_OUT_EN_CH5				19u

	/* 0x50:  */
	uint32_t volatile CH6CONF0;
	/* This register is used to configure the  frequency divider's factor in channel6. */
#define RMT_CH6CONF0_DIV_CNT_CH6_Msb				0u
#define RMT_CH6CONF0_DIV_CNT_CH6_Lsb				7u
	/* In receive mode when the counter's value is bigger than reg_idle_thres_ch6 then the receive process is done. */
#define RMT_CH6CONF0_IDLE_THRES_CH6_Msb				8u
#define RMT_CH6CONF0_IDLE_THRES_CH6_Lsb				23u
	/* This register is used to configure the the amount of memory blocks allocated to channel6. */
#define RMT_CH6CONF0_MEM_SIZE_CH6_Msb				24u
#define RMT_CH6CONF0_MEM_SIZE_CH6_Lsb				27u
	/* This is the carrier modulation enable control bit for channel6. */
#define RMT_CH6CONF0_CARRIER_EN_CH6				28u
	/* This bit is used to configure carrier wave's position for channel6.1'b1:add on low level  1'b0:add  on high level. */
#define RMT_CH6CONF0_CARRIER_OUT_LV_CH6				29u

	/* 0x54:  */
	uint32_t volatile CH6CONF1;
	/* Set this bit to start sending data for channel6. */
#define RMT_CH6CONF1_TX_START_CH6				0u
	/* Set this bit to enbale receving data for channel6. */
#define RMT_CH6CONF1_RX_EN_CH6					1u
	/* Set this bit to reset write ram address for channel6 by receiver access. */
#define RMT_CH6CONF1_MEM_WR_RST_CH6				2u
	/* Set this bit to reset read ram address for channel6 by transmitter access. */
#define RMT_CH6CONF1_MEM_RD_RST_CH6				3u
	/* Set this bit to reset W/R ram address for channel6 by apb fifo access */
#define RMT_CH6CONF1_APB_MEM_RST_CH6				4u
	/* This is the mark of channel6's ram usage right.1'b1：receiver uses the ram  0：transmitter uses the ram */
#define RMT_CH6CONF1_MEM_OWNER_CH6				5u
	/* Set this bit to continue sending  from the first data to the last data in channel6. */
#define RMT_CH6CONF1_TX_CONTI_MODE_CH6				6u
	/* This is the receive filter enable bit for channel6. */
#define RMT_CH6CONF1_RX_FILTER_EN_CH6				7u
	/* in receive mode  channel6 ignore input pulse when the pulse width is smaller then this value. */
#define RMT_CH6CONF1_RX_FILTER_THRES_CH6_Msb			8u
#define RMT_CH6CONF1_RX_FILTER_THRES_CH6_Lsb			15u
	/* This bit is used to reset divider in channel6. */
#define RMT_CH6CONF1_REF_CNT_RST_CH6				16u
	/* This bit is used to select base clock. */
#define RMT_CH6CONF1_REF_ALWAYS_ON_CH6				17u
	/* This bit configures the output signal's level for channel6 in IDLE state. */
#define RMT_CH6CONF1_IDLE_OUT_LV_CH6				18u
	/* This is the output enable control bit for channel6 in IDLE state. */
#define RMT_CH6CONF1_IDLE_OUT_EN_CH6				19u

	/* 0x58:  */
	uint32_t volatile CH7CONF0;
	/* This register is used to configure the  frequency divider's factor in channel7. */
#define RMT_CH7CONF0_DIV_CNT_CH7_Msb				0u
#define RMT_CH7CONF0_DIV_CNT_CH7_Lsb				7u
	/* In receive mode when the counter's value is bigger than reg_idle_thres_ch7 then the receive process is done. */
#define RMT_CH7CONF0_IDLE_THRES_CH7_Msb				8u
#define RMT_CH7CONF0_IDLE_THRES_CH7_Lsb				23u
	/* This register is used to configure the the amount of memory blocks allocated to channel7. */
#define RMT_CH7CONF0_MEM_SIZE_CH7_Msb				24u
#define RMT_CH7CONF0_MEM_SIZE_CH7_Lsb				27u
	/* This is the carrier modulation enable control bit for channel7. */
#define RMT_CH7CONF0_CARRIER_EN_CH7				28u
	/* This bit is used to configure carrier wave's position for channel7.1'b1:add on low level  1'b0:add  on high level. */
#define RMT_CH7CONF0_CARRIER_OUT_LV_CH7				29u

	/* 0x5C:  */
	uint32_t volatile CH7CONF1;
	/* Set this bit to start sending data for channel7. */
#define RMT_CH7CONF1_TX_START_CH7				0u
	/* Set this bit to enbale receving data for channel7. */
#define RMT_CH7CONF1_RX_EN_CH7					1u
	/* Set this bit to reset write ram address for channel7 by receiver access. */
#define RMT_CH7CONF1_MEM_WR_RST_CH7				2u
	/* Set this bit to reset read ram address for channel7 by transmitter access. */
#define RMT_CH7CONF1_MEM_RD_RST_CH7				3u
	/* Set this bit to reset W/R ram address for channel7 by apb fifo access */
#define RMT_CH7CONF1_APB_MEM_RST_CH7				4u
	/* This is the mark of channel7's ram usage right.1'b1：receiver uses the ram  0：transmitter uses the ram */
#define RMT_CH7CONF1_MEM_OWNER_CH7				5u
	/* Set this bit to continue sending  from the first data to the last data in channel7. */
#define RMT_CH7CONF1_TX_CONTI_MODE_CH7				6u
	/* This is the receive filter enable bit for channel7. */
#define RMT_CH7CONF1_RX_FILTER_EN_CH7				7u
	/* in receive mode  channel7 ignore input pulse when the pulse width is smaller then this value. */
#define RMT_CH7CONF1_RX_FILTER_THRES_CH7_Msb			8u
#define RMT_CH7CONF1_RX_FILTER_THRES_CH7_Lsb			15u
	/* This bit is used to reset divider in channel7. */
#define RMT_CH7CONF1_REF_CNT_RST_CH7				16u
	/* This bit is used to select base clock. */
#define RMT_CH7CONF1_REF_ALWAYS_ON_CH7				17u
	/* This bit configures the output signal's level for channel7 in IDLE state. */
#define RMT_CH7CONF1_IDLE_OUT_LV_CH7				18u
	/* This is the output enable control bit for channel6 in IDLE state. */
#define RMT_CH7CONF1_IDLE_OUT_EN_CH7				19u

	/* 0x60:  */
	uint32_t volatile CH0STATUS;
	/* The status for channel0 */
#define RMT_CH0STATUS_STATUS_CH0_Msb				0u
#define RMT_CH0STATUS_STATUS_CH0_Lsb				31u
	/* The current memory read address of channel0. */
#define RMT_CH0STATUS_MEM_WADDR_EX_CH0_Msb			0u
#define RMT_CH0STATUS_MEM_WADDR_EX_CH0_Lsb			9u
	/* The current memory write address of channel0. */
#define RMT_CH0STATUS_MEM_RADDR_EX_CH0_Msb			12u
#define RMT_CH0STATUS_MEM_RADDR_EX_CH0_Lsb			21u
	/* The channel0 state machine status register.3'h0 : idle, 3'h1 : send, 3'h2 : read memory, 3'h3 : receive, 3'h4 : wait. */
#define RMT_CH0STATUS_STATE_CH0_Msb				24u
#define RMT_CH0STATUS_STATE_CH0_Lsb				26u
	/* When channel0 is configured for receive mode, this bit will turn to high level if rmt_mem_owner register is not set to 1. */
#define RMT_CH0STATUS_MEM_OWNER_ERR_CH0				27u
	/* The memory full status bit for channel0 turns to high level when mem_waddr_ex is greater than or equal to the configuration range. */
#define RMT_CH0STATUS_MEM_FULL_CH0				28u
	/* The memory empty status bit for channel0. */
#define RMT_CH0STATUS_MEM_EMPTY_CH0				29u
	/* The apb write memory status bit for channel0 turns to high level when the apb write address exceeds the configuration range. */
#define RMT_CH0STATUS_APB_MEM_WR_ERR_CH0			30u
	/* The apb read memory status bit for channel0 turns to high level when the apb read address exceeds the configuration range. */
#define RMT_CH0STATUS_APB_MEM_RD_ERR_CH0			31u

	/* 0x64:  */
	uint32_t volatile CH1STATUS;
	/* The status for channel1 */
#define RMT_CH1STATUS_STATUS_CH1_Msb				0u
#define RMT_CH1STATUS_STATUS_CH1_Lsb				31u
	/* The current memory read address of channel1. */
#define RMT_CH1STATUS_MEM_WADDR_EX_CH1_Msb			0u
#define RMT_CH1STATUS_MEM_WADDR_EX_CH1_Lsb			9u
	/* The current memory write address of channel1. */
#define RMT_CH1STATUS_MEM_RADDR_EX_CH1_Msb			12u
#define RMT_CH1STATUS_MEM_RADDR_EX_CH1_Lsb			21u
	/* The channel1 state machine status register.3'h0 : idle, 3'h1 : send, 3'h2 : read memory, 3'h3 : receive, 3'h4 : wait. */
#define RMT_CH1STATUS_STATE_CH1_Msb				24u
#define RMT_CH1STATUS_STATE_CH1_Lsb				26u
	/* When channel1 is configured for receive mode, this bit will turn to high level if rmt_mem_owner register is not set to 1. */
#define RMT_CH1STATUS_MEM_OWNER_ERR_CH1				27u
	/* The memory full status bit for channel1 turns to high level when mem_waddr_ex is greater than or equal to the configuration range. */
#define RMT_CH1STATUS_MEM_FULL_CH1				28u
	/* The memory empty status bit for channel1. */
#define RMT_CH1STATUS_MEM_EMPTY_CH1				29u
	/* The apb write memory status bit for channel1 turns to high level when the apb write address exceeds the configuration range. */
#define RMT_CH1STATUS_APB_MEM_WR_ERR_CH1			30u
	/* The apb read memory status bit for channel1 turns to high level when the apb read address exceeds the configuration range. */
#define RMT_CH1STATUS_APB_MEM_RD_ERR_CH1			31u

	/* 0x68:  */
	uint32_t volatile CH2STATUS;
	/* The status for channel2 */
#define RMT_CH2STATUS_STATUS_CH2_Msb				0u
#define RMT_CH2STATUS_STATUS_CH2_Lsb				31u
	/* The current memory read address of channel2. */
#define RMT_CH2STATUS_MEM_WADDR_EX_CH2_Msb			0u
#define RMT_CH2STATUS_MEM_WADDR_EX_CH2_Lsb			9u
	/* The current memory write address of channel2. */
#define RMT_CH2STATUS_MEM_RADDR_EX_CH2_Msb			12u
#define RMT_CH2STATUS_MEM_RADDR_EX_CH2_Lsb			21u
	/* The channel2 state machine status register.3'h0 : idle, 3'h1 : send, 3'h2 : read memory, 3'h3 : receive, 3'h4 : wait. */
#define RMT_CH2STATUS_STATE_CH2_Msb				24u
#define RMT_CH2STATUS_STATE_CH2_Lsb				26u
	/* When channel2 is configured for receive mode, this bit will turn to high level if rmt_mem_owner register is not set to 1. */
#define RMT_CH2STATUS_MEM_OWNER_ERR_CH2				27u
	/* The memory full status bit for channel2 turns to high level when mem_waddr_ex is greater than or equal to the configuration range. */
#define RMT_CH2STATUS_MEM_FULL_CH2				28u
	/* The memory empty status bit for channel2. */
#define RMT_CH2STATUS_MEM_EMPTY_CH2				29u
	/* The apb write memory status bit for channel2 turns to high level when the apb write address exceeds the configuration range. */
#define RMT_CH2STATUS_APB_MEM_WR_ERR_CH2			30u
	/* The apb read memory status bit for channel2 turns to high level when the apb read address exceeds the configuration range. */
#define RMT_CH2STATUS_APB_MEM_RD_ERR_CH2			31u

	/* 0x6C:  */
	uint32_t volatile CH3STATUS;
	/* The status for channel3 */
#define RMT_CH3STATUS_STATUS_CH3_Msb				0u
#define RMT_CH3STATUS_STATUS_CH3_Lsb				31u
	/* The current memory read address of channel3. */
#define RMT_CH3STATUS_MEM_WADDR_EX_CH3_Msb			0u
#define RMT_CH3STATUS_MEM_WADDR_EX_CH3_Lsb			9u
	/* The current memory write address of channel3. */
#define RMT_CH3STATUS_MEM_RADDR_EX_CH3_Msb			12u
#define RMT_CH3STATUS_MEM_RADDR_EX_CH3_Lsb			21u
	/* The channel3 state machine status register.3'h0 : idle, 3'h1 : send, 3'h2 : read memory, 3'h3 : receive, 3'h4 : wait. */
#define RMT_CH3STATUS_STATE_CH3_Msb				24u
#define RMT_CH3STATUS_STATE_CH3_Lsb				26u
	/* When channel3 is configured for receive mode, this bit will turn to high level if rmt_mem_owner register is not set to 1. */
#define RMT_CH3STATUS_MEM_OWNER_ERR_CH3				27u
	/* The memory full status bit for channel3 turns to high level when mem_waddr_ex is greater than or equal to the configuration range. */
#define RMT_CH3STATUS_MEM_FULL_CH3				28u
	/* The memory empty status bit for channel3. */
#define RMT_CH3STATUS_MEM_EMPTY_CH3				29u
	/* The apb write memory status bit for channel3 turns to high level when the apb write address exceeds the configuration range. */
#define RMT_CH3STATUS_APB_MEM_WR_ERR_CH3			30u
	/* The apb read memory status bit for channel3 turns to high level when the apb read address exceeds the configuration range. */
#define RMT_CH3STATUS_APB_MEM_RD_ERR_CH3			31u

	/* 0x70:  */
	uint32_t volatile CH4STATUS;
	/* The status for channel4 */
#define RMT_CH4STATUS_STATUS_CH4_Msb				0u
#define RMT_CH4STATUS_STATUS_CH4_Lsb				31u
	/* The current memory read address of channel4. */
#define RMT_CH4STATUS_MEM_WADDR_EX_CH4_Msb			0u
#define RMT_CH4STATUS_MEM_WADDR_EX_CH4_Lsb			9u
	/* The current memory write address of channel4. */
#define RMT_CH4STATUS_MEM_RADDR_EX_CH4_Msb			12u
#define RMT_CH4STATUS_MEM_RADDR_EX_CH4_Lsb			21u
	/* The channel4 state machine status register.3'h0 : idle, 3'h1 : send, 3'h2 : read memory, 3'h3 : receive, 3'h4 : wait. */
#define RMT_CH4STATUS_STATE_CH4_Msb				24u
#define RMT_CH4STATUS_STATE_CH4_Lsb				26u
	/* When channel4 is configured for receive mode, this bit will turn to high level if rmt_mem_owner register is not set to 1. */
#define RMT_CH4STATUS_MEM_OWNER_ERR_CH4				27u
	/* The memory full status bit for channel4 turns to high level when mem_waddr_ex is greater than or equal to the configuration range. */
#define RMT_CH4STATUS_MEM_FULL_CH4				28u
	/* The memory empty status bit for channel4. */
#define RMT_CH4STATUS_MEM_EMPTY_CH4				29u
	/* The apb write memory status bit for channel4 turns to high level when the apb write address exceeds the configuration range. */
#define RMT_CH4STATUS_APB_MEM_WR_ERR_CH4			30u
	/* The apb read memory status bit for channel4 turns to high level when the apb read address exceeds the configuration range. */
#define RMT_CH4STATUS_APB_MEM_RD_ERR_CH4			31u

	/* 0x74:  */
	uint32_t volatile CH5STATUS;
	/* The status for channel5 */
#define RMT_CH5STATUS_STATUS_CH5_Msb				0u
#define RMT_CH5STATUS_STATUS_CH5_Lsb				31u
	/* The current memory read address of channel5. */
#define RMT_CH5STATUS_MEM_WADDR_EX_CH5_Msb			0u
#define RMT_CH5STATUS_MEM_WADDR_EX_CH5_Lsb			9u
	/* The current memory write address of channel5. */
#define RMT_CH5STATUS_MEM_RADDR_EX_CH5_Msb			12u
#define RMT_CH5STATUS_MEM_RADDR_EX_CH5_Lsb			21u
	/* The channel5 state machine status register.3'h0 : idle, 3'h1 : send, 3'h2 : read memory, 3'h3 : receive, 3'h4 : wait. */
#define RMT_CH5STATUS_STATE_CH5_Msb				24u
#define RMT_CH5STATUS_STATE_CH5_Lsb				26u
	/* When channel5 is configured for receive mode, this bit will turn to high level if rmt_mem_owner register is not set to 1. */
#define RMT_CH5STATUS_MEM_OWNER_ERR_CH5				27u
	/* The memory full status bit for channel5 turns to high level when mem_waddr_ex is greater than or equal to the configuration range. */
#define RMT_CH5STATUS_MEM_FULL_CH5				28u
	/* The memory empty status bit for channel5. */
#define RMT_CH5STATUS_MEM_EMPTY_CH5				29u
	/* The apb write memory status bit for channel5 turns to high level when the apb write address exceeds the configuration range. */
#define RMT_CH5STATUS_APB_MEM_WR_ERR_CH5			30u
	/* The apb read memory status bit for channel5 turns to high level when the apb read address exceeds the configuration range. */
#define RMT_CH5STATUS_APB_MEM_RD_ERR_CH5			31u

	/* 0x78:  */
	uint32_t volatile CH6STATUS;
	/* The status for channel6 */
#define RMT_CH6STATUS_STATUS_CH6_Msb				0u
#define RMT_CH6STATUS_STATUS_CH6_Lsb				31u
	/* The current memory read address of channel6. */
#define RMT_CH6STATUS_MEM_WADDR_EX_CH6_Msb			0u
#define RMT_CH6STATUS_MEM_WADDR_EX_CH6_Lsb			9u
	/* The current memory write address of channel6. */
#define RMT_CH6STATUS_MEM_RADDR_EX_CH6_Msb			12u
#define RMT_CH6STATUS_MEM_RADDR_EX_CH6_Lsb			21u
	/* The channel6 state machine status register.3'h0 : idle, 3'h1 : send, 3'h2 : read memory, 3'h3 : receive, 3'h4 : wait. */
#define RMT_CH6STATUS_STATE_CH6_Msb				24u
#define RMT_CH6STATUS_STATE_CH6_Lsb				26u
	/* When channel6 is configured for receive mode, this bit will turn to high level if rmt_mem_owner register is not set to 1. */
#define RMT_CH6STATUS_MEM_OWNER_ERR_CH6				27u
	/* The memory full status bit for channel6 turns to high level when mem_waddr_ex is greater than or equal to the configuration range. */
#define RMT_CH6STATUS_MEM_FULL_CH6				28u
	/* The memory empty status bit for channel6. */
#define RMT_CH6STATUS_MEM_EMPTY_CH6				29u
	/* The apb write memory status bit for channel6 turns to high level when the apb write address exceeds the configuration range. */
#define RMT_CH6STATUS_APB_MEM_WR_ERR_CH6			30u
	/* The apb read memory status bit for channel6 turns to high level when the apb read address exceeds the configuration range. */
#define RMT_CH6STATUS_APB_MEM_RD_ERR_CH6			31u

	/* 0x7C:  */
	uint32_t volatile CH7STATUS;
	/* The status for channel7 */
#define RMT_CH7STATUS_STATUS_CH7_Msb				0u
#define RMT_CH7STATUS_STATUS_CH7_Lsb				31u
	/* The current memory read address of channel7. */
#define RMT_CH7STATUS_MEM_WADDR_EX_CH7_Msb			0u
#define RMT_CH7STATUS_MEM_WADDR_EX_CH7_Lsb			9u
	/* The current memory write address of channel7. */
#define RMT_CH7STATUS_MEM_RADDR_EX_CH7_Msb			12u
#define RMT_CH7STATUS_MEM_RADDR_EX_CH7_Lsb			21u
	/* The channel7 state machine status register.3'h0 : idle, 3'h1 : send, 3'h2 : read memory, 3'h3 : receive, 3'h4 : wait. */
#define RMT_CH7STATUS_STATE_CH7_Msb				24u
#define RMT_CH7STATUS_STATE_CH7_Lsb				26u
	/* When channel7 is configured for receive mode, this bit will turn to high level if rmt_mem_owner register is not set to 1. */
#define RMT_CH7STATUS_MEM_OWNER_ERR_CH7				27u
	/* The memory full status bit for channel7 turns to high level when mem_waddr_ex is greater than or equal to the configuration range. */
#define RMT_CH7STATUS_MEM_FULL_CH7				28u
	/* The memory empty status bit for channel7. */
#define RMT_CH7STATUS_MEM_EMPTY_CH7				29u
	/* The apb write memory status bit for channel7 turns to high level when the apb write address exceeds the configuration range. */
#define RMT_CH7STATUS_APB_MEM_WR_ERR_CH7			30u
	/* The apb read memory status bit for channel7 turns to high level when the apb read address exceeds the configuration range. */
#define RMT_CH7STATUS_APB_MEM_RD_ERR_CH7			31u

	/* 0x80:  */
	uint32_t volatile CH0ADDR;
	/* The ram relative address in channel0 by apb fifo access */
#define RMT_CH0ADDR_APB_MEM_ADDR_CH0_Msb			0u
#define RMT_CH0ADDR_APB_MEM_ADDR_CH0_Lsb			31u

	/* 0x84:  */
	uint32_t volatile CH1ADDR;
	/* The ram relative address in channel1 by apb fifo access */
#define RMT_CH1ADDR_APB_MEM_ADDR_CH1_Msb			0u
#define RMT_CH1ADDR_APB_MEM_ADDR_CH1_Lsb			31u

	/* 0x88:  */
	uint32_t volatile CH2ADDR;
	/* The ram relative address in channel2 by apb fifo access */
#define RMT_CH2ADDR_APB_MEM_ADDR_CH2_Msb			0u
#define RMT_CH2ADDR_APB_MEM_ADDR_CH2_Lsb			31u

	/* 0x8C:  */
	uint32_t volatile CH3ADDR;
	/* The ram relative address in channel3 by apb fifo access */
#define RMT_CH3ADDR_APB_MEM_ADDR_CH3_Msb			0u
#define RMT_CH3ADDR_APB_MEM_ADDR_CH3_Lsb			31u

	/* 0x90:  */
	uint32_t volatile CH4ADDR;
	/* The ram relative address in channel4 by apb fifo access */
#define RMT_CH4ADDR_APB_MEM_ADDR_CH4_Msb			0u
#define RMT_CH4ADDR_APB_MEM_ADDR_CH4_Lsb			31u

	/* 0x94:  */
	uint32_t volatile CH5ADDR;
	/* The ram relative address in channel5 by apb fifo access */
#define RMT_CH5ADDR_APB_MEM_ADDR_CH5_Msb			0u
#define RMT_CH5ADDR_APB_MEM_ADDR_CH5_Lsb			31u

	/* 0x98:  */
	uint32_t volatile CH6ADDR;
	/* The ram relative address in channel6 by apb fifo access */
#define RMT_CH6ADDR_APB_MEM_ADDR_CH6_Msb			0u
#define RMT_CH6ADDR_APB_MEM_ADDR_CH6_Lsb			31u

	/* 0x9C:  */
	uint32_t volatile CH7ADDR;
	/* The ram relative address in channel7 by apb fifo access */
#define RMT_CH7ADDR_APB_MEM_ADDR_CH7_Msb			0u
#define RMT_CH7ADDR_APB_MEM_ADDR_CH7_Lsb			31u

	/* 0xA0:  */
	uint32_t volatile INT_RAW;
	/* The interrupt raw bit for channel 0 turns to high level when the transmit process is done. */
#define RMT_INT_RAW_CH0_TX_END_INT_RAW				0u
	/* The interrupt raw bit for channel 0 turns to high level when the receive process is done. */
#define RMT_INT_RAW_CH0_RX_END_INT_RAW				1u
	/* The interrupt raw bit for channel 0 turns to high level when channle 0 detects some errors. */
#define RMT_INT_RAW_CH0_ERR_INT_RAW				2u
	/* The interrupt raw bit for channel 1 turns to high level when the transmit process is done. */
#define RMT_INT_RAW_CH1_TX_END_INT_RAW				3u
	/* The interrupt raw bit for channel 1 turns to high level when the receive process is done. */
#define RMT_INT_RAW_CH1_RX_END_INT_RAW				4u
	/* The interrupt raw bit for channel 1 turns to high level when channle 1 detects some errors. */
#define RMT_INT_RAW_CH1_ERR_INT_RAW				5u
	/* The interrupt raw bit for channel 2 turns to high level when the transmit process is done. */
#define RMT_INT_RAW_CH2_TX_END_INT_RAW				6u
	/* The interrupt raw bit for channel 2 turns to high level when the receive process is done. */
#define RMT_INT_RAW_CH2_RX_END_INT_RAW				7u
	/* The interrupt raw bit for channel 2 turns to high level when channle 2 detects some errors. */
#define RMT_INT_RAW_CH2_ERR_INT_RAW				8u
	/* The interrupt raw bit for channel 3 turns to high level when the transmit process is done. */
#define RMT_INT_RAW_CH3_TX_END_INT_RAW				9u
	/* The interrupt raw bit for channel 3 turns to high level when the receive process is done. */
#define RMT_INT_RAW_CH3_RX_END_INT_RAW				10u
	/* The interrupt raw bit for channel 3 turns to high level when channle 3 detects some errors. */
#define RMT_INT_RAW_CH3_ERR_INT_RAW				11u
	/* The interrupt raw bit for channel 4 turns to high level when the transmit process is done. */
#define RMT_INT_RAW_CH4_TX_END_INT_RAW				12u
	/* The interrupt raw bit for channel 4 turns to high level when the receive process is done. */
#define RMT_INT_RAW_CH4_RX_END_INT_RAW				13u
	/* The interrupt raw bit for channel 4 turns to high level when channle 4 detects some errors. */
#define RMT_INT_RAW_CH4_ERR_INT_RAW				14u
	/* The interrupt raw bit for channel 5 turns to high level when the transmit process is done. */
#define RMT_INT_RAW_CH5_TX_END_INT_RAW				15u
	/* The interrupt raw bit for channel 5 turns to high level when the receive process is done. */
#define RMT_INT_RAW_CH5_RX_END_INT_RAW				16u
	/* The interrupt raw bit for channel 5 turns to high level when channle 5 detects some errors. */
#define RMT_INT_RAW_CH5_ERR_INT_RAW				17u
	/* The interrupt raw bit for channel 6 turns to high level when the transmit process is done. */
#define RMT_INT_RAW_CH6_TX_END_INT_RAW				18u
	/* The interrupt raw bit for channel 6 turns to high level when the receive process is done. */
#define RMT_INT_RAW_CH6_RX_END_INT_RAW				19u
	/* The interrupt raw bit for channel 6 turns to high level when channle 6 detects some errors. */
#define RMT_INT_RAW_CH6_ERR_INT_RAW				20u
	/* The interrupt raw bit for channel 7 turns to high level when the transmit process is done. */
#define RMT_INT_RAW_CH7_TX_END_INT_RAW				21u
	/* The interrupt raw bit for channel 7 turns to high level when the receive process is done. */
#define RMT_INT_RAW_CH7_RX_END_INT_RAW				22u
	/* The interrupt raw bit for channel 7 turns to high level when channle 7 detects some errors. */
#define RMT_INT_RAW_CH7_ERR_INT_RAW				23u
	/* The interrupt raw bit for channel 0 turns to high level when transmitter in channle0  have send datas more than  reg_rmt_tx_lim_ch0  after detecting this interrupt  software can updata the old datas with new datas. */
#define RMT_INT_RAW_CH0_TX_THR_EVENT_INT_RAW			24u
	/* The interrupt raw bit for channel 1 turns to high level when transmitter in channle1  have send datas more than  reg_rmt_tx_lim_ch1  after detecting this interrupt  software can updata the old datas with new datas. */
#define RMT_INT_RAW_CH1_TX_THR_EVENT_INT_RAW			25u
	/* The interrupt raw bit for channel 2 turns to high level when transmitter in channle2  have send datas more than  reg_rmt_tx_lim_ch2  after detecting this interrupt  software can updata the old datas with new datas. */
#define RMT_INT_RAW_CH2_TX_THR_EVENT_INT_RAW			26u
	/* The interrupt raw bit for channel 3 turns to high level when transmitter in channle3  have send datas more than  reg_rmt_tx_lim_ch3  after detecting this interrupt  software can updata the old datas with new datas. */
#define RMT_INT_RAW_CH3_TX_THR_EVENT_INT_RAW			27u
	/* The interrupt raw bit for channel 4 turns to high level when transmitter in channle4  have send datas more than  reg_rmt_tx_lim_ch4  after detecting this interrupt  software can updata the old datas with new datas. */
#define RMT_INT_RAW_CH4_TX_THR_EVENT_INT_RAW			28u
	/* The interrupt raw bit for channel 5 turns to high level when transmitter in channle5  have send datas more than  reg_rmt_tx_lim_ch5  after detecting this interrupt  software can updata the old datas with new datas. */
#define RMT_INT_RAW_CH5_TX_THR_EVENT_INT_RAW			29u
	/* The interrupt raw bit for channel 6 turns to high level when transmitter in channle6  have send datas more than  reg_rmt_tx_lim_ch6  after detecting this interrupt  software can updata the old datas with new datas. */
#define RMT_INT_RAW_CH6_TX_THR_EVENT_INT_RAW			30u
	/* The interrupt raw bit for channel7 turns to high level when transmitter in channle 7  have send datas more than  reg_rmt_tx_lim_ch7  after detecting this interrupt  software can updata the old datas with new datas. */
#define RMT_INT_RAW_CH7_TX_THR_EVENT_INT_RAW			31u

	/* 0xA4:  */
	uint32_t volatile INT_ST;
	/* The interrupt  state bit for channel 0's mt_ch0_tx_end_int_raw when mt_ch0_tx_end_int_ena is set to 0. */
#define RMT_INT_ST_CH0_TX_END_INT_ST				0u
	/* The interrupt  state bit for channel 0's rmt_ch0_rx_end_int_raw when  rmt_ch0_rx_end_int_ena is set to 0. */
#define RMT_INT_ST_CH0_RX_END_INT_ST				1u
	/* The interrupt  state bit for channel 0's rmt_ch0_err_int_raw when  rmt_ch0_err_int_ena is set to 0. */
#define RMT_INT_ST_CH0_ERR_INT_ST				2u
	/* The interrupt  state bit for channel 1's mt_ch1_tx_end_int_raw when mt_ch1_tx_end_int_ena is set to 1. */
#define RMT_INT_ST_CH1_TX_END_INT_ST				3u
	/* The interrupt  state bit for channel 1's rmt_ch1_rx_end_int_raw when  rmt_ch1_rx_end_int_ena is set to 1. */
#define RMT_INT_ST_CH1_RX_END_INT_ST				4u
	/* The interrupt  state bit for channel 1's rmt_ch1_err_int_raw when  rmt_ch1_err_int_ena is set to 1. */
#define RMT_INT_ST_CH1_ERR_INT_ST				5u
	/* The interrupt  state bit for channel 2's mt_ch2_tx_end_int_raw when mt_ch2_tx_end_int_ena is set to 1. */
#define RMT_INT_ST_CH2_TX_END_INT_ST				6u
	/* The interrupt  state bit for channel 2's rmt_ch2_rx_end_int_raw when  rmt_ch2_rx_end_int_ena is set to 1. */
#define RMT_INT_ST_CH2_RX_END_INT_ST				7u
	/* The interrupt  state bit for channel 2's rmt_ch2_err_int_raw when  rmt_ch2_err_int_ena is set to 1. */
#define RMT_INT_ST_CH2_ERR_INT_ST				8u
	/* The interrupt  state bit for channel 3's mt_ch3_tx_end_int_raw when mt_ch3_tx_end_int_ena is set to 1. */
#define RMT_INT_ST_CH3_TX_END_INT_ST				9u
	/* The interrupt  state bit for channel 3's rmt_ch3_rx_end_int_raw when  rmt_ch3_rx_end_int_ena is set to 1. */
#define RMT_INT_ST_CH3_RX_END_INT_ST				10u
	/* The interrupt  state bit for channel 3's rmt_ch3_err_int_raw when  rmt_ch3_err_int_ena is set to 1. */
#define RMT_INT_ST_CH3_ERR_INT_ST				11u
	/* The interrupt  state bit for channel 4's mt_ch4_tx_end_int_raw when mt_ch4_tx_end_int_ena is set to 1. */
#define RMT_INT_ST_CH4_TX_END_INT_ST				12u
	/* The interrupt  state bit for channel 4's rmt_ch4_rx_end_int_raw when  rmt_ch4_rx_end_int_ena is set to 1. */
#define RMT_INT_ST_CH4_RX_END_INT_ST				13u
	/* The interrupt  state bit for channel 4's rmt_ch4_err_int_raw when  rmt_ch4_err_int_ena is set to 1. */
#define RMT_INT_ST_CH4_ERR_INT_ST				14u
	/* The interrupt  state bit for channel 5's mt_ch5_tx_end_int_raw when mt_ch5_tx_end_int_ena is set to 1. */
#define RMT_INT_ST_CH5_TX_END_INT_ST				15u
	/* The interrupt  state bit for channel 5's rmt_ch5_rx_end_int_raw when  rmt_ch5_rx_end_int_ena is set to 1. */
#define RMT_INT_ST_CH5_RX_END_INT_ST				16u
	/* The interrupt  state bit for channel 5's rmt_ch5_err_int_raw when  rmt_ch5_err_int_ena is set to 1. */
#define RMT_INT_ST_CH5_ERR_INT_ST				17u
	/* The interrupt  state bit for channel 6's mt_ch6_tx_end_int_raw when mt_ch6_tx_end_int_ena is set to 1. */
#define RMT_INT_ST_CH6_TX_END_INT_ST				18u
	/* The interrupt  state bit for channel 6's rmt_ch6_rx_end_int_raw when  rmt_ch6_rx_end_int_ena is set to 1. */
#define RMT_INT_ST_CH6_RX_END_INT_ST				19u
	/* The interrupt  state bit for channel 6's rmt_ch6_err_int_raw when  rmt_ch6_err_int_ena is set to 1. */
#define RMT_INT_ST_CH6_ERR_INT_ST				20u
	/* The interrupt  state bit for channel 7's mt_ch7_tx_end_int_raw when mt_ch7_tx_end_int_ena is set to 1. */
#define RMT_INT_ST_CH7_TX_END_INT_ST				21u
	/* The interrupt  state bit for channel 7's rmt_ch7_rx_end_int_raw when  rmt_ch7_rx_end_int_ena is set to 1. */
#define RMT_INT_ST_CH7_RX_END_INT_ST				22u
	/* The interrupt  state bit for channel 7's rmt_ch7_err_int_raw when  rmt_ch7_err_int_ena is set to 1. */
#define RMT_INT_ST_CH7_ERR_INT_ST				23u
	/* The interrupt state bit  for channel 0's rmt_ch0_tx_thr_event_int_raw when mt_ch0_tx_thr_event_int_ena is set to 1. */
#define RMT_INT_ST_CH0_TX_THR_EVENT_INT_ST			24u
	/* The interrupt state bit  for channel 1's rmt_ch1_tx_thr_event_int_raw when mt_ch1_tx_thr_event_int_ena is set to 1. */
#define RMT_INT_ST_CH1_TX_THR_EVENT_INT_ST			25u
	/* The interrupt state bit  for channel 2's rmt_ch2_tx_thr_event_int_raw when mt_ch2_tx_thr_event_int_ena is set to 1. */
#define RMT_INT_ST_CH2_TX_THR_EVENT_INT_ST			26u
	/* The interrupt state bit  for channel 3's rmt_ch3_tx_thr_event_int_raw when mt_ch3_tx_thr_event_int_ena is set to 1. */
#define RMT_INT_ST_CH3_TX_THR_EVENT_INT_ST			27u
	/* The interrupt state bit  for channel 4's rmt_ch4_tx_thr_event_int_raw when mt_ch4_tx_thr_event_int_ena is set to 1. */
#define RMT_INT_ST_CH4_TX_THR_EVENT_INT_ST			28u
	/* The interrupt state bit  for channel 5's rmt_ch5_tx_thr_event_int_raw when mt_ch5_tx_thr_event_int_ena is set to 1. */
#define RMT_INT_ST_CH5_TX_THR_EVENT_INT_ST			29u
	/* The interrupt state bit  for channel 6's rmt_ch6_tx_thr_event_int_raw when mt_ch6_tx_thr_event_int_ena is set to 1. */
#define RMT_INT_ST_CH6_TX_THR_EVENT_INT_ST			30u
	/* The interrupt state bit  for channel 7's rmt_ch7_tx_thr_event_int_raw when mt_ch7_tx_thr_event_int_ena is set to 1. */
#define RMT_INT_ST_CH7_TX_THR_EVENT_INT_ST			31u

	/* 0xA8:  */
	uint32_t volatile INT_ENA;
	/* Set this bit to enable rmt_ch0_tx_end_int_st. */
#define RMT_INT_ENA_CH0_TX_END_INT_ENA				0u
	/* Set this bit to enable rmt_ch0_rx_end_int_st. */
#define RMT_INT_ENA_CH0_RX_END_INT_ENA				1u
	/* Set this bit to enable rmt_ch0_err_int_st. */
#define RMT_INT_ENA_CH0_ERR_INT_ENA				2u
	/* Set this bit to enable rmt_ch1_tx_end_int_st. */
#define RMT_INT_ENA_CH1_TX_END_INT_ENA				3u
	/* Set this bit to enable rmt_ch1_rx_end_int_st. */
#define RMT_INT_ENA_CH1_RX_END_INT_ENA				4u
	/* Set this bit to enable rmt_ch1_err_int_st. */
#define RMT_INT_ENA_CH1_ERR_INT_ENA				5u
	/* Set this bit to enable rmt_ch2_tx_end_int_st. */
#define RMT_INT_ENA_CH2_TX_END_INT_ENA				6u
	/* Set this bit to enable rmt_ch2_rx_end_int_st. */
#define RMT_INT_ENA_CH2_RX_END_INT_ENA				7u
	/* Set this bit to enable rmt_ch2_err_int_st. */
#define RMT_INT_ENA_CH2_ERR_INT_ENA				8u
	/* Set this bit to enable rmt_ch3_tx_end_int_st. */
#define RMT_INT_ENA_CH3_TX_END_INT_ENA				9u
	/* Set this bit to enable rmt_ch3_rx_end_int_st. */
#define RMT_INT_ENA_CH3_RX_END_INT_ENA				10u
	/* Set this bit to enable rmt_ch3_err_int_st. */
#define RMT_INT_ENA_CH3_ERR_INT_ENA				11u
	/* Set this bit to enable rmt_ch4_tx_end_int_st. */
#define RMT_INT_ENA_CH4_TX_END_INT_ENA				12u
	/* Set this bit to enable rmt_ch4_rx_end_int_st. */
#define RMT_INT_ENA_CH4_RX_END_INT_ENA				13u
	/* Set this bit to enable rmt_ch4_err_int_st. */
#define RMT_INT_ENA_CH4_ERR_INT_ENA				14u
	/* Set this bit to enable rmt_ch5_tx_end_int_st. */
#define RMT_INT_ENA_CH5_TX_END_INT_ENA				15u
	/* Set this bit to enable rmt_ch5_rx_end_int_st. */
#define RMT_INT_ENA_CH5_RX_END_INT_ENA				16u
	/* Set this bit to enable rmt_ch5_err_int_st. */
#define RMT_INT_ENA_CH5_ERR_INT_ENA				17u
	/* Set this bit to enable rmt_ch6_tx_end_int_st. */
#define RMT_INT_ENA_CH6_TX_END_INT_ENA				18u
	/* Set this bit to enable rmt_ch6_rx_end_int_st. */
#define RMT_INT_ENA_CH6_RX_END_INT_ENA				19u
	/* Set this bit to enable rmt_ch6_err_int_st. */
#define RMT_INT_ENA_CH6_ERR_INT_ENA				20u
	/* Set this bit to enable rmt_ch7_tx_end_int_st. */
#define RMT_INT_ENA_CH7_TX_END_INT_ENA				21u
	/* Set this bit to enable rmt_ch7_rx_end_int_st. */
#define RMT_INT_ENA_CH7_RX_END_INT_ENA				22u
	/* Set this bit to enable rmt_ch7_err_int_st. */
#define RMT_INT_ENA_CH7_ERR_INT_ENA				23u
	/* Set this bit to enable rmt_ch0_tx_thr_event_int_st. */
#define RMT_INT_ENA_CH0_TX_THR_EVENT_INT_ENA			24u
	/* Set this bit to enable rmt_ch1_tx_thr_event_int_st. */
#define RMT_INT_ENA_CH1_TX_THR_EVENT_INT_ENA			25u
	/* Set this bit to enable rmt_ch2_tx_thr_event_int_st. */
#define RMT_INT_ENA_CH2_TX_THR_EVENT_INT_ENA			26u
	/* Set this bit to enable rmt_ch3_tx_thr_event_int_st. */
#define RMT_INT_ENA_CH3_TX_THR_EVENT_INT_ENA			27u
	/* Set this bit to enable rmt_ch4_tx_thr_event_int_st. */
#define RMT_INT_ENA_CH4_TX_THR_EVENT_INT_ENA			28u
	/* Set this bit to enable rmt_ch5_tx_thr_event_int_st. */
#define RMT_INT_ENA_CH5_TX_THR_EVENT_INT_ENA			29u
	/* Set this bit to enable rmt_ch6_tx_thr_event_int_st. */
#define RMT_INT_ENA_CH6_TX_THR_EVENT_INT_ENA			30u
	/* Set this bit to enable rmt_ch7_tx_thr_event_int_st. */
#define RMT_INT_ENA_CH7_TX_THR_EVENT_INT_ENA			31u

	/* 0xAC:  */
	uint32_t volatile INT_CLR;
	/* Set this bit to clear the rmt_ch0_rx_end_int_raw.. */
#define RMT_INT_CLR_CH0_TX_END_INT_CLR				0u
	/* Set this bit to clear the rmt_ch0_tx_end_int_raw. */
#define RMT_INT_CLR_CH0_RX_END_INT_CLR				1u
	/* Set this bit to clear the  rmt_ch0_err_int_raw. */
#define RMT_INT_CLR_CH0_ERR_INT_CLR				2u
	/* Set this bit to clear the rmt_ch1_rx_end_int_raw.. */
#define RMT_INT_CLR_CH1_TX_END_INT_CLR				3u
	/* Set this bit to clear the rmt_ch1_tx_end_int_raw. */
#define RMT_INT_CLR_CH1_RX_END_INT_CLR				4u
	/* Set this bit to clear the  rmt_ch1_err_int_raw. */
#define RMT_INT_CLR_CH1_ERR_INT_CLR				5u
	/* Set this bit to clear the rmt_ch2_rx_end_int_raw.. */
#define RMT_INT_CLR_CH2_TX_END_INT_CLR				6u
	/* Set this bit to clear the rmt_ch2_tx_end_int_raw. */
#define RMT_INT_CLR_CH2_RX_END_INT_CLR				7u
	/* Set this bit to clear the  rmt_ch2_err_int_raw. */
#define RMT_INT_CLR_CH2_ERR_INT_CLR				8u
	/* Set this bit to clear the rmt_ch3_rx_end_int_raw.. */
#define RMT_INT_CLR_CH3_TX_END_INT_CLR				9u
	/* Set this bit to clear the rmt_ch3_tx_end_int_raw. */
#define RMT_INT_CLR_CH3_RX_END_INT_CLR				10u
	/* Set this bit to clear the  rmt_ch3_err_int_raw. */
#define RMT_INT_CLR_CH3_ERR_INT_CLR				11u
	/* Set this bit to clear the rmt_ch4_rx_end_int_raw.. */
#define RMT_INT_CLR_CH4_TX_END_INT_CLR				12u
	/* Set this bit to clear the rmt_ch4_tx_end_int_raw. */
#define RMT_INT_CLR_CH4_RX_END_INT_CLR				13u
	/* Set this bit to clear the  rmt_ch4_err_int_raw. */
#define RMT_INT_CLR_CH4_ERR_INT_CLR				14u
	/* Set this bit to clear the rmt_ch5_rx_end_int_raw.. */
#define RMT_INT_CLR_CH5_TX_END_INT_CLR				15u
	/* Set this bit to clear the rmt_ch5_tx_end_int_raw. */
#define RMT_INT_CLR_CH5_RX_END_INT_CLR				16u
	/* Set this bit to clear the  rmt_ch5_err_int_raw. */
#define RMT_INT_CLR_CH5_ERR_INT_CLR				17u
	/* Set this bit to clear the rmt_ch6_rx_end_int_raw.. */
#define RMT_INT_CLR_CH6_TX_END_INT_CLR				18u
	/* Set this bit to clear the rmt_ch6_tx_end_int_raw. */
#define RMT_INT_CLR_CH6_RX_END_INT_CLR				19u
	/* Set this bit to clear the  rmt_ch6_err_int_raw. */
#define RMT_INT_CLR_CH6_ERR_INT_CLR				20u
	/* Set this bit to clear the rmt_ch7_rx_end_int_raw.. */
#define RMT_INT_CLR_CH7_TX_END_INT_CLR				21u
	/* Set this bit to clear the rmt_ch7_tx_end_int_raw. */
#define RMT_INT_CLR_CH7_RX_END_INT_CLR				22u
	/* Set this bit to clear the  rmt_ch7_err_int_raw. */
#define RMT_INT_CLR_CH7_ERR_INT_CLR				23u
	/* Set this bit to clear the  rmt_ch0_tx_thr_event_int_raw interrupt. */
#define RMT_INT_CLR_CH0_TX_THR_EVENT_INT_CLR			24u
	/* Set this bit to clear the  rmt_ch1_tx_thr_event_int_raw interrupt. */
#define RMT_INT_CLR_CH1_TX_THR_EVENT_INT_CLR			25u
	/* Set this bit to clear the  rmt_ch2_tx_thr_event_int_raw interrupt. */
#define RMT_INT_CLR_CH2_TX_THR_EVENT_INT_CLR			26u
	/* Set this bit to clear the  rmt_ch3_tx_thr_event_int_raw interrupt. */
#define RMT_INT_CLR_CH3_TX_THR_EVENT_INT_CLR			27u
	/* Set this bit to clear the  rmt_ch4_tx_thr_event_int_raw interrupt. */
#define RMT_INT_CLR_CH4_TX_THR_EVENT_INT_CLR			28u
	/* Set this bit to clear the  rmt_ch5_tx_thr_event_int_raw interrupt. */
#define RMT_INT_CLR_CH5_TX_THR_EVENT_INT_CLR			29u
	/* Set this bit to clear the  rmt_ch6_tx_thr_event_int_raw interrupt. */
#define RMT_INT_CLR_CH6_TX_THR_EVENT_INT_CLR			30u
	/* Set this bit to clear the  rmt_ch7_tx_thr_event_int_raw interrupt. */
#define RMT_INT_CLR_CH7_TX_THR_EVENT_INT_CLR			31u

	/* 0xB0:  */
	uint32_t volatile CH0CARRIER_DUTY;
	/* This register is used to configure carrier wave's low level value for channel0. */
#define RMT_CH0CARRIER_DUTY_CARRIER_LOW_CH0_Msb			0u
#define RMT_CH0CARRIER_DUTY_CARRIER_LOW_CH0_Lsb			15u
	/* This register is used to configure carrier wave's high level value for channel0. */
#define RMT_CH0CARRIER_DUTY_CARRIER_HIGH_CH0_Msb		16u
#define RMT_CH0CARRIER_DUTY_CARRIER_HIGH_CH0_Lsb		31u

	/* 0xB4:  */
	uint32_t volatile CH1CARRIER_DUTY;
	/* This register is used to configure carrier wave's low level value for channel1. */
#define RMT_CH1CARRIER_DUTY_CARRIER_LOW_CH1_Msb			0u
#define RMT_CH1CARRIER_DUTY_CARRIER_LOW_CH1_Lsb			15u
	/* This register is used to configure carrier wave's high level value for channel1. */
#define RMT_CH1CARRIER_DUTY_CARRIER_HIGH_CH1_Msb		16u
#define RMT_CH1CARRIER_DUTY_CARRIER_HIGH_CH1_Lsb		31u

	/* 0xB8:  */
	uint32_t volatile CH2CARRIER_DUTY;
	/* This register is used to configure carrier wave's low level value for channel2. */
#define RMT_CH2CARRIER_DUTY_CARRIER_LOW_CH2_Msb			0u
#define RMT_CH2CARRIER_DUTY_CARRIER_LOW_CH2_Lsb			15u
	/* This register is used to configure carrier wave's high level value for channel2. */
#define RMT_CH2CARRIER_DUTY_CARRIER_HIGH_CH2_Msb		16u
#define RMT_CH2CARRIER_DUTY_CARRIER_HIGH_CH2_Lsb		31u

	/* 0xBC:  */
	uint32_t volatile CH3CARRIER_DUTY;
	/* This register is used to configure carrier wave's low level value for channel3. */
#define RMT_CH3CARRIER_DUTY_CARRIER_LOW_CH3_Msb			0u
#define RMT_CH3CARRIER_DUTY_CARRIER_LOW_CH3_Lsb			15u
	/* This register is used to configure carrier wave's high level value for channel3. */
#define RMT_CH3CARRIER_DUTY_CARRIER_HIGH_CH3_Msb		16u
#define RMT_CH3CARRIER_DUTY_CARRIER_HIGH_CH3_Lsb		31u

	/* 0xC0:  */
	uint32_t volatile CH4CARRIER_DUTY;
	/* This register is used to configure carrier wave's low level value for channel4. */
#define RMT_CH4CARRIER_DUTY_CARRIER_LOW_CH4_Msb			0u
#define RMT_CH4CARRIER_DUTY_CARRIER_LOW_CH4_Lsb			15u
	/* This register is used to configure carrier wave's high level value for channel4. */
#define RMT_CH4CARRIER_DUTY_CARRIER_HIGH_CH4_Msb		16u
#define RMT_CH4CARRIER_DUTY_CARRIER_HIGH_CH4_Lsb		31u

	/* 0xC4:  */
	uint32_t volatile CH5CARRIER_DUTY;
	/* This register is used to configure carrier wave's low level value for channel5. */
#define RMT_CH5CARRIER_DUTY_CARRIER_LOW_CH5_Msb			0u
#define RMT_CH5CARRIER_DUTY_CARRIER_LOW_CH5_Lsb			15u
	/* This register is used to configure carrier wave's high level value for channel5. */
#define RMT_CH5CARRIER_DUTY_CARRIER_HIGH_CH5_Msb		16u
#define RMT_CH5CARRIER_DUTY_CARRIER_HIGH_CH5_Lsb		31u

	/* 0xC8:  */
	uint32_t volatile CH6CARRIER_DUTY;
	/* This register is used to configure carrier wave's low level value for channel6. */
#define RMT_CH6CARRIER_DUTY_CARRIER_LOW_CH6_Msb			0u
#define RMT_CH6CARRIER_DUTY_CARRIER_LOW_CH6_Lsb			15u
	/* This register is used to configure carrier wave's high level value for channel6. */
#define RMT_CH6CARRIER_DUTY_CARRIER_HIGH_CH6_Msb		16u
#define RMT_CH6CARRIER_DUTY_CARRIER_HIGH_CH6_Lsb		31u

	/* 0xCC:  */
	uint32_t volatile CH7CARRIER_DUTY;
	/* This register is used to configure carrier wave's low level value for channel7. */
#define RMT_CH7CARRIER_DUTY_CARRIER_LOW_CH7_Msb			0u
#define RMT_CH7CARRIER_DUTY_CARRIER_LOW_CH7_Lsb			15u
	/* This register is used to configure carrier wave's high level value for channel7. */
#define RMT_CH7CARRIER_DUTY_CARRIER_HIGH_CH7_Msb		16u
#define RMT_CH7CARRIER_DUTY_CARRIER_HIGH_CH7_Lsb		31u

	/* 0xD0:  */
	uint32_t volatile CH0_TX_LIM;
	/* When channel0 sends more than reg_rmt_tx_lim_ch0 datas then channel0 produce the relative interrupt. */
#define RMT_CH0_TX_LIM_TX_LIM_CH0_Msb				0u
#define RMT_CH0_TX_LIM_TX_LIM_CH0_Lsb				8u

	/* 0xD4:  */
	uint32_t volatile CH1_TX_LIM;
	/* When channel1 sends more than reg_rmt_tx_lim_ch1 datas then channel1 produce the relative interrupt. */
#define RMT_CH1_TX_LIM_TX_LIM_CH1_Msb				0u
#define RMT_CH1_TX_LIM_TX_LIM_CH1_Lsb				8u

	/* 0xD8:  */
	uint32_t volatile CH2_TX_LIM;
	/* When channel2 sends more than reg_rmt_tx_lim_ch2 datas then channel2 produce the relative interrupt. */
#define RMT_CH2_TX_LIM_TX_LIM_CH2_Msb				0u
#define RMT_CH2_TX_LIM_TX_LIM_CH2_Lsb				8u

	/* 0xDC:  */
	uint32_t volatile CH3_TX_LIM;
	/* When channel3 sends more than reg_rmt_tx_lim_ch3 datas then channel3 produce the relative interrupt. */
#define RMT_CH3_TX_LIM_TX_LIM_CH3_Msb				0u
#define RMT_CH3_TX_LIM_TX_LIM_CH3_Lsb				8u

	/* 0xE0:  */
	uint32_t volatile CH4_TX_LIM;
	/* When channel4 sends more than reg_rmt_tx_lim_ch4 datas then channel4 produce the relative interrupt. */
#define RMT_CH4_TX_LIM_TX_LIM_CH4_Msb				0u
#define RMT_CH4_TX_LIM_TX_LIM_CH4_Lsb				8u

	/* 0xE4:  */
	uint32_t volatile CH5_TX_LIM;
	/* When channel5 sends more than reg_rmt_tx_lim_ch5 datas then channel5 produce the relative interrupt. */
#define RMT_CH5_TX_LIM_TX_LIM_CH5_Msb				0u
#define RMT_CH5_TX_LIM_TX_LIM_CH5_Lsb				8u

	/* 0xE8:  */
	uint32_t volatile CH6_TX_LIM;
	/* When channel6 sends more than reg_rmt_tx_lim_ch6 datas then channel6 produce the relative interrupt. */
#define RMT_CH6_TX_LIM_TX_LIM_CH6_Msb				0u
#define RMT_CH6_TX_LIM_TX_LIM_CH6_Lsb				8u

	/* 0xEC:  */
	uint32_t volatile CH7_TX_LIM;
	/* When channel7 sends more than reg_rmt_tx_lim_ch7 datas then channel7 produce the relative interrupt. */
#define RMT_CH7_TX_LIM_TX_LIM_CH7_Msb				0u
#define RMT_CH7_TX_LIM_TX_LIM_CH7_Lsb				8u

	/* 0xF0:  */
	uint32_t volatile APB_CONF;
	/* Set this bit to disable apb fifo access */
#define RMT_APB_CONF_APB_FIFO_MASK				0u
	/* when datas need to be send is more than channel's mem can store  then set this bit to enable reusage of mem this bit is used together with reg_rmt_tx_lim_chn. */
#define RMT_APB_CONF_MEM_TX_WRAP_EN				1u

	/* 0xFC:  */
	uint32_t volatile DATE;
	/* This is the version register. */
#define RMT_DATE_DATE_Msb					0u
#define RMT_DATE_DATE_Lsb					31u

};


#define RSA ((struct mcu_rsa *)0x3FF02000)

struct mcu_rsa {

	/* 0x00:  */
	uint32_t volatile M_PRIME;
	/* This register contains M’. */
#define RSA_M_PRIME_M_PRIME_Msb					0u
#define RSA_M_PRIME_M_PRIME_Lsb					7u

	/* 0x04:  */
	uint32_t volatile MODEXP_MODE;
	/* This register contains the mode of modular exponentiation. */
#define RSA_MODEXP_MODE_MODEXP_MODE_Msb				0u
#define RSA_MODEXP_MODE_MODEXP_MODE_Lsb				1u

	/* 0x08:  */
	uint32_t volatile MODEXP_START;
	/* Write 1 to start modular exponentiation. */
#define RSA_MODEXP_START_MODEXP_START				0u

	/* 0x0C:  */
	uint32_t volatile MULT_MODE;
	/* This register contains the mode of modular multiplication and multiplication. */
#define RSA_MULT_MODE_MULT_MODE					0u

	/* 0x10:  */
	uint32_t volatile MULT_START;
	/* Write 1 to start modular multiplication or multiplication. */
#define RSA_MULT_START_MULT_START				0u

	/* 0x14:  */
	uint32_t volatile INTERRUPT;
	/* RSA interrupt status register. */
#define RSA_INTERRUPT_INTERRUPT					0u

	/* 0x18:  */
	uint32_t volatile CLEAN;
	/* This bit will read 1 once the memory initialization is completed. */
#define RSA_CLEAN_CLEAN						0u

};


#define RTC_CNTL ((struct mcu_rtc_cntl *)0x3FF48000)

struct mcu_rtc_cntl {

	/* 0x00:  */
	uint32_t volatile OPTIONS0;
	/* {reg_sw_stall_appcpu_c1[5:0]   reg_sw_stall_appcpu_c0[1:0]} == 0x86 will stall APP CPU */
#define RTC_CNTL_OPTIONS0_SW_STALL_APPCPU_C0_Msb		0u
#define RTC_CNTL_OPTIONS0_SW_STALL_APPCPU_C0_Lsb		1u
	/* {reg_sw_stall_procpu_c1[5:0]   reg_sw_stall_procpu_c0[1:0]} == 0x86 will stall PRO CPU */
#define RTC_CNTL_OPTIONS0_SW_STALL_PROCPU_C0_Msb		2u
#define RTC_CNTL_OPTIONS0_SW_STALL_PROCPU_C0_Lsb		3u
	/* APP CPU SW reset */
#define RTC_CNTL_OPTIONS0_SW_APPCPU_RST				4u
	/* PRO CPU SW reset */
#define RTC_CNTL_OPTIONS0_SW_PROCPU_RST				5u
	/* BB_I2C force power down */
#define RTC_CNTL_OPTIONS0_BB_I2C_FORCE_PD			6u
	/* BB_I2C force power up */
#define RTC_CNTL_OPTIONS0_BB_I2C_FORCE_PU			7u
	/* BB_PLL _I2C force power down */
#define RTC_CNTL_OPTIONS0_BBPLL_I2C_FORCE_PD			8u
	/* BB_PLL_I2C force power up */
#define RTC_CNTL_OPTIONS0_BBPLL_I2C_FORCE_PU			9u
	/* BB_PLL force power down */
#define RTC_CNTL_OPTIONS0_BBPLL_FORCE_PD			10u
	/* BB_PLL force power up */
#define RTC_CNTL_OPTIONS0_BBPLL_FORCE_PU			11u
	/* crystall force power down */
#define RTC_CNTL_OPTIONS0_XTL_FORCE_PD				12u
	/* crystall force power up */
#define RTC_CNTL_OPTIONS0_XTL_FORCE_PU				13u
	/* BIAS_SLEEP follow CK8M */
#define RTC_CNTL_OPTIONS0_BIAS_SLEEP_FOLW_8M			14u
	/* BIAS_SLEEP force sleep */
#define RTC_CNTL_OPTIONS0_BIAS_FORCE_SLEEP			15u
	/* BIAS_SLEEP force no sleep */
#define RTC_CNTL_OPTIONS0_BIAS_FORCE_NOSLEEP			16u
	/* BIAS_I2C follow CK8M */
#define RTC_CNTL_OPTIONS0_BIAS_I2C_FOLW_8M			17u
	/* BIAS_I2C force power down */
#define RTC_CNTL_OPTIONS0_BIAS_I2C_FORCE_PD			18u
	/* BIAS_I2C force power up */
#define RTC_CNTL_OPTIONS0_BIAS_I2C_FORCE_PU			19u
	/* BIAS_CORE follow CK8M */
#define RTC_CNTL_OPTIONS0_BIAS_CORE_FOLW_8M			20u
	/* BIAS_CORE force power down */
#define RTC_CNTL_OPTIONS0_BIAS_CORE_FORCE_PD			21u
	/* BIAS_CORE force power up */
#define RTC_CNTL_OPTIONS0_BIAS_CORE_FORCE_PU			22u
	/*  */
#define RTC_CNTL_OPTIONS0_XTL_FORCE_ISO				23u
	/*  */
#define RTC_CNTL_OPTIONS0_PLL_FORCE_ISO				24u
	/*  */
#define RTC_CNTL_OPTIONS0_ANALOG_FORCE_ISO			25u
	/*  */
#define RTC_CNTL_OPTIONS0_XTL_FORCE_NOISO			26u
	/*  */
#define RTC_CNTL_OPTIONS0_PLL_FORCE_NOISO			27u
	/*  */
#define RTC_CNTL_OPTIONS0_ANALOG_FORCE_NOISO			28u
	/* digital wrap force reset in deep sleep */
#define RTC_CNTL_OPTIONS0_DG_WRAP_FORCE_RST			29u
	/* digital core force no reset in deep sleep */
#define RTC_CNTL_OPTIONS0_DG_WRAP_FORCE_NORST			30u
	/* SW system reset */
#define RTC_CNTL_OPTIONS0_SW_SYS_RST				31u

	/* 0x04:  */
	uint32_t volatile SLP_TIMER0;
	/* RTC sleep timer low 32 bits */
#define RTC_CNTL_SLP_TIMER0_SLP_VAL_LO_Msb			0u
#define RTC_CNTL_SLP_TIMER0_SLP_VAL_LO_Lsb			31u

	/* 0x08:  */
	uint32_t volatile SLP_TIMER1;
	/* RTC sleep timer high 16 bits */
#define RTC_CNTL_SLP_TIMER1_SLP_VAL_HI_Msb			0u
#define RTC_CNTL_SLP_TIMER1_SLP_VAL_HI_Lsb			15u
	/* timer alarm enable bit */
#define RTC_CNTL_SLP_TIMER1_MAIN_TIMER_ALARM_EN			16u

	/* 0x0C:  */
	uint32_t volatile TIME_UPDATE;
	/* To indicate the register is updated */
#define RTC_CNTL_TIME_UPDATE_TIME_VALID				30u
	/* Set 1: to update register with RTC timer */
#define RTC_CNTL_TIME_UPDATE_TIME_UPDATE			31u

	/* 0x10:  */
	uint32_t volatile TIME0;
	/* RTC timer low 32 bits */
#define RTC_CNTL_TIME0_TIME_LO_Msb				0u
#define RTC_CNTL_TIME0_TIME_LO_Lsb				31u

	/* 0x14:  */
	uint32_t volatile TIME1;
	/* RTC timer high 16 bits */
#define RTC_CNTL_TIME1_TIME_HI_Msb				0u
#define RTC_CNTL_TIME1_TIME_HI_Lsb				15u

	/* 0x18:  */
	uint32_t volatile STATE0;
	/* touch controller force wake up */
#define RTC_CNTL_STATE0_TOUCH_WAKEUP_FORCE_EN			20u
	/* ULP-coprocessor force wake up */
#define RTC_CNTL_STATE0_ULP_CP_WAKEUP_FORCE_EN			21u
	/* 1: APB to RTC using bridge   0: APB to RTC using sync */
#define RTC_CNTL_STATE0_APB2RTC_BRIDGE_SEL			22u
	/* touch timer enable bit */
#define RTC_CNTL_STATE0_TOUCH_SLP_TIMER_EN			23u
	/* ULP-coprocessor timer enable bit */
#define RTC_CNTL_STATE0_ULP_CP_SLP_TIMER_EN			24u
	/* SDIO active indication */
#define RTC_CNTL_STATE0_SDIO_ACTIVE_IND				28u
	/* sleep wakeup bit */
#define RTC_CNTL_STATE0_SLP_WAKEUP				29u
	/* sleep reject bit */
#define RTC_CNTL_STATE0_SLP_REJECT				30u
	/* sleep enable bit */
#define RTC_CNTL_STATE0_SLEEP_EN				31u

	/* 0x1C:  */
	uint32_t volatile TIMER1;
	/* CPU stall enable bit */
#define RTC_CNTL_TIMER1_CPU_STALL_EN				0u
	/* CPU stall wait cycles in fast_clk_rtc */
#define RTC_CNTL_TIMER1_CPU_STALL_WAIT_Msb			1u
#define RTC_CNTL_TIMER1_CPU_STALL_WAIT_Lsb			5u
	/* CK8M wait cycles in slow_clk_rtc */
#define RTC_CNTL_TIMER1_CK8M_WAIT_Msb				6u
#define RTC_CNTL_TIMER1_CK8M_WAIT_Lsb				13u
	/* XTAL wait cycles in slow_clk_rtc */
#define RTC_CNTL_TIMER1_XTL_BUF_WAIT_Msb			14u
#define RTC_CNTL_TIMER1_XTL_BUF_WAIT_Lsb			23u
	/* PLL wait cycles in slow_clk_rtc */
#define RTC_CNTL_TIMER1_PLL_BUF_WAIT_Msb			24u
#define RTC_CNTL_TIMER1_PLL_BUF_WAIT_Lsb			31u

	/* 0x20:  */
	uint32_t volatile TIMER2;
	/* wait cycles in slow_clk_rtc before ULP-coprocessor / touch controller start to work */
#define RTC_CNTL_TIMER2_ULPCP_TOUCH_START_WAIT_Msb		15u
#define RTC_CNTL_TIMER2_ULPCP_TOUCH_START_WAIT_Lsb		23u
	/* minimal cycles in slow_clk_rtc for CK8M in power down state */
#define RTC_CNTL_TIMER2_MIN_TIME_CK8M_OFF_Msb			24u
#define RTC_CNTL_TIMER2_MIN_TIME_CK8M_OFF_Lsb			31u

	/* 0x24:  */
	uint32_t volatile TIMER3;
	/*  */
#define RTC_CNTL_TIMER3_WIFI_WAIT_TIMER_Msb			0u
#define RTC_CNTL_TIMER3_WIFI_WAIT_TIMER_Lsb			8u
	/*  */
#define RTC_CNTL_TIMER3_WIFI_POWERUP_TIMER_Msb			9u
#define RTC_CNTL_TIMER3_WIFI_POWERUP_TIMER_Lsb			15u
	/*  */
#define RTC_CNTL_TIMER3_ROM_RAM_WAIT_TIMER_Msb			16u
#define RTC_CNTL_TIMER3_ROM_RAM_WAIT_TIMER_Lsb			24u
	/*  */
#define RTC_CNTL_TIMER3_ROM_RAM_POWERUP_TIMER_Msb		25u
#define RTC_CNTL_TIMER3_ROM_RAM_POWERUP_TIMER_Lsb		31u

	/* 0x28:  */
	uint32_t volatile TIMER4;
	/*  */
#define RTC_CNTL_TIMER4_WAIT_TIMER_Msb				0u
#define RTC_CNTL_TIMER4_WAIT_TIMER_Lsb				8u
	/*  */
#define RTC_CNTL_TIMER4_POWERUP_TIMER_Msb			9u
#define RTC_CNTL_TIMER4_POWERUP_TIMER_Lsb			15u
	/*  */
#define RTC_CNTL_TIMER4_DG_WRAP_WAIT_TIMER_Msb			16u
#define RTC_CNTL_TIMER4_DG_WRAP_WAIT_TIMER_Lsb			24u
	/*  */
#define RTC_CNTL_TIMER4_DG_WRAP_POWERUP_TIMER_Msb		25u
#define RTC_CNTL_TIMER4_DG_WRAP_POWERUP_TIMER_Lsb		31u

	/* 0x2C:  */
	uint32_t volatile TIMER5;
	/*  */
#define RTC_CNTL_TIMER5_ULP_CP_SUBTIMER_PREDIV_Msb		0u
#define RTC_CNTL_TIMER5_ULP_CP_SUBTIMER_PREDIV_Lsb		7u
	/* minimal sleep cycles in slow_clk_rtc */
#define RTC_CNTL_TIMER5_MIN_SLP_VAL_Msb				8u
#define RTC_CNTL_TIMER5_MIN_SLP_VAL_Lsb				15u
	/*  */
#define RTC_CNTL_TIMER5_RTCMEM_WAIT_TIMER_Msb			16u
#define RTC_CNTL_TIMER5_RTCMEM_WAIT_TIMER_Lsb			24u
	/*  */
#define RTC_CNTL_TIMER5_RTCMEM_POWERUP_TIMER_Msb		25u
#define RTC_CNTL_TIMER5_RTCMEM_POWERUP_TIMER_Lsb		31u

	/* 0x30:  */
	uint32_t volatile ANA_CONF;
	/* PLLA force power down */
#define RTC_CNTL_ANA_CONF_PLLA_FORCE_PD				23u
	/* PLLA force power up */
#define RTC_CNTL_ANA_CONF_PLLA_FORCE_PU				24u
	/* start BBPLL calibration during sleep */
#define RTC_CNTL_ANA_CONF_BBPLL_CAL_SLP_START			25u
	/* 1: PVTMON power up   otherwise power down */
#define RTC_CNTL_ANA_CONF_PVTMON_PU				26u
	/* 1: TXRF_I2C power up   otherwise power down */
#define RTC_CNTL_ANA_CONF_TXRF_I2C_PU				27u
	/* 1: RFRX_PBUS power up   otherwise power down */
#define RTC_CNTL_ANA_CONF_RFRX_PBUS_PU				28u
	/* 1: CKGEN_I2C power up   otherwise power down */
#define RTC_CNTL_ANA_CONF_CKGEN_I2C_PU				30u
	/* 1: PLL_I2C power up   otherwise power down */
#define RTC_CNTL_ANA_CONF_PLL_I2C_PU				31u

	/* 0x34:  */
	uint32_t volatile RESET_STATE;
	/* reset cause of PRO CPU */
#define RTC_CNTL_RESET_STATE_RESET_CAUSE_PROCPU_Msb		0u
#define RTC_CNTL_RESET_STATE_RESET_CAUSE_PROCPU_Lsb		5u
	/* reset cause of APP CPU */
#define RTC_CNTL_RESET_STATE_RESET_CAUSE_APPCPU_Msb		6u
#define RTC_CNTL_RESET_STATE_RESET_CAUSE_APPCPU_Lsb		11u
	/* APP CPU state vector sel */
#define RTC_CNTL_RESET_STATE_APPCPU_STAT_VECTOR_SEL		12u
	/* PRO CPU state vector sel */
#define RTC_CNTL_RESET_STATE_PROCPU_STAT_VECTOR_SEL		13u

	/* 0x38:  */
	uint32_t volatile WAKEUP_STATE;
	/* wakeup cause */
#define RTC_CNTL_WAKEUP_STATE_WAKEUP_CAUSE_Msb			0u
#define RTC_CNTL_WAKEUP_STATE_WAKEUP_CAUSE_Lsb			10u
	/* wakeup enable bitmap */
#define RTC_CNTL_WAKEUP_STATE_WAKEUP_ENA_Msb			11u
#define RTC_CNTL_WAKEUP_STATE_WAKEUP_ENA_Lsb			21u
	/* enable filter for gpio wakeup event */
#define RTC_CNTL_WAKEUP_STATE_GPIO_WAKEUP_FILTER		22u

	/* 0x3C:  */
	uint32_t volatile INT_ENA;
	/* enable sleep wakeup interrupt */
#define RTC_CNTL_INT_ENA_SLP_WAKEUP_INT_ENA			0u
	/* enable sleep reject interrupt */
#define RTC_CNTL_INT_ENA_SLP_REJECT_INT_ENA			1u
	/* enable SDIO idle interrupt */
#define RTC_CNTL_INT_ENA_SDIO_IDLE_INT_ENA			2u
	/* enable RTC WDT interrupt */
#define RTC_CNTL_INT_ENA_WDT_INT_ENA				3u
	/* enable RTC time valid interrupt */
#define RTC_CNTL_INT_ENA_TIME_VALID_INT_ENA			4u
	/* enable ULP-coprocessor interrupt */
#define RTC_CNTL_INT_ENA_ULP_CP_INT_ENA				5u
	/* enable touch interrupt */
#define RTC_CNTL_INT_ENA_TOUCH_INT_ENA				6u
	/* enable brown out interrupt */
#define RTC_CNTL_INT_ENA_BROWN_OUT_INT_ENA			7u
	/* enable RTC main timer interrupt */
#define RTC_CNTL_INT_ENA_MAIN_TIMER_INT_ENA			8u

	/* 0x40:  */
	uint32_t volatile INT_RAW;
	/* sleep wakeup interrupt raw */
#define RTC_CNTL_INT_RAW_SLP_WAKEUP_INT_RAW			0u
	/* sleep reject interrupt raw */
#define RTC_CNTL_INT_RAW_SLP_REJECT_INT_RAW			1u
	/* SDIO idle interrupt raw */
#define RTC_CNTL_INT_RAW_SDIO_IDLE_INT_RAW			2u
	/* RTC WDT interrupt raw */
#define RTC_CNTL_INT_RAW_WDT_INT_RAW				3u
	/* RTC time valid interrupt raw */
#define RTC_CNTL_INT_RAW_TIME_VALID_INT_RAW			4u
	/* ULP-coprocessor interrupt raw */
#define RTC_CNTL_INT_RAW_ULP_CP_INT_RAW				5u
	/* touch interrupt raw */
#define RTC_CNTL_INT_RAW_TOUCH_INT_RAW				6u
	/* brown out interrupt raw */
#define RTC_CNTL_INT_RAW_BROWN_OUT_INT_RAW			7u
	/* RTC main timer interrupt raw */
#define RTC_CNTL_INT_RAW_MAIN_TIMER_INT_RAW			8u

	/* 0x44:  */
	uint32_t volatile INT_ST;
	/* sleep wakeup interrupt state */
#define RTC_CNTL_INT_ST_SLP_WAKEUP_INT_ST			0u
	/* sleep reject interrupt state */
#define RTC_CNTL_INT_ST_SLP_REJECT_INT_ST			1u
	/* SDIO idle interrupt state */
#define RTC_CNTL_INT_ST_SDIO_IDLE_INT_ST			2u
	/* RTC WDT interrupt state */
#define RTC_CNTL_INT_ST_WDT_INT_ST				3u
	/* RTC time valid interrupt state */
#define RTC_CNTL_INT_ST_TIME_VALID_INT_ST			4u
	/* ULP-coprocessor interrupt state */
#define RTC_CNTL_INT_ST_SAR_INT_ST				5u
	/* touch interrupt state */
#define RTC_CNTL_INT_ST_TOUCH_INT_ST				6u
	/* brown out interrupt state */
#define RTC_CNTL_INT_ST_BROWN_OUT_INT_ST			7u
	/* RTC main timer interrupt state */
#define RTC_CNTL_INT_ST_MAIN_TIMER_INT_ST			8u

	/* 0x48:  */
	uint32_t volatile INT_CLR;
	/* Clear sleep wakeup interrupt state */
#define RTC_CNTL_INT_CLR_SLP_WAKEUP_INT_CLR			0u
	/* Clear sleep reject interrupt state */
#define RTC_CNTL_INT_CLR_SLP_REJECT_INT_CLR			1u
	/* Clear SDIO idle interrupt state */
#define RTC_CNTL_INT_CLR_SDIO_IDLE_INT_CLR			2u
	/* Clear RTC WDT interrupt state */
#define RTC_CNTL_INT_CLR_WDT_INT_CLR				3u
	/* Clear RTC time valid interrupt state */
#define RTC_CNTL_INT_CLR_TIME_VALID_INT_CLR			4u
	/* Clear ULP-coprocessor interrupt state */
#define RTC_CNTL_INT_CLR_SAR_INT_CLR				5u
	/* Clear touch interrupt state */
#define RTC_CNTL_INT_CLR_TOUCH_INT_CLR				6u
	/* Clear brown out interrupt state */
#define RTC_CNTL_INT_CLR_BROWN_OUT_INT_CLR			7u
	/* Clear RTC main timer interrupt state */
#define RTC_CNTL_INT_CLR_MAIN_TIMER_INT_CLR			8u

	/* 0x4C:  */
	uint32_t volatile STORE0;
	/* 32-bit general purpose retention register */
#define RTC_CNTL_STORE0_SCRATCH0_Msb				0u
#define RTC_CNTL_STORE0_SCRATCH0_Lsb				31u

	/* 0x50:  */
	uint32_t volatile STORE1;
	/* 32-bit general purpose retention register */
#define RTC_CNTL_STORE1_SCRATCH1_Msb				0u
#define RTC_CNTL_STORE1_SCRATCH1_Lsb				31u

	/* 0x54:  */
	uint32_t volatile STORE2;
	/* 32-bit general purpose retention register */
#define RTC_CNTL_STORE2_SCRATCH2_Msb				0u
#define RTC_CNTL_STORE2_SCRATCH2_Lsb				31u

	/* 0x58:  */
	uint32_t volatile STORE3;
	/* 32-bit general purpose retention register */
#define RTC_CNTL_STORE3_SCRATCH3_Msb				0u
#define RTC_CNTL_STORE3_SCRATCH3_Lsb				31u

	/* 0x5C:  */
	uint32_t volatile EXT_XTL_CONF;
	/* 0: power down XTAL at high level  1: power down XTAL at low level */
#define RTC_CNTL_EXT_XTL_CONF_XTL_EXT_CTR_LV			30u
	/* enable control XTAL by external pads */
#define RTC_CNTL_EXT_XTL_CONF_XTL_EXT_CTR_EN			31u

	/* 0x60:  */
	uint32_t volatile EXT_WAKEUP_CONF;
	/* 0: external wakeup at low level  1: external wakeup at high level */
#define RTC_CNTL_EXT_WAKEUP_CONF_EXT_WAKEUP0_LV			30u
	/* 0: external wakeup at low level  1: external wakeup at high level */
#define RTC_CNTL_EXT_WAKEUP_CONF_EXT_WAKEUP1_LV			31u

	/* 0x64:  */
	uint32_t volatile SLP_REJECT_CONF;
	/* enable GPIO reject */
#define RTC_CNTL_SLP_REJECT_CONF_GPIO_REJECT_EN			24u
	/* enable SDIO reject */
#define RTC_CNTL_SLP_REJECT_CONF_SDIO_REJECT_EN			25u
	/* enable reject for light sleep */
#define RTC_CNTL_SLP_REJECT_CONF_LIGHT_SLP_REJECT_EN		26u
	/* enable reject for deep sleep */
#define RTC_CNTL_SLP_REJECT_CONF_DEEP_SLP_REJECT_EN		27u
	/* sleep reject cause */
#define RTC_CNTL_SLP_REJECT_CONF_REJECT_CAUSE_Msb		28u
#define RTC_CNTL_SLP_REJECT_CONF_REJECT_CAUSE_Lsb		31u

	/* 0x68:  */
	uint32_t volatile CPU_PERIOD_CONF;
	/* CPU sel option */
#define RTC_CNTL_CPU_PERIOD_CONF_CPUSEL_CONF			29u
	/* CPU period sel */
#define RTC_CNTL_CPU_PERIOD_CONF_CPUPERIOD_SEL_Msb		30u
#define RTC_CNTL_CPU_PERIOD_CONF_CPUPERIOD_SEL_Lsb		31u

	/* 0x6C:  */
	uint32_t volatile SDIO_ACT_CONF;
	/*  */
#define RTC_CNTL_SDIO_ACT_CONF_SDIO_ACT_DNUM_Msb		22u
#define RTC_CNTL_SDIO_ACT_CONF_SDIO_ACT_DNUM_Lsb		31u

	/* 0x70:  */
	uint32_t volatile CLK_CONF;
	/* CK8M_D256_OUT divider. */
#define RTC_CNTL_CLK_CONF_CK8M_DIV_Msb				4u
#define RTC_CNTL_CLK_CONF_CK8M_DIV_Lsb				5u
	/* disable CK8M and CK8M_D256_OUT */
#define RTC_CNTL_CLK_CONF_ENB_CK8M				6u
	/* 1: CK8M_D256_OUT is actually CK8M  0: CK8M_D256_OUT is CK8M divided by 256 */
#define RTC_CNTL_CLK_CONF_ENB_CK8M_DIV				7u
	/* enable CK_XTAL_32K for digital core (no relationship with RTC core) */
#define RTC_CNTL_CLK_CONF_DIG_XTAL32K_EN			8u
	/* enable CK8M_D256_OUT for digital core (no relationship with RTC core) */
#define RTC_CNTL_CLK_CONF_DIG_CLK8M_D256_EN			9u
	/* enable CK8M for digital core (no relationship with RTC core) */
#define RTC_CNTL_CLK_CONF_DIG_CLK8M_EN				10u
	/*  */
#define RTC_CNTL_CLK_CONF_CK8M_DFREQ_FORCE			11u
	/* divider = reg_ck8m_div_sel + 1 */
#define RTC_CNTL_CLK_CONF_CK8M_DIV_SEL_Msb			12u
#define RTC_CNTL_CLK_CONF_CK8M_DIV_SEL_Lsb			14u
	/* XTAL force no gating during sleep */
#define RTC_CNTL_CLK_CONF_XTAL_FORCE_NOGATING			15u
	/* CK8M force no gating during sleep */
#define RTC_CNTL_CLK_CONF_CK8M_FORCE_NOGATING			16u
	/* CK8M_DFREQ */
#define RTC_CNTL_CLK_CONF_CK8M_DFREQ_Msb			17u
#define RTC_CNTL_CLK_CONF_CK8M_DFREQ_Lsb			24u
	/* CK8M force power down */
#define RTC_CNTL_CLK_CONF_CK8M_FORCE_PD				25u
	/* CK8M force power up */
#define RTC_CNTL_CLK_CONF_CK8M_FORCE_PU				26u
	/* SOC clock sel. */
#define RTC_CNTL_CLK_CONF_SOC_CLK_SEL_Msb			27u
#define RTC_CNTL_CLK_CONF_SOC_CLK_SEL_Lsb			28u
	/* fast_clk_rtc sel. */
#define RTC_CNTL_CLK_CONF_FAST_CLK_RTC_SEL			29u
	/* slow_clk_rtc sel. */
#define RTC_CNTL_CLK_CONF_ANA_CLK_RTC_SEL_Msb			30u
#define RTC_CNTL_CLK_CONF_ANA_CLK_RTC_SEL_Lsb			31u

	/* 0x74:  */
	uint32_t volatile SDIO_CONF;
	/* power down SDIO_REG in sleep. */
#define RTC_CNTL_SDIO_CONF_SDIO_PD_EN				21u
	/* 1: use SW option to control SDIO_REG  0: use state machine */
#define RTC_CNTL_SDIO_CONF_SDIO_FORCE				22u
	/* SW option for SDIO_TIEH. */
#define RTC_CNTL_SDIO_CONF_SDIO_TIEH				23u
	/* read only register for REG1P8_READY */
#define RTC_CNTL_SDIO_CONF_REG1P8_READY				24u
	/* SW option for DREFL_SDIO. */
#define RTC_CNTL_SDIO_CONF_DREFL_SDIO_Msb			25u
#define RTC_CNTL_SDIO_CONF_DREFL_SDIO_Lsb			26u
	/* SW option for DREFM_SDIO. */
#define RTC_CNTL_SDIO_CONF_DREFM_SDIO_Msb			27u
#define RTC_CNTL_SDIO_CONF_DREFM_SDIO_Lsb			28u
	/* SW option for DREFH_SDIO. */
#define RTC_CNTL_SDIO_CONF_DREFH_SDIO_Msb			29u
#define RTC_CNTL_SDIO_CONF_DREFH_SDIO_Lsb			30u
	/* SW option for XPD_SDIO_REG. */
#define RTC_CNTL_SDIO_CONF_XPD_SDIO				31u

	/* 0x78:  */
	uint32_t volatile BIAS_CONF;
	/* DBG_ATTEN */
#define RTC_CNTL_BIAS_CONF_DBG_ATTEN_Msb			24u
#define RTC_CNTL_BIAS_CONF_DBG_ATTEN_Lsb			25u
	/* ENB_SCK_XTAL */
#define RTC_CNTL_BIAS_CONF_ENB_SCK_XTAL				26u
	/* INC_HEARTBEAT_REFRESH */
#define RTC_CNTL_BIAS_CONF_INC_HEARTBEAT_REFRESH		27u
	/* DEC_HEARTBEAT_PERIOD */
#define RTC_CNTL_BIAS_CONF_DEC_HEARTBEAT_PERIOD			28u
	/* INC_HEARTBEAT_PERIOD */
#define RTC_CNTL_BIAS_CONF_INC_HEARTBEAT_PERIOD			29u
	/* DEC_HEARTBEAT_WIDTH */
#define RTC_CNTL_BIAS_CONF_DEC_HEARTBEAT_WIDTH			30u
	/* RST_BIAS_I2C */
#define RTC_CNTL_BIAS_CONF_RST_BIAS_I2C				31u

	/* 0x7C:  */
	uint32_t volatile REG;
	/* N/A */
#define RTC_CNTL_REG_SCK_DCAP_FORCE				7u
	/* DIG_REG_DBIAS during sleep */
#define RTC_CNTL_REG_DIG_DBIAS_SLP_Msb				8u
#define RTC_CNTL_REG_DIG_DBIAS_SLP_Lsb				10u
	/* DIG_REG_DBIAS during wakeup */
#define RTC_CNTL_REG_DIG_DBIAS_WAK_Msb				11u
#define RTC_CNTL_REG_DIG_DBIAS_WAK_Lsb				13u
	/* SCK_DCAP */
#define RTC_CNTL_REG_SCK_DCAP_Msb				14u
#define RTC_CNTL_REG_SCK_DCAP_Lsb				21u
	/* RTC_DBIAS during sleep */
#define RTC_CNTL_REG_DBIAS_SLP_Msb				22u
#define RTC_CNTL_REG_DBIAS_SLP_Lsb				24u
	/* RTC_DBIAS during wakeup */
#define RTC_CNTL_REG_DBIAS_WAK_Msb				25u
#define RTC_CNTL_REG_DBIAS_WAK_Lsb				27u
	/* RTC_DBOOST force power down */
#define RTC_CNTL_REG_DBOOST_FORCE_PD				28u
	/* RTC_DBOOST force power up */
#define RTC_CNTL_REG_DBOOST_FORCE_PU				29u
	/* RTC_REG force power down (for RTC_REG power down means decrease the voltage to 0.8v or lower ) */
#define RTC_CNTL_REG_FORCE_PD					30u
	/* RTC_REG force power up */
#define RTC_CNTL_REG_FORCE_PU					31u

	/* 0x80:  */
	uint32_t volatile PWC;
	/* Fast RTC memory force no ISO */
#define RTC_CNTL_PWC_FASTMEM_FORCE_NOISO			0u
	/* Fast RTC memory force ISO */
#define RTC_CNTL_PWC_FASTMEM_FORCE_ISO				1u
	/* RTC memory force no ISO */
#define RTC_CNTL_PWC_SLOWMEM_FORCE_NOISO			2u
	/* RTC memory force ISO */
#define RTC_CNTL_PWC_SLOWMEM_FORCE_ISO				3u
	/* rtc_peri force ISO */
#define RTC_CNTL_PWC_FORCE_ISO					4u
	/* rtc_peri force no ISO */
#define RTC_CNTL_PWC_FORCE_NOISO				5u
	/* 1: Fast RTC memory PD following CPU  0: fast RTC memory PD following RTC state machine */
#define RTC_CNTL_PWC_FASTMEM_FOLW_CPU				6u
	/* Fast RTC memory force PD */
#define RTC_CNTL_PWC_FASTMEM_FORCE_LPD				7u
	/* Fast RTC memory force no PD */
#define RTC_CNTL_PWC_FASTMEM_FORCE_LPU				8u
	/* 1: RTC memory  PD following CPU  0: RTC memory PD following RTC state machine */
#define RTC_CNTL_PWC_SLOWMEM_FOLW_CPU				9u
	/* RTC memory force PD */
#define RTC_CNTL_PWC_SLOWMEM_FORCE_LPD				10u
	/* RTC memory force no PD */
#define RTC_CNTL_PWC_SLOWMEM_FORCE_LPU				11u
	/* Fast RTC memory force power down */
#define RTC_CNTL_PWC_FASTMEM_FORCE_PD				12u
	/* Fast RTC memory force power up */
#define RTC_CNTL_PWC_FASTMEM_FORCE_PU				13u
	/* enable power down fast RTC memory in sleep */
#define RTC_CNTL_PWC_FASTMEM_PD_EN				14u
	/* RTC memory force power down */
#define RTC_CNTL_PWC_SLOWMEM_FORCE_PD				15u
	/* RTC memory force power up */
#define RTC_CNTL_PWC_SLOWMEM_FORCE_PU				16u
	/* enable power down RTC memory in sleep */
#define RTC_CNTL_PWC_SLOWMEM_PD_EN				17u
	/* rtc_peri force power down */
#define RTC_CNTL_PWC_FORCE_PD					18u
	/* rtc_peri force power up */
#define RTC_CNTL_PWC_FORCE_PU					19u
	/* enable power down rtc_peri in sleep */
#define RTC_CNTL_PWC_PD_EN					20u

	/* 0x84:  */
	uint32_t volatile DIG_PWC;
	/* memories in digital core force PD in sleep */
#define RTC_CNTL_DIG_PWC_LSLP_MEM_FORCE_PD			3u
	/* memories in digital core force no PD in sleep */
#define RTC_CNTL_DIG_PWC_LSLP_MEM_FORCE_PU			4u
	/* ROM force power down */
#define RTC_CNTL_DIG_PWC_ROM0_FORCE_PD				5u
	/* ROM force power up */
#define RTC_CNTL_DIG_PWC_ROM0_FORCE_PU				6u
	/* internal SRAM 0 force power down */
#define RTC_CNTL_DIG_PWC_INTER_RAM0_FORCE_PD			7u
	/* internal SRAM 0 force power up */
#define RTC_CNTL_DIG_PWC_INTER_RAM0_FORCE_PU			8u
	/* internal SRAM 1 force power down */
#define RTC_CNTL_DIG_PWC_INTER_RAM1_FORCE_PD			9u
	/* internal SRAM 1 force power up */
#define RTC_CNTL_DIG_PWC_INTER_RAM1_FORCE_PU			10u
	/* internal SRAM 2 force power down */
#define RTC_CNTL_DIG_PWC_INTER_RAM2_FORCE_PD			11u
	/* internal SRAM 2 force power up */
#define RTC_CNTL_DIG_PWC_INTER_RAM2_FORCE_PU			12u
	/* internal SRAM 3 force power down */
#define RTC_CNTL_DIG_PWC_INTER_RAM3_FORCE_PD			13u
	/* internal SRAM 3 force power up */
#define RTC_CNTL_DIG_PWC_INTER_RAM3_FORCE_PU			14u
	/* internal SRAM 4 force power down */
#define RTC_CNTL_DIG_PWC_INTER_RAM4_FORCE_PD			15u
	/* internal SRAM 4 force power up */
#define RTC_CNTL_DIG_PWC_INTER_RAM4_FORCE_PU			16u
	/* wifi force power down */
#define RTC_CNTL_DIG_PWC_WIFI_FORCE_PD				17u
	/* wifi force power up */
#define RTC_CNTL_DIG_PWC_WIFI_FORCE_PU				18u
	/* digital core force power down */
#define RTC_CNTL_DIG_PWC_DG_WRAP_FORCE_PD			19u
	/* digital core force power up */
#define RTC_CNTL_DIG_PWC_DG_WRAP_FORCE_PU			20u
	/* enable power down ROM in sleep */
#define RTC_CNTL_DIG_PWC_ROM0_PD_EN				24u
	/* enable power down internal SRAM 0 in sleep */
#define RTC_CNTL_DIG_PWC_INTER_RAM0_PD_EN			25u
	/* enable power down internal SRAM 1 in sleep */
#define RTC_CNTL_DIG_PWC_INTER_RAM1_PD_EN			26u
	/* enable power down internal SRAM 2 in sleep */
#define RTC_CNTL_DIG_PWC_INTER_RAM2_PD_EN			27u
	/* enable power down internal SRAM 3 in sleep */
#define RTC_CNTL_DIG_PWC_INTER_RAM3_PD_EN			28u
	/* enable power down internal SRAM 4 in sleep */
#define RTC_CNTL_DIG_PWC_INTER_RAM4_PD_EN			29u
	/* enable power down wifi in sleep */
#define RTC_CNTL_DIG_PWC_WIFI_PD_EN				30u
	/* enable power down digital core in sleep */
#define RTC_CNTL_DIG_PWC_DG_WRAP_PD_EN				31u

	/* 0x88:  */
	uint32_t volatile DIG_ISO;
	/*  */
#define RTC_CNTL_DIG_ISO_FORCE_OFF				7u
	/*  */
#define RTC_CNTL_DIG_ISO_FORCE_ON				8u
	/* read only register to indicate digital pad auto-hold status */
#define RTC_CNTL_DIG_ISO_DG_PAD_AUTOHOLD			9u
	/* wtite only register to clear digital pad auto-hold */
#define RTC_CNTL_DIG_ISO_CLR_DG_PAD_AUTOHOLD			10u
	/* digital pad enable auto-hold */
#define RTC_CNTL_DIG_ISO_DG_PAD_AUTOHOLD_EN			11u
	/* digital pad force no ISO */
#define RTC_CNTL_DIG_ISO_DG_PAD_FORCE_NOISO			12u
	/* digital pad force ISO */
#define RTC_CNTL_DIG_ISO_DG_PAD_FORCE_ISO			13u
	/* digital pad force un-hold */
#define RTC_CNTL_DIG_ISO_DG_PAD_FORCE_UNHOLD			14u
	/* digital pad force hold */
#define RTC_CNTL_DIG_ISO_DG_PAD_FORCE_HOLD			15u
	/* ROM force ISO */
#define RTC_CNTL_DIG_ISO_ROM0_FORCE_ISO				16u
	/* ROM force no ISO */
#define RTC_CNTL_DIG_ISO_ROM0_FORCE_NOISO			17u
	/* internal SRAM 0 force ISO */
#define RTC_CNTL_DIG_ISO_INTER_RAM0_FORCE_ISO			18u
	/* internal SRAM 0 force no ISO */
#define RTC_CNTL_DIG_ISO_INTER_RAM0_FORCE_NOISO			19u
	/* internal SRAM 1 force ISO */
#define RTC_CNTL_DIG_ISO_INTER_RAM1_FORCE_ISO			20u
	/* internal SRAM 1 force no ISO */
#define RTC_CNTL_DIG_ISO_INTER_RAM1_FORCE_NOISO			21u
	/* internal SRAM 2 force ISO */
#define RTC_CNTL_DIG_ISO_INTER_RAM2_FORCE_ISO			22u
	/* internal SRAM 2 force no ISO */
#define RTC_CNTL_DIG_ISO_INTER_RAM2_FORCE_NOISO			23u
	/* internal SRAM 3 force ISO */
#define RTC_CNTL_DIG_ISO_INTER_RAM3_FORCE_ISO			24u
	/* internal SRAM 3 force no ISO */
#define RTC_CNTL_DIG_ISO_INTER_RAM3_FORCE_NOISO			25u
	/* internal SRAM 4 force ISO */
#define RTC_CNTL_DIG_ISO_INTER_RAM4_FORCE_ISO			26u
	/* internal SRAM 4 force no ISO */
#define RTC_CNTL_DIG_ISO_INTER_RAM4_FORCE_NOISO			27u
	/* wifi force ISO */
#define RTC_CNTL_DIG_ISO_WIFI_FORCE_ISO				28u
	/* wifi force no ISO */
#define RTC_CNTL_DIG_ISO_WIFI_FORCE_NOISO			29u
	/* digital core force ISO */
#define RTC_CNTL_DIG_ISO_DG_WRAP_FORCE_ISO			30u
	/* digital core force no ISO */
#define RTC_CNTL_DIG_ISO_DG_WRAP_FORCE_NOISO			31u

	/* 0x8C:  */
	uint32_t volatile WDTCONFIG0;
	/* pause WDT in sleep */
#define RTC_CNTL_WDTCONFIG0_WDT_PAUSE_IN_SLP			7u
	/* enable WDT reset APP CPU */
#define RTC_CNTL_WDTCONFIG0_WDT_APPCPU_RESET_EN			8u
	/* enable WDT reset PRO CPU */
#define RTC_CNTL_WDTCONFIG0_WDT_PROCPU_RESET_EN			9u
	/* enable WDT in flash boot */
#define RTC_CNTL_WDTCONFIG0_WDT_FLASHBOOT_MOD_EN		10u
	/* system reset counter length */
#define RTC_CNTL_WDTCONFIG0_WDT_SYS_RESET_LENGTH_Msb		11u
#define RTC_CNTL_WDTCONFIG0_WDT_SYS_RESET_LENGTH_Lsb		13u
	/* CPU reset counter length */
#define RTC_CNTL_WDTCONFIG0_WDT_CPU_RESET_LENGTH_Msb		14u
#define RTC_CNTL_WDTCONFIG0_WDT_CPU_RESET_LENGTH_Lsb		16u
	/* N/A */
#define RTC_CNTL_WDTCONFIG0_WDT_LEVEL_INT_EN			17u
	/* N/A */
#define RTC_CNTL_WDTCONFIG0_WDT_EDGE_INT_EN			18u
	/* 1: interrupt stage en  2: CPU reset stage en  3: system reset stage en  4: RTC reset stage en */
#define RTC_CNTL_WDTCONFIG0_WDT_STG3_Msb			19u
#define RTC_CNTL_WDTCONFIG0_WDT_STG3_Lsb			21u
	/* 1: interrupt stage en  2: CPU reset stage en  3: system reset stage en  4: RTC reset stage en */
#define RTC_CNTL_WDTCONFIG0_WDT_STG2_Msb			22u
#define RTC_CNTL_WDTCONFIG0_WDT_STG2_Lsb			24u
	/* 1: interrupt stage en  2: CPU reset stage en  3: system reset stage en  4: RTC reset stage en */
#define RTC_CNTL_WDTCONFIG0_WDT_STG1_Msb			25u
#define RTC_CNTL_WDTCONFIG0_WDT_STG1_Lsb			27u
	/* 1: interrupt stage en  2: CPU reset stage en  3: system reset stage en  4: RTC reset stage en */
#define RTC_CNTL_WDTCONFIG0_WDT_STG0_Msb			28u
#define RTC_CNTL_WDTCONFIG0_WDT_STG0_Lsb			30u
	/* enable RTC WDT */
#define RTC_CNTL_WDTCONFIG0_WDT_EN				31u

	/* 0x90:  */
	uint32_t volatile WDTCONFIG1;
	/*  */
#define RTC_CNTL_WDTCONFIG1_WDT_STG0_HOLD_Msb			0u
#define RTC_CNTL_WDTCONFIG1_WDT_STG0_HOLD_Lsb			31u

	/* 0x94:  */
	uint32_t volatile WDTCONFIG2;
	/*  */
#define RTC_CNTL_WDTCONFIG2_WDT_STG1_HOLD_Msb			0u
#define RTC_CNTL_WDTCONFIG2_WDT_STG1_HOLD_Lsb			31u

	/* 0x98:  */
	uint32_t volatile WDTCONFIG3;
	/*  */
#define RTC_CNTL_WDTCONFIG3_WDT_STG2_HOLD_Msb			0u
#define RTC_CNTL_WDTCONFIG3_WDT_STG2_HOLD_Lsb			31u

	/* 0x9C:  */
	uint32_t volatile WDTCONFIG4;
	/*  */
#define RTC_CNTL_WDTCONFIG4_WDT_STG3_HOLD_Msb			0u
#define RTC_CNTL_WDTCONFIG4_WDT_STG3_HOLD_Lsb			31u

	/* 0xA0:  */
	uint32_t volatile WDTFEED;
	/*  */
#define RTC_CNTL_WDTFEED_WDT_FEED				31u

	/* 0xA4:  */
	uint32_t volatile WDTWPROTECT;
	/*  */
#define RTC_CNTL_WDTWPROTECT_WDT_WKEY_Msb			0u
#define RTC_CNTL_WDTWPROTECT_WDT_WKEY_Lsb			31u

	/* 0xA8:  */
	uint32_t volatile TEST_MUX;
	/* ENT_RTC */
#define RTC_CNTL_TEST_MUX_ENT_RTC				29u
	/* DTEST_RTC */
#define RTC_CNTL_TEST_MUX_DTEST_RTC_Msb				30u
#define RTC_CNTL_TEST_MUX_DTEST_RTC_Lsb				31u

	/* 0xAC:  */
	uint32_t volatile SW_CPU_STALL;
	/* {reg_sw_stall_appcpu_c1[5:0]   reg_sw_stall_appcpu_c0[1:0]} == 0x86 will stall APP CPU */
#define RTC_CNTL_SW_CPU_STALL_SW_STALL_APPCPU_C1_Msb		20u
#define RTC_CNTL_SW_CPU_STALL_SW_STALL_APPCPU_C1_Lsb		25u
	/* {reg_sw_stall_procpu_c1[5:0]   reg_sw_stall_procpu_c0[1:0]} == 0x86 will stall PRO CPU */
#define RTC_CNTL_SW_CPU_STALL_SW_STALL_PROCPU_C1_Msb		26u
#define RTC_CNTL_SW_CPU_STALL_SW_STALL_PROCPU_C1_Lsb		31u

	/* 0xB0:  */
	uint32_t volatile STORE4;
	/* 32-bit general purpose retention register */
#define RTC_CNTL_STORE4_SCRATCH4_Msb				0u
#define RTC_CNTL_STORE4_SCRATCH4_Lsb				31u

	/* 0xB4:  */
	uint32_t volatile STORE5;
	/* 32-bit general purpose retention register */
#define RTC_CNTL_STORE5_SCRATCH5_Msb				0u
#define RTC_CNTL_STORE5_SCRATCH5_Lsb				31u

	/* 0xB8:  */
	uint32_t volatile STORE6;
	/* 32-bit general purpose retention register */
#define RTC_CNTL_STORE6_SCRATCH6_Msb				0u
#define RTC_CNTL_STORE6_SCRATCH6_Lsb				31u

	/* 0xBC:  */
	uint32_t volatile STORE7;
	/* 32-bit general purpose retention register */
#define RTC_CNTL_STORE7_SCRATCH7_Msb				0u
#define RTC_CNTL_STORE7_SCRATCH7_Lsb				31u

	/* 0xC0:  */
	uint32_t volatile LOW_POWER_ST;
	/*  */
#define RTC_CNTL_LOW_POWER_ST_LOW_POWER_DIAG0_Msb		0u
#define RTC_CNTL_LOW_POWER_ST_LOW_POWER_DIAG0_Lsb		31u
	/* 1 if RTC controller is ready to execute WAKE instruction, 0 otherwise */
#define RTC_CNTL_LOW_POWER_ST_RDY_FOR_WAKEUP			19u

	/* 0xC4:  */
	uint32_t volatile DIAG1;
	/*  */
#define RTC_CNTL_DIAG1_LOW_POWER_DIAG1_Msb			0u
#define RTC_CNTL_DIAG1_LOW_POWER_DIAG1_Lsb			31u

	/* 0xC8:  */
	uint32_t volatile HOLD_FORCE;
	/*  */
#define RTC_CNTL_HOLD_FORCE_ADC1_HOLD_FORCE			0u
	/*  */
#define RTC_CNTL_HOLD_FORCE_ADC2_HOLD_FORCE			1u
	/*  */
#define RTC_CNTL_HOLD_FORCE_PDAC1_HOLD_FORCE			2u
	/*  */
#define RTC_CNTL_HOLD_FORCE_PDAC2_HOLD_FORCE			3u
	/*  */
#define RTC_CNTL_HOLD_FORCE_SENSE1_HOLD_FORCE			4u
	/*  */
#define RTC_CNTL_HOLD_FORCE_SENSE2_HOLD_FORCE			5u
	/*  */
#define RTC_CNTL_HOLD_FORCE_SENSE3_HOLD_FORCE			6u
	/*  */
#define RTC_CNTL_HOLD_FORCE_SENSE4_HOLD_FORCE			7u
	/*  */
#define RTC_CNTL_HOLD_FORCE_TOUCH_PAD0_HOLD_FORCE		8u
	/*  */
#define RTC_CNTL_HOLD_FORCE_TOUCH_PAD1_HOLD_FORCE		9u
	/*  */
#define RTC_CNTL_HOLD_FORCE_TOUCH_PAD2_HOLD_FORCE		10u
	/*  */
#define RTC_CNTL_HOLD_FORCE_TOUCH_PAD3_HOLD_FORCE		11u
	/*  */
#define RTC_CNTL_HOLD_FORCE_TOUCH_PAD4_HOLD_FORCE		12u
	/*  */
#define RTC_CNTL_HOLD_FORCE_TOUCH_PAD5_HOLD_FORCE		13u
	/*  */
#define RTC_CNTL_HOLD_FORCE_TOUCH_PAD6_HOLD_FORCE		14u
	/*  */
#define RTC_CNTL_HOLD_FORCE_TOUCH_PAD7_HOLD_FORCE		15u
	/*  */
#define RTC_CNTL_HOLD_FORCE_X32P_HOLD_FORCE			16u
	/*  */
#define RTC_CNTL_HOLD_FORCE_X32N_HOLD_FORCE			17u

	/* 0xCC:  */
	uint32_t volatile EXT_WAKEUP1;
	/* Bitmap to select RTC pads for ext wakeup1 */
#define RTC_CNTL_EXT_WAKEUP1_SEL_Msb				0u
#define RTC_CNTL_EXT_WAKEUP1_SEL_Lsb				17u
	/* clear ext wakeup1 status */
#define RTC_CNTL_EXT_WAKEUP1_STATUS_CLR				18u

	/* 0xD0:  */
	uint32_t volatile EXT_WAKEUP1_STATUS;
	/* ext wakeup1 status */
#define RTC_CNTL_EXT_WAKEUP1_STATUS_EXT_WAKEUP1_STATUS_Msb	0u
#define RTC_CNTL_EXT_WAKEUP1_STATUS_EXT_WAKEUP1_STATUS_Lsb	17u

	/* 0xD4:  */
	uint32_t volatile BROWN_OUT;
	/*  */
#define RTC_CNTL_BROWN_OUT_RTC_MEM_PID_CONF_Msb			0u
#define RTC_CNTL_BROWN_OUT_RTC_MEM_PID_CONF_Lsb			7u
	/*  */
#define RTC_CNTL_BROWN_OUT_RTC_MEM_CRC_START			8u
	/*  */
#define RTC_CNTL_BROWN_OUT_RTC_MEM_CRC_ADDR_Msb			9u
#define RTC_CNTL_BROWN_OUT_RTC_MEM_CRC_ADDR_Lsb			19u
	/* enable close flash when brown out happens */
#define RTC_CNTL_BROWN_OUT_CLOSE_FLASH_ENA			14u
	/* enable power down RF when brown out happens */
#define RTC_CNTL_BROWN_OUT_PD_RF_ENA				15u
	/* brown out reset wait cycles */
#define RTC_CNTL_BROWN_OUT_RST_WAIT_Msb				16u
#define RTC_CNTL_BROWN_OUT_RST_WAIT_Lsb				25u
	/*  */
#define RTC_CNTL_BROWN_OUT_RTC_MEM_CRC_LEN_Msb			20u
#define RTC_CNTL_BROWN_OUT_RTC_MEM_CRC_LEN_Lsb			30u
	/* enable brown out reset */
#define RTC_CNTL_BROWN_OUT_RST_ENA				26u
	/* brown out threshold */
#define RTC_CNTL_BROWN_OUT_DBROWN_OUT_THRES_Msb			27u
#define RTC_CNTL_BROWN_OUT_DBROWN_OUT_THRES_Lsb			29u
	/* enable brown out */
#define RTC_CNTL_BROWN_OUT_ENA					30u
	/* brown out detect */
#define RTC_CNTL_BROWN_OUT_DET					31u
	/*  */
#define RTC_CNTL_BROWN_OUT_RTC_MEM_CRC_FINISH			31u

	/* 0xF4 */
	uint8_t RESERVED0[0x13C-0xF4];

	/* 0x13C:  */
	uint32_t volatile DATE;
	/*  */
#define RTC_CNTL_DATE_CNTL_DATE_Msb				0u
#define RTC_CNTL_DATE_CNTL_DATE_Lsb				27u

};


#define RTCIO ((struct mcu_rtcio *)0x3FF48400)

struct mcu_rtcio {

	/* 0x00:  */
	uint32_t volatile OUT;
	/* GPIO0~17 output value */
#define RTCIO_OUT_DATA_Msb					14u
#define RTCIO_OUT_DATA_Lsb					31u

	/* 0x04:  */
	uint32_t volatile OUT_W1TS;
	/* GPIO0~17 output value write 1 to set */
#define RTCIO_OUT_W1TS_OUT_DATA_W1TS_Msb			14u
#define RTCIO_OUT_W1TS_OUT_DATA_W1TS_Lsb			31u

	/* 0x08:  */
	uint32_t volatile OUT_W1TC;
	/* GPIO0~17 output value write 1 to clear */
#define RTCIO_OUT_W1TC_OUT_DATA_W1TC_Msb			14u
#define RTCIO_OUT_W1TC_OUT_DATA_W1TC_Lsb			31u

	/* 0x0C:  */
	uint32_t volatile ENABLE;
	/* GPIO0~17 output enable */
#define RTCIO_ENABLE_ENABLE_Msb					14u
#define RTCIO_ENABLE_ENABLE_Lsb					31u

	/* 0x10:  */
	uint32_t volatile ENABLE_W1TS;
	/* GPIO0~17 output enable write 1 to set */
#define RTCIO_ENABLE_W1TS_ENABLE_W1TS_Msb			14u
#define RTCIO_ENABLE_W1TS_ENABLE_W1TS_Lsb			31u

	/* 0x14:  */
	uint32_t volatile ENABLE_W1TC;
	/* GPIO0~17 output enable write 1 to clear */
#define RTCIO_ENABLE_W1TC_ENABLE_W1TC_Msb			14u
#define RTCIO_ENABLE_W1TC_ENABLE_W1TC_Lsb			31u

	/* 0x18:  */
	uint32_t volatile STATUS;
	/* GPIO0~17 interrupt status */
#define RTCIO_STATUS_INT_Msb					14u
#define RTCIO_STATUS_INT_Lsb					31u

	/* 0x1C:  */
	uint32_t volatile STATUS_W1TS;
	/* GPIO0~17 interrupt status write 1 to set */
#define RTCIO_STATUS_W1TS_STATUS_INT_W1TS_Msb			14u
#define RTCIO_STATUS_W1TS_STATUS_INT_W1TS_Lsb			31u

	/* 0x20:  */
	uint32_t volatile STATUS_W1TC;
	/* GPIO0~17 interrupt status write 1 to clear */
#define RTCIO_STATUS_W1TC_STATUS_INT_W1TC_Msb			14u
#define RTCIO_STATUS_W1TC_STATUS_INT_W1TC_Lsb			31u

	/* 0x24:  */
	uint32_t volatile IN;
	/* GPIO0~17 input value */
#define RTCIO_IN_NEXT_Msb					14u
#define RTCIO_IN_NEXT_Lsb					31u

	/* 0x28:  */
	uint32_t volatile PIN%S;
	/* if set to : normal output  if set to 1: open drain */
#define RTCIO_PIN%S_PIN_PAD_DRIVER				2u
	/* if set to : GPIO interrupt disable  if set to 1: rising edge trigger  if set to 2: falling edge trigger  if set to 3: any edge trigger  if set to 4: low level trigger  if set to 5: high level trigger */
#define RTCIO_PIN%S_PIN_INT_TYPE_Msb				7u
#define RTCIO_PIN%S_PIN_INT_TYPE_Lsb				9u
	/* GPIO wake up enable  only available in light sleep */
#define RTCIO_PIN%S_PIN_WAKEUP_ENABLE				10u

	/* 0x48 */
	uint8_t RESERVED0[0x70-0x48];

	/* 0x70:  */
	uint32_t volatile RTC_DEBUG_SEL;
	/*  */
#define RTCIO_RTC_DEBUG_SEL_DEBUG_SEL0_Msb			0u
#define RTCIO_RTC_DEBUG_SEL_DEBUG_SEL0_Lsb			4u
	/*  */
#define RTCIO_RTC_DEBUG_SEL_DEBUG_SEL1_Msb			5u
#define RTCIO_RTC_DEBUG_SEL_DEBUG_SEL1_Lsb			9u
	/*  */
#define RTCIO_RTC_DEBUG_SEL_DEBUG_SEL2_Msb			10u
#define RTCIO_RTC_DEBUG_SEL_DEBUG_SEL2_Lsb			14u
	/*  */
#define RTCIO_RTC_DEBUG_SEL_DEBUG_SEL3_Msb			15u
#define RTCIO_RTC_DEBUG_SEL_DEBUG_SEL3_Lsb			19u
	/*  */
#define RTCIO_RTC_DEBUG_SEL_DEBUG_SEL4_Msb			20u
#define RTCIO_RTC_DEBUG_SEL_DEBUG_SEL4_Lsb			24u
	/*  */
#define RTCIO_RTC_DEBUG_SEL_DEBUG_12M_NO_GATING			25u

	/* 0x74:  */
	uint32_t volatile DIG_PAD_HOLD;
	/* select the digital pad hold value. */
#define RTCIO_DIG_PAD_HOLD_DIG_PAD_HOLD_Msb			0u
#define RTCIO_DIG_PAD_HOLD_DIG_PAD_HOLD_Lsb			31u

	/* 0x78:  */
	uint32_t volatile HALL_SENS;
	/* Reverse phase of hall sensor */
#define RTCIO_HALL_SENS_HALL_PHASE				30u
	/* Power on hall sensor and connect to VP and VN */
#define RTCIO_HALL_SENS_XPD_HALL				31u

	/* 0x7C:  */
	uint32_t volatile SENSOR_PADS;
	/* the input enable of the pad */
#define RTCIO_SENSOR_PADS_SENSE4_FUN_IE				4u
	/* the input enable of the pad in sleep status */
#define RTCIO_SENSOR_PADS_SENSE4_SLP_IE				5u
	/* the sleep status selection signal of the pad */
#define RTCIO_SENSOR_PADS_SENSE4_SLP_SEL			6u
	/* the functional selection signal of the pad */
#define RTCIO_SENSOR_PADS_SENSE4_FUN_SEL_Msb			7u
#define RTCIO_SENSOR_PADS_SENSE4_FUN_SEL_Lsb			8u
	/* the input enable of the pad */
#define RTCIO_SENSOR_PADS_SENSE3_FUN_IE				9u
	/* the input enable of the pad in sleep status */
#define RTCIO_SENSOR_PADS_SENSE3_SLP_IE				10u
	/* the sleep status selection signal of the pad */
#define RTCIO_SENSOR_PADS_SENSE3_SLP_SEL			11u
	/* the functional selection signal of the pad */
#define RTCIO_SENSOR_PADS_SENSE3_FUN_SEL_Msb			12u
#define RTCIO_SENSOR_PADS_SENSE3_FUN_SEL_Lsb			13u
	/* the input enable of the pad */
#define RTCIO_SENSOR_PADS_SENSE2_FUN_IE				14u
	/* the input enable of the pad in sleep status */
#define RTCIO_SENSOR_PADS_SENSE2_SLP_IE				15u
	/* the sleep status selection signal of the pad */
#define RTCIO_SENSOR_PADS_SENSE2_SLP_SEL			16u
	/* the functional selection signal of the pad */
#define RTCIO_SENSOR_PADS_SENSE2_FUN_SEL_Msb			17u
#define RTCIO_SENSOR_PADS_SENSE2_FUN_SEL_Lsb			18u
	/* the input enable of the pad */
#define RTCIO_SENSOR_PADS_SENSE1_FUN_IE				19u
	/* the input enable of the pad in sleep status */
#define RTCIO_SENSOR_PADS_SENSE1_SLP_IE				20u
	/* the sleep status selection signal of the pad */
#define RTCIO_SENSOR_PADS_SENSE1_SLP_SEL			21u
	/* the functional selection signal of the pad */
#define RTCIO_SENSOR_PADS_SENSE1_FUN_SEL_Msb			22u
#define RTCIO_SENSOR_PADS_SENSE1_FUN_SEL_Lsb			23u
	/* Ò1Ó select the digital function  Ó0Óslection the rtc function */
#define RTCIO_SENSOR_PADS_SENSE4_MUX_SEL			24u
	/* Ò1Ó select the digital function  Ó0Óslection the rtc function */
#define RTCIO_SENSOR_PADS_SENSE3_MUX_SEL			25u
	/* Ò1Ó select the digital function  Ó0Óslection the rtc function */
#define RTCIO_SENSOR_PADS_SENSE2_MUX_SEL			26u
	/* Ò1Ó select the digital function  Ó0Óslection the rtc function */
#define RTCIO_SENSOR_PADS_SENSE1_MUX_SEL			27u
	/* hold the current value of the output when setting the hold to Ò1Ó */
#define RTCIO_SENSOR_PADS_SENSE4_HOLD				28u
	/* hold the current value of the output when setting the hold to Ò1Ó */
#define RTCIO_SENSOR_PADS_SENSE3_HOLD				29u
	/* hold the current value of the output when setting the hold to Ò1Ó */
#define RTCIO_SENSOR_PADS_SENSE2_HOLD				30u
	/* hold the current value of the output when setting the hold to Ò1Ó */
#define RTCIO_SENSOR_PADS_SENSE1_HOLD				31u

	/* 0x80:  */
	uint32_t volatile ADC_PAD;
	/* the input enable of the pad */
#define RTCIO_ADC_PAD_ADC2_FUN_IE				18u
	/* the input enable of the pad in sleep status */
#define RTCIO_ADC_PAD_ADC2_SLP_IE				19u
	/* the sleep status selection signal of the pad */
#define RTCIO_ADC_PAD_ADC2_SLP_SEL				20u
	/* the functional selection signal of the pad */
#define RTCIO_ADC_PAD_ADC2_FUN_SEL_Msb				21u
#define RTCIO_ADC_PAD_ADC2_FUN_SEL_Lsb				22u
	/* the input enable of the pad */
#define RTCIO_ADC_PAD_ADC1_FUN_IE				23u
	/* the input enable of the pad in sleep status */
#define RTCIO_ADC_PAD_ADC1_SLP_IE				24u
	/* the sleep status selection signal of the pad */
#define RTCIO_ADC_PAD_ADC1_SLP_SEL				25u
	/* the functional selection signal of the pad */
#define RTCIO_ADC_PAD_ADC1_FUN_SEL_Msb				26u
#define RTCIO_ADC_PAD_ADC1_FUN_SEL_Lsb				27u
	/* Ò1Ó select the digital function  Ó0Óslection the rtc function */
#define RTCIO_ADC_PAD_ADC2_MUX_SEL				28u
	/* Ò1Ó select the digital function  Ó0Óslection the rtc function */
#define RTCIO_ADC_PAD_ADC1_MUX_SEL				29u
	/* hold the current value of the output when setting the hold to Ò1Ó */
#define RTCIO_ADC_PAD_ADC2_HOLD					30u
	/* hold the current value of the output when setting the hold to Ò1Ó */
#define RTCIO_ADC_PAD_ADC1_HOLD					31u

	/* 0x84:  */
	uint32_t volatile PAD_DAC1;
	/* Power on DAC1. */
#define RTCIO_PAD_DAC1_PDAC1_DAC_XPD_FORCE			10u
	/* the input enable of the pad */
#define RTCIO_PAD_DAC1_PDAC1_FUN_IE				11u
	/* the output enable of the pad in sleep status */
#define RTCIO_PAD_DAC1_PDAC1_SLP_OE				12u
	/* the input enable of the pad in sleep status */
#define RTCIO_PAD_DAC1_PDAC1_SLP_IE				13u
	/* the sleep status selection signal of the pad */
#define RTCIO_PAD_DAC1_PDAC1_SLP_SEL				14u
	/* the functional selection signal of the pad */
#define RTCIO_PAD_DAC1_PDAC1_FUN_SEL_Msb			15u
#define RTCIO_PAD_DAC1_PDAC1_FUN_SEL_Lsb			16u
	/* Ò1Ó select the digital function  Ó0Óslection the rtc function */
#define RTCIO_PAD_DAC1_PDAC1_MUX_SEL				17u
	/* Power on DAC1. */
#define RTCIO_PAD_DAC1_PDAC1_XPD_DAC				18u
	/* PAD DAC1 control code. */
#define RTCIO_PAD_DAC1_PDAC1_DAC_Msb				19u
#define RTCIO_PAD_DAC1_PDAC1_DAC_Lsb				26u
	/* the pull up enable of the pad */
#define RTCIO_PAD_DAC1_PDAC1_RUE				27u
	/* the pull down enable of the pad */
#define RTCIO_PAD_DAC1_PDAC1_RDE				28u
	/* hold the current value of the output when setting the hold to Ò1Ó */
#define RTCIO_PAD_DAC1_PDAC1_HOLD				29u
	/* the driver strength of the pad */
#define RTCIO_PAD_DAC1_PDAC1_DRV_Msb				30u
#define RTCIO_PAD_DAC1_PDAC1_DRV_Lsb				31u

	/* 0x88:  */
	uint32_t volatile PAD_DAC2;
	/* Power on DAC2. */
#define RTCIO_PAD_DAC2_PDAC2_DAC_XPD_FORCE			10u
	/* the input enable of the pad */
#define RTCIO_PAD_DAC2_PDAC2_FUN_IE				11u
	/* the output enable of the pad in sleep status */
#define RTCIO_PAD_DAC2_PDAC2_SLP_OE				12u
	/* the input enable of the pad in sleep status */
#define RTCIO_PAD_DAC2_PDAC2_SLP_IE				13u
	/* the sleep status selection signal of the pad */
#define RTCIO_PAD_DAC2_PDAC2_SLP_SEL				14u
	/* the functional selection signal of the pad */
#define RTCIO_PAD_DAC2_PDAC2_FUN_SEL_Msb			15u
#define RTCIO_PAD_DAC2_PDAC2_FUN_SEL_Lsb			16u
	/* Ò1Ó select the digital function  Ó0Óslection the rtc function */
#define RTCIO_PAD_DAC2_PDAC2_MUX_SEL				17u
	/* Power on DAC2. */
#define RTCIO_PAD_DAC2_PDAC2_XPD_DAC				18u
	/* PAD DAC2 control code. */
#define RTCIO_PAD_DAC2_PDAC2_DAC_Msb				19u
#define RTCIO_PAD_DAC2_PDAC2_DAC_Lsb				26u
	/* the pull up enable of the pad */
#define RTCIO_PAD_DAC2_PDAC2_RUE				27u
	/* the pull down enable of the pad */
#define RTCIO_PAD_DAC2_PDAC2_RDE				28u
	/* hold the current value of the output when setting the hold to Ò1Ó */
#define RTCIO_PAD_DAC2_PDAC2_HOLD				29u
	/* the driver strength of the pad */
#define RTCIO_PAD_DAC2_PDAC2_DRV_Msb				30u
#define RTCIO_PAD_DAC2_PDAC2_DRV_Lsb				31u

	/* 0x8C:  */
	uint32_t volatile XTAL_32K_PAD;
	/* 32K XTAL self-bias reference control. */
#define RTCIO_XTAL_32K_PAD_DBIAS_XTAL_32K_Msb			1u
#define RTCIO_XTAL_32K_PAD_DBIAS_XTAL_32K_Lsb			2u
	/* 32K XTAL resistor bias control. */
#define RTCIO_XTAL_32K_PAD_DRES_XTAL_32K_Msb			3u
#define RTCIO_XTAL_32K_PAD_DRES_XTAL_32K_Lsb			4u
	/* the input enable of the pad */
#define RTCIO_XTAL_32K_PAD_X32P_FUN_IE				5u
	/* the output enable of the pad in sleep status */
#define RTCIO_XTAL_32K_PAD_X32P_SLP_OE				6u
	/* the input enable of the pad in sleep status */
#define RTCIO_XTAL_32K_PAD_X32P_SLP_IE				7u
	/* the sleep status selection signal of the pad */
#define RTCIO_XTAL_32K_PAD_X32P_SLP_SEL				8u
	/* the functional selection signal of the pad */
#define RTCIO_XTAL_32K_PAD_X32P_FUN_SEL_Msb			9u
#define RTCIO_XTAL_32K_PAD_X32P_FUN_SEL_Lsb			10u
	/* the input enable of the pad */
#define RTCIO_XTAL_32K_PAD_X32N_FUN_IE				11u
	/* the output enable of the pad in sleep status */
#define RTCIO_XTAL_32K_PAD_X32N_SLP_OE				12u
	/* the input enable of the pad in sleep status */
#define RTCIO_XTAL_32K_PAD_X32N_SLP_IE				13u
	/* the sleep status selection signal of the pad */
#define RTCIO_XTAL_32K_PAD_X32N_SLP_SEL				14u
	/* the functional selection signal of the pad */
#define RTCIO_XTAL_32K_PAD_X32N_FUN_SEL_Msb			15u
#define RTCIO_XTAL_32K_PAD_X32N_FUN_SEL_Lsb			16u
	/* Ò1Ó select the digital function  Ó0Óslection the rtc function */
#define RTCIO_XTAL_32K_PAD_X32P_MUX_SEL				17u
	/* Ò1Ó select the digital function  Ó0Óslection the rtc function */
#define RTCIO_XTAL_32K_PAD_X32N_MUX_SEL				18u
	/* Power up 32kHz crystal oscillator */
#define RTCIO_XTAL_32K_PAD_XPD_XTAL_32K				19u
	/* 32K XTAL bias current DAC. */
#define RTCIO_XTAL_32K_PAD_DAC_XTAL_32K_Msb			20u
#define RTCIO_XTAL_32K_PAD_DAC_XTAL_32K_Lsb			21u
	/* the pull up enable of the pad */
#define RTCIO_XTAL_32K_PAD_X32P_RUE				22u
	/* the pull down enable of the pad */
#define RTCIO_XTAL_32K_PAD_X32P_RDE				23u
	/* hold the current value of the output when setting the hold to Ò1Ó */
#define RTCIO_XTAL_32K_PAD_X32P_HOLD				24u
	/* the driver strength of the pad */
#define RTCIO_XTAL_32K_PAD_X32P_DRV_Msb				25u
#define RTCIO_XTAL_32K_PAD_X32P_DRV_Lsb				26u
	/* the pull up enable of the pad */
#define RTCIO_XTAL_32K_PAD_X32N_RUE				27u
	/* the pull down enable of the pad */
#define RTCIO_XTAL_32K_PAD_X32N_RDE				28u
	/* hold the current value of the output when setting the hold to Ò1Ó */
#define RTCIO_XTAL_32K_PAD_X32N_HOLD				29u
	/* the driver strength of the pad */
#define RTCIO_XTAL_32K_PAD_X32N_DRV_Msb				30u
#define RTCIO_XTAL_32K_PAD_X32N_DRV_Lsb				31u

	/* 0x90:  */
	uint32_t volatile TOUCH_CFG;
	/* touch sensor bias current. */
#define RTCIO_TOUCH_CFG_TOUCH_DCUR_Msb				23u
#define RTCIO_TOUCH_CFG_TOUCH_DCUR_Lsb				24u
	/* touch sensor saw wave voltage range. */
#define RTCIO_TOUCH_CFG_TOUCH_DRANGE_Msb			25u
#define RTCIO_TOUCH_CFG_TOUCH_DRANGE_Lsb			26u
	/* touch sensor saw wave bottom voltage. */
#define RTCIO_TOUCH_CFG_TOUCH_DREFL_Msb				27u
#define RTCIO_TOUCH_CFG_TOUCH_DREFL_Lsb				28u
	/* touch sensor saw wave top voltage. */
#define RTCIO_TOUCH_CFG_TOUCH_DREFH_Msb				29u
#define RTCIO_TOUCH_CFG_TOUCH_DREFH_Lsb				30u
	/* touch sensor bias power on. */
#define RTCIO_TOUCH_CFG_TOUCH_XPD_BIAS				31u

	/* 0x94:  */
	uint32_t volatile TOUCH_PAD0;
	/* connect the rtc pad input to digital pad input Ó0Ó is availbale GPIO4 */
#define RTCIO_TOUCH_PAD0_TO_GPIO				12u
	/* the input enable of the pad */
#define RTCIO_TOUCH_PAD0_FUN_IE					13u
	/* the output enable of the pad in sleep status */
#define RTCIO_TOUCH_PAD0_SLP_OE					14u
	/* the input enable of the pad in sleep status */
#define RTCIO_TOUCH_PAD0_SLP_IE					15u
	/* the sleep status selection signal of the pad */
#define RTCIO_TOUCH_PAD0_SLP_SEL				16u
	/* the functional selection signal of the pad */
#define RTCIO_TOUCH_PAD0_FUN_SEL_Msb				17u
#define RTCIO_TOUCH_PAD0_FUN_SEL_Lsb				18u
	/* Ò1Ó select the digital function  Ó0Óslection the rtc function */
#define RTCIO_TOUCH_PAD0_MUX_SEL				19u
	/* touch sensor power on. */
#define RTCIO_TOUCH_PAD0_XPD					20u
	/* default touch sensor tie option. */
#define RTCIO_TOUCH_PAD0_TIE_OPT				21u
	/* start touch sensor. */
#define RTCIO_TOUCH_PAD0_START					22u
	/* touch sensor slope control. */
#define RTCIO_TOUCH_PAD0_DAC_Msb				23u
#define RTCIO_TOUCH_PAD0_DAC_Lsb				25u
	/* the pull up enable of the pad */
#define RTCIO_TOUCH_PAD0_RUE					27u
	/* the pull down enable of the pad */
#define RTCIO_TOUCH_PAD0_RDE					28u
	/* the driver strength of the pad */
#define RTCIO_TOUCH_PAD0_DRV_Msb				29u
#define RTCIO_TOUCH_PAD0_DRV_Lsb				30u
	/* hold the current value of the output when setting the hold to Ò1Ó */
#define RTCIO_TOUCH_PAD0_HOLD					31u

	/* 0x98:  */
	uint32_t volatile TOUCH_PAD1;
	/* connect the rtc pad input to digital pad input Ó0Ó is availbale.GPIO0 */
#define RTCIO_TOUCH_PAD1_TO_GPIO				12u
	/* the input enable of the pad */
#define RTCIO_TOUCH_PAD1_FUN_IE					13u
	/* the output enable of the pad in sleep status */
#define RTCIO_TOUCH_PAD1_SLP_OE					14u
	/* the input enable of the pad in sleep status */
#define RTCIO_TOUCH_PAD1_SLP_IE					15u
	/* the sleep status selection signal of the pad */
#define RTCIO_TOUCH_PAD1_SLP_SEL				16u
	/* the functional selection signal of the pad */
#define RTCIO_TOUCH_PAD1_FUN_SEL_Msb				17u
#define RTCIO_TOUCH_PAD1_FUN_SEL_Lsb				18u
	/* Ò1Ó select the digital function  Ó0Óslection the rtc function */
#define RTCIO_TOUCH_PAD1_MUX_SEL				19u
	/* touch sensor power on. */
#define RTCIO_TOUCH_PAD1_XPD					20u
	/* default touch sensor tie option. */
#define RTCIO_TOUCH_PAD1_TIE_OPT				21u
	/* start touch sensor. */
#define RTCIO_TOUCH_PAD1_START					22u
	/* touch sensor slope control. */
#define RTCIO_TOUCH_PAD1_DAC_Msb				23u
#define RTCIO_TOUCH_PAD1_DAC_Lsb				25u
	/* the pull up enable of the pad */
#define RTCIO_TOUCH_PAD1_RUE					27u
	/* the pull down enable of the pad */
#define RTCIO_TOUCH_PAD1_RDE					28u
	/* the driver strength of the pad */
#define RTCIO_TOUCH_PAD1_DRV_Msb				29u
#define RTCIO_TOUCH_PAD1_DRV_Lsb				30u
	/*  */
#define RTCIO_TOUCH_PAD1_HOLD					31u

	/* 0x9C:  */
	uint32_t volatile TOUCH_PAD2;
	/* connect the rtc pad input to digital pad input Ó0Ó is availbale.GPIO2 */
#define RTCIO_TOUCH_PAD2_TO_GPIO				12u
	/* the input enable of the pad */
#define RTCIO_TOUCH_PAD2_FUN_IE					13u
	/* the output enable of the pad in sleep status */
#define RTCIO_TOUCH_PAD2_SLP_OE					14u
	/* the input enable of the pad in sleep status */
#define RTCIO_TOUCH_PAD2_SLP_IE					15u
	/* the sleep status selection signal of the pad */
#define RTCIO_TOUCH_PAD2_SLP_SEL				16u
	/* the functional selection signal of the pad */
#define RTCIO_TOUCH_PAD2_FUN_SEL_Msb				17u
#define RTCIO_TOUCH_PAD2_FUN_SEL_Lsb				18u
	/* Ò1Ó select the digital function  Ó0Óslection the rtc function */
#define RTCIO_TOUCH_PAD2_MUX_SEL				19u
	/* touch sensor power on. */
#define RTCIO_TOUCH_PAD2_XPD					20u
	/* default touch sensor tie option. */
#define RTCIO_TOUCH_PAD2_TIE_OPT				21u
	/* start touch sensor. */
#define RTCIO_TOUCH_PAD2_START					22u
	/* touch sensor slope control. */
#define RTCIO_TOUCH_PAD2_DAC_Msb				23u
#define RTCIO_TOUCH_PAD2_DAC_Lsb				25u
	/* the pull up enable of the pad */
#define RTCIO_TOUCH_PAD2_RUE					27u
	/* the pull down enable of the pad */
#define RTCIO_TOUCH_PAD2_RDE					28u
	/* the driver strength of the pad */
#define RTCIO_TOUCH_PAD2_DRV_Msb				29u
#define RTCIO_TOUCH_PAD2_DRV_Lsb				30u
	/* hold the current value of the output when setting the hold to Ò1Ó */
#define RTCIO_TOUCH_PAD2_HOLD					31u

	/* 0xA0:  */
	uint32_t volatile TOUCH_PAD3;
	/* connect the rtc pad input to digital pad input Ó0Ó is availbale.MTDO */
#define RTCIO_TOUCH_PAD3_TO_GPIO				12u
	/* the input enable of the pad */
#define RTCIO_TOUCH_PAD3_FUN_IE					13u
	/* the output enable of the pad in sleep status */
#define RTCIO_TOUCH_PAD3_SLP_OE					14u
	/* the input enable of the pad in sleep status */
#define RTCIO_TOUCH_PAD3_SLP_IE					15u
	/* the sleep status selection signal of the pad */
#define RTCIO_TOUCH_PAD3_SLP_SEL				16u
	/* the functional selection signal of the pad */
#define RTCIO_TOUCH_PAD3_FUN_SEL_Msb				17u
#define RTCIO_TOUCH_PAD3_FUN_SEL_Lsb				18u
	/* Ò1Ó select the digital function  Ó0Óslection the rtc function */
#define RTCIO_TOUCH_PAD3_MUX_SEL				19u
	/* touch sensor power on. */
#define RTCIO_TOUCH_PAD3_XPD					20u
	/* default touch sensor tie option. */
#define RTCIO_TOUCH_PAD3_TIE_OPT				21u
	/* start touch sensor. */
#define RTCIO_TOUCH_PAD3_START					22u
	/* touch sensor slope control. */
#define RTCIO_TOUCH_PAD3_DAC_Msb				23u
#define RTCIO_TOUCH_PAD3_DAC_Lsb				25u
	/* the pull up enable of the pad */
#define RTCIO_TOUCH_PAD3_RUE					27u
	/* the pull down enable of the pad */
#define RTCIO_TOUCH_PAD3_RDE					28u
	/* the driver strength of the pad */
#define RTCIO_TOUCH_PAD3_DRV_Msb				29u
#define RTCIO_TOUCH_PAD3_DRV_Lsb				30u
	/* hold the current value of the output when setting the hold to Ò1Ó */
#define RTCIO_TOUCH_PAD3_HOLD					31u

	/* 0xA4:  */
	uint32_t volatile TOUCH_PAD4;
	/* connect the rtc pad input to digital pad input Ó0Ó is availbale.MTCK */
#define RTCIO_TOUCH_PAD4_TO_GPIO				12u
	/* the input enable of the pad */
#define RTCIO_TOUCH_PAD4_FUN_IE					13u
	/* the output enable of the pad in sleep status */
#define RTCIO_TOUCH_PAD4_SLP_OE					14u
	/* the input enable of the pad in sleep status */
#define RTCIO_TOUCH_PAD4_SLP_IE					15u
	/* the sleep status selection signal of the pad */
#define RTCIO_TOUCH_PAD4_SLP_SEL				16u
	/* the functional selection signal of the pad */
#define RTCIO_TOUCH_PAD4_FUN_SEL_Msb				17u
#define RTCIO_TOUCH_PAD4_FUN_SEL_Lsb				18u
	/* Ò1Ó select the digital function  Ó0Óslection the rtc function */
#define RTCIO_TOUCH_PAD4_MUX_SEL				19u
	/* touch sensor power on. */
#define RTCIO_TOUCH_PAD4_XPD					20u
	/* default touch sensor tie option. */
#define RTCIO_TOUCH_PAD4_TIE_OPT				21u
	/* start touch sensor. */
#define RTCIO_TOUCH_PAD4_START					22u
	/* touch sensor slope control. */
#define RTCIO_TOUCH_PAD4_DAC_Msb				23u
#define RTCIO_TOUCH_PAD4_DAC_Lsb				25u
	/* the pull up enable of the pad */
#define RTCIO_TOUCH_PAD4_RUE					27u
	/* the pull down enable of the pad */
#define RTCIO_TOUCH_PAD4_RDE					28u
	/* the driver strength of the pad */
#define RTCIO_TOUCH_PAD4_DRV_Msb				29u
#define RTCIO_TOUCH_PAD4_DRV_Lsb				30u
	/* hold the current value of the output when setting the hold to Ò1Ó */
#define RTCIO_TOUCH_PAD4_HOLD					31u

	/* 0xA8:  */
	uint32_t volatile TOUCH_PAD5;
	/* connect the rtc pad input to digital pad input Ó0Ó is availbale.MTDI */
#define RTCIO_TOUCH_PAD5_TO_GPIO				12u
	/* the input enable of the pad */
#define RTCIO_TOUCH_PAD5_FUN_IE					13u
	/* the output enable of the pad in sleep status */
#define RTCIO_TOUCH_PAD5_SLP_OE					14u
	/* the input enable of the pad in sleep status */
#define RTCIO_TOUCH_PAD5_SLP_IE					15u
	/* the sleep status selection signal of the pad */
#define RTCIO_TOUCH_PAD5_SLP_SEL				16u
	/* the functional selection signal of the pad */
#define RTCIO_TOUCH_PAD5_FUN_SEL_Msb				17u
#define RTCIO_TOUCH_PAD5_FUN_SEL_Lsb				18u
	/* Ò1Ó select the digital function  Ó0Óslection the rtc function */
#define RTCIO_TOUCH_PAD5_MUX_SEL				19u
	/* touch sensor power on. */
#define RTCIO_TOUCH_PAD5_XPD					20u
	/* default touch sensor tie option. */
#define RTCIO_TOUCH_PAD5_TIE_OPT				21u
	/* start touch sensor. */
#define RTCIO_TOUCH_PAD5_START					22u
	/* touch sensor slope control. */
#define RTCIO_TOUCH_PAD5_DAC_Msb				23u
#define RTCIO_TOUCH_PAD5_DAC_Lsb				25u
	/* the pull up enable of the pad */
#define RTCIO_TOUCH_PAD5_RUE					27u
	/* the pull down enable of the pad */
#define RTCIO_TOUCH_PAD5_RDE					28u
	/* the driver strength of the pad */
#define RTCIO_TOUCH_PAD5_DRV_Msb				29u
#define RTCIO_TOUCH_PAD5_DRV_Lsb				30u
	/* hold the current value of the output when setting the hold to Ò1Ó */
#define RTCIO_TOUCH_PAD5_HOLD					31u

	/* 0xAC:  */
	uint32_t volatile TOUCH_PAD6;
	/* connect the rtc pad input to digital pad input Ó0Ó is availbale.MTMS */
#define RTCIO_TOUCH_PAD6_TO_GPIO				12u
	/* the input enable of the pad */
#define RTCIO_TOUCH_PAD6_FUN_IE					13u
	/* the output enable of the pad in sleep status */
#define RTCIO_TOUCH_PAD6_SLP_OE					14u
	/* the input enable of the pad in sleep status */
#define RTCIO_TOUCH_PAD6_SLP_IE					15u
	/* the sleep status selection signal of the pad */
#define RTCIO_TOUCH_PAD6_SLP_SEL				16u
	/* the functional selection signal of the pad */
#define RTCIO_TOUCH_PAD6_FUN_SEL_Msb				17u
#define RTCIO_TOUCH_PAD6_FUN_SEL_Lsb				18u
	/* Ò1Ó select the digital function  Ó0Óslection the rtc function */
#define RTCIO_TOUCH_PAD6_MUX_SEL				19u
	/* touch sensor power on. */
#define RTCIO_TOUCH_PAD6_XPD					20u
	/* default touch sensor tie option. */
#define RTCIO_TOUCH_PAD6_TIE_OPT				21u
	/* start touch sensor. */
#define RTCIO_TOUCH_PAD6_START					22u
	/* touch sensor slope control. */
#define RTCIO_TOUCH_PAD6_DAC_Msb				23u
#define RTCIO_TOUCH_PAD6_DAC_Lsb				25u
	/* the pull up enable of the pad */
#define RTCIO_TOUCH_PAD6_RUE					27u
	/* the pull down enable of the pad */
#define RTCIO_TOUCH_PAD6_RDE					28u
	/* the driver strength of the pad */
#define RTCIO_TOUCH_PAD6_DRV_Msb				29u
#define RTCIO_TOUCH_PAD6_DRV_Lsb				30u
	/* hold the current value of the output when setting the hold to Ò1Ó */
#define RTCIO_TOUCH_PAD6_HOLD					31u

	/* 0xB0:  */
	uint32_t volatile TOUCH_PAD7;
	/* connect the rtc pad input to digital pad input Ó0Ó is availbale.GPIO27 */
#define RTCIO_TOUCH_PAD7_TO_GPIO				12u
	/* the input enable of the pad */
#define RTCIO_TOUCH_PAD7_FUN_IE					13u
	/* the output enable of the pad in sleep status */
#define RTCIO_TOUCH_PAD7_SLP_OE					14u
	/* the input enable of the pad in sleep status */
#define RTCIO_TOUCH_PAD7_SLP_IE					15u
	/* the sleep status selection signal of the pad */
#define RTCIO_TOUCH_PAD7_SLP_SEL				16u
	/* the functional selection signal of the pad */
#define RTCIO_TOUCH_PAD7_FUN_SEL_Msb				17u
#define RTCIO_TOUCH_PAD7_FUN_SEL_Lsb				18u
	/* Ò1Ó select the digital function  Ó0Óslection the rtc function */
#define RTCIO_TOUCH_PAD7_MUX_SEL				19u
	/* touch sensor power on. */
#define RTCIO_TOUCH_PAD7_XPD					20u
	/* default touch sensor tie option. */
#define RTCIO_TOUCH_PAD7_TIE_OPT				21u
	/* start touch sensor. */
#define RTCIO_TOUCH_PAD7_START					22u
	/* touch sensor slope control. */
#define RTCIO_TOUCH_PAD7_DAC_Msb				23u
#define RTCIO_TOUCH_PAD7_DAC_Lsb				25u
	/* the pull up enable of the pad */
#define RTCIO_TOUCH_PAD7_RUE					27u
	/* the pull down enable of the pad */
#define RTCIO_TOUCH_PAD7_RDE					28u
	/* the driver strength of the pad */
#define RTCIO_TOUCH_PAD7_DRV_Msb				29u
#define RTCIO_TOUCH_PAD7_DRV_Lsb				30u
	/* hold the current value of the output when setting the hold to Ò1Ó */
#define RTCIO_TOUCH_PAD7_HOLD					31u

	/* 0xB4:  */
	uint32_t volatile TOUCH_PAD8;
	/* connect the rtc pad input to digital pad input Ó0Ó is availbale */
#define RTCIO_TOUCH_PAD8_TO_GPIO				19u
	/* touch sensor power on. */
#define RTCIO_TOUCH_PAD8_XPD					20u
	/* default touch sensor tie option. */
#define RTCIO_TOUCH_PAD8_TIE_OPT				21u
	/* start touch sensor. */
#define RTCIO_TOUCH_PAD8_START					22u
	/* touch sensor slope control. */
#define RTCIO_TOUCH_PAD8_DAC_Msb				23u
#define RTCIO_TOUCH_PAD8_DAC_Lsb				25u

	/* 0xB8:  */
	uint32_t volatile TOUCH_PAD9;
	/* connect the rtc pad input to digital pad input Ó0Ó is availbale */
#define RTCIO_TOUCH_PAD9_TO_GPIO				19u
	/* touch sensor power on. */
#define RTCIO_TOUCH_PAD9_XPD					20u
	/* default touch sensor tie option. */
#define RTCIO_TOUCH_PAD9_TIE_OPT				21u
	/* start touch sensor. */
#define RTCIO_TOUCH_PAD9_START					22u
	/* touch sensor slope control. */
#define RTCIO_TOUCH_PAD9_DAC_Msb				23u
#define RTCIO_TOUCH_PAD9_DAC_Lsb				25u

	/* 0xBC:  */
	uint32_t volatile EXT_WAKEUP0;
	/* select the wakeup source Ó0Ó select GPIO0 Ó1Ó select GPIO2 ...Ò17Ó select GPIO17 */
#define RTCIO_EXT_WAKEUP0_SEL_Msb				27u
#define RTCIO_EXT_WAKEUP0_SEL_Lsb				31u

	/* 0xC0:  */
	uint32_t volatile XTL_EXT_CTR;
	/* select the external xtl power source Ó0Ó select GPIO0 Ó1Ó select GPIO2 ...Ò17Ó select GPIO17 */
#define RTCIO_XTL_EXT_CTR_SEL_Msb				27u
#define RTCIO_XTL_EXT_CTR_SEL_Lsb				31u

	/* 0xC4:  */
	uint32_t volatile SAR_I2C_IO;
	/*  */
#define RTCIO_SAR_I2C_IO_SAR_DEBUG_BIT_SEL_Msb			23u
#define RTCIO_SAR_I2C_IO_SAR_DEBUG_BIT_SEL_Lsb			27u
	/* Ò0Ó using TOUCH_PAD[0] as i2c clk Ò1Ó using TOUCH_PAD[2] as i2c clk */
#define RTCIO_SAR_I2C_IO_SAR_I2C_SCL_SEL_Msb			28u
#define RTCIO_SAR_I2C_IO_SAR_I2C_SCL_SEL_Lsb			29u
	/* Ò0Ó using TOUCH_PAD[1] as i2c sda Ò1Ó using TOUCH_PAD[3] as i2c sda */
#define RTCIO_SAR_I2C_IO_SAR_I2C_SDA_SEL_Msb			30u
#define RTCIO_SAR_I2C_IO_SAR_I2C_SDA_SEL_Lsb			31u

	/* 0xC8:  */
	uint32_t volatile DATE;
	/* date */
#define RTCIO_DATE_IO_DATE_Msb					0u
#define RTCIO_DATE_IO_DATE_Lsb					27u

};


#define RTC_I2C ((struct mcu_rtc_i2c *)0x3FF48C00)

struct mcu_rtc_i2c {

	/* 0x00:  */
	uint32_t volatile SCL_LOW_PERIOD;
	/* number of cycles that scl == 0 */
#define RTC_I2C_SCL_LOW_PERIOD_SCL_LOW_PERIOD_Msb		0u
#define RTC_I2C_SCL_LOW_PERIOD_SCL_LOW_PERIOD_Lsb		24u

	/* 0x04:  */
	uint32_t volatile CTRL;
	/* SDA is push-pull (1) or open-drain (0) */
#define RTC_I2C_CTRL_SDA_FORCE_OUT				0u
	/* SCL is push-pull (1) or open-drain (0) */
#define RTC_I2C_CTRL_SCL_FORCE_OUT				1u
	/* Master (1) or slave (0) */
#define RTC_I2C_CTRL_MS_MODE					4u
	/* Force to generate start condition */
#define RTC_I2C_CTRL_TRANS_START				5u
	/* Send LSB first */
#define RTC_I2C_CTRL_TX_LSB_FIRST				6u
	/* Receive LSB first */
#define RTC_I2C_CTRL_RX_LSB_FIRST				7u

	/* 0x08:  */
	uint32_t volatile DEBUG_STATUS;
	/* The value of an acknowledge signal on the bus */
#define RTC_I2C_DEBUG_STATUS_ACK_VAL				0u
	/* When working as a slave, the value of R/W bit received */
#define RTC_I2C_DEBUG_STATUS_SLAVE_RW				1u
	/* Transfer has timed out */
#define RTC_I2C_DEBUG_STATUS_TIMED_OUT				2u
	/* When working as a master, lost control of I2C bus */
#define RTC_I2C_DEBUG_STATUS_ARB_LOST				3u
	/* operation is in progress */
#define RTC_I2C_DEBUG_STATUS_BUS_BUSY				4u
	/* When working as a slave, whether address was matched */
#define RTC_I2C_DEBUG_STATUS_SLAVE_ADDR_MATCH			5u
	/* 8 bit transmit done */
#define RTC_I2C_DEBUG_STATUS_BYTE_TRANS				6u
	/* state of the main state machine */
#define RTC_I2C_DEBUG_STATUS_MAIN_STATE_Msb			25u
#define RTC_I2C_DEBUG_STATUS_MAIN_STATE_Lsb			27u
	/* state of SCL state machine */
#define RTC_I2C_DEBUG_STATUS_SCL_STATE_Msb			28u
#define RTC_I2C_DEBUG_STATUS_SCL_STATE_Lsb			30u

	/* 0x0C:  */
	uint32_t volatile TIMEOUT;
	/* Maximum number of FAST_CLK cycles that the transmission can take */
#define RTC_I2C_TIMEOUT_TIMEOUT_Msb				0u
#define RTC_I2C_TIMEOUT_TIMEOUT_Lsb				19u

	/* 0x10:  */
	uint32_t volatile SLAVE_ADDR;
	/* local slave address */
#define RTC_I2C_SLAVE_ADDR_SLAVE_ADDR_Msb			0u
#define RTC_I2C_SLAVE_ADDR_SLAVE_ADDR_Lsb			14u
	/* Set if local slave address is 10-bit */
#define RTC_I2C_SLAVE_ADDR__10BIT				31u

	/* 0x1C:  */
	uint32_t volatile DATA;

	/* 0x20:  */
	uint32_t volatile INT_RAW;
	/* Slave accepted 1 byte and address matched */
#define RTC_I2C_INT_RAW_SLAVE_TRANS_COMPLETE_INT_RAW		3u
	/* Master lost arbitration */
#define RTC_I2C_INT_RAW_ARBITRATION_LOST_INT_RAW		4u
	/*  */
#define RTC_I2C_INT_RAW_MASTER_TRANS_COMPLETE_INT_RAW		5u
	/* Stop condition has been detected interrupt raw status */
#define RTC_I2C_INT_RAW_TRANS_COMPLETE_INT_RAW			6u
	/* time out interrupt raw status */
#define RTC_I2C_INT_RAW_TIME_OUT_INT_RAW			7u

	/* 0x24:  */
	uint32_t volatile INT_CLR;
	/*  */
#define RTC_I2C_INT_CLR_SLAVE_TRANS_COMPLETE_INT_CLR		4u
	/*  */
#define RTC_I2C_INT_CLR_ARBITRATION_LOST_INT_CLR		5u
	/*  */
#define RTC_I2C_INT_CLR_MASTER_TRANS_COMPLETE_INT_CLR		6u
	/*  */
#define RTC_I2C_INT_CLR_TRANS_COMPLETE_INT_CLR			7u
	/*  */
#define RTC_I2C_INT_CLR_TIME_OUT_INT_CLR			8u

	/* 0x28:  */
	uint32_t volatile INT_EN;

	/* 0x2C:  */
	uint32_t volatile INT_ST;

	/* 0x30:  */
	uint32_t volatile SDA_DUTY;
	/* Number of FAST_CLK cycles SDA will switch after falling edge of SCL */
#define RTC_I2C_SDA_DUTY_SDA_DUTY_Msb				0u
#define RTC_I2C_SDA_DUTY_SDA_DUTY_Lsb				19u

	/* 0x38:  */
	uint32_t volatile SCL_HIGH_PERIOD;
	/* Number of FAST_CLK cycles for SCL to be high */
#define RTC_I2C_SCL_HIGH_PERIOD_SCL_HIGH_PERIOD_Msb		0u
#define RTC_I2C_SCL_HIGH_PERIOD_SCL_HIGH_PERIOD_Lsb		19u

	/* 0x40:  */
	uint32_t volatile SCL_START_PERIOD;
	/* Number of FAST_CLK cycles to wait before generating start condition */
#define RTC_I2C_SCL_START_PERIOD_SCL_START_PERIOD_Msb		0u
#define RTC_I2C_SCL_START_PERIOD_SCL_START_PERIOD_Lsb		19u

	/* 0x44:  */
	uint32_t volatile SCL_STOP_PERIOD;
	/* Number of FAST_CLK cycles to wait before generating stop condition */
#define RTC_I2C_SCL_STOP_PERIOD_SCL_STOP_PERIOD_Msb		0u
#define RTC_I2C_SCL_STOP_PERIOD_SCL_STOP_PERIOD_Lsb		19u

	/* 0x48:  */
	uint32_t volatile CMD;
	/* Command content */
#define RTC_I2C_CMD_VAL_Msb					0u
#define RTC_I2C_CMD_VAL_Lsb					13u
	/* Bit is set by HW when command is done */
#define RTC_I2C_CMD_DONE					31u

};


#define SDMMC ((struct mcu_sdmmc *)0x3FF68000)

struct mcu_sdmmc {

	/* 0x00: Control register */
	uint32_t volatile CTRL;
	/* To reset controller, firmware should set this bit. */
#define SDMMC_CTRL_CONTROLLER_RESET				0u
	/* To reset FIFO, firmware should set bit to 1. */
#define SDMMC_CTRL_FIFO_RESET					1u
	/* To reset DMA interface, firmware should set bit to 1. */
#define SDMMC_CTRL_DMA_RESET					2u
	/* Global interrupt enable/disable bit. */
#define SDMMC_CTRL_INT_ENABLE					4u
	/* For sending read-wait to SDIO cards. */
#define SDMMC_CTRL_READ_WAIT					6u
	/* Bit automatically clears once response is sent. To wait for MMC card interrupts, host issues CMD40 and waits for interrupt response from MMC card(s). */
#define SDMMC_CTRL_SEND_IRQ_RESPONSE				7u
	/* After a suspend-command is issued during a read-operation, software polls the card to find when the suspend-event occurred. */
#define SDMMC_CTRL_ABORT_READ_DATA				8u
	/* When set, SD/MMC sends CCSD to the CE-ATA device. Software sets this bit only if the current command is expecting CCS (that is, RW_BLK), and if interrupts are enabled for the CE-ATA device. Once the CCSD pattern is sent to the device, SD/MMC automatically clears the SDHOST_SEND_CCSD bit. It also sets the Command Done (CD) bit  in the SDHOST_RINTSTS_REG register, and generates an interrupt for the host, in case the Command Done interrupt is not masked. */
#define SDMMC_CTRL_SEND_CCSD					9u
	/* Always Set SDHOST_SEND_AUTO_STOP_CCSD and SDHOST_SEND_CCSD bits together; SDHOST_SEND_AUTO_STOP_CCSD should not be set independently of send_ccsd. When set, SD/MMC automatically sends an internally-generated STOP command (CMD12) to the CE-ATA device. After sending this internally-generated STOP command, the Auto Command Done (ACD) bit in SDHOST_RINTSTS_REG is set and an interrupt is generated for the host, in case the ACD interrupt is not masked. After sending the Command Completion Signal Disable (CCSD), SD/MMC automatically clears the  SDHOST_SEND_AUTO_STOP_CCSD bit. */
#define SDMMC_CTRL_SEND_AUTO_STOP_CCSD				10u
	/* Software should appropriately write to this bit after the power-on reset or any other reset to the CE-ATA device. After reset, the CE-ATA device's interrupt is usually disabled (nIEN = 1). */
#define SDMMC_CTRL_CEATA_DEVICE_INTERRUPT_STATUS		11u

	/* 0x08: Clock divider configuration register */
	uint32_t volatile CLKDIV;
	/* Clock divider0 value. Clock divisor is 2*n, where n = 0 bypasses the divider (divisor of 1). */
#define SDMMC_CLKDIV_CLK_DIVIDER0_Msb				0u
#define SDMMC_CLKDIV_CLK_DIVIDER0_Lsb				7u
	/* Clock divider1 value. Clock divisor is 2*n, where n = 0 bypasses the divider (divisor of 1). */
#define SDMMC_CLKDIV_CLK_DIVIDER1_Msb				8u
#define SDMMC_CLKDIV_CLK_DIVIDER1_Lsb				15u
	/* Clock divider2 value. Clock divisor is 2*n, where n = 0 bypasses the divider (divisor of 1). */
#define SDMMC_CLKDIV_CLK_DIVIDER2_Msb				16u
#define SDMMC_CLKDIV_CLK_DIVIDER2_Lsb				23u
	/* Clock divider3 value. Clock divisor is 2*n, where n = 0 bypasses the divider (divisor of 1). */
#define SDMMC_CLKDIV_CLK_DIVIDER3_Msb				24u
#define SDMMC_CLKDIV_CLK_DIVIDER3_Lsb				31u

	/* 0x0C: Clock source selection register */
	uint32_t volatile CLKSRC;
	/* Clock divider source for two SD cards is supported. */
#define SDMMC_CLKSRC_CLKSRC_Msb					0u
#define SDMMC_CLKSRC_CLKSRC_Lsb					3u

	/* 0x10: Clock enable register */
	uint32_t volatile CLKENA;
	/* Clock-enable control for two SD card clocks and one MMC card clock is supported. */
#define SDMMC_CLKENA_CCLK_ENABLE_Msb				0u
#define SDMMC_CLKENA_CCLK_ENABLE_Lsb				1u
	/* Disable clock when the card is in IDLE state. */
#define SDMMC_CLKENA_LP_ENABLE_Msb				16u
#define SDMMC_CLKENA_LP_ENABLE_Lsb				17u

	/* 0x14: Data and response timeout configuration register */
	uint32_t volatile TMOUT;
	/* Response timeout value. */
#define SDMMC_TMOUT_RESPONSE_TIMEOUT_Msb			0u
#define SDMMC_TMOUT_RESPONSE_TIMEOUT_Lsb			7u
	/* Value for card data read timeout. */
#define SDMMC_TMOUT_DATA_TIMEOUT_Msb				8u
#define SDMMC_TMOUT_DATA_TIMEOUT_Lsb				31u

	/* 0x18: Card bus width configuration register */
	uint32_t volatile CTYPE;
	/* One bit per card indicates if card is 1-bit or 4-bit mode. */
#define SDMMC_CTYPE_CARD_WIDTH4_Msb				0u
#define SDMMC_CTYPE_CARD_WIDTH4_Lsb				1u
	/* One bit per card indicates if card is in 8-bit mode. */
#define SDMMC_CTYPE_CARD_WIDTH8_Msb				16u
#define SDMMC_CTYPE_CARD_WIDTH8_Lsb				17u

	/* 0x1C: Card data block size configuration register */
	uint32_t volatile BLKSIZ;
	/* Block size. */
#define SDMMC_BLKSIZ_BLOCK_SIZE_Msb				0u
#define SDMMC_BLKSIZ_BLOCK_SIZE_Lsb				15u

	/* 0x20: Data transfer length configuration register */
	uint32_t volatile BYTCNT;
	/* Number of bytes to be transferred, should be an integral multiple of Block Size for block transfers. */
#define SDMMC_BYTCNT_BYTE_COUNT_Msb				0u
#define SDMMC_BYTCNT_BYTE_COUNT_Lsb				31u

	/* 0x24: SDIO interrupt mask register */
	uint32_t volatile INTMASK;
	/* These bits used to mask unwanted interrupts. */
#define SDMMC_INTMASK_INT_MASK_Msb				0u
#define SDMMC_INTMASK_INT_MASK_Lsb				15u
	/* SDIO interrupt mask, one bit for each card. */
#define SDMMC_INTMASK_SDIO_INT_MASK_Msb				16u
#define SDMMC_INTMASK_SDIO_INT_MASK_Lsb				17u

	/* 0x28: Command argument data register */
	uint32_t volatile CMDARG;
	/* Value indicates command argument to be passed to the card. */
#define SDMMC_CMDARG_CMDARG_Msb					0u
#define SDMMC_CMDARG_CMDARG_Lsb					31u

	/* 0x2C: Command and boot configuration register */
	uint32_t volatile CMD;
	/* Command index. */
#define SDMMC_CMD_INDEX_Msb					0u
#define SDMMC_CMD_INDEX_Lsb					5u
	/* 0: No response expected from card; 1: Response expected from card. */
#define SDMMC_CMD_RESPONSE_EXPECT				6u
	/* 0: Short response expected from card; 1: Long response expected from card. */
#define SDMMC_CMD_RESPONSE_LENGTH				7u
	/* 0: Do not check; 1: Check response CRC. */
#define SDMMC_CMD_CHECK_RESPONSE_CRC				8u
	/* 0: No data transfer expected; 1: Data transfer expected. */
#define SDMMC_CMD_DATA_EXPECTED					9u
	/* 0: Read from card; 1: Write to card. */
#define SDMMC_CMD_READ_WRITE					10u
	/* Block data transfer command; 1: Stream data transfer command. */
#define SDMMC_CMD_TRANSFER_MODE					11u
	/* 0: No stop command is sent at the end of data transfer; 1: Send stop command at the end of data transfer. */
#define SDMMC_CMD_SEND_AUTO_STOP				12u
	/* 0: Send command at once, even if previous data transfer has not completed; 1: Wait for previous data transfer to complete before sending Command. */
#define SDMMC_CMD_WAIT_PRVDATA_COMPLETE				13u
	/* 0: Neither stop nor abort command can stop current data transfer. */
#define SDMMC_CMD_STOP_ABORT_CMD				14u
	/* 0: Do not send initialization sequence (80 clocks of 1) before sending this command; 1: Send initialization sequence before sending this command. */
#define SDMMC_CMD_SEND_INITIALIZATION				15u
	/* Card number in use. */
#define SDMMC_CMD_CARD_NUMBER_Msb				16u
#define SDMMC_CMD_CARD_NUMBER_Lsb				20u
	/* 0: Normal command sequence; 1: Do not send commands, just update clock register value into card clock domain. */
#define SDMMC_CMD_UPDATE_CLOCK_REGISTERS_ONLY			21u
	/* Read access flag. */
#define SDMMC_CMD_READ_CEATA_DEVICE				22u
	/* Expected Command Completion Signal (CCS) configuration. */
#define SDMMC_CMD_CCS_EXPECTED					23u
	/* Use Hold Register. */
#define SDMMC_CMD_USE_HOLE					29u
	/* Start command. */
#define SDMMC_CMD_START_CMD					31u

	/* 0x30: Response data register */
	uint32_t volatile RESP0;
	/* Bit[31:0] of response. */
#define SDMMC_RESP0_RESPONSE0_Msb				0u
#define SDMMC_RESP0_RESPONSE0_Lsb				31u

	/* 0x34: Long response data register */
	uint32_t volatile RESP1;
	/* Bit[63:32] of long response. */
#define SDMMC_RESP1_RESPONSE1_Msb				0u
#define SDMMC_RESP1_RESPONSE1_Lsb				31u

	/* 0x38: Long response data register */
	uint32_t volatile RESP2;
	/* Bit[95:64] of long response. */
#define SDMMC_RESP2_RESPONSE2_Msb				0u
#define SDMMC_RESP2_RESPONSE2_Lsb				31u

	/* 0x3C: Long response data register */
	uint32_t volatile RESP3;
	/* Bit[127:96] of long response. */
#define SDMMC_RESP3_RESPONSE3_Msb				0u
#define SDMMC_RESP3_RESPONSE3_Lsb				31u

	/* 0x40: Masked interrupt status register */
	uint32_t volatile MINTSTS;
	/* Interrupt enabled only if corresponding bit in interrupt mask register is set. */
#define SDMMC_MINTSTS_INT_STATUS_MSK_Msb			0u
#define SDMMC_MINTSTS_INT_STATUS_MSK_Lsb			15u
	/* Interrupt from SDIO card, one bit for each card. Bit[17:16] correspond to card1 and card0, respectively. SDIO interrupt for card is enabled only if corresponding sdhost_sdio_int_mask bit is set in Interrupt mask register (Setting mask bit enables interrupt). */
#define SDMMC_MINTSTS_SDIO_INTERRUPT_MSK_Msb			16u
#define SDMMC_MINTSTS_SDIO_INTERRUPT_MSK_Lsb			17u

	/* 0x44: Raw interrupt status register */
	uint32_t volatile RINTSTS;
	/* Setting a bit clears the corresponding interrupt and writing 0 has no effect. */
#define SDMMC_RINTSTS_INT_STATUS_RAW_Msb			0u
#define SDMMC_RINTSTS_INT_STATUS_RAW_Lsb			15u
	/* Interrupt from SDIO card, one bit for each card. */
#define SDMMC_RINTSTS_SDIO_INTERRUPT_RAW_Msb			16u
#define SDMMC_RINTSTS_SDIO_INTERRUPT_RAW_Lsb			17u

	/* 0x48: SD/MMC status register */
	uint32_t volatile STATUS;
	/* FIFO reached Receive watermark level, not qualified with data transfer. */
#define SDMMC_STATUS_FIFO_RX_WATERMARK				0u
	/* FIFO reached Transmit watermark level, not qualified with data transfer. */
#define SDMMC_STATUS_FIFO_TX_WATERMARK				1u
	/* FIFO is empty status. */
#define SDMMC_STATUS_FIFO_EMPTY					2u
	/* FIFO is full status. */
#define SDMMC_STATUS_FIFO_FULL					3u
	/* Command FSM states. */
#define SDMMC_STATUS_COMMAND_FSM_STATES_Msb			4u
#define SDMMC_STATUS_COMMAND_FSM_STATES_Lsb			7u
	/* Raw selected sdhost_card_data[3], checks whether card is present. */
#define SDMMC_STATUS_DATA_3_STATUS				8u
	/* Inverted version of raw selected sdhost_card_data[0]. */
#define SDMMC_STATUS_DATA_BUSY					9u
	/* Data transmit or receive state-machine is busy. */
#define SDMMC_STATUS_DATA_STATE_MC_BUSY				10u
	/* Index of previous response, including any auto-stop sent by core. */
#define SDMMC_STATUS_RESPONSE_INDEX_Msb				11u
#define SDMMC_STATUS_RESPONSE_INDEX_Lsb				16u
	/* FIFO count, number of filled locations in FIFO. */
#define SDMMC_STATUS_FIFO_COUNT_Msb				17u
#define SDMMC_STATUS_FIFO_COUNT_Lsb				29u

	/* 0x4C: FIFO configuration register */
	uint32_t volatile FIFOTH;
	/* FIFO threshold watermark level when transmitting data to card. When FIFO data count is less than or equal to this number, DMA/FIFO request is raised. If Interrupt is enabled, then interrupt  occurs. During end of packet, request or interrupt is generated, regardless of threshold programming.In non-DMA mode, when transmit FIFO threshold (TXDR) interrupt is enabled, then interrupt is generated instead of DMA request. During end of packet, on last interrupt, host is responsible for filling FIFO with only required remaining bytes (not before FIFO is full or after CIU completes data transfers, because FIFO may not be empty). */
#define SDMMC_FIFOTH_TX_WMARK_Msb				0u
#define SDMMC_FIFOTH_TX_WMARK_Lsb				11u
	/* FIFO threshold watermark level when receiving data to card.When FIFO data count reaches greater than this number , DMA/FIFO request is raised. During end of packet, request is generated regardless of threshold programming in order to complete any remaining data.In non-DMA mode, when receiver FIFO threshold (RXDR) interrupt is enabled, then interrupt is generated instead of DMA request.During end of packet, interrupt is not generated if threshold programming is larger than any remaining data. */
#define SDMMC_FIFOTH_RX_WMARK_Msb				16u
#define SDMMC_FIFOTH_RX_WMARK_Lsb				26u
	/* Burst size of multiple transaction, should be programmed same as DMA controller multiple-transaction-size SDHOST_SRC/DEST_MSIZE. */
#define SDMMC_FIFOTH_DMA_MULTIPLE_TRANSACTION_SIZE_Msb		28u
#define SDMMC_FIFOTH_DMA_MULTIPLE_TRANSACTION_SIZE_Lsb		30u

	/* 0x50: Card detect register */
	uint32_t volatile CDETECT;
	/* Value on sdhost_card_detect_n input ports (1 bit per card), read-only bits. */
#define SDMMC_CDETECT_CARD_DETECT_N_Msb				0u
#define SDMMC_CDETECT_CARD_DETECT_N_Lsb				1u

	/* 0x54: Card write protection (WP) status register */
	uint32_t volatile WRTPRT;
	/* Value on sdhost_card_write_prt input ports (1 bit per card). */
#define SDMMC_WRTPRT_WRITE_PROTECT_Msb				0u
#define SDMMC_WRTPRT_WRITE_PROTECT_Lsb				1u

	/* 0x5C: Transferred byte count register */
	uint32_t volatile TCBCNT;
	/* Number of bytes transferred by CIU unit to card. */
#define SDMMC_TCBCNT_TCBCNT_Msb					0u
#define SDMMC_TCBCNT_TCBCNT_Lsb					31u

	/* 0x60: Transferred byte count register */
	uint32_t volatile TBBCNT;
	/* Number of bytes transferred between Host/DMA memory and BIU FIFO. */
#define SDMMC_TBBCNT_TBBCNT_Msb					0u
#define SDMMC_TBBCNT_TBBCNT_Lsb					31u

	/* 0x64: Debounce filter time configuration register */
	uint32_t volatile DEBNCE;
	/* Number of host clocks (clk) used by debounce filter logic. */
#define SDMMC_DEBNCE_DEBOUNCE_COUNT_Msb				0u
#define SDMMC_DEBNCE_DEBOUNCE_COUNT_Lsb				23u

	/* 0x68: User ID (scratchpad) register */
	uint32_t volatile USRID;
	/* User identification register, value set by user. */
#define SDMMC_USRID_USRID_Msb					0u
#define SDMMC_USRID_USRID_Lsb					31u

	/* 0x6C: Version ID (scratchpad) register */
	uint32_t volatile VERID;
	/* Hardware version register. */
#define SDMMC_VERID_VERSIONID_Msb				0u
#define SDMMC_VERID_VERSIONID_Lsb				31u

	/* 0x70: Hardware feature register */
	uint32_t volatile HCON;
	/* Hardware support SDIO and MMC. */
#define SDMMC_HCON_CARD_TYPE					0u
	/* Support card number is 2. */
#define SDMMC_HCON_CARD_NUM_Msb					1u
#define SDMMC_HCON_CARD_NUM_Lsb					5u
	/* Register config is APB bus. */
#define SDMMC_HCON_BUS_TYPE					6u
	/* Regisger data widht is 32. */
#define SDMMC_HCON_DATA_WIDTH_Msb				7u
#define SDMMC_HCON_DATA_WIDTH_Lsb				9u
	/* Register address width is 32. */
#define SDMMC_HCON_ADDR_WIDTH_Msb				10u
#define SDMMC_HCON_ADDR_WIDTH_Lsb				15u
	/* DMA data witdth is 32. */
#define SDMMC_HCON_DMA_WIDTH_Msb				18u
#define SDMMC_HCON_DMA_WIDTH_Lsb				20u
	/* Inside RAM in SDMMC module. */
#define SDMMC_HCON_RAM_INDISE					21u
	/* Have a hold regiser in data path . */
#define SDMMC_HCON_HOLD						22u
	/* Have 4 clk divider in design . */
#define SDMMC_HCON_NUM_CLK_DIV_Msb				24u
#define SDMMC_HCON_NUM_CLK_DIV_Lsb				25u

	/* 0x74: UHS-1 register */
	uint32_t volatile UHS;
	/* DDR mode selecton,1 bit for each card. */
#define SDMMC_UHS_DDR_Msb					16u
#define SDMMC_UHS_DDR_Lsb					17u

	/* 0x78: Card reset register */
	uint32_t volatile RST_N;
	/* Hardware reset. */
#define SDMMC_RST_N_CARD_RESET_Msb				0u
#define SDMMC_RST_N_CARD_RESET_Lsb				1u

	/* 0x80: Burst mode transfer configuration register */
	uint32_t volatile BMOD;
	/* Software Reset. */
#define SDMMC_BMOD_SWR						0u
	/* Fixed Burst. */
#define SDMMC_BMOD_FB						1u
	/* IDMAC Enable. */
#define SDMMC_BMOD_DE						7u
	/* Programmable Burst Length. */
#define SDMMC_BMOD_PBL_Msb					8u
#define SDMMC_BMOD_PBL_Lsb					10u

	/* 0x84: Poll demand configuration register */
	uint32_t volatile PLDMND;
	/* Poll Demand. */
#define SDMMC_PLDMND_PD_Msb					0u
#define SDMMC_PLDMND_PD_Lsb					31u

	/* 0x88: Descriptor base address register */
	uint32_t volatile DBADDR;
	/* Start of Descriptor List. */
#define SDMMC_DBADDR_DBADDR_Msb					0u
#define SDMMC_DBADDR_DBADDR_Lsb					31u

	/* 0x8C: IDMAC status register */
	uint32_t volatile IDSTS;
	/* Transmit Interrupt. */
#define SDMMC_IDSTS_TI						0u
	/* Receive Interrupt. */
#define SDMMC_IDSTS_RI						1u
	/* Fatal Bus Error Interrupt. Indicates that a Bus Error occurred (IDSTS[12:10]) . */
#define SDMMC_IDSTS_FBE						2u
	/* Descriptor Unavailable Interrupt. This bit is set when the descriptor is unavailable due to OWNER bit = 0 (DES0[31] = 0). */
#define SDMMC_IDSTS_DU						4u
	/* Card Error Summary. */
#define SDMMC_IDSTS_CES						5u
	/* Normal Interrupt Summary. */
#define SDMMC_IDSTS_NIS						8u
	/* Abnormal Interrupt Summary. */
#define SDMMC_IDSTS_AIS						9u
	/* Fatal Bus Error Code. */
#define SDMMC_IDSTS_FBE_CODE_Msb				10u
#define SDMMC_IDSTS_FBE_CODE_Lsb				12u
	/* DMAC FSM present state. */
#define SDMMC_IDSTS_FSM_Msb					13u
#define SDMMC_IDSTS_FSM_Lsb					16u

	/* 0x90: IDMAC interrupt enable register */
	uint32_t volatile IDINTEN;
	/* Transmit Interrupt Enable. */
#define SDMMC_IDINTEN_TI					0u
	/* Receive Interrupt Enable. */
#define SDMMC_IDINTEN_RI					1u
	/* Fatal Bus Error Enable. */
#define SDMMC_IDINTEN_FBE					2u
	/* Descriptor Unavailable Interrupt. */
#define SDMMC_IDINTEN_DU					4u
	/* Card Error summary Interrupt Enable. */
#define SDMMC_IDINTEN_CES					5u
	/* Normal Interrupt Summary Enable. */
#define SDMMC_IDINTEN_NI					8u
	/* Abnormal Interrupt Summary Enable. */
#define SDMMC_IDINTEN_AI					9u

	/* 0x94: Host descriptor address pointer */
	uint32_t volatile DSCADDR;
	/* Host Descriptor Address Pointer, updated by IDMAC during operation and cleared on reset. */
#define SDMMC_DSCADDR_DSCADDR_Msb				0u
#define SDMMC_DSCADDR_DSCADDR_Lsb				31u

	/* 0x98: Host buffer address pointer register */
	uint32_t volatile BUFADDR;
	/* Host Buffer Address Pointer, updated by IDMAC during operation and cleared on reset. */
#define SDMMC_BUFADDR_BUFADDR_Msb				0u
#define SDMMC_BUFADDR_BUFADDR_Lsb				31u

	/* 0xB8 */
	uint8_t RESERVED0[0x100-0xB8];

	/* 0x100: Card Threshold Control register */
	uint32_t volatile CARDTHRCTL;
	/* Card read threshold enable. */
#define SDMMC_CARDTHRCTL_CARDRDTHREN				0u
	/* Busy clear interrupt generation: */
#define SDMMC_CARDTHRCTL_CARDCLRINTEN				1u
	/* Applicable when HS400 mode is enabled. */
#define SDMMC_CARDTHRCTL_CARDWRTHREN				2u
	/* The inside FIFO size is 512,This register is applicable when SDHOST_CARDERTHREN_REG is set to 1 or SDHOST_CARDRDTHREN_REG set to 1. */
#define SDMMC_CARDTHRCTL_CARDTHRESHOLD_Msb			16u
#define SDMMC_CARDTHRCTL_CARDTHRESHOLD_Lsb			31u

	/* 0x10C: eMMC DDR register */
	uint32_t volatile EMMCDDR;
	/* Control for start bit detection mechanism duration of start bit.Each bit refers to one slot.Set this bit to 1 for eMMC4.5 and above,set to 0 for SD applications.For eMMC4.5,start bit can be: */
#define SDMMC_EMMCDDR_HALFSTARTBIT_Msb				0u
#define SDMMC_EMMCDDR_HALFSTARTBIT_Lsb				1u
	/* Set 1 to enable HS400 mode. */
#define SDMMC_EMMCDDR_HS400_MODE				31u

	/* 0x110: Enable Phase Shift register */
	uint32_t volatile ENSHIFT;
	/* Control for the amount of phase shift provided on the default enables in the design.Two bits assigned for each card. */
#define SDMMC_ENSHIFT_ENABLE_SHIFT_Msb				0u
#define SDMMC_ENSHIFT_ENABLE_SHIFT_Lsb				3u

	/* 0x130 */
	uint8_t RESERVED1[0x200-0x130];

	/* 0x200: CPU write and read transmit data by FIFO */
	uint32_t volatile BUFFIFO;
	/* CPU write and read transmit data by FIFO. */
#define SDMMC_BUFFIFO_BUFFIFO_Msb				0u
#define SDMMC_BUFFIFO_BUFFIFO_Lsb				31u

	/* 0x220 */
	uint8_t RESERVED2[0x800-0x220];

	/* 0x800: SDIO control register. */
	uint32_t volatile CLK_EDGE_SEL;
	/* It's used to select the clock phase of the output signal from phase 0, phase 90, phase 180, phase 270. */
#define SDMMC_CLK_EDGE_SEL_CCLKIN_EDGE_DRV_SEL_Msb		0u
#define SDMMC_CLK_EDGE_SEL_CCLKIN_EDGE_DRV_SEL_Lsb		2u
	/* It's used to select the clock phase of the input signal from phase 0, phase 90, phase 180, phase 270. */
#define SDMMC_CLK_EDGE_SEL_CCLKIN_EDGE_SAM_SEL_Msb		3u
#define SDMMC_CLK_EDGE_SEL_CCLKIN_EDGE_SAM_SEL_Lsb		5u
	/* It's used to select the clock phase of the internal signal from phase 0, phase 90, phase 180, phase 270. */
#define SDMMC_CLK_EDGE_SEL_CCLKIN_EDGE_SLF_SEL_Msb		6u
#define SDMMC_CLK_EDGE_SEL_CCLKIN_EDGE_SLF_SEL_Lsb		8u
	/* The high level of the divider clock. */
#define SDMMC_CLK_EDGE_SEL_CCLLKIN_EDGE_H_Msb			9u
#define SDMMC_CLK_EDGE_SEL_CCLLKIN_EDGE_H_Lsb			12u
	/* The low level of the divider clock. */
#define SDMMC_CLK_EDGE_SEL_CCLLKIN_EDGE_L_Msb			13u
#define SDMMC_CLK_EDGE_SEL_CCLLKIN_EDGE_L_Lsb			16u
	/* The value should be equal to CCLKIN_EDGE_L. */
#define SDMMC_CLK_EDGE_SEL_CCLLKIN_EDGE_N_Msb			17u
#define SDMMC_CLK_EDGE_SEL_CCLLKIN_EDGE_N_Lsb			20u
	/* Enable esdio mode. */
#define SDMMC_CLK_EDGE_SEL_ESDIO_MODE				21u
	/* Enable esd mode. */
#define SDMMC_CLK_EDGE_SEL_ESD_MODE				22u
	/* Sdio clock enable */
#define SDMMC_CLK_EDGE_SEL_CCLK_EN				23u

};


#define SENS ((struct mcu_sens *)0x3FF48800)

struct mcu_sens {

	/* 0x00:  */
	uint32_t volatile SAR_READ_CTRL;
	/* clock divider */
#define SENS_SAR_READ_CTRL_SAR1_CLK_DIV_Msb			0u
#define SENS_SAR_READ_CTRL_SAR1_CLK_DIV_Lsb			7u
	/* sample cycles for SAR ADC1 */
#define SENS_SAR_READ_CTRL_SAR1_SAMPLE_CYCLE_Msb		8u
#define SENS_SAR_READ_CTRL_SAR1_SAMPLE_CYCLE_Lsb		15u
	/* 00: for 9-bit width  01: for 10-bit width  10: for 11-bit width  11: for 12-bit width */
#define SENS_SAR_READ_CTRL_SAR1_SAMPLE_BIT_Msb			16u
#define SENS_SAR_READ_CTRL_SAR1_SAMPLE_BIT_Lsb			17u
	/*  */
#define SENS_SAR_READ_CTRL_SAR1_CLK_GATED			18u
	/*  */
#define SENS_SAR_READ_CTRL_SAR1_SAMPLE_NUM_Msb			19u
#define SENS_SAR_READ_CTRL_SAR1_SAMPLE_NUM_Lsb			26u
	/* 1: SAR ADC1 controlled by DIG ADC1 CTRL  0: SAR ADC1 controlled by RTC ADC1 CTRL */
#define SENS_SAR_READ_CTRL_SAR1_DIG_FORCE			27u
	/* Invert SAR ADC1 data */
#define SENS_SAR_READ_CTRL_SAR1_DATA_INV			28u

	/* 0x04:  */
	uint32_t volatile SAR_READ_STATUS1;
	/*  */
#define SENS_SAR_READ_STATUS1_SAR1_READER_STATUS_Msb		0u
#define SENS_SAR_READ_STATUS1_SAR1_READER_STATUS_Lsb		31u

	/* 0x08:  */
	uint32_t volatile SAR_MEAS_WAIT1;
	/*  */
#define SENS_SAR_MEAS_WAIT1_SAR_AMP_WAIT1_Msb			0u
#define SENS_SAR_MEAS_WAIT1_SAR_AMP_WAIT1_Lsb			15u
	/*  */
#define SENS_SAR_MEAS_WAIT1_SAR_AMP_WAIT2_Msb			16u
#define SENS_SAR_MEAS_WAIT1_SAR_AMP_WAIT2_Lsb			31u

	/* 0x0C:  */
	uint32_t volatile SAR_MEAS_WAIT2;
	/*  */
#define SENS_SAR_MEAS_WAIT2_FORCE_XPD_SAR_SW			0u
	/*  */
#define SENS_SAR_MEAS_WAIT2_SAR_AMP_WAIT3_Msb			0u
#define SENS_SAR_MEAS_WAIT2_SAR_AMP_WAIT3_Lsb			15u
	/*  */
#define SENS_SAR_MEAS_WAIT2_FORCE_XPD_AMP_Msb			16u
#define SENS_SAR_MEAS_WAIT2_FORCE_XPD_AMP_Lsb			17u
	/*  */
#define SENS_SAR_MEAS_WAIT2_FORCE_XPD_SAR_Msb			18u
#define SENS_SAR_MEAS_WAIT2_FORCE_XPD_SAR_Lsb			19u
	/*  */
#define SENS_SAR_MEAS_WAIT2_SAR2_RSTB_WAIT_Msb			20u
#define SENS_SAR_MEAS_WAIT2_SAR2_RSTB_WAIT_Lsb			27u

	/* 0x10:  */
	uint32_t volatile SAR_MEAS_CTRL;
	/*  */
#define SENS_SAR_MEAS_CTRL_XPD_SAR_AMP_FSM_Msb			0u
#define SENS_SAR_MEAS_CTRL_XPD_SAR_AMP_FSM_Lsb			3u
	/*  */
#define SENS_SAR_MEAS_CTRL_AMP_RST_FB_FSM_Msb			4u
#define SENS_SAR_MEAS_CTRL_AMP_RST_FB_FSM_Lsb			7u
	/*  */
#define SENS_SAR_MEAS_CTRL_AMP_SHORT_REF_FSM_Msb		8u
#define SENS_SAR_MEAS_CTRL_AMP_SHORT_REF_FSM_Lsb		11u
	/*  */
#define SENS_SAR_MEAS_CTRL_AMP_SHORT_REF_GND_FSM_Msb		12u
#define SENS_SAR_MEAS_CTRL_AMP_SHORT_REF_GND_FSM_Lsb		15u
	/*  */
#define SENS_SAR_MEAS_CTRL_XPD_SAR_FSM_Msb			16u
#define SENS_SAR_MEAS_CTRL_XPD_SAR_FSM_Lsb			19u
	/*  */
#define SENS_SAR_MEAS_CTRL_SAR_RSTB_FSM_Msb			20u
#define SENS_SAR_MEAS_CTRL_SAR_RSTB_FSM_Lsb			23u
	/*  */
#define SENS_SAR_MEAS_CTRL_SAR2_XPD_WAIT_Msb			24u
#define SENS_SAR_MEAS_CTRL_SAR2_XPD_WAIT_Lsb			31u

	/* 0x14:  */
	uint32_t volatile SAR_READ_STATUS2;
	/*  */
#define SENS_SAR_READ_STATUS2_SAR2_READER_STATUS_Msb		0u
#define SENS_SAR_READ_STATUS2_SAR2_READER_STATUS_Lsb		31u

	/* 0x18:  */
	uint32_t volatile ULP_CP_SLEEP_CYC0;
	/* sleep cycles for ULP-coprocessor timer */
#define SENS_ULP_CP_SLEEP_CYC0_SLEEP_CYCLES_S0_Msb		0u
#define SENS_ULP_CP_SLEEP_CYC0_SLEEP_CYCLES_S0_Lsb		31u

	/* 0x1C:  */
	uint32_t volatile ULP_CP_SLEEP_CYC1;
	/*  */
#define SENS_ULP_CP_SLEEP_CYC1_SLEEP_CYCLES_S1_Msb		0u
#define SENS_ULP_CP_SLEEP_CYC1_SLEEP_CYCLES_S1_Lsb		31u

	/* 0x20:  */
	uint32_t volatile ULP_CP_SLEEP_CYC2;
	/*  */
#define SENS_ULP_CP_SLEEP_CYC2_SLEEP_CYCLES_S2_Msb		0u
#define SENS_ULP_CP_SLEEP_CYC2_SLEEP_CYCLES_S2_Lsb		31u

	/* 0x24:  */
	uint32_t volatile ULP_CP_SLEEP_CYC3;
	/*  */
#define SENS_ULP_CP_SLEEP_CYC3_SLEEP_CYCLES_S3_Msb		0u
#define SENS_ULP_CP_SLEEP_CYC3_SLEEP_CYCLES_S3_Lsb		31u

	/* 0x28:  */
	uint32_t volatile ULP_CP_SLEEP_CYC4;
	/*  */
#define SENS_ULP_CP_SLEEP_CYC4_SLEEP_CYCLES_S4_Msb		0u
#define SENS_ULP_CP_SLEEP_CYC4_SLEEP_CYCLES_S4_Lsb		31u

	/* 0x2C:  */
	uint32_t volatile SAR_START_FORCE;
	/* 00: 9 bit  01: 10 bits  10: 11bits  11: 12bits */
#define SENS_SAR_START_FORCE_SAR1_BIT_WIDTH_Msb			0u
#define SENS_SAR_START_FORCE_SAR1_BIT_WIDTH_Lsb			1u
	/* 00: 9 bit  01: 10 bits  10: 11bits  11: 12bits */
#define SENS_SAR_START_FORCE_SAR2_BIT_WIDTH_Msb			2u
#define SENS_SAR_START_FORCE_SAR2_BIT_WIDTH_Lsb			3u
	/* SAR2_EN_TEST  only active when reg_sar2_dig_force = 0 */
#define SENS_SAR_START_FORCE_SAR2_EN_TEST			4u
	/* SAR2_PWDET_CCT  PA power detector capacitance tuning. */
#define SENS_SAR_START_FORCE_SAR2_PWDET_CCT_Msb			5u
#define SENS_SAR_START_FORCE_SAR2_PWDET_CCT_Lsb			7u
	/* 1: ULP-coprocessor is started by SW  0: ULP-coprocessor is started by timer */
#define SENS_SAR_START_FORCE_ULP_CP_FORCE_START_TOP		8u
	/* Write 1 to start ULP-coprocessor  only active when reg_ulp_cp_force_start_top = 1 */
#define SENS_SAR_START_FORCE_ULP_CP_START_TOP			9u
	/*  */
#define SENS_SAR_START_FORCE_SARCLK_EN				10u
	/* initialized PC for ULP-coprocessor */
#define SENS_SAR_START_FORCE_PC_INIT_Msb			11u
#define SENS_SAR_START_FORCE_PC_INIT_Lsb			21u
	/* stop SAR ADC2 conversion */
#define SENS_SAR_START_FORCE_SAR2_STOP				22u
	/* stop SAR ADC1 conversion */
#define SENS_SAR_START_FORCE_SAR1_STOP				23u
	/* N/A */
#define SENS_SAR_START_FORCE_SAR2_PWDET_EN			24u

	/* 0x30:  */
	uint32_t volatile SAR_MEM_WR_CTRL;
	/*  */
#define SENS_SAR_MEM_WR_CTRL_MEM_WR_ADDR_INIT_Msb		0u
#define SENS_SAR_MEM_WR_CTRL_MEM_WR_ADDR_INIT_Lsb		10u
	/*  */
#define SENS_SAR_MEM_WR_CTRL_MEM_WR_ADDR_SIZE_Msb		11u
#define SENS_SAR_MEM_WR_CTRL_MEM_WR_ADDR_SIZE_Lsb		21u
	/*  */
#define SENS_SAR_MEM_WR_CTRL_RTC_MEM_WR_OFFST_CLR		22u

	/* 0x34:  */
	uint32_t volatile SAR_ATTEN1;
	/* 2-bit attenuation for each pad  11:1dB  10:6dB  01:3dB  00:0dB */
#define SENS_SAR_ATTEN1_SAR1_ATTEN_Msb				0u
#define SENS_SAR_ATTEN1_SAR1_ATTEN_Lsb				31u

	/* 0x38:  */
	uint32_t volatile SAR_ATTEN2;
	/* 2-bit attenuation for each pad  11:1dB  10:6dB  01:3dB  00:0dB */
#define SENS_SAR_ATTEN2_SAR2_ATTEN_Msb				0u
#define SENS_SAR_ATTEN2_SAR2_ATTEN_Lsb				31u

	/* 0x3C:  */
	uint32_t volatile SAR_SLAVE_ADDR1;
	/*  */
#define SENS_SAR_SLAVE_ADDR1_I2C_SLAVE_ADDR1_Msb		0u
#define SENS_SAR_SLAVE_ADDR1_I2C_SLAVE_ADDR1_Lsb		10u
	/*  */
#define SENS_SAR_SLAVE_ADDR1_I2C_SLAVE_ADDR0_Msb		11u
#define SENS_SAR_SLAVE_ADDR1_I2C_SLAVE_ADDR0_Lsb		21u
	/*  */
#define SENS_SAR_SLAVE_ADDR1_MEAS_STATUS_Msb			22u
#define SENS_SAR_SLAVE_ADDR1_MEAS_STATUS_Lsb			29u

	/* 0x40:  */
	uint32_t volatile SAR_SLAVE_ADDR2;
	/*  */
#define SENS_SAR_SLAVE_ADDR2_I2C_SLAVE_ADDR3_Msb		0u
#define SENS_SAR_SLAVE_ADDR2_I2C_SLAVE_ADDR3_Lsb		10u
	/*  */
#define SENS_SAR_SLAVE_ADDR2_I2C_SLAVE_ADDR2_Msb		11u
#define SENS_SAR_SLAVE_ADDR2_I2C_SLAVE_ADDR2_Lsb		21u

	/* 0x44:  */
	uint32_t volatile SAR_SLAVE_ADDR3;
	/*  */
#define SENS_SAR_SLAVE_ADDR3_I2C_SLAVE_ADDR5_Msb		0u
#define SENS_SAR_SLAVE_ADDR3_I2C_SLAVE_ADDR5_Lsb		10u
	/*  */
#define SENS_SAR_SLAVE_ADDR3_I2C_SLAVE_ADDR4_Msb		11u
#define SENS_SAR_SLAVE_ADDR3_I2C_SLAVE_ADDR4_Lsb		21u
	/* temperature sensor data out */
#define SENS_SAR_SLAVE_ADDR3_TSENS_OUT_Msb			22u
#define SENS_SAR_SLAVE_ADDR3_TSENS_OUT_Lsb			29u
	/* indicate temperature sensor out ready */
#define SENS_SAR_SLAVE_ADDR3_TSENS_RDY_OUT			30u

	/* 0x48:  */
	uint32_t volatile SAR_SLAVE_ADDR4;
	/*  */
#define SENS_SAR_SLAVE_ADDR4_I2C_SLAVE_ADDR7_Msb		0u
#define SENS_SAR_SLAVE_ADDR4_I2C_SLAVE_ADDR7_Lsb		10u
	/*  */
#define SENS_SAR_SLAVE_ADDR4_I2C_SLAVE_ADDR6_Msb		11u
#define SENS_SAR_SLAVE_ADDR4_I2C_SLAVE_ADDR6_Lsb		21u
	/* I2C read data */
#define SENS_SAR_SLAVE_ADDR4_I2C_RDATA_Msb			22u
#define SENS_SAR_SLAVE_ADDR4_I2C_RDATA_Lsb			29u
	/* indicate I2C done */
#define SENS_SAR_SLAVE_ADDR4_I2C_DONE				30u

	/* 0x4C:  */
	uint32_t volatile SAR_TSENS_CTRL;
	/*  */
#define SENS_SAR_TSENS_CTRL_TSENS_XPD_WAIT_Msb			0u
#define SENS_SAR_TSENS_CTRL_TSENS_XPD_WAIT_Lsb			11u
	/*  */
#define SENS_SAR_TSENS_CTRL_TSENS_XPD_FORCE			12u
	/*  */
#define SENS_SAR_TSENS_CTRL_TSENS_CLK_INV			13u
	/*  */
#define SENS_SAR_TSENS_CTRL_TSENS_CLK_GATED			14u
	/* invert temperature sensor data */
#define SENS_SAR_TSENS_CTRL_TSENS_IN_INV			15u
	/* temperature sensor clock divider */
#define SENS_SAR_TSENS_CTRL_TSENS_CLK_DIV_Msb			16u
#define SENS_SAR_TSENS_CTRL_TSENS_CLK_DIV_Lsb			23u
	/* temperature sensor power up */
#define SENS_SAR_TSENS_CTRL_TSENS_POWER_UP			24u
	/* 1: dump out & power up controlled by SW  0: by FSM */
#define SENS_SAR_TSENS_CTRL_TSENS_POWER_UP_FORCE		25u
	/* temperature sensor dump out  only active when reg_tsens_power_up_force = 1 */
#define SENS_SAR_TSENS_CTRL_TSENS_DUMP_OUT			26u

	/* 0x50:  */
	uint32_t volatile SAR_I2C_CTRL;
	/* I2C control data  only active when reg_sar_i2c_start_force = 1 */
#define SENS_SAR_I2C_CTRL_SAR_I2C_CTRL_Msb			0u
#define SENS_SAR_I2C_CTRL_SAR_I2C_CTRL_Lsb			27u
	/* start I2C  only active when reg_sar_i2c_start_force = 1 */
#define SENS_SAR_I2C_CTRL_SAR_I2C_START				28u
	/* 1: I2C started by SW  0: I2C started by FSM */
#define SENS_SAR_I2C_CTRL_SAR_I2C_START_FORCE			29u

	/* 0x54:  */
	uint32_t volatile SAR_MEAS_START1;
	/* SAR ADC1 data */
#define SENS_SAR_MEAS_START1_MEAS1_DATA_SAR_Msb			0u
#define SENS_SAR_MEAS_START1_MEAS1_DATA_SAR_Lsb			15u
	/* SAR ADC1 conversion done indication */
#define SENS_SAR_MEAS_START1_MEAS1_DONE_SAR			16u
	/* SAR ADC1 controller (in RTC) starts conversion  only active when reg_meas1_start_force = 1 */
#define SENS_SAR_MEAS_START1_MEAS1_START_SAR			17u
	/* 1: SAR ADC1 controller (in RTC) is started by SW  0: SAR ADC1 controller is started by ULP-coprocessor */
#define SENS_SAR_MEAS_START1_MEAS1_START_FORCE			18u
	/* SAR ADC1 pad enable bitmap  only active when reg_sar1_en_pad_force = 1 */
#define SENS_SAR_MEAS_START1_SAR1_EN_PAD_Msb			19u
#define SENS_SAR_MEAS_START1_SAR1_EN_PAD_Lsb			30u
	/* 1: SAR ADC1 pad enable bitmap is controlled by SW  0: SAR ADC1 pad enable bitmap is controlled by ULP-coprocessor */
#define SENS_SAR_MEAS_START1_SAR1_EN_PAD_FORCE			31u

	/* 0x58:  */
	uint32_t volatile SAR_TOUCH_CTRL1;
	/* the meas length (in 8MHz) */
#define SENS_SAR_TOUCH_CTRL1_TOUCH_MEAS_DELAY_Msb		0u
#define SENS_SAR_TOUCH_CTRL1_TOUCH_MEAS_DELAY_Lsb		15u
	/* the waiting cycles (in 8MHz) between TOUCH_START and TOUCH_XPD */
#define SENS_SAR_TOUCH_CTRL1_TOUCH_XPD_WAIT_Msb			16u
#define SENS_SAR_TOUCH_CTRL1_TOUCH_XPD_WAIT_Lsb			23u
	/* 1: when the counter is greater then the threshold  the touch pad is considered as "touched"  0: when the counter is less than the threshold  the touch pad is considered as "touched" */
#define SENS_SAR_TOUCH_CTRL1_TOUCH_OUT_SEL			24u
	/* 1: wakeup interrupt is generated if SET1 is "touched"  0: wakeup interrupt is generated only if SET1 & SET2 is both "touched" */
#define SENS_SAR_TOUCH_CTRL1_TOUCH_OUT_1EN			25u
	/* 1: XPD HALL is controlled by SW. */
#define SENS_SAR_TOUCH_CTRL1_XPD_HALL_FORCE			26u
	/* 1: HALL PHASE is controlled by SW  0: HALL PHASE is controlled by FSM in ULP-coprocessor */
#define SENS_SAR_TOUCH_CTRL1_HALL_PHASE_FORCE			27u

	/* 0x5C:  */
	uint32_t volatile SAR_TOUCH_THRES1;
	/* the threshold for touch pad 1 */
#define SENS_SAR_TOUCH_THRES1_TOUCH_OUT_TH1_Msb			0u
#define SENS_SAR_TOUCH_THRES1_TOUCH_OUT_TH1_Lsb			15u
	/* the threshold for touch pad 0 */
#define SENS_SAR_TOUCH_THRES1_TOUCH_OUT_TH0_Msb			16u
#define SENS_SAR_TOUCH_THRES1_TOUCH_OUT_TH0_Lsb			31u

	/* 0x60:  */
	uint32_t volatile SAR_TOUCH_THRES2;
	/* the threshold for touch pad 3 */
#define SENS_SAR_TOUCH_THRES2_TOUCH_OUT_TH3_Msb			0u
#define SENS_SAR_TOUCH_THRES2_TOUCH_OUT_TH3_Lsb			15u
	/* the threshold for touch pad 2 */
#define SENS_SAR_TOUCH_THRES2_TOUCH_OUT_TH2_Msb			16u
#define SENS_SAR_TOUCH_THRES2_TOUCH_OUT_TH2_Lsb			31u

	/* 0x64:  */
	uint32_t volatile SAR_TOUCH_THRES3;
	/* the threshold for touch pad 5 */
#define SENS_SAR_TOUCH_THRES3_TOUCH_OUT_TH5_Msb			0u
#define SENS_SAR_TOUCH_THRES3_TOUCH_OUT_TH5_Lsb			15u
	/* the threshold for touch pad 4 */
#define SENS_SAR_TOUCH_THRES3_TOUCH_OUT_TH4_Msb			16u
#define SENS_SAR_TOUCH_THRES3_TOUCH_OUT_TH4_Lsb			31u

	/* 0x68:  */
	uint32_t volatile SAR_TOUCH_THRES4;
	/* the threshold for touch pad 7 */
#define SENS_SAR_TOUCH_THRES4_TOUCH_OUT_TH7_Msb			0u
#define SENS_SAR_TOUCH_THRES4_TOUCH_OUT_TH7_Lsb			15u
	/* the threshold for touch pad 6 */
#define SENS_SAR_TOUCH_THRES4_TOUCH_OUT_TH6_Msb			16u
#define SENS_SAR_TOUCH_THRES4_TOUCH_OUT_TH6_Lsb			31u

	/* 0x6C:  */
	uint32_t volatile SAR_TOUCH_THRES5;
	/* the threshold for touch pad 9 */
#define SENS_SAR_TOUCH_THRES5_TOUCH_OUT_TH9_Msb			0u
#define SENS_SAR_TOUCH_THRES5_TOUCH_OUT_TH9_Lsb			15u
	/* the threshold for touch pad 8 */
#define SENS_SAR_TOUCH_THRES5_TOUCH_OUT_TH8_Msb			16u
#define SENS_SAR_TOUCH_THRES5_TOUCH_OUT_TH8_Lsb			31u

	/* 0x70:  */
	uint32_t volatile SAR_TOUCH_OUT1;
	/* the counter for touch pad 1 */
#define SENS_SAR_TOUCH_OUT1_TOUCH_MEAS_OUT1_Msb			0u
#define SENS_SAR_TOUCH_OUT1_TOUCH_MEAS_OUT1_Lsb			15u
	/* the counter for touch pad 0 */
#define SENS_SAR_TOUCH_OUT1_TOUCH_MEAS_OUT0_Msb			16u
#define SENS_SAR_TOUCH_OUT1_TOUCH_MEAS_OUT0_Lsb			31u

	/* 0x74:  */
	uint32_t volatile SAR_TOUCH_OUT2;
	/* the counter for touch pad 3 */
#define SENS_SAR_TOUCH_OUT2_TOUCH_MEAS_OUT3_Msb			0u
#define SENS_SAR_TOUCH_OUT2_TOUCH_MEAS_OUT3_Lsb			15u
	/* the counter for touch pad 2 */
#define SENS_SAR_TOUCH_OUT2_TOUCH_MEAS_OUT2_Msb			16u
#define SENS_SAR_TOUCH_OUT2_TOUCH_MEAS_OUT2_Lsb			31u

	/* 0x78:  */
	uint32_t volatile SAR_TOUCH_OUT3;
	/* the counter for touch pad 5 */
#define SENS_SAR_TOUCH_OUT3_TOUCH_MEAS_OUT5_Msb			0u
#define SENS_SAR_TOUCH_OUT3_TOUCH_MEAS_OUT5_Lsb			15u
	/* the counter for touch pad 4 */
#define SENS_SAR_TOUCH_OUT3_TOUCH_MEAS_OUT4_Msb			16u
#define SENS_SAR_TOUCH_OUT3_TOUCH_MEAS_OUT4_Lsb			31u

	/* 0x7C:  */
	uint32_t volatile SAR_TOUCH_OUT4;
	/* the counter for touch pad 7 */
#define SENS_SAR_TOUCH_OUT4_TOUCH_MEAS_OUT7_Msb			0u
#define SENS_SAR_TOUCH_OUT4_TOUCH_MEAS_OUT7_Lsb			15u
	/* the counter for touch pad 6 */
#define SENS_SAR_TOUCH_OUT4_TOUCH_MEAS_OUT6_Msb			16u
#define SENS_SAR_TOUCH_OUT4_TOUCH_MEAS_OUT6_Lsb			31u

	/* 0x80:  */
	uint32_t volatile SAR_TOUCH_OUT5;
	/* the counter for touch pad 9 */
#define SENS_SAR_TOUCH_OUT5_TOUCH_MEAS_OUT9_Msb			0u
#define SENS_SAR_TOUCH_OUT5_TOUCH_MEAS_OUT9_Lsb			15u
	/* the counter for touch pad 8 */
#define SENS_SAR_TOUCH_OUT5_TOUCH_MEAS_OUT8_Msb			16u
#define SENS_SAR_TOUCH_OUT5_TOUCH_MEAS_OUT8_Lsb			31u

	/* 0x84:  */
	uint32_t volatile SAR_TOUCH_CTRL2;
	/* 10-bit register to indicate which pads are "touched" */
#define SENS_SAR_TOUCH_CTRL2_TOUCH_MEAS_EN_Msb			0u
#define SENS_SAR_TOUCH_CTRL2_TOUCH_MEAS_EN_Lsb			9u
	/* fsm set 1 to indicate touch touch meas is done */
#define SENS_SAR_TOUCH_CTRL2_TOUCH_MEAS_DONE			10u
	/* 1: TOUCH_START & TOUCH_XPD is controlled by touch fsm  0: TOUCH_START & TOUCH_XPD is controlled by registers */
#define SENS_SAR_TOUCH_CTRL2_TOUCH_START_FSM_EN			11u
	/* 1: start touch fsm  valid when reg_touch_start_force is set */
#define SENS_SAR_TOUCH_CTRL2_TOUCH_START_EN			12u
	/* 1: to start touch fsm by SW  0: to start touch fsm by timer */
#define SENS_SAR_TOUCH_CTRL2_TOUCH_START_FORCE			13u
	/* sleep cycles for timer */
#define SENS_SAR_TOUCH_CTRL2_TOUCH_SLEEP_CYCLES_Msb		14u
#define SENS_SAR_TOUCH_CTRL2_TOUCH_SLEEP_CYCLES_Lsb		29u
	/* to clear reg_touch_meas_en */
#define SENS_SAR_TOUCH_CTRL2_TOUCH_MEAS_EN_CLR			30u

	/* 0x8C:  */
	uint32_t volatile SAR_TOUCH_ENABLE;
	/* Bitmap defining the working set during the measurement. */
#define SENS_SAR_TOUCH_ENABLE_TOUCH_PAD_WORKEN_Msb		0u
#define SENS_SAR_TOUCH_ENABLE_TOUCH_PAD_WORKEN_Lsb		9u
	/* Bitmap defining SET2 for generating wakeup interrupt. */
#define SENS_SAR_TOUCH_ENABLE_TOUCH_PAD_OUTEN2_Msb		10u
#define SENS_SAR_TOUCH_ENABLE_TOUCH_PAD_OUTEN2_Lsb		19u
	/* Bitmap defining SET1 for generating wakeup interrupt. */
#define SENS_SAR_TOUCH_ENABLE_TOUCH_PAD_OUTEN1_Msb		20u
#define SENS_SAR_TOUCH_ENABLE_TOUCH_PAD_OUTEN1_Lsb		29u

	/* 0x90:  */
	uint32_t volatile SAR_READ_CTRL2;
	/* clock divider */
#define SENS_SAR_READ_CTRL2_SAR2_CLK_DIV_Msb			0u
#define SENS_SAR_READ_CTRL2_SAR2_CLK_DIV_Lsb			7u
	/* sample cycles for SAR ADC2 */
#define SENS_SAR_READ_CTRL2_SAR2_SAMPLE_CYCLE_Msb		8u
#define SENS_SAR_READ_CTRL2_SAR2_SAMPLE_CYCLE_Lsb		15u
	/* 00: for 9-bit width  01: for 10-bit width  10: for 11-bit width  11: for 12-bit width */
#define SENS_SAR_READ_CTRL2_SAR2_SAMPLE_BIT_Msb			16u
#define SENS_SAR_READ_CTRL2_SAR2_SAMPLE_BIT_Lsb			17u
	/*  */
#define SENS_SAR_READ_CTRL2_SAR2_CLK_GATED			18u
	/*  */
#define SENS_SAR_READ_CTRL2_SAR2_SAMPLE_NUM_Msb			19u
#define SENS_SAR_READ_CTRL2_SAR2_SAMPLE_NUM_Lsb			26u
	/*  */
#define SENS_SAR_READ_CTRL2_SAR2_PWDET_FORCE			27u
	/* 1: SAR ADC2 controlled by DIG ADC2 CTRL or PWDET CTRL  0: SAR ADC2 controlled by RTC ADC2 CTRL */
#define SENS_SAR_READ_CTRL2_SAR2_DIG_FORCE			28u
	/* Invert SAR ADC2 data */
#define SENS_SAR_READ_CTRL2_SAR2_DATA_INV			29u

	/* 0x94:  */
	uint32_t volatile SAR_MEAS_START2;
	/* SAR ADC2 data */
#define SENS_SAR_MEAS_START2_MEAS2_DATA_SAR_Msb			0u
#define SENS_SAR_MEAS_START2_MEAS2_DATA_SAR_Lsb			15u
	/* SAR ADC2 conversion done indication */
#define SENS_SAR_MEAS_START2_MEAS2_DONE_SAR			16u
	/* SAR ADC2 controller (in RTC) starts conversion  only active when reg_meas2_start_force = 1 */
#define SENS_SAR_MEAS_START2_MEAS2_START_SAR			17u
	/* 1: SAR ADC2 controller (in RTC) is started by SW  0: SAR ADC2 controller is started by ULP-coprocessor */
#define SENS_SAR_MEAS_START2_MEAS2_START_FORCE			18u
	/* SAR ADC2 pad enable bitmap  only active when reg_sar2_en_pad_force = 1 */
#define SENS_SAR_MEAS_START2_SAR2_EN_PAD_Msb			19u
#define SENS_SAR_MEAS_START2_SAR2_EN_PAD_Lsb			30u
	/* 1: SAR ADC2 pad enable bitmap is controlled by SW  0: SAR ADC2 pad enable bitmap is controlled by ULP-coprocessor */
#define SENS_SAR_MEAS_START2_SAR2_EN_PAD_FORCE			31u

	/* 0x98:  */
	uint32_t volatile SAR_DAC_CTRL1;
	/* frequency step for CW generator  can be used to adjust the frequency */
#define SENS_SAR_DAC_CTRL1_SW_FSTEP_Msb				0u
#define SENS_SAR_DAC_CTRL1_SW_FSTEP_Lsb				15u
	/* 1: enable CW generator  0: disable CW generator */
#define SENS_SAR_DAC_CTRL1_SW_TONE_EN				16u
	/*  */
#define SENS_SAR_DAC_CTRL1_DEBUG_BIT_SEL_Msb			17u
#define SENS_SAR_DAC_CTRL1_DEBUG_BIT_SEL_Lsb			21u
	/* 1: DAC1 & DAC2 use DMA  0: DAC1 & DAC2 do not use DMA */
#define SENS_SAR_DAC_CTRL1_DAC_DIG_FORCE			22u
	/* 1: force PDAC_CLK to low */
#define SENS_SAR_DAC_CTRL1_DAC_CLK_FORCE_LOW			23u
	/* 1: force PDAC_CLK to high */
#define SENS_SAR_DAC_CTRL1_DAC_CLK_FORCE_HIGH			24u
	/* 1: invert PDAC_CLK */
#define SENS_SAR_DAC_CTRL1_DAC_CLK_INV				25u

	/* 0x9C:  */
	uint32_t volatile SAR_DAC_CTRL2;
	/* DC offset for DAC1 CW generator */
#define SENS_SAR_DAC_CTRL2_DAC_DC1_Msb				0u
#define SENS_SAR_DAC_CTRL2_DAC_DC1_Lsb				7u
	/* DC offset for DAC2 CW generator */
#define SENS_SAR_DAC_CTRL2_DAC_DC2_Msb				8u
#define SENS_SAR_DAC_CTRL2_DAC_DC2_Lsb				15u
	/* 00: no scale  01: scale to 1/2  10: scale to 1/4  scale to 1/8 */
#define SENS_SAR_DAC_CTRL2_DAC_SCALE1_Msb			16u
#define SENS_SAR_DAC_CTRL2_DAC_SCALE1_Lsb			17u
	/* 00: no scale  01: scale to 1/2  10: scale to 1/4  scale to 1/8 */
#define SENS_SAR_DAC_CTRL2_DAC_SCALE2_Msb			18u
#define SENS_SAR_DAC_CTRL2_DAC_SCALE2_Lsb			19u
	/* 00: do not invert any bits  01: invert all bits  10: invert MSB  11: invert all bits except MSB */
#define SENS_SAR_DAC_CTRL2_DAC_INV1_Msb				20u
#define SENS_SAR_DAC_CTRL2_DAC_INV1_Lsb				21u
	/* 00: do not invert any bits  01: invert all bits  10: invert MSB  11: invert all bits except MSB */
#define SENS_SAR_DAC_CTRL2_DAC_INV2_Msb				22u
#define SENS_SAR_DAC_CTRL2_DAC_INV2_Lsb				23u
	/* 1: to select CW generator as source to PDAC1_DAC[7:0]  0: to select register reg_pdac1_dac[7:0] as source to PDAC1_DAC[7:0] */
#define SENS_SAR_DAC_CTRL2_DAC_CW_EN1				24u
	/* 1: to select CW generator as source to PDAC2_DAC[7:0]  0: to select register reg_pdac2_dac[7:0] as source to PDAC2_DAC[7:0] */
#define SENS_SAR_DAC_CTRL2_DAC_CW_EN2				25u

	/* 0xA0:  */
	uint32_t volatile SAR_MEAS_CTRL2;
	/*  */
#define SENS_SAR_MEAS_CTRL2_SAR1_DAC_XPD_FSM_Msb		0u
#define SENS_SAR_MEAS_CTRL2_SAR1_DAC_XPD_FSM_Lsb		3u
	/*  */
#define SENS_SAR_MEAS_CTRL2_SAR1_DAC_XPD_FSM_IDLE		4u
	/*  */
#define SENS_SAR_MEAS_CTRL2_XPD_SAR_AMP_FSM_IDLE		5u
	/*  */
#define SENS_SAR_MEAS_CTRL2_AMP_RST_FB_FSM_IDLE			6u
	/*  */
#define SENS_SAR_MEAS_CTRL2_AMP_SHORT_REF_FSM_IDLE		7u
	/*  */
#define SENS_SAR_MEAS_CTRL2_AMP_SHORT_REF_GND_FSM_IDLE		8u
	/*  */
#define SENS_SAR_MEAS_CTRL2_XPD_SAR_FSM_IDLE			9u
	/*  */
#define SENS_SAR_MEAS_CTRL2_SAR_RSTB_FSM_IDLE			10u
	/*  */
#define SENS_SAR_MEAS_CTRL2_SAR2_RSTB_FORCE_Msb			11u
#define SENS_SAR_MEAS_CTRL2_SAR2_RSTB_FORCE_Lsb			12u
	/*  */
#define SENS_SAR_MEAS_CTRL2_AMP_RST_FB_FORCE_Msb		13u
#define SENS_SAR_MEAS_CTRL2_AMP_RST_FB_FORCE_Lsb		14u
	/*  */
#define SENS_SAR_MEAS_CTRL2_AMP_SHORT_REF_FORCE_Msb		15u
#define SENS_SAR_MEAS_CTRL2_AMP_SHORT_REF_FORCE_Lsb		16u
	/*  */
#define SENS_SAR_MEAS_CTRL2_AMP_SHORT_REF_GND_FORCE_Msb		17u
#define SENS_SAR_MEAS_CTRL2_AMP_SHORT_REF_GND_FORCE_Lsb		18u

	/* 0xC0 */
	uint8_t RESERVED0[0xF8-0xC0];

	/* 0xF8:  */
	uint32_t volatile SAR_NOUSE;
	/*  */
#define SENS_SAR_NOUSE_SAR_NOUSE_Msb				0u
#define SENS_SAR_NOUSE_SAR_NOUSE_Lsb				31u

	/* 0xFC:  */
	uint32_t volatile SARDATE;
	/*  */
#define SENS_SARDATE_SAR_DATE_Msb				0u
#define SENS_SARDATE_SAR_DATE_Lsb				27u

};


#define SHA ((struct mcu_sha *)0x3FF03000)

struct mcu_sha {

	/* 0x00:  */
	uint32_t volatile TEXT_%S;
	/* SHA Message block and hash result register. */
#define SHA_TEXT_%S_TEXT_Msb					0u
#define SHA_TEXT_%S_TEXT_Lsb					7u

	/* 0x20 */
	uint8_t RESERVED0[0x80-0x20];

	/* 0x80:  */
	uint32_t volatile SHA1_START;
	/* Write 1 to start an SHA-1 operation on the first message block. */
#define SHA_SHA1_START_SHA1_START				0u

	/* 0x80:  */
	uint32_t volatile SHA1_CONTINUE;
	/* Write 1 to continue the SHA-1 operation with subsequent blocks. */
#define SHA_SHA1_CONTINUE_SHA1_CONTINUE				0u

	/* 0x88:  */
	uint32_t volatile SHA1_LOAD;
	/* Write 1 to finish the SHA-1 operation to calculate the final message hash. */
#define SHA_SHA1_LOAD_SHA1_LOAD					0u

	/* 0x8C:  */
	uint32_t volatile SHA1_BUSY;
	/* SHA-1 operation status: 1 if the SHA accelerator is processing data, 0 if it is idle. */
#define SHA_SHA1_BUSY_SHA1_BUSY					0u

	/* 0x90:  */
	uint32_t volatile SHA256_START;
	/* Write 1 to start an SHA-256 operation on the first message block. */
#define SHA_SHA256_START_SHA256_START				0u

	/* 0x90:  */
	uint32_t volatile SHA256_LOAD;
	/* Write 1 to finish the SHA-256 operation to calculate the final message hash. */
#define SHA_SHA256_LOAD_SHA256_LOAD				0u

	/* 0x94:  */
	uint32_t volatile SHA256_CONTINUE;
	/* Write 1 to continue the SHA-256 operation with subsequent blocks. */
#define SHA_SHA256_CONTINUE_SHA256_CONTINUE			0u

	/* 0x9C:  */
	uint32_t volatile SHA256_BUSY;
	/* SHA-256 operation status: 1 if the SHA accelerator is processing data, 0 if it is idle. */
#define SHA_SHA256_BUSY_SHA256_BUSY				0u

	/* 0xA0:  */
	uint32_t volatile SHA384_START;
	/* Write 1 to start an SHA-384 operation on the first message block. */
#define SHA_SHA384_START_SHA384_START				0u

	/* 0xA4:  */
	uint32_t volatile SHA384_CONTINUE;
	/* Write 1 to continue the SHA-384 operation with subsequent blocks. */
#define SHA_SHA384_CONTINUE_SHA384_CONTINUE			0u

	/* 0xA8:  */
	uint32_t volatile SHA384_LOAD;
	/* Write 1 to finish the SHA-384 operation to calculate the final message hash. */
#define SHA_SHA384_LOAD_SHA384_LOAD				0u

	/* 0xAC:  */
	uint32_t volatile SHA384_BUSY;
	/* SHA-384 operation status: 1 if the SHA accelerator is processing data, 0 if it is idle. */
#define SHA_SHA384_BUSY_SHA384_BUSY				0u

	/* 0xB0:  */
	uint32_t volatile SHA512_START;
	/* Write 1 to start an SHA-512 operation on the first message block. */
#define SHA_SHA512_START_SHA512_START				0u

	/* 0xB4:  */
	uint32_t volatile SHA512_CONTINUE;
	/* Write 1 to continue the SHA-512 operation with subsequent blocks. */
#define SHA_SHA512_CONTINUE_SHA512_CONTINUE			0u

	/* 0xB8:  */
	uint32_t volatile SHA512_LOAD;
	/* Write 1 to finish the SHA-512 operation to calculate the final message hash. */
#define SHA_SHA512_LOAD_SHA512_LOAD				0u

	/* 0xBC:  */
	uint32_t volatile SHA512_BUSY;
	/* SHA-512 operation status: 1 if the SHA accelerator is processing data, 0 if it is idle. */
#define SHA_SHA512_BUSY_SHA512_BUSY				0u

};


#define SLC ((struct mcu_slc *)0x3FF58000)

struct mcu_slc {

	/* 0x00:  */
	uint32_t volatile CONF0;
	/*  */
#define SLC_CONF0_SLC0_TX_RST					0u
	/*  */
#define SLC_CONF0_SLC0_RX_RST					1u
	/*  */
#define SLC_CONF0_AHBM_FIFO_RST					2u
	/*  */
#define SLC_CONF0_AHBM_RST					3u
	/*  */
#define SLC_CONF0_SLC0_TX_LOOP_TEST				4u
	/*  */
#define SLC_CONF0_SLC0_RX_LOOP_TEST				5u
	/*  */
#define SLC_CONF0_SLC0_RX_AUTO_WRBACK				6u
	/*  */
#define SLC_CONF0_SLC0_RX_NO_RESTART_CLR			7u
	/*  */
#define SLC_CONF0_SLC0_RXDSCR_BURST_EN				8u
	/*  */
#define SLC_CONF0_SLC0_RXDATA_BURST_EN				9u
	/*  */
#define SLC_CONF0_SLC0_RXLINK_AUTO_RET				10u
	/*  */
#define SLC_CONF0_SLC0_TXLINK_AUTO_RET				11u
	/*  */
#define SLC_CONF0_SLC0_TXDSCR_BURST_EN				12u
	/*  */
#define SLC_CONF0_SLC0_TXDATA_BURST_EN				13u
	/*  */
#define SLC_CONF0_SLC0_TOKEN_AUTO_CLR				14u
	/*  */
#define SLC_CONF0_SLC0_TOKEN_SEL				15u
	/*  */
#define SLC_CONF0_SLC1_TX_RST					16u
	/*  */
#define SLC_CONF0_SLC1_RX_RST					17u
	/*  */
#define SLC_CONF0_SLC0_WR_RETRY_MASK_EN				18u
	/*  */
#define SLC_CONF0_SLC1_WR_RETRY_MASK_EN				19u
	/*  */
#define SLC_CONF0_SLC1_TX_LOOP_TEST				20u
	/*  */
#define SLC_CONF0_SLC1_RX_LOOP_TEST				21u
	/*  */
#define SLC_CONF0_SLC1_RX_AUTO_WRBACK				22u
	/*  */
#define SLC_CONF0_SLC1_RX_NO_RESTART_CLR			23u
	/*  */
#define SLC_CONF0_SLC1_RXDSCR_BURST_EN				24u
	/*  */
#define SLC_CONF0_SLC1_RXDATA_BURST_EN				25u
	/*  */
#define SLC_CONF0_SLC1_RXLINK_AUTO_RET				26u
	/*  */
#define SLC_CONF0_SLC1_TXLINK_AUTO_RET				27u
	/*  */
#define SLC_CONF0_SLC1_TXDSCR_BURST_EN				28u
	/*  */
#define SLC_CONF0_SLC1_TXDATA_BURST_EN				29u
	/*  */
#define SLC_CONF0_SLC1_TOKEN_AUTO_CLR				30u
	/*  */
#define SLC_CONF0_SLC1_TOKEN_SEL				31u

	/* 0x04:  */
	uint32_t volatile _0INT_RAW;
	/*  */
#define SLC__0INT_RAW_FRHOST_BIT0_INT_RAW			0u
	/*  */
#define SLC__0INT_RAW_FRHOST_BIT1_INT_RAW			1u
	/*  */
#define SLC__0INT_RAW_FRHOST_BIT2_INT_RAW			2u
	/*  */
#define SLC__0INT_RAW_FRHOST_BIT3_INT_RAW			3u
	/*  */
#define SLC__0INT_RAW_FRHOST_BIT4_INT_RAW			4u
	/*  */
#define SLC__0INT_RAW_FRHOST_BIT5_INT_RAW			5u
	/*  */
#define SLC__0INT_RAW_FRHOST_BIT6_INT_RAW			6u
	/*  */
#define SLC__0INT_RAW_FRHOST_BIT7_INT_RAW			7u
	/*  */
#define SLC__0INT_RAW_SLC0_RX_START_INT_RAW			8u
	/*  */
#define SLC__0INT_RAW_SLC0_TX_START_INT_RAW			9u
	/*  */
#define SLC__0INT_RAW_SLC0_RX_UDF_INT_RAW			10u
	/*  */
#define SLC__0INT_RAW_SLC0_TX_OVF_INT_RAW			11u
	/*  */
#define SLC__0INT_RAW_SLC0_TOKEN0_1TO0_INT_RAW			12u
	/*  */
#define SLC__0INT_RAW_SLC0_TOKEN1_1TO0_INT_RAW			13u
	/*  */
#define SLC__0INT_RAW_SLC0_TX_DONE_INT_RAW			14u
	/*  */
#define SLC__0INT_RAW_SLC0_TX_SUC_EOF_INT_RAW			15u
	/*  */
#define SLC__0INT_RAW_SLC0_RX_DONE_INT_RAW			16u
	/*  */
#define SLC__0INT_RAW_SLC0_RX_EOF_INT_RAW			17u
	/*  */
#define SLC__0INT_RAW_SLC0_TOHOST_INT_RAW			18u
	/*  */
#define SLC__0INT_RAW_SLC0_TX_DSCR_ERR_INT_RAW			19u
	/*  */
#define SLC__0INT_RAW_SLC0_RX_DSCR_ERR_INT_RAW			20u
	/*  */
#define SLC__0INT_RAW_SLC0_TX_DSCR_EMPTY_INT_RAW		21u
	/*  */
#define SLC__0INT_RAW_SLC0_HOST_RD_ACK_INT_RAW			22u
	/*  */
#define SLC__0INT_RAW_SLC0_WR_RETRY_DONE_INT_RAW		23u
	/*  */
#define SLC__0INT_RAW_SLC0_TX_ERR_EOF_INT_RAW			24u
	/*  */
#define SLC__0INT_RAW_CMD_DTC_INT_RAW				25u
	/*  */
#define SLC__0INT_RAW_SLC0_RX_QUICK_EOF_INT_RAW			26u

	/* 0x08:  */
	uint32_t volatile _0INT_ST;
	/*  */
#define SLC__0INT_ST_FRHOST_BIT0_INT_ST				0u
	/*  */
#define SLC__0INT_ST_FRHOST_BIT1_INT_ST				1u
	/*  */
#define SLC__0INT_ST_FRHOST_BIT2_INT_ST				2u
	/*  */
#define SLC__0INT_ST_FRHOST_BIT3_INT_ST				3u
	/*  */
#define SLC__0INT_ST_FRHOST_BIT4_INT_ST				4u
	/*  */
#define SLC__0INT_ST_FRHOST_BIT5_INT_ST				5u
	/*  */
#define SLC__0INT_ST_FRHOST_BIT6_INT_ST				6u
	/*  */
#define SLC__0INT_ST_FRHOST_BIT7_INT_ST				7u
	/*  */
#define SLC__0INT_ST_SLC0_RX_START_INT_ST			8u
	/*  */
#define SLC__0INT_ST_SLC0_TX_START_INT_ST			9u
	/*  */
#define SLC__0INT_ST_SLC0_RX_UDF_INT_ST				10u
	/*  */
#define SLC__0INT_ST_SLC0_TX_OVF_INT_ST				11u
	/*  */
#define SLC__0INT_ST_SLC0_TOKEN0_1TO0_INT_ST			12u
	/*  */
#define SLC__0INT_ST_SLC0_TOKEN1_1TO0_INT_ST			13u
	/*  */
#define SLC__0INT_ST_SLC0_TX_DONE_INT_ST			14u
	/*  */
#define SLC__0INT_ST_SLC0_TX_SUC_EOF_INT_ST			15u
	/*  */
#define SLC__0INT_ST_SLC0_RX_DONE_INT_ST			16u
	/*  */
#define SLC__0INT_ST_SLC0_RX_EOF_INT_ST				17u
	/*  */
#define SLC__0INT_ST_SLC0_TOHOST_INT_ST				18u
	/*  */
#define SLC__0INT_ST_SLC0_TX_DSCR_ERR_INT_ST			19u
	/*  */
#define SLC__0INT_ST_SLC0_RX_DSCR_ERR_INT_ST			20u
	/*  */
#define SLC__0INT_ST_SLC0_TX_DSCR_EMPTY_INT_ST			21u
	/*  */
#define SLC__0INT_ST_SLC0_HOST_RD_ACK_INT_ST			22u
	/*  */
#define SLC__0INT_ST_SLC0_WR_RETRY_DONE_INT_ST			23u
	/*  */
#define SLC__0INT_ST_SLC0_TX_ERR_EOF_INT_ST			24u
	/*  */
#define SLC__0INT_ST_CMD_DTC_INT_ST				25u
	/*  */
#define SLC__0INT_ST_SLC0_RX_QUICK_EOF_INT_ST			26u

	/* 0x0C:  */
	uint32_t volatile _0INT_ENA;
	/*  */
#define SLC__0INT_ENA_FRHOST_BIT0_INT_ENA			0u
	/*  */
#define SLC__0INT_ENA_FRHOST_BIT1_INT_ENA			1u
	/*  */
#define SLC__0INT_ENA_FRHOST_BIT2_INT_ENA			2u
	/*  */
#define SLC__0INT_ENA_FRHOST_BIT3_INT_ENA			3u
	/*  */
#define SLC__0INT_ENA_FRHOST_BIT4_INT_ENA			4u
	/*  */
#define SLC__0INT_ENA_FRHOST_BIT5_INT_ENA			5u
	/*  */
#define SLC__0INT_ENA_FRHOST_BIT6_INT_ENA			6u
	/*  */
#define SLC__0INT_ENA_FRHOST_BIT7_INT_ENA			7u
	/*  */
#define SLC__0INT_ENA_SLC0_RX_START_INT_ENA			8u
	/*  */
#define SLC__0INT_ENA_SLC0_TX_START_INT_ENA			9u
	/*  */
#define SLC__0INT_ENA_SLC0_RX_UDF_INT_ENA			10u
	/*  */
#define SLC__0INT_ENA_SLC0_TX_OVF_INT_ENA			11u
	/*  */
#define SLC__0INT_ENA_SLC0_TOKEN0_1TO0_INT_ENA			12u
	/*  */
#define SLC__0INT_ENA_SLC0_TOKEN1_1TO0_INT_ENA			13u
	/*  */
#define SLC__0INT_ENA_SLC0_TX_DONE_INT_ENA			14u
	/*  */
#define SLC__0INT_ENA_SLC0_TX_SUC_EOF_INT_ENA			15u
	/*  */
#define SLC__0INT_ENA_SLC0_RX_DONE_INT_ENA			16u
	/*  */
#define SLC__0INT_ENA_SLC0_RX_EOF_INT_ENA			17u
	/*  */
#define SLC__0INT_ENA_SLC0_TOHOST_INT_ENA			18u
	/*  */
#define SLC__0INT_ENA_SLC0_TX_DSCR_ERR_INT_ENA			19u
	/*  */
#define SLC__0INT_ENA_SLC0_RX_DSCR_ERR_INT_ENA			20u
	/*  */
#define SLC__0INT_ENA_SLC0_TX_DSCR_EMPTY_INT_ENA		21u
	/*  */
#define SLC__0INT_ENA_SLC0_HOST_RD_ACK_INT_ENA			22u
	/*  */
#define SLC__0INT_ENA_SLC0_WR_RETRY_DONE_INT_ENA		23u
	/*  */
#define SLC__0INT_ENA_SLC0_TX_ERR_EOF_INT_ENA			24u
	/*  */
#define SLC__0INT_ENA_CMD_DTC_INT_ENA				25u
	/*  */
#define SLC__0INT_ENA_SLC0_RX_QUICK_EOF_INT_ENA			26u

	/* 0x10:  */
	uint32_t volatile _0INT_CLR;
	/*  */
#define SLC__0INT_CLR_FRHOST_BIT0_INT_CLR			0u
	/*  */
#define SLC__0INT_CLR_FRHOST_BIT1_INT_CLR			1u
	/*  */
#define SLC__0INT_CLR_FRHOST_BIT2_INT_CLR			2u
	/*  */
#define SLC__0INT_CLR_FRHOST_BIT3_INT_CLR			3u
	/*  */
#define SLC__0INT_CLR_FRHOST_BIT4_INT_CLR			4u
	/*  */
#define SLC__0INT_CLR_FRHOST_BIT5_INT_CLR			5u
	/*  */
#define SLC__0INT_CLR_FRHOST_BIT6_INT_CLR			6u
	/*  */
#define SLC__0INT_CLR_FRHOST_BIT7_INT_CLR			7u
	/*  */
#define SLC__0INT_CLR_SLC0_RX_START_INT_CLR			8u
	/*  */
#define SLC__0INT_CLR_SLC0_TX_START_INT_CLR			9u
	/*  */
#define SLC__0INT_CLR_SLC0_RX_UDF_INT_CLR			10u
	/*  */
#define SLC__0INT_CLR_SLC0_TX_OVF_INT_CLR			11u
	/*  */
#define SLC__0INT_CLR_SLC0_TOKEN0_1TO0_INT_CLR			12u
	/*  */
#define SLC__0INT_CLR_SLC0_TOKEN1_1TO0_INT_CLR			13u
	/*  */
#define SLC__0INT_CLR_SLC0_TX_DONE_INT_CLR			14u
	/*  */
#define SLC__0INT_CLR_SLC0_TX_SUC_EOF_INT_CLR			15u
	/*  */
#define SLC__0INT_CLR_SLC0_RX_DONE_INT_CLR			16u
	/*  */
#define SLC__0INT_CLR_SLC0_RX_EOF_INT_CLR			17u
	/*  */
#define SLC__0INT_CLR_SLC0_TOHOST_INT_CLR			18u
	/*  */
#define SLC__0INT_CLR_SLC0_TX_DSCR_ERR_INT_CLR			19u
	/*  */
#define SLC__0INT_CLR_SLC0_RX_DSCR_ERR_INT_CLR			20u
	/*  */
#define SLC__0INT_CLR_SLC0_TX_DSCR_EMPTY_INT_CLR		21u
	/*  */
#define SLC__0INT_CLR_SLC0_HOST_RD_ACK_INT_CLR			22u
	/*  */
#define SLC__0INT_CLR_SLC0_WR_RETRY_DONE_INT_CLR		23u
	/*  */
#define SLC__0INT_CLR_SLC0_TX_ERR_EOF_INT_CLR			24u
	/*  */
#define SLC__0INT_CLR_CMD_DTC_INT_CLR				25u
	/*  */
#define SLC__0INT_CLR_SLC0_RX_QUICK_EOF_INT_CLR			26u

	/* 0x14:  */
	uint32_t volatile _1INT_RAW;
	/*  */
#define SLC__1INT_RAW_FRHOST_BIT8_INT_RAW			0u
	/*  */
#define SLC__1INT_RAW_FRHOST_BIT9_INT_RAW			1u
	/*  */
#define SLC__1INT_RAW_FRHOST_BIT10_INT_RAW			2u
	/*  */
#define SLC__1INT_RAW_FRHOST_BIT11_INT_RAW			3u
	/*  */
#define SLC__1INT_RAW_FRHOST_BIT12_INT_RAW			4u
	/*  */
#define SLC__1INT_RAW_FRHOST_BIT13_INT_RAW			5u
	/*  */
#define SLC__1INT_RAW_FRHOST_BIT14_INT_RAW			6u
	/*  */
#define SLC__1INT_RAW_FRHOST_BIT15_INT_RAW			7u
	/*  */
#define SLC__1INT_RAW_SLC1_RX_START_INT_RAW			8u
	/*  */
#define SLC__1INT_RAW_SLC1_TX_START_INT_RAW			9u
	/*  */
#define SLC__1INT_RAW_SLC1_RX_UDF_INT_RAW			10u
	/*  */
#define SLC__1INT_RAW_SLC1_TX_OVF_INT_RAW			11u
	/*  */
#define SLC__1INT_RAW_SLC1_TOKEN0_1TO0_INT_RAW			12u
	/*  */
#define SLC__1INT_RAW_SLC1_TOKEN1_1TO0_INT_RAW			13u
	/*  */
#define SLC__1INT_RAW_SLC1_TX_DONE_INT_RAW			14u
	/*  */
#define SLC__1INT_RAW_SLC1_TX_SUC_EOF_INT_RAW			15u
	/*  */
#define SLC__1INT_RAW_SLC1_RX_DONE_INT_RAW			16u
	/*  */
#define SLC__1INT_RAW_SLC1_RX_EOF_INT_RAW			17u
	/*  */
#define SLC__1INT_RAW_SLC1_TOHOST_INT_RAW			18u
	/*  */
#define SLC__1INT_RAW_SLC1_TX_DSCR_ERR_INT_RAW			19u
	/*  */
#define SLC__1INT_RAW_SLC1_RX_DSCR_ERR_INT_RAW			20u
	/*  */
#define SLC__1INT_RAW_SLC1_TX_DSCR_EMPTY_INT_RAW		21u
	/*  */
#define SLC__1INT_RAW_SLC1_HOST_RD_ACK_INT_RAW			22u
	/*  */
#define SLC__1INT_RAW_SLC1_WR_RETRY_DONE_INT_RAW		23u
	/*  */
#define SLC__1INT_RAW_SLC1_TX_ERR_EOF_INT_RAW			24u

	/* 0x18:  */
	uint32_t volatile _1INT_ST;
	/*  */
#define SLC__1INT_ST_FRHOST_BIT8_INT_ST				0u
	/*  */
#define SLC__1INT_ST_FRHOST_BIT9_INT_ST				1u
	/*  */
#define SLC__1INT_ST_FRHOST_BIT10_INT_ST			2u
	/*  */
#define SLC__1INT_ST_FRHOST_BIT11_INT_ST			3u
	/*  */
#define SLC__1INT_ST_FRHOST_BIT12_INT_ST			4u
	/*  */
#define SLC__1INT_ST_FRHOST_BIT13_INT_ST			5u
	/*  */
#define SLC__1INT_ST_FRHOST_BIT14_INT_ST			6u
	/*  */
#define SLC__1INT_ST_FRHOST_BIT15_INT_ST			7u
	/*  */
#define SLC__1INT_ST_SLC1_RX_START_INT_ST			8u
	/*  */
#define SLC__1INT_ST_SLC1_TX_START_INT_ST			9u
	/*  */
#define SLC__1INT_ST_SLC1_RX_UDF_INT_ST				10u
	/*  */
#define SLC__1INT_ST_SLC1_TX_OVF_INT_ST				11u
	/*  */
#define SLC__1INT_ST_SLC1_TOKEN0_1TO0_INT_ST			12u
	/*  */
#define SLC__1INT_ST_SLC1_TOKEN1_1TO0_INT_ST			13u
	/*  */
#define SLC__1INT_ST_SLC1_TX_DONE_INT_ST			14u
	/*  */
#define SLC__1INT_ST_SLC1_TX_SUC_EOF_INT_ST			15u
	/*  */
#define SLC__1INT_ST_SLC1_RX_DONE_INT_ST			16u
	/*  */
#define SLC__1INT_ST_SLC1_RX_EOF_INT_ST				17u
	/*  */
#define SLC__1INT_ST_SLC1_TOHOST_INT_ST				18u
	/*  */
#define SLC__1INT_ST_SLC1_TX_DSCR_ERR_INT_ST			19u
	/*  */
#define SLC__1INT_ST_SLC1_RX_DSCR_ERR_INT_ST			20u
	/*  */
#define SLC__1INT_ST_SLC1_TX_DSCR_EMPTY_INT_ST			21u
	/*  */
#define SLC__1INT_ST_SLC1_HOST_RD_ACK_INT_ST			22u
	/*  */
#define SLC__1INT_ST_SLC1_WR_RETRY_DONE_INT_ST			23u
	/*  */
#define SLC__1INT_ST_SLC1_TX_ERR_EOF_INT_ST			24u

	/* 0x1C:  */
	uint32_t volatile _1INT_ENA;
	/*  */
#define SLC__1INT_ENA_FRHOST_BIT8_INT_ENA			0u
	/*  */
#define SLC__1INT_ENA_FRHOST_BIT9_INT_ENA			1u
	/*  */
#define SLC__1INT_ENA_FRHOST_BIT10_INT_ENA			2u
	/*  */
#define SLC__1INT_ENA_FRHOST_BIT11_INT_ENA			3u
	/*  */
#define SLC__1INT_ENA_FRHOST_BIT12_INT_ENA			4u
	/*  */
#define SLC__1INT_ENA_FRHOST_BIT13_INT_ENA			5u
	/*  */
#define SLC__1INT_ENA_FRHOST_BIT14_INT_ENA			6u
	/*  */
#define SLC__1INT_ENA_FRHOST_BIT15_INT_ENA			7u
	/*  */
#define SLC__1INT_ENA_SLC1_RX_START_INT_ENA			8u
	/*  */
#define SLC__1INT_ENA_SLC1_TX_START_INT_ENA			9u
	/*  */
#define SLC__1INT_ENA_SLC1_RX_UDF_INT_ENA			10u
	/*  */
#define SLC__1INT_ENA_SLC1_TX_OVF_INT_ENA			11u
	/*  */
#define SLC__1INT_ENA_SLC1_TOKEN0_1TO0_INT_ENA			12u
	/*  */
#define SLC__1INT_ENA_SLC1_TOKEN1_1TO0_INT_ENA			13u
	/*  */
#define SLC__1INT_ENA_SLC1_TX_DONE_INT_ENA			14u
	/*  */
#define SLC__1INT_ENA_SLC1_TX_SUC_EOF_INT_ENA			15u
	/*  */
#define SLC__1INT_ENA_SLC1_RX_DONE_INT_ENA			16u
	/*  */
#define SLC__1INT_ENA_SLC1_RX_EOF_INT_ENA			17u
	/*  */
#define SLC__1INT_ENA_SLC1_TOHOST_INT_ENA			18u
	/*  */
#define SLC__1INT_ENA_SLC1_TX_DSCR_ERR_INT_ENA			19u
	/*  */
#define SLC__1INT_ENA_SLC1_RX_DSCR_ERR_INT_ENA			20u
	/*  */
#define SLC__1INT_ENA_SLC1_TX_DSCR_EMPTY_INT_ENA		21u
	/*  */
#define SLC__1INT_ENA_SLC1_HOST_RD_ACK_INT_ENA			22u
	/*  */
#define SLC__1INT_ENA_SLC1_WR_RETRY_DONE_INT_ENA		23u
	/*  */
#define SLC__1INT_ENA_SLC1_TX_ERR_EOF_INT_ENA			24u

	/* 0x20:  */
	uint32_t volatile _1INT_CLR;
	/*  */
#define SLC__1INT_CLR_FRHOST_BIT8_INT_CLR			0u
	/*  */
#define SLC__1INT_CLR_FRHOST_BIT9_INT_CLR			1u
	/*  */
#define SLC__1INT_CLR_FRHOST_BIT10_INT_CLR			2u
	/*  */
#define SLC__1INT_CLR_FRHOST_BIT11_INT_CLR			3u
	/*  */
#define SLC__1INT_CLR_FRHOST_BIT12_INT_CLR			4u
	/*  */
#define SLC__1INT_CLR_FRHOST_BIT13_INT_CLR			5u
	/*  */
#define SLC__1INT_CLR_FRHOST_BIT14_INT_CLR			6u
	/*  */
#define SLC__1INT_CLR_FRHOST_BIT15_INT_CLR			7u
	/*  */
#define SLC__1INT_CLR_SLC1_RX_START_INT_CLR			8u
	/*  */
#define SLC__1INT_CLR_SLC1_TX_START_INT_CLR			9u
	/*  */
#define SLC__1INT_CLR_SLC1_RX_UDF_INT_CLR			10u
	/*  */
#define SLC__1INT_CLR_SLC1_TX_OVF_INT_CLR			11u
	/*  */
#define SLC__1INT_CLR_SLC1_TOKEN0_1TO0_INT_CLR			12u
	/*  */
#define SLC__1INT_CLR_SLC1_TOKEN1_1TO0_INT_CLR			13u
	/*  */
#define SLC__1INT_CLR_SLC1_TX_DONE_INT_CLR			14u
	/*  */
#define SLC__1INT_CLR_SLC1_TX_SUC_EOF_INT_CLR			15u
	/*  */
#define SLC__1INT_CLR_SLC1_RX_DONE_INT_CLR			16u
	/*  */
#define SLC__1INT_CLR_SLC1_RX_EOF_INT_CLR			17u
	/*  */
#define SLC__1INT_CLR_SLC1_TOHOST_INT_CLR			18u
	/*  */
#define SLC__1INT_CLR_SLC1_TX_DSCR_ERR_INT_CLR			19u
	/*  */
#define SLC__1INT_CLR_SLC1_RX_DSCR_ERR_INT_CLR			20u
	/*  */
#define SLC__1INT_CLR_SLC1_TX_DSCR_EMPTY_INT_CLR		21u
	/*  */
#define SLC__1INT_CLR_SLC1_HOST_RD_ACK_INT_CLR			22u
	/*  */
#define SLC__1INT_CLR_SLC1_WR_RETRY_DONE_INT_CLR		23u
	/*  */
#define SLC__1INT_CLR_SLC1_TX_ERR_EOF_INT_CLR			24u

	/* 0x24:  */
	uint32_t volatile RX_STATUS;
	/*  */
#define SLC_RX_STATUS_SLC0_RX_FULL				0u
	/*  */
#define SLC_RX_STATUS_SLC0_RX_EMPTY				1u
	/*  */
#define SLC_RX_STATUS_SLC1_RX_FULL				16u
	/*  */
#define SLC_RX_STATUS_SLC1_RX_EMPTY				17u

	/* 0x28:  */
	uint32_t volatile _0RXFIFO_PUSH;
	/*  */
#define SLC__0RXFIFO_PUSH_SLC0_RXFIFO_WDATA_Msb			0u
#define SLC__0RXFIFO_PUSH_SLC0_RXFIFO_WDATA_Lsb			8u
	/*  */
#define SLC__0RXFIFO_PUSH_SLC0_RXFIFO_PUSH			16u

	/* 0x2C:  */
	uint32_t volatile _1RXFIFO_PUSH;
	/*  */
#define SLC__1RXFIFO_PUSH_SLC1_RXFIFO_WDATA_Msb			0u
#define SLC__1RXFIFO_PUSH_SLC1_RXFIFO_WDATA_Lsb			8u
	/*  */
#define SLC__1RXFIFO_PUSH_SLC1_RXFIFO_PUSH			16u

	/* 0x30:  */
	uint32_t volatile TX_STATUS;
	/*  */
#define SLC_TX_STATUS_SLC0_TX_FULL				0u
	/*  */
#define SLC_TX_STATUS_SLC0_TX_EMPTY				1u
	/*  */
#define SLC_TX_STATUS_SLC1_TX_FULL				16u
	/*  */
#define SLC_TX_STATUS_SLC1_TX_EMPTY				17u

	/* 0x34:  */
	uint32_t volatile _0TXFIFO_POP;
	/*  */
#define SLC__0TXFIFO_POP_SLC0_TXFIFO_RDATA_Msb			0u
#define SLC__0TXFIFO_POP_SLC0_TXFIFO_RDATA_Lsb			10u
	/*  */
#define SLC__0TXFIFO_POP_SLC0_TXFIFO_POP			16u

	/* 0x38:  */
	uint32_t volatile _1TXFIFO_POP;
	/*  */
#define SLC__1TXFIFO_POP_SLC1_TXFIFO_RDATA_Msb			0u
#define SLC__1TXFIFO_POP_SLC1_TXFIFO_RDATA_Lsb			10u
	/*  */
#define SLC__1TXFIFO_POP_SLC1_TXFIFO_POP			16u

	/* 0x3C:  */
	uint32_t volatile _0RX_LINK;
	/*  */
#define SLC__0RX_LINK_SLC0_RXLINK_ADDR_Msb			0u
#define SLC__0RX_LINK_SLC0_RXLINK_ADDR_Lsb			19u
	/*  */
#define SLC__0RX_LINK_SLC0_RXLINK_STOP				28u
	/*  */
#define SLC__0RX_LINK_SLC0_RXLINK_START				29u
	/*  */
#define SLC__0RX_LINK_SLC0_RXLINK_RESTART			30u
	/*  */
#define SLC__0RX_LINK_SLC0_RXLINK_PARK				31u

	/* 0x40:  */
	uint32_t volatile _0TX_LINK;
	/*  */
#define SLC__0TX_LINK_SLC0_TXLINK_ADDR_Msb			0u
#define SLC__0TX_LINK_SLC0_TXLINK_ADDR_Lsb			19u
	/*  */
#define SLC__0TX_LINK_SLC0_TXLINK_STOP				28u
	/*  */
#define SLC__0TX_LINK_SLC0_TXLINK_START				29u
	/*  */
#define SLC__0TX_LINK_SLC0_TXLINK_RESTART			30u
	/*  */
#define SLC__0TX_LINK_SLC0_TXLINK_PARK				31u

	/* 0x44:  */
	uint32_t volatile _1RX_LINK;
	/*  */
#define SLC__1RX_LINK_SLC1_RXLINK_ADDR_Msb			0u
#define SLC__1RX_LINK_SLC1_RXLINK_ADDR_Lsb			19u
	/*  */
#define SLC__1RX_LINK_SLC1_BT_PACKET				20u
	/*  */
#define SLC__1RX_LINK_SLC1_RXLINK_STOP				28u
	/*  */
#define SLC__1RX_LINK_SLC1_RXLINK_START				29u
	/*  */
#define SLC__1RX_LINK_SLC1_RXLINK_RESTART			30u
	/*  */
#define SLC__1RX_LINK_SLC1_RXLINK_PARK				31u

	/* 0x48:  */
	uint32_t volatile _1TX_LINK;
	/*  */
#define SLC__1TX_LINK_SLC1_TXLINK_ADDR_Msb			0u
#define SLC__1TX_LINK_SLC1_TXLINK_ADDR_Lsb			19u
	/*  */
#define SLC__1TX_LINK_SLC1_TXLINK_STOP				28u
	/*  */
#define SLC__1TX_LINK_SLC1_TXLINK_START				29u
	/*  */
#define SLC__1TX_LINK_SLC1_TXLINK_RESTART			30u
	/*  */
#define SLC__1TX_LINK_SLC1_TXLINK_PARK				31u

	/* 0x4C:  */
	uint32_t volatile INTVEC_TOHOST;
	/*  */
#define SLC_INTVEC_TOHOST_SLC0_TOHOST_INTVEC_Msb		0u
#define SLC_INTVEC_TOHOST_SLC0_TOHOST_INTVEC_Lsb		7u
	/*  */
#define SLC_INTVEC_TOHOST_SLC1_TOHOST_INTVEC_Msb		16u
#define SLC_INTVEC_TOHOST_SLC1_TOHOST_INTVEC_Lsb		23u

	/* 0x50:  */
	uint32_t volatile _0TOKEN0;
	/*  */
#define SLC__0TOKEN0_SLC0_TOKEN0_WDATA_Msb			0u
#define SLC__0TOKEN0_SLC0_TOKEN0_WDATA_Lsb			11u
	/*  */
#define SLC__0TOKEN0_SLC0_TOKEN0_WR				12u
	/*  */
#define SLC__0TOKEN0_SLC0_TOKEN0_INC				13u
	/*  */
#define SLC__0TOKEN0_SLC0_TOKEN0_INC_MORE			14u
	/*  */
#define SLC__0TOKEN0_SLC0_TOKEN0_Msb				16u
#define SLC__0TOKEN0_SLC0_TOKEN0_Lsb				27u

	/* 0x54:  */
	uint32_t volatile _0TOKEN1;
	/*  */
#define SLC__0TOKEN1_SLC0_TOKEN1_WDATA_Msb			0u
#define SLC__0TOKEN1_SLC0_TOKEN1_WDATA_Lsb			11u
	/*  */
#define SLC__0TOKEN1_SLC0_TOKEN1_WR				12u
	/*  */
#define SLC__0TOKEN1_SLC0_TOKEN1_INC				13u
	/*  */
#define SLC__0TOKEN1_SLC0_TOKEN1_INC_MORE			14u
	/*  */
#define SLC__0TOKEN1_SLC0_TOKEN1_Msb				16u
#define SLC__0TOKEN1_SLC0_TOKEN1_Lsb				27u

	/* 0x58:  */
	uint32_t volatile _1TOKEN0;
	/*  */
#define SLC__1TOKEN0_SLC1_TOKEN0_WDATA_Msb			0u
#define SLC__1TOKEN0_SLC1_TOKEN0_WDATA_Lsb			11u
	/*  */
#define SLC__1TOKEN0_SLC1_TOKEN0_WR				12u
	/*  */
#define SLC__1TOKEN0_SLC1_TOKEN0_INC				13u
	/*  */
#define SLC__1TOKEN0_SLC1_TOKEN0_INC_MORE			14u
	/*  */
#define SLC__1TOKEN0_SLC1_TOKEN0_Msb				16u
#define SLC__1TOKEN0_SLC1_TOKEN0_Lsb				27u

	/* 0x5C:  */
	uint32_t volatile _1TOKEN1;
	/*  */
#define SLC__1TOKEN1_SLC1_TOKEN1_WDATA_Msb			0u
#define SLC__1TOKEN1_SLC1_TOKEN1_WDATA_Lsb			11u
	/*  */
#define SLC__1TOKEN1_SLC1_TOKEN1_WR				12u
	/*  */
#define SLC__1TOKEN1_SLC1_TOKEN1_INC				13u
	/*  */
#define SLC__1TOKEN1_SLC1_TOKEN1_INC_MORE			14u
	/*  */
#define SLC__1TOKEN1_SLC1_TOKEN1_Msb				16u
#define SLC__1TOKEN1_SLC1_TOKEN1_Lsb				27u

	/* 0x60:  */
	uint32_t volatile CONF1;
	/*  */
#define SLC_CONF1_SLC0_CHECK_OWNER				0u
	/*  */
#define SLC_CONF1_SLC0_TX_CHECK_SUM_EN				1u
	/*  */
#define SLC_CONF1_SLC0_RX_CHECK_SUM_EN				2u
	/*  */
#define SLC_CONF1_CMD_HOLD_EN					3u
	/*  */
#define SLC_CONF1_SLC0_LEN_AUTO_CLR				4u
	/*  */
#define SLC_CONF1_SLC0_TX_STITCH_EN				5u
	/*  */
#define SLC_CONF1_SLC0_RX_STITCH_EN				6u
	/*  */
#define SLC_CONF1_SLC1_CHECK_OWNER				16u
	/*  */
#define SLC_CONF1_SLC1_TX_CHECK_SUM_EN				17u
	/*  */
#define SLC_CONF1_SLC1_RX_CHECK_SUM_EN				18u
	/*  */
#define SLC_CONF1_HOST_INT_LEVEL_SEL				19u
	/*  */
#define SLC_CONF1_SLC1_TX_STITCH_EN				20u
	/*  */
#define SLC_CONF1_SLC1_RX_STITCH_EN				21u
	/*  */
#define SLC_CONF1_CLK_EN					22u

	/* 0x64:  */
	uint32_t volatile _0_STATE0;
	/*  */
#define SLC__0_STATE0_SLC0_STATE0_Msb				0u
#define SLC__0_STATE0_SLC0_STATE0_Lsb				31u

	/* 0x68:  */
	uint32_t volatile _0_STATE1;
	/*  */
#define SLC__0_STATE1_SLC0_STATE1_Msb				0u
#define SLC__0_STATE1_SLC0_STATE1_Lsb				31u

	/* 0x6C:  */
	uint32_t volatile _1_STATE0;
	/*  */
#define SLC__1_STATE0_SLC1_STATE0_Msb				0u
#define SLC__1_STATE0_SLC1_STATE0_Lsb				31u

	/* 0x70:  */
	uint32_t volatile _1_STATE1;
	/*  */
#define SLC__1_STATE1_SLC1_STATE1_Msb				0u
#define SLC__1_STATE1_SLC1_STATE1_Lsb				31u

	/* 0x74:  */
	uint32_t volatile BRIDGE_CONF;
	/*  */
#define SLC_BRIDGE_CONF_TXEOF_ENA_Msb				0u
#define SLC_BRIDGE_CONF_TXEOF_ENA_Lsb				5u
	/*  */
#define SLC_BRIDGE_CONF_FIFO_MAP_ENA_Msb			8u
#define SLC_BRIDGE_CONF_FIFO_MAP_ENA_Lsb			11u
	/*  */
#define SLC_BRIDGE_CONF_SLC0_TX_DUMMY_MODE			12u
	/*  */
#define SLC_BRIDGE_CONF_HDA_MAP_128K				13u
	/*  */
#define SLC_BRIDGE_CONF_SLC1_TX_DUMMY_MODE			14u
	/*  */
#define SLC_BRIDGE_CONF_TX_PUSH_IDLE_NUM_Msb			16u
#define SLC_BRIDGE_CONF_TX_PUSH_IDLE_NUM_Lsb			31u

	/* 0x78:  */
	uint32_t volatile _0_TO_EOF_DES_ADDR;
	/*  */
#define SLC__0_TO_EOF_DES_ADDR_SLC0_TO_EOF_DES_ADDR_Msb		0u
#define SLC__0_TO_EOF_DES_ADDR_SLC0_TO_EOF_DES_ADDR_Lsb		31u

	/* 0x7C:  */
	uint32_t volatile _0_TX_EOF_DES_ADDR;
	/*  */
#define SLC__0_TX_EOF_DES_ADDR_SLC0_TX_SUC_EOF_DES_ADDR_Msb	0u
#define SLC__0_TX_EOF_DES_ADDR_SLC0_TX_SUC_EOF_DES_ADDR_Lsb	31u

	/* 0x80:  */
	uint32_t volatile _0_TO_EOF_BFR_DES_ADDR;
	/*  */
#define SLC__0_TO_EOF_BFR_DES_ADDR_SLC0_TO_EOF_BFR_DES_ADDR_Msb	0u
#define SLC__0_TO_EOF_BFR_DES_ADDR_SLC0_TO_EOF_BFR_DES_ADDR_Lsb	31u

	/* 0x84:  */
	uint32_t volatile _1_TO_EOF_DES_ADDR;
	/*  */
#define SLC__1_TO_EOF_DES_ADDR_SLC1_TO_EOF_DES_ADDR_Msb		0u
#define SLC__1_TO_EOF_DES_ADDR_SLC1_TO_EOF_DES_ADDR_Lsb		31u

	/* 0x88:  */
	uint32_t volatile _1_TX_EOF_DES_ADDR;
	/*  */
#define SLC__1_TX_EOF_DES_ADDR_SLC1_TX_SUC_EOF_DES_ADDR_Msb	0u
#define SLC__1_TX_EOF_DES_ADDR_SLC1_TX_SUC_EOF_DES_ADDR_Lsb	31u

	/* 0x8C:  */
	uint32_t volatile _1_TO_EOF_BFR_DES_ADDR;
	/*  */
#define SLC__1_TO_EOF_BFR_DES_ADDR_SLC1_TO_EOF_BFR_DES_ADDR_Msb	0u
#define SLC__1_TO_EOF_BFR_DES_ADDR_SLC1_TO_EOF_BFR_DES_ADDR_Lsb	31u

	/* 0x90:  */
	uint32_t volatile AHB_TEST;
	/*  */
#define SLC_AHB_TEST_AHB_TESTMODE_Msb				0u
#define SLC_AHB_TEST_AHB_TESTMODE_Lsb				2u
	/*  */
#define SLC_AHB_TEST_AHB_TESTADDR_Msb				4u
#define SLC_AHB_TEST_AHB_TESTADDR_Lsb				5u

	/* 0x94:  */
	uint32_t volatile SDIO_ST;
	/*  */
#define SLC_SDIO_ST_CMD_ST_Msb					0u
#define SLC_SDIO_ST_CMD_ST_Lsb					2u
	/*  */
#define SLC_SDIO_ST_FUNC_ST_Msb					4u
#define SLC_SDIO_ST_FUNC_ST_Lsb					7u
	/*  */
#define SLC_SDIO_ST_SDIO_WAKEUP					8u
	/*  */
#define SLC_SDIO_ST_BUS_ST_Msb					12u
#define SLC_SDIO_ST_BUS_ST_Lsb					14u
	/*  */
#define SLC_SDIO_ST_FUNC1_ACC_STATE_Msb				16u
#define SLC_SDIO_ST_FUNC1_ACC_STATE_Lsb				20u
	/*  */
#define SLC_SDIO_ST_FUNC2_ACC_STATE_Msb				24u
#define SLC_SDIO_ST_FUNC2_ACC_STATE_Lsb				28u

	/* 0x98:  */
	uint32_t volatile RX_DSCR_CONF;
	/*  */
#define SLC_RX_DSCR_CONF_SLC0_TOKEN_NO_REPLACE			0u
	/*  */
#define SLC_RX_DSCR_CONF_SLC0_INFOR_NO_REPLACE			1u
	/*  */
#define SLC_RX_DSCR_CONF_SLC0_RX_FILL_MODE			2u
	/*  */
#define SLC_RX_DSCR_CONF_SLC0_RX_EOF_MODE			3u
	/*  */
#define SLC_RX_DSCR_CONF_SLC0_RX_FILL_EN			4u
	/*  */
#define SLC_RX_DSCR_CONF_SLC0_RD_RETRY_THRESHOLD_Msb		5u
#define SLC_RX_DSCR_CONF_SLC0_RD_RETRY_THRESHOLD_Lsb		15u
	/*  */
#define SLC_RX_DSCR_CONF_SLC1_TOKEN_NO_REPLACE			16u
	/*  */
#define SLC_RX_DSCR_CONF_SLC1_INFOR_NO_REPLACE			17u
	/*  */
#define SLC_RX_DSCR_CONF_SLC1_RX_FILL_MODE			18u
	/*  */
#define SLC_RX_DSCR_CONF_SLC1_RX_EOF_MODE			19u
	/*  */
#define SLC_RX_DSCR_CONF_SLC1_RX_FILL_EN			20u
	/*  */
#define SLC_RX_DSCR_CONF_SLC1_RD_RETRY_THRESHOLD_Msb		21u
#define SLC_RX_DSCR_CONF_SLC1_RD_RETRY_THRESHOLD_Lsb		31u

	/* 0x9C:  */
	uint32_t volatile _0_TXLINK_DSCR;
	/*  */
#define SLC__0_TXLINK_DSCR_SLC0_TXLINK_DSCR_Msb			0u
#define SLC__0_TXLINK_DSCR_SLC0_TXLINK_DSCR_Lsb			31u

	/* 0xA0:  */
	uint32_t volatile _0_TXLINK_DSCR_BF0;
	/*  */
#define SLC__0_TXLINK_DSCR_BF0_SLC0_TXLINK_DSCR_BF0_Msb		0u
#define SLC__0_TXLINK_DSCR_BF0_SLC0_TXLINK_DSCR_BF0_Lsb		31u

	/* 0xA4:  */
	uint32_t volatile _0_TXLINK_DSCR_BF1;
	/*  */
#define SLC__0_TXLINK_DSCR_BF1_SLC0_TXLINK_DSCR_BF1_Msb		0u
#define SLC__0_TXLINK_DSCR_BF1_SLC0_TXLINK_DSCR_BF1_Lsb		31u

	/* 0xA8:  */
	uint32_t volatile _0_RXLINK_DSCR;
	/*  */
#define SLC__0_RXLINK_DSCR_SLC0_RXLINK_DSCR_Msb			0u
#define SLC__0_RXLINK_DSCR_SLC0_RXLINK_DSCR_Lsb			31u

	/* 0xAC:  */
	uint32_t volatile _0_RXLINK_DSCR_BF0;
	/*  */
#define SLC__0_RXLINK_DSCR_BF0_SLC0_RXLINK_DSCR_BF0_Msb		0u
#define SLC__0_RXLINK_DSCR_BF0_SLC0_RXLINK_DSCR_BF0_Lsb		31u

	/* 0xB0:  */
	uint32_t volatile _0_RXLINK_DSCR_BF1;
	/*  */
#define SLC__0_RXLINK_DSCR_BF1_SLC0_RXLINK_DSCR_BF1_Msb		0u
#define SLC__0_RXLINK_DSCR_BF1_SLC0_RXLINK_DSCR_BF1_Lsb		31u

	/* 0xB4:  */
	uint32_t volatile _1_TXLINK_DSCR;
	/*  */
#define SLC__1_TXLINK_DSCR_SLC1_TXLINK_DSCR_Msb			0u
#define SLC__1_TXLINK_DSCR_SLC1_TXLINK_DSCR_Lsb			31u

	/* 0xB8:  */
	uint32_t volatile _1_TXLINK_DSCR_BF0;
	/*  */
#define SLC__1_TXLINK_DSCR_BF0_SLC1_TXLINK_DSCR_BF0_Msb		0u
#define SLC__1_TXLINK_DSCR_BF0_SLC1_TXLINK_DSCR_BF0_Lsb		31u

	/* 0xBC:  */
	uint32_t volatile _1_TXLINK_DSCR_BF1;
	/*  */
#define SLC__1_TXLINK_DSCR_BF1_SLC1_TXLINK_DSCR_BF1_Msb		0u
#define SLC__1_TXLINK_DSCR_BF1_SLC1_TXLINK_DSCR_BF1_Lsb		31u

	/* 0xC0:  */
	uint32_t volatile _1_RXLINK_DSCR;
	/*  */
#define SLC__1_RXLINK_DSCR_SLC1_RXLINK_DSCR_Msb			0u
#define SLC__1_RXLINK_DSCR_SLC1_RXLINK_DSCR_Lsb			31u

	/* 0xC4:  */
	uint32_t volatile _1_RXLINK_DSCR_BF0;
	/*  */
#define SLC__1_RXLINK_DSCR_BF0_SLC1_RXLINK_DSCR_BF0_Msb		0u
#define SLC__1_RXLINK_DSCR_BF0_SLC1_RXLINK_DSCR_BF0_Lsb		31u

	/* 0xC8:  */
	uint32_t volatile _1_RXLINK_DSCR_BF1;
	/*  */
#define SLC__1_RXLINK_DSCR_BF1_SLC1_RXLINK_DSCR_BF1_Msb		0u
#define SLC__1_RXLINK_DSCR_BF1_SLC1_RXLINK_DSCR_BF1_Lsb		31u

	/* 0xCC:  */
	uint32_t volatile _0_TX_ERREOF_DES_ADDR;
	/*  */
#define SLC__0_TX_ERREOF_DES_ADDR_SLC0_TX_ERR_EOF_DES_ADDR_Msb	0u
#define SLC__0_TX_ERREOF_DES_ADDR_SLC0_TX_ERR_EOF_DES_ADDR_Lsb	31u

	/* 0xD0:  */
	uint32_t volatile _1_TX_ERREOF_DES_ADDR;
	/*  */
#define SLC__1_TX_ERREOF_DES_ADDR_SLC1_TX_ERR_EOF_DES_ADDR_Msb	0u
#define SLC__1_TX_ERREOF_DES_ADDR_SLC1_TX_ERR_EOF_DES_ADDR_Lsb	31u

	/* 0xD4:  */
	uint32_t volatile TOKEN_LAT;
	/*  */
#define SLC_TOKEN_LAT_SLC0_TOKEN_Msb				0u
#define SLC_TOKEN_LAT_SLC0_TOKEN_Lsb				11u
	/*  */
#define SLC_TOKEN_LAT_SLC1_TOKEN_Msb				16u
#define SLC_TOKEN_LAT_SLC1_TOKEN_Lsb				27u

	/* 0xD8:  */
	uint32_t volatile TX_DSCR_CONF;
	/*  */
#define SLC_TX_DSCR_CONF_WR_RETRY_THRESHOLD_Msb			0u
#define SLC_TX_DSCR_CONF_WR_RETRY_THRESHOLD_Lsb			10u

	/* 0xDC:  */
	uint32_t volatile CMD_INFOR0;
	/*  */
#define SLC_CMD_INFOR0_CMD_CONTENT0_Msb				0u
#define SLC_CMD_INFOR0_CMD_CONTENT0_Lsb				31u

	/* 0xE0:  */
	uint32_t volatile CMD_INFOR1;
	/*  */
#define SLC_CMD_INFOR1_CMD_CONTENT1_Msb				0u
#define SLC_CMD_INFOR1_CMD_CONTENT1_Lsb				31u

	/* 0xE4:  */
	uint32_t volatile _0_LEN_CONF;
	/*  */
#define SLC__0_LEN_CONF_SLC0_LEN_WDATA_Msb			0u
#define SLC__0_LEN_CONF_SLC0_LEN_WDATA_Lsb			19u
	/*  */
#define SLC__0_LEN_CONF_SLC0_LEN_WR				20u
	/*  */
#define SLC__0_LEN_CONF_SLC0_LEN_INC				21u
	/*  */
#define SLC__0_LEN_CONF_SLC0_LEN_INC_MORE			22u
	/*  */
#define SLC__0_LEN_CONF_SLC0_RX_PACKET_LOAD_EN			23u
	/*  */
#define SLC__0_LEN_CONF_SLC0_TX_PACKET_LOAD_EN			24u
	/*  */
#define SLC__0_LEN_CONF_SLC0_RX_GET_USED_DSCR			25u
	/*  */
#define SLC__0_LEN_CONF_SLC0_TX_GET_USED_DSCR			26u
	/*  */
#define SLC__0_LEN_CONF_SLC0_RX_NEW_PKT_IND			27u
	/*  */
#define SLC__0_LEN_CONF_SLC0_TX_NEW_PKT_IND			28u

	/* 0xE8:  */
	uint32_t volatile _0_LENGTH;
	/*  */
#define SLC__0_LENGTH_SLC0_LEN_Msb				0u
#define SLC__0_LENGTH_SLC0_LEN_Lsb				19u

	/* 0xEC:  */
	uint32_t volatile _0_TXPKT_H_DSCR;
	/*  */
#define SLC__0_TXPKT_H_DSCR_SLC0_TX_PKT_H_DSCR_ADDR_Msb		0u
#define SLC__0_TXPKT_H_DSCR_SLC0_TX_PKT_H_DSCR_ADDR_Lsb		31u

	/* 0xF0:  */
	uint32_t volatile _0_TXPKT_E_DSCR;
	/*  */
#define SLC__0_TXPKT_E_DSCR_SLC0_TX_PKT_E_DSCR_ADDR_Msb		0u
#define SLC__0_TXPKT_E_DSCR_SLC0_TX_PKT_E_DSCR_ADDR_Lsb		31u

	/* 0xF4:  */
	uint32_t volatile _0_RXPKT_H_DSCR;
	/*  */
#define SLC__0_RXPKT_H_DSCR_SLC0_RX_PKT_H_DSCR_ADDR_Msb		0u
#define SLC__0_RXPKT_H_DSCR_SLC0_RX_PKT_H_DSCR_ADDR_Lsb		31u

	/* 0xF8:  */
	uint32_t volatile _0_RXPKT_E_DSCR;
	/*  */
#define SLC__0_RXPKT_E_DSCR_SLC0_RX_PKT_E_DSCR_ADDR_Msb		0u
#define SLC__0_RXPKT_E_DSCR_SLC0_RX_PKT_E_DSCR_ADDR_Lsb		31u

	/* 0xFC:  */
	uint32_t volatile _0_TXPKTU_H_DSCR;
	/*  */
#define SLC__0_TXPKTU_H_DSCR_SLC0_TX_PKT_START_DSCR_ADDR_Msb	0u
#define SLC__0_TXPKTU_H_DSCR_SLC0_TX_PKT_START_DSCR_ADDR_Lsb	31u

	/* 0x100:  */
	uint32_t volatile _0_TXPKTU_E_DSCR;
	/*  */
#define SLC__0_TXPKTU_E_DSCR_SLC0_TX_PKT_END_DSCR_ADDR_Msb	0u
#define SLC__0_TXPKTU_E_DSCR_SLC0_TX_PKT_END_DSCR_ADDR_Lsb	31u

	/* 0x104:  */
	uint32_t volatile _0_RXPKTU_H_DSCR;
	/*  */
#define SLC__0_RXPKTU_H_DSCR_SLC0_RX_PKT_START_DSCR_ADDR_Msb	0u
#define SLC__0_RXPKTU_H_DSCR_SLC0_RX_PKT_START_DSCR_ADDR_Lsb	31u

	/* 0x108:  */
	uint32_t volatile _0_RXPKTU_E_DSCR;
	/*  */
#define SLC__0_RXPKTU_E_DSCR_SLC0_RX_PKT_END_DSCR_ADDR_Msb	0u
#define SLC__0_RXPKTU_E_DSCR_SLC0_RX_PKT_END_DSCR_ADDR_Lsb	31u

	/* 0x114:  */
	uint32_t volatile SEQ_POSITION;
	/*  */
#define SLC_SEQ_POSITION_SLC0_SEQ_POSITION_Msb			0u
#define SLC_SEQ_POSITION_SLC0_SEQ_POSITION_Lsb			7u
	/*  */
#define SLC_SEQ_POSITION_SLC1_SEQ_POSITION_Msb			8u
#define SLC_SEQ_POSITION_SLC1_SEQ_POSITION_Lsb			15u

	/* 0x118:  */
	uint32_t volatile _0_DSCR_REC_CONF;
	/*  */
#define SLC__0_DSCR_REC_CONF_SLC0_RX_DSCR_REC_LIM_Msb		0u
#define SLC__0_DSCR_REC_CONF_SLC0_RX_DSCR_REC_LIM_Lsb		9u

	/* 0x11C:  */
	uint32_t volatile SDIO_CRC_ST0;
	/*  */
#define SLC_SDIO_CRC_ST0_DAT0_CRC_ERR_CNT_Msb			0u
#define SLC_SDIO_CRC_ST0_DAT0_CRC_ERR_CNT_Lsb			7u
	/*  */
#define SLC_SDIO_CRC_ST0_DAT1_CRC_ERR_CNT_Msb			8u
#define SLC_SDIO_CRC_ST0_DAT1_CRC_ERR_CNT_Lsb			15u
	/*  */
#define SLC_SDIO_CRC_ST0_DAT2_CRC_ERR_CNT_Msb			16u
#define SLC_SDIO_CRC_ST0_DAT2_CRC_ERR_CNT_Lsb			23u
	/*  */
#define SLC_SDIO_CRC_ST0_DAT3_CRC_ERR_CNT_Msb			24u
#define SLC_SDIO_CRC_ST0_DAT3_CRC_ERR_CNT_Lsb			31u

	/* 0x120:  */
	uint32_t volatile SDIO_CRC_ST1;
	/*  */
#define SLC_SDIO_CRC_ST1_CMD_CRC_ERR_CNT_Msb			0u
#define SLC_SDIO_CRC_ST1_CMD_CRC_ERR_CNT_Lsb			7u
	/*  */
#define SLC_SDIO_CRC_ST1_ERR_CNT_CLR				31u

	/* 0x124:  */
	uint32_t volatile _0_EOF_START_DES;
	/*  */
#define SLC__0_EOF_START_DES_SLC0_EOF_START_DES_ADDR_Msb	0u
#define SLC__0_EOF_START_DES_SLC0_EOF_START_DES_ADDR_Lsb	31u

	/* 0x128:  */
	uint32_t volatile _0_PUSH_DSCR_ADDR;
	/*  */
#define SLC__0_PUSH_DSCR_ADDR_SLC0_RX_PUSH_DSCR_ADDR_Msb	0u
#define SLC__0_PUSH_DSCR_ADDR_SLC0_RX_PUSH_DSCR_ADDR_Lsb	31u

	/* 0x12C:  */
	uint32_t volatile _0_DONE_DSCR_ADDR;
	/*  */
#define SLC__0_DONE_DSCR_ADDR_SLC0_RX_DONE_DSCR_ADDR_Msb	0u
#define SLC__0_DONE_DSCR_ADDR_SLC0_RX_DONE_DSCR_ADDR_Lsb	31u

	/* 0x130:  */
	uint32_t volatile _0_SUB_START_DES;
	/*  */
#define SLC__0_SUB_START_DES_SLC0_SUB_PAC_START_DSCR_ADDR_Msb	0u
#define SLC__0_SUB_START_DES_SLC0_SUB_PAC_START_DSCR_ADDR_Lsb	31u

	/* 0x134:  */
	uint32_t volatile _0_DSCR_CNT;
	/*  */
#define SLC__0_DSCR_CNT_SLC0_RX_DSCR_CNT_LAT_Msb		0u
#define SLC__0_DSCR_CNT_SLC0_RX_DSCR_CNT_LAT_Lsb		9u
	/*  */
#define SLC__0_DSCR_CNT_SLC0_RX_GET_EOF_OCC			16u

	/* 0x138:  */
	uint32_t volatile _0_LEN_LIM_CONF;
	/*  */
#define SLC__0_LEN_LIM_CONF_SLC0_LEN_LIM_Msb			0u
#define SLC__0_LEN_LIM_CONF_SLC0_LEN_LIM_Lsb			19u

	/* 0x13C:  */
	uint32_t volatile _0INT_ST1;
	/*  */
#define SLC__0INT_ST1_FRHOST_BIT0_INT_ST1			0u
	/*  */
#define SLC__0INT_ST1_FRHOST_BIT1_INT_ST1			1u
	/*  */
#define SLC__0INT_ST1_FRHOST_BIT2_INT_ST1			2u
	/*  */
#define SLC__0INT_ST1_FRHOST_BIT3_INT_ST1			3u
	/*  */
#define SLC__0INT_ST1_FRHOST_BIT4_INT_ST1			4u
	/*  */
#define SLC__0INT_ST1_FRHOST_BIT5_INT_ST1			5u
	/*  */
#define SLC__0INT_ST1_FRHOST_BIT6_INT_ST1			6u
	/*  */
#define SLC__0INT_ST1_FRHOST_BIT7_INT_ST1			7u
	/*  */
#define SLC__0INT_ST1_SLC0_RX_START_INT_ST1			8u
	/*  */
#define SLC__0INT_ST1_SLC0_TX_START_INT_ST1			9u
	/*  */
#define SLC__0INT_ST1_SLC0_RX_UDF_INT_ST1			10u
	/*  */
#define SLC__0INT_ST1_SLC0_TX_OVF_INT_ST1			11u
	/*  */
#define SLC__0INT_ST1_SLC0_TOKEN0_1TO0_INT_ST1			12u
	/*  */
#define SLC__0INT_ST1_SLC0_TOKEN1_1TO0_INT_ST1			13u
	/*  */
#define SLC__0INT_ST1_SLC0_TX_DONE_INT_ST1			14u
	/*  */
#define SLC__0INT_ST1_SLC0_TX_SUC_EOF_INT_ST1			15u
	/*  */
#define SLC__0INT_ST1_SLC0_RX_DONE_INT_ST1			16u
	/*  */
#define SLC__0INT_ST1_SLC0_RX_EOF_INT_ST1			17u
	/*  */
#define SLC__0INT_ST1_SLC0_TOHOST_INT_ST1			18u
	/*  */
#define SLC__0INT_ST1_SLC0_TX_DSCR_ERR_INT_ST1			19u
	/*  */
#define SLC__0INT_ST1_SLC0_RX_DSCR_ERR_INT_ST1			20u
	/*  */
#define SLC__0INT_ST1_SLC0_TX_DSCR_EMPTY_INT_ST1		21u
	/*  */
#define SLC__0INT_ST1_SLC0_HOST_RD_ACK_INT_ST1			22u
	/*  */
#define SLC__0INT_ST1_SLC0_WR_RETRY_DONE_INT_ST1		23u
	/*  */
#define SLC__0INT_ST1_SLC0_TX_ERR_EOF_INT_ST1			24u
	/*  */
#define SLC__0INT_ST1_CMD_DTC_INT_ST1				25u
	/*  */
#define SLC__0INT_ST1_SLC0_RX_QUICK_EOF_INT_ST1			26u

	/* 0x140:  */
	uint32_t volatile _0INT_ENA1;
	/*  */
#define SLC__0INT_ENA1_FRHOST_BIT0_INT_ENA1			0u
	/*  */
#define SLC__0INT_ENA1_FRHOST_BIT1_INT_ENA1			1u
	/*  */
#define SLC__0INT_ENA1_FRHOST_BIT2_INT_ENA1			2u
	/*  */
#define SLC__0INT_ENA1_FRHOST_BIT3_INT_ENA1			3u
	/*  */
#define SLC__0INT_ENA1_FRHOST_BIT4_INT_ENA1			4u
	/*  */
#define SLC__0INT_ENA1_FRHOST_BIT5_INT_ENA1			5u
	/*  */
#define SLC__0INT_ENA1_FRHOST_BIT6_INT_ENA1			6u
	/*  */
#define SLC__0INT_ENA1_FRHOST_BIT7_INT_ENA1			7u
	/*  */
#define SLC__0INT_ENA1_SLC0_RX_START_INT_ENA1			8u
	/*  */
#define SLC__0INT_ENA1_SLC0_TX_START_INT_ENA1			9u
	/*  */
#define SLC__0INT_ENA1_SLC0_RX_UDF_INT_ENA1			10u
	/*  */
#define SLC__0INT_ENA1_SLC0_TX_OVF_INT_ENA1			11u
	/*  */
#define SLC__0INT_ENA1_SLC0_TOKEN0_1TO0_INT_ENA1		12u
	/*  */
#define SLC__0INT_ENA1_SLC0_TOKEN1_1TO0_INT_ENA1		13u
	/*  */
#define SLC__0INT_ENA1_SLC0_TX_DONE_INT_ENA1			14u
	/*  */
#define SLC__0INT_ENA1_SLC0_TX_SUC_EOF_INT_ENA1			15u
	/*  */
#define SLC__0INT_ENA1_SLC0_RX_DONE_INT_ENA1			16u
	/*  */
#define SLC__0INT_ENA1_SLC0_RX_EOF_INT_ENA1			17u
	/*  */
#define SLC__0INT_ENA1_SLC0_TOHOST_INT_ENA1			18u
	/*  */
#define SLC__0INT_ENA1_SLC0_TX_DSCR_ERR_INT_ENA1		19u
	/*  */
#define SLC__0INT_ENA1_SLC0_RX_DSCR_ERR_INT_ENA1		20u
	/*  */
#define SLC__0INT_ENA1_SLC0_TX_DSCR_EMPTY_INT_ENA1		21u
	/*  */
#define SLC__0INT_ENA1_SLC0_HOST_RD_ACK_INT_ENA1		22u
	/*  */
#define SLC__0INT_ENA1_SLC0_WR_RETRY_DONE_INT_ENA1		23u
	/*  */
#define SLC__0INT_ENA1_SLC0_TX_ERR_EOF_INT_ENA1			24u
	/*  */
#define SLC__0INT_ENA1_CMD_DTC_INT_ENA1				25u
	/*  */
#define SLC__0INT_ENA1_SLC0_RX_QUICK_EOF_INT_ENA1		26u

	/* 0x144:  */
	uint32_t volatile _1INT_ST1;
	/*  */
#define SLC__1INT_ST1_FRHOST_BIT8_INT_ST1			0u
	/*  */
#define SLC__1INT_ST1_FRHOST_BIT9_INT_ST1			1u
	/*  */
#define SLC__1INT_ST1_FRHOST_BIT10_INT_ST1			2u
	/*  */
#define SLC__1INT_ST1_FRHOST_BIT11_INT_ST1			3u
	/*  */
#define SLC__1INT_ST1_FRHOST_BIT12_INT_ST1			4u
	/*  */
#define SLC__1INT_ST1_FRHOST_BIT13_INT_ST1			5u
	/*  */
#define SLC__1INT_ST1_FRHOST_BIT14_INT_ST1			6u
	/*  */
#define SLC__1INT_ST1_FRHOST_BIT15_INT_ST1			7u
	/*  */
#define SLC__1INT_ST1_SLC1_RX_START_INT_ST1			8u
	/*  */
#define SLC__1INT_ST1_SLC1_TX_START_INT_ST1			9u
	/*  */
#define SLC__1INT_ST1_SLC1_RX_UDF_INT_ST1			10u
	/*  */
#define SLC__1INT_ST1_SLC1_TX_OVF_INT_ST1			11u
	/*  */
#define SLC__1INT_ST1_SLC1_TOKEN0_1TO0_INT_ST1			12u
	/*  */
#define SLC__1INT_ST1_SLC1_TOKEN1_1TO0_INT_ST1			13u
	/*  */
#define SLC__1INT_ST1_SLC1_TX_DONE_INT_ST1			14u
	/*  */
#define SLC__1INT_ST1_SLC1_TX_SUC_EOF_INT_ST1			15u
	/*  */
#define SLC__1INT_ST1_SLC1_RX_DONE_INT_ST1			16u
	/*  */
#define SLC__1INT_ST1_SLC1_RX_EOF_INT_ST1			17u
	/*  */
#define SLC__1INT_ST1_SLC1_TOHOST_INT_ST1			18u
	/*  */
#define SLC__1INT_ST1_SLC1_TX_DSCR_ERR_INT_ST1			19u
	/*  */
#define SLC__1INT_ST1_SLC1_RX_DSCR_ERR_INT_ST1			20u
	/*  */
#define SLC__1INT_ST1_SLC1_TX_DSCR_EMPTY_INT_ST1		21u
	/*  */
#define SLC__1INT_ST1_SLC1_HOST_RD_ACK_INT_ST1			22u
	/*  */
#define SLC__1INT_ST1_SLC1_WR_RETRY_DONE_INT_ST1		23u
	/*  */
#define SLC__1INT_ST1_SLC1_TX_ERR_EOF_INT_ST1			24u

	/* 0x148:  */
	uint32_t volatile _1INT_ENA1;
	/*  */
#define SLC__1INT_ENA1_FRHOST_BIT8_INT_ENA1			0u
	/*  */
#define SLC__1INT_ENA1_FRHOST_BIT9_INT_ENA1			1u
	/*  */
#define SLC__1INT_ENA1_FRHOST_BIT10_INT_ENA1			2u
	/*  */
#define SLC__1INT_ENA1_FRHOST_BIT11_INT_ENA1			3u
	/*  */
#define SLC__1INT_ENA1_FRHOST_BIT12_INT_ENA1			4u
	/*  */
#define SLC__1INT_ENA1_FRHOST_BIT13_INT_ENA1			5u
	/*  */
#define SLC__1INT_ENA1_FRHOST_BIT14_INT_ENA1			6u
	/*  */
#define SLC__1INT_ENA1_FRHOST_BIT15_INT_ENA1			7u
	/*  */
#define SLC__1INT_ENA1_SLC1_RX_START_INT_ENA1			8u
	/*  */
#define SLC__1INT_ENA1_SLC1_TX_START_INT_ENA1			9u
	/*  */
#define SLC__1INT_ENA1_SLC1_RX_UDF_INT_ENA1			10u
	/*  */
#define SLC__1INT_ENA1_SLC1_TX_OVF_INT_ENA1			11u
	/*  */
#define SLC__1INT_ENA1_SLC1_TOKEN0_1TO0_INT_ENA1		12u
	/*  */
#define SLC__1INT_ENA1_SLC1_TOKEN1_1TO0_INT_ENA1		13u
	/*  */
#define SLC__1INT_ENA1_SLC1_TX_DONE_INT_ENA1			14u
	/*  */
#define SLC__1INT_ENA1_SLC1_TX_SUC_EOF_INT_ENA1			15u
	/*  */
#define SLC__1INT_ENA1_SLC1_RX_DONE_INT_ENA1			16u
	/*  */
#define SLC__1INT_ENA1_SLC1_RX_EOF_INT_ENA1			17u
	/*  */
#define SLC__1INT_ENA1_SLC1_TOHOST_INT_ENA1			18u
	/*  */
#define SLC__1INT_ENA1_SLC1_TX_DSCR_ERR_INT_ENA1		19u
	/*  */
#define SLC__1INT_ENA1_SLC1_RX_DSCR_ERR_INT_ENA1		20u
	/*  */
#define SLC__1INT_ENA1_SLC1_TX_DSCR_EMPTY_INT_ENA1		21u
	/*  */
#define SLC__1INT_ENA1_SLC1_HOST_RD_ACK_INT_ENA1		22u
	/*  */
#define SLC__1INT_ENA1_SLC1_WR_RETRY_DONE_INT_ENA1		23u
	/*  */
#define SLC__1INT_ENA1_SLC1_TX_ERR_EOF_INT_ENA1			24u

	/* 0x168 */
	uint8_t RESERVED0[0x1F8-0x168];

	/* 0x1F8:  */
	uint32_t volatile DATE;
	/*  */
#define SLC_DATE_DATE_Msb					0u
#define SLC_DATE_DATE_Lsb					31u

	/* 0x1FC:  */
	uint32_t volatile ID;
	/*  */
#define SLC_ID_ID_Msb						0u
#define SLC_ID_ID_Lsb						31u

};


#define SLCHOST ((struct mcu_slchost *)0x3FF55000)

struct mcu_slchost {

	/* 0x10:  */
	uint32_t volatile HOST_SLCHOST_FUNC2_0;
	/*  */
#define SLCHOST_HOST_SLCHOST_FUNC2_0_HOST_SLC_FUNC2_INT		24u

	/* 0x14:  */
	uint32_t volatile HOST_SLCHOST_FUNC2_1;
	/*  */
#define SLCHOST_HOST_SLCHOST_FUNC2_1_HOST_SLC_FUNC2_INT_EN	0u

	/* 0x20:  */
	uint32_t volatile HOST_SLCHOST_FUNC2_2;
	/*  */
#define SLCHOST_HOST_SLCHOST_FUNC2_2_HOST_SLC_FUNC1_MDSTAT	0u

	/* 0x34:  */
	uint32_t volatile HOST_SLCHOST_GPIO_STATUS0;
	/*  */
#define SLCHOST_HOST_SLCHOST_GPIO_STATUS0_HOST_GPIO_SDIO_INT0_Msb	0u
#define SLCHOST_HOST_SLCHOST_GPIO_STATUS0_HOST_GPIO_SDIO_INT0_Lsb	31u

	/* 0x38:  */
	uint32_t volatile HOST_SLCHOST_GPIO_STATUS1;
	/*  */
#define SLCHOST_HOST_SLCHOST_GPIO_STATUS1_HOST_GPIO_SDIO_INT1_Msb	0u
#define SLCHOST_HOST_SLCHOST_GPIO_STATUS1_HOST_GPIO_SDIO_INT1_Lsb	7u

	/* 0x3C:  */
	uint32_t volatile HOST_SLCHOST_GPIO_IN0;
	/*  */
#define SLCHOST_HOST_SLCHOST_GPIO_IN0_HOST_GPIO_SDIO_IN0_Msb	0u
#define SLCHOST_HOST_SLCHOST_GPIO_IN0_HOST_GPIO_SDIO_IN0_Lsb	31u

	/* 0x40:  */
	uint32_t volatile HOST_SLCHOST_GPIO_IN1;
	/*  */
#define SLCHOST_HOST_SLCHOST_GPIO_IN1_HOST_GPIO_SDIO_IN1_Msb	0u
#define SLCHOST_HOST_SLCHOST_GPIO_IN1_HOST_GPIO_SDIO_IN1_Lsb	7u

	/* 0x44:  */
	uint32_t volatile HOST_SLC0HOST_TOKEN_RDATA;
	/*  */
#define SLCHOST_HOST_SLC0HOST_TOKEN_RDATA_HOST_SLC0_TOKEN0_Msb	0u
#define SLCHOST_HOST_SLC0HOST_TOKEN_RDATA_HOST_SLC0_TOKEN0_Lsb	11u
	/*  */
#define SLCHOST_HOST_SLC0HOST_TOKEN_RDATA_HOST_SLC0_RX_PF_VALID	12u
	/*  */
#define SLCHOST_HOST_SLC0HOST_TOKEN_RDATA_HOST_HOSTSLC0_TOKEN1_Msb	16u
#define SLCHOST_HOST_SLC0HOST_TOKEN_RDATA_HOST_HOSTSLC0_TOKEN1_Lsb	27u
	/*  */
#define SLCHOST_HOST_SLC0HOST_TOKEN_RDATA_HOST_SLC0_RX_PF_EOF_Msb	28u
#define SLCHOST_HOST_SLC0HOST_TOKEN_RDATA_HOST_SLC0_RX_PF_EOF_Lsb	31u

	/* 0x48:  */
	uint32_t volatile HOST_SLC0_HOST_PF;
	/*  */
#define SLCHOST_HOST_SLC0_HOST_PF_HOST_SLC0_PF_DATA_Msb		0u
#define SLCHOST_HOST_SLC0_HOST_PF_HOST_SLC0_PF_DATA_Lsb		31u

	/* 0x4C:  */
	uint32_t volatile HOST_SLC1_HOST_PF;
	/*  */
#define SLCHOST_HOST_SLC1_HOST_PF_HOST_SLC1_PF_DATA_Msb		0u
#define SLCHOST_HOST_SLC1_HOST_PF_HOST_SLC1_PF_DATA_Lsb		31u

	/* 0x50:  */
	uint32_t volatile HOST_SLC0HOST_INT_RAW;
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_RAW_HOST_SLC0_TOHOST_BIT0_INT_RAW	0u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_RAW_HOST_SLC0_TOHOST_BIT1_INT_RAW	1u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_RAW_HOST_SLC0_TOHOST_BIT2_INT_RAW	2u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_RAW_HOST_SLC0_TOHOST_BIT3_INT_RAW	3u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_RAW_HOST_SLC0_TOHOST_BIT4_INT_RAW	4u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_RAW_HOST_SLC0_TOHOST_BIT5_INT_RAW	5u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_RAW_HOST_SLC0_TOHOST_BIT6_INT_RAW	6u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_RAW_HOST_SLC0_TOHOST_BIT7_INT_RAW	7u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_RAW_HOST_SLC0_TOKEN0_1TO0_INT_RAW	8u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_RAW_HOST_SLC0_TOKEN1_1TO0_INT_RAW	9u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_RAW_HOST_SLC0_TOKEN0_0TO1_INT_RAW	10u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_RAW_HOST_SLC0_TOKEN1_0TO1_INT_RAW	11u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_RAW_HOST_SLC0HOST_RX_SOF_INT_RAW	12u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_RAW_HOST_SLC0HOST_RX_EOF_INT_RAW	13u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_RAW_HOST_SLC0HOST_RX_START_INT_RAW	14u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_RAW_HOST_SLC0HOST_TX_START_INT_RAW	15u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_RAW_HOST_SLC0_RX_UDF_INT_RAW	16u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_RAW_HOST_SLC0_TX_OVF_INT_RAW	17u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_RAW_HOST_SLC0_RX_PF_VALID_INT_RAW	18u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_RAW_HOST_SLC0_EXT_BIT0_INT_RAW	19u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_RAW_HOST_SLC0_EXT_BIT1_INT_RAW	20u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_RAW_HOST_SLC0_EXT_BIT2_INT_RAW	21u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_RAW_HOST_SLC0_EXT_BIT3_INT_RAW	22u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_RAW_HOST_SLC0_RX_NEW_PACKET_INT_RAW	23u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_RAW_HOST_SLC0_HOST_RD_RETRY_INT_RAW	24u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_RAW_HOST_GPIO_SDIO_INT_RAW	25u

	/* 0x54:  */
	uint32_t volatile HOST_SLC1HOST_INT_RAW;
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_RAW_HOST_SLC1_TOHOST_BIT0_INT_RAW	0u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_RAW_HOST_SLC1_TOHOST_BIT1_INT_RAW	1u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_RAW_HOST_SLC1_TOHOST_BIT2_INT_RAW	2u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_RAW_HOST_SLC1_TOHOST_BIT3_INT_RAW	3u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_RAW_HOST_SLC1_TOHOST_BIT4_INT_RAW	4u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_RAW_HOST_SLC1_TOHOST_BIT5_INT_RAW	5u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_RAW_HOST_SLC1_TOHOST_BIT6_INT_RAW	6u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_RAW_HOST_SLC1_TOHOST_BIT7_INT_RAW	7u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_RAW_HOST_SLC1_TOKEN0_1TO0_INT_RAW	8u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_RAW_HOST_SLC1_TOKEN1_1TO0_INT_RAW	9u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_RAW_HOST_SLC1_TOKEN0_0TO1_INT_RAW	10u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_RAW_HOST_SLC1_TOKEN1_0TO1_INT_RAW	11u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_RAW_HOST_SLC1HOST_RX_SOF_INT_RAW	12u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_RAW_HOST_SLC1HOST_RX_EOF_INT_RAW	13u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_RAW_HOST_SLC1HOST_RX_START_INT_RAW	14u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_RAW_HOST_SLC1HOST_TX_START_INT_RAW	15u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_RAW_HOST_SLC1_RX_UDF_INT_RAW	16u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_RAW_HOST_SLC1_TX_OVF_INT_RAW	17u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_RAW_HOST_SLC1_RX_PF_VALID_INT_RAW	18u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_RAW_HOST_SLC1_EXT_BIT0_INT_RAW	19u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_RAW_HOST_SLC1_EXT_BIT1_INT_RAW	20u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_RAW_HOST_SLC1_EXT_BIT2_INT_RAW	21u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_RAW_HOST_SLC1_EXT_BIT3_INT_RAW	22u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_RAW_HOST_SLC1_WIFI_RX_NEW_PACKET_INT_RAW	23u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_RAW_HOST_SLC1_HOST_RD_RETRY_INT_RAW	24u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_RAW_HOST_SLC1_BT_RX_NEW_PACKET_INT_RAW	25u

	/* 0x58:  */
	uint32_t volatile HOST_SLC0HOST_INT_ST;
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ST_HOST_SLC0_TOHOST_BIT0_INT_ST	0u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ST_HOST_SLC0_TOHOST_BIT1_INT_ST	1u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ST_HOST_SLC0_TOHOST_BIT2_INT_ST	2u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ST_HOST_SLC0_TOHOST_BIT3_INT_ST	3u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ST_HOST_SLC0_TOHOST_BIT4_INT_ST	4u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ST_HOST_SLC0_TOHOST_BIT5_INT_ST	5u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ST_HOST_SLC0_TOHOST_BIT6_INT_ST	6u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ST_HOST_SLC0_TOHOST_BIT7_INT_ST	7u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ST_HOST_SLC0_TOKEN0_1TO0_INT_ST	8u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ST_HOST_SLC0_TOKEN1_1TO0_INT_ST	9u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ST_HOST_SLC0_TOKEN0_0TO1_INT_ST	10u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ST_HOST_SLC0_TOKEN1_0TO1_INT_ST	11u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ST_HOST_SLC0HOST_RX_SOF_INT_ST	12u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ST_HOST_SLC0HOST_RX_EOF_INT_ST	13u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ST_HOST_SLC0HOST_RX_START_INT_ST	14u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ST_HOST_SLC0HOST_TX_START_INT_ST	15u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ST_HOST_SLC0_RX_UDF_INT_ST	16u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ST_HOST_SLC0_TX_OVF_INT_ST	17u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ST_HOST_SLC0_RX_PF_VALID_INT_ST	18u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ST_HOST_SLC0_EXT_BIT0_INT_ST	19u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ST_HOST_SLC0_EXT_BIT1_INT_ST	20u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ST_HOST_SLC0_EXT_BIT2_INT_ST	21u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ST_HOST_SLC0_EXT_BIT3_INT_ST	22u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ST_HOST_SLC0_RX_NEW_PACKET_INT_ST	23u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ST_HOST_SLC0_HOST_RD_RETRY_INT_ST	24u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ST_HOST_GPIO_SDIO_INT_ST	25u

	/* 0x5C:  */
	uint32_t volatile HOST_SLC1HOST_INT_ST;
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ST_HOST_SLC1_TOHOST_BIT0_INT_ST	0u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ST_HOST_SLC1_TOHOST_BIT1_INT_ST	1u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ST_HOST_SLC1_TOHOST_BIT2_INT_ST	2u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ST_HOST_SLC1_TOHOST_BIT3_INT_ST	3u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ST_HOST_SLC1_TOHOST_BIT4_INT_ST	4u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ST_HOST_SLC1_TOHOST_BIT5_INT_ST	5u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ST_HOST_SLC1_TOHOST_BIT6_INT_ST	6u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ST_HOST_SLC1_TOHOST_BIT7_INT_ST	7u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ST_HOST_SLC1_TOKEN0_1TO0_INT_ST	8u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ST_HOST_SLC1_TOKEN1_1TO0_INT_ST	9u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ST_HOST_SLC1_TOKEN0_0TO1_INT_ST	10u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ST_HOST_SLC1_TOKEN1_0TO1_INT_ST	11u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ST_HOST_SLC1HOST_RX_SOF_INT_ST	12u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ST_HOST_SLC1HOST_RX_EOF_INT_ST	13u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ST_HOST_SLC1HOST_RX_START_INT_ST	14u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ST_HOST_SLC1HOST_TX_START_INT_ST	15u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ST_HOST_SLC1_RX_UDF_INT_ST	16u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ST_HOST_SLC1_TX_OVF_INT_ST	17u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ST_HOST_SLC1_RX_PF_VALID_INT_ST	18u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ST_HOST_SLC1_EXT_BIT0_INT_ST	19u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ST_HOST_SLC1_EXT_BIT1_INT_ST	20u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ST_HOST_SLC1_EXT_BIT2_INT_ST	21u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ST_HOST_SLC1_EXT_BIT3_INT_ST	22u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ST_HOST_SLC1_WIFI_RX_NEW_PACKET_INT_ST	23u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ST_HOST_SLC1_HOST_RD_RETRY_INT_ST	24u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ST_HOST_SLC1_BT_RX_NEW_PACKET_INT_ST	25u

	/* 0x60:  */
	uint32_t volatile HOST_SLCHOST_PKT_LEN;
	/*  */
#define SLCHOST_HOST_SLCHOST_PKT_LEN_HOST_HOSTSLC0_LEN_Msb	0u
#define SLCHOST_HOST_SLCHOST_PKT_LEN_HOST_HOSTSLC0_LEN_Lsb	19u
	/*  */
#define SLCHOST_HOST_SLCHOST_PKT_LEN_HOST_HOSTSLC0_LEN_CHECK_Msb	20u
#define SLCHOST_HOST_SLCHOST_PKT_LEN_HOST_HOSTSLC0_LEN_CHECK_Lsb	31u

	/* 0x64:  */
	uint32_t volatile HOST_SLCHOST_STATE_W0;
	/*  */
#define SLCHOST_HOST_SLCHOST_STATE_W0_HOST_SLCHOST_STATE0_Msb	0u
#define SLCHOST_HOST_SLCHOST_STATE_W0_HOST_SLCHOST_STATE0_Lsb	7u
	/*  */
#define SLCHOST_HOST_SLCHOST_STATE_W0_HOST_SLCHOST_STATE1_Msb	8u
#define SLCHOST_HOST_SLCHOST_STATE_W0_HOST_SLCHOST_STATE1_Lsb	15u
	/*  */
#define SLCHOST_HOST_SLCHOST_STATE_W0_HOST_SLCHOST_STATE2_Msb	16u
#define SLCHOST_HOST_SLCHOST_STATE_W0_HOST_SLCHOST_STATE2_Lsb	23u
	/*  */
#define SLCHOST_HOST_SLCHOST_STATE_W0_HOST_SLCHOST_STATE3_Msb	24u
#define SLCHOST_HOST_SLCHOST_STATE_W0_HOST_SLCHOST_STATE3_Lsb	31u

	/* 0x68:  */
	uint32_t volatile HOST_SLCHOST_STATE_W1;
	/*  */
#define SLCHOST_HOST_SLCHOST_STATE_W1_HOST_SLCHOST_STATE4_Msb	0u
#define SLCHOST_HOST_SLCHOST_STATE_W1_HOST_SLCHOST_STATE4_Lsb	7u
	/*  */
#define SLCHOST_HOST_SLCHOST_STATE_W1_HOST_SLCHOST_STATE5_Msb	8u
#define SLCHOST_HOST_SLCHOST_STATE_W1_HOST_SLCHOST_STATE5_Lsb	15u
	/*  */
#define SLCHOST_HOST_SLCHOST_STATE_W1_HOST_SLCHOST_STATE6_Msb	16u
#define SLCHOST_HOST_SLCHOST_STATE_W1_HOST_SLCHOST_STATE6_Lsb	23u
	/*  */
#define SLCHOST_HOST_SLCHOST_STATE_W1_HOST_SLCHOST_STATE7_Msb	24u
#define SLCHOST_HOST_SLCHOST_STATE_W1_HOST_SLCHOST_STATE7_Lsb	31u

	/* 0x6C:  */
	uint32_t volatile HOST_SLCHOST_CONF_W0;
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W0_HOST_SLCHOST_CONF0_Msb	0u
#define SLCHOST_HOST_SLCHOST_CONF_W0_HOST_SLCHOST_CONF0_Lsb	7u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W0_HOST_SLCHOST_CONF1_Msb	8u
#define SLCHOST_HOST_SLCHOST_CONF_W0_HOST_SLCHOST_CONF1_Lsb	15u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W0_HOST_SLCHOST_CONF2_Msb	16u
#define SLCHOST_HOST_SLCHOST_CONF_W0_HOST_SLCHOST_CONF2_Lsb	23u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W0_HOST_SLCHOST_CONF3_Msb	24u
#define SLCHOST_HOST_SLCHOST_CONF_W0_HOST_SLCHOST_CONF3_Lsb	31u

	/* 0x70:  */
	uint32_t volatile HOST_SLCHOST_CONF_W1;
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W1_HOST_SLCHOST_CONF4_Msb	0u
#define SLCHOST_HOST_SLCHOST_CONF_W1_HOST_SLCHOST_CONF4_Lsb	7u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W1_HOST_SLCHOST_CONF5_Msb	8u
#define SLCHOST_HOST_SLCHOST_CONF_W1_HOST_SLCHOST_CONF5_Lsb	15u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W1_HOST_SLCHOST_CONF6_Msb	16u
#define SLCHOST_HOST_SLCHOST_CONF_W1_HOST_SLCHOST_CONF6_Lsb	23u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W1_HOST_SLCHOST_CONF7_Msb	24u
#define SLCHOST_HOST_SLCHOST_CONF_W1_HOST_SLCHOST_CONF7_Lsb	31u

	/* 0x74:  */
	uint32_t volatile HOST_SLCHOST_CONF_W2;
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W2_HOST_SLCHOST_CONF8_Msb	0u
#define SLCHOST_HOST_SLCHOST_CONF_W2_HOST_SLCHOST_CONF8_Lsb	7u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W2_HOST_SLCHOST_CONF9_Msb	8u
#define SLCHOST_HOST_SLCHOST_CONF_W2_HOST_SLCHOST_CONF9_Lsb	15u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W2_HOST_SLCHOST_CONF10_Msb	16u
#define SLCHOST_HOST_SLCHOST_CONF_W2_HOST_SLCHOST_CONF10_Lsb	23u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W2_HOST_SLCHOST_CONF11_Msb	24u
#define SLCHOST_HOST_SLCHOST_CONF_W2_HOST_SLCHOST_CONF11_Lsb	31u

	/* 0x78:  */
	uint32_t volatile HOST_SLCHOST_CONF_W3;
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W3_HOST_SLCHOST_CONF12_Msb	0u
#define SLCHOST_HOST_SLCHOST_CONF_W3_HOST_SLCHOST_CONF12_Lsb	7u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W3_HOST_SLCHOST_CONF13_Msb	8u
#define SLCHOST_HOST_SLCHOST_CONF_W3_HOST_SLCHOST_CONF13_Lsb	15u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W3_HOST_SLCHOST_CONF14_Msb	16u
#define SLCHOST_HOST_SLCHOST_CONF_W3_HOST_SLCHOST_CONF14_Lsb	23u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W3_HOST_SLCHOST_CONF15_Msb	24u
#define SLCHOST_HOST_SLCHOST_CONF_W3_HOST_SLCHOST_CONF15_Lsb	31u

	/* 0x7C:  */
	uint32_t volatile HOST_SLCHOST_CONF_W4;
	/* SLC timeout value */
#define SLCHOST_HOST_SLCHOST_CONF_W4_HOST_SLCHOST_CONF16_Msb	0u
#define SLCHOST_HOST_SLCHOST_CONF_W4_HOST_SLCHOST_CONF16_Lsb	7u
	/* SLC timeout enable */
#define SLCHOST_HOST_SLCHOST_CONF_W4_HOST_SLCHOST_CONF17_Msb	8u
#define SLCHOST_HOST_SLCHOST_CONF_W4_HOST_SLCHOST_CONF17_Lsb	15u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W4_HOST_SLCHOST_CONF18_Msb	16u
#define SLCHOST_HOST_SLCHOST_CONF_W4_HOST_SLCHOST_CONF18_Lsb	23u
	/* Interrupt to target CPU */
#define SLCHOST_HOST_SLCHOST_CONF_W4_HOST_SLCHOST_CONF19_Msb	24u
#define SLCHOST_HOST_SLCHOST_CONF_W4_HOST_SLCHOST_CONF19_Lsb	31u

	/* 0x80:  */
	uint32_t volatile HOST_SLCHOST_CONF_W5;
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W5_HOST_SLCHOST_CONF20_Msb	0u
#define SLCHOST_HOST_SLCHOST_CONF_W5_HOST_SLCHOST_CONF20_Lsb	7u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W5_HOST_SLCHOST_CONF21_Msb	8u
#define SLCHOST_HOST_SLCHOST_CONF_W5_HOST_SLCHOST_CONF21_Lsb	15u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W5_HOST_SLCHOST_CONF22_Msb	16u
#define SLCHOST_HOST_SLCHOST_CONF_W5_HOST_SLCHOST_CONF22_Lsb	23u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W5_HOST_SLCHOST_CONF23_Msb	24u
#define SLCHOST_HOST_SLCHOST_CONF_W5_HOST_SLCHOST_CONF23_Lsb	31u

	/* 0x84:  */
	uint32_t volatile HOST_SLCHOST_WIN_CMD;

	/* 0x88:  */
	uint32_t volatile HOST_SLCHOST_CONF_W6;
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W6_HOST_SLCHOST_CONF24_Msb	0u
#define SLCHOST_HOST_SLCHOST_CONF_W6_HOST_SLCHOST_CONF24_Lsb	7u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W6_HOST_SLCHOST_CONF25_Msb	8u
#define SLCHOST_HOST_SLCHOST_CONF_W6_HOST_SLCHOST_CONF25_Lsb	15u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W6_HOST_SLCHOST_CONF26_Msb	16u
#define SLCHOST_HOST_SLCHOST_CONF_W6_HOST_SLCHOST_CONF26_Lsb	23u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W6_HOST_SLCHOST_CONF27_Msb	24u
#define SLCHOST_HOST_SLCHOST_CONF_W6_HOST_SLCHOST_CONF27_Lsb	31u

	/* 0x8C:  */
	uint32_t volatile HOST_SLCHOST_CONF_W7;
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W7_HOST_SLCHOST_CONF28_Msb	0u
#define SLCHOST_HOST_SLCHOST_CONF_W7_HOST_SLCHOST_CONF28_Lsb	7u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W7_HOST_SLCHOST_CONF29_Msb	8u
#define SLCHOST_HOST_SLCHOST_CONF_W7_HOST_SLCHOST_CONF29_Lsb	15u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W7_HOST_SLCHOST_CONF30_Msb	16u
#define SLCHOST_HOST_SLCHOST_CONF_W7_HOST_SLCHOST_CONF30_Lsb	23u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W7_HOST_SLCHOST_CONF31_Msb	24u
#define SLCHOST_HOST_SLCHOST_CONF_W7_HOST_SLCHOST_CONF31_Lsb	31u

	/* 0x90:  */
	uint32_t volatile HOST_SLCHOST_PKT_LEN0;
	/*  */
#define SLCHOST_HOST_SLCHOST_PKT_LEN0_HOST_HOSTSLC0_LEN0_Msb	0u
#define SLCHOST_HOST_SLCHOST_PKT_LEN0_HOST_HOSTSLC0_LEN0_Lsb	19u

	/* 0x94:  */
	uint32_t volatile HOST_SLCHOST_PKT_LEN1;
	/*  */
#define SLCHOST_HOST_SLCHOST_PKT_LEN1_HOST_HOSTSLC0_LEN1_Msb	0u
#define SLCHOST_HOST_SLCHOST_PKT_LEN1_HOST_HOSTSLC0_LEN1_Lsb	19u

	/* 0x98:  */
	uint32_t volatile HOST_SLCHOST_PKT_LEN2;
	/*  */
#define SLCHOST_HOST_SLCHOST_PKT_LEN2_HOST_HOSTSLC0_LEN2_Msb	0u
#define SLCHOST_HOST_SLCHOST_PKT_LEN2_HOST_HOSTSLC0_LEN2_Lsb	19u

	/* 0x9C:  */
	uint32_t volatile HOST_SLCHOST_CONF_W8;
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W8_HOST_SLCHOST_CONF32_Msb	0u
#define SLCHOST_HOST_SLCHOST_CONF_W8_HOST_SLCHOST_CONF32_Lsb	7u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W8_HOST_SLCHOST_CONF33_Msb	8u
#define SLCHOST_HOST_SLCHOST_CONF_W8_HOST_SLCHOST_CONF33_Lsb	15u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W8_HOST_SLCHOST_CONF34_Msb	16u
#define SLCHOST_HOST_SLCHOST_CONF_W8_HOST_SLCHOST_CONF34_Lsb	23u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W8_HOST_SLCHOST_CONF35_Msb	24u
#define SLCHOST_HOST_SLCHOST_CONF_W8_HOST_SLCHOST_CONF35_Lsb	31u

	/* 0xA0:  */
	uint32_t volatile HOST_SLCHOST_CONF_W9;
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W9_HOST_SLCHOST_CONF36_Msb	0u
#define SLCHOST_HOST_SLCHOST_CONF_W9_HOST_SLCHOST_CONF36_Lsb	7u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W9_HOST_SLCHOST_CONF37_Msb	8u
#define SLCHOST_HOST_SLCHOST_CONF_W9_HOST_SLCHOST_CONF37_Lsb	15u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W9_HOST_SLCHOST_CONF38_Msb	16u
#define SLCHOST_HOST_SLCHOST_CONF_W9_HOST_SLCHOST_CONF38_Lsb	23u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W9_HOST_SLCHOST_CONF39_Msb	24u
#define SLCHOST_HOST_SLCHOST_CONF_W9_HOST_SLCHOST_CONF39_Lsb	31u

	/* 0xA4:  */
	uint32_t volatile HOST_SLCHOST_CONF_W10;
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W10_HOST_SLCHOST_CONF40_Msb	0u
#define SLCHOST_HOST_SLCHOST_CONF_W10_HOST_SLCHOST_CONF40_Lsb	7u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W10_HOST_SLCHOST_CONF41_Msb	8u
#define SLCHOST_HOST_SLCHOST_CONF_W10_HOST_SLCHOST_CONF41_Lsb	15u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W10_HOST_SLCHOST_CONF42_Msb	16u
#define SLCHOST_HOST_SLCHOST_CONF_W10_HOST_SLCHOST_CONF42_Lsb	23u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W10_HOST_SLCHOST_CONF43_Msb	24u
#define SLCHOST_HOST_SLCHOST_CONF_W10_HOST_SLCHOST_CONF43_Lsb	31u

	/* 0xA8:  */
	uint32_t volatile HOST_SLCHOST_CONF_W11;
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W11_HOST_SLCHOST_CONF44_Msb	0u
#define SLCHOST_HOST_SLCHOST_CONF_W11_HOST_SLCHOST_CONF44_Lsb	7u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W11_HOST_SLCHOST_CONF45_Msb	8u
#define SLCHOST_HOST_SLCHOST_CONF_W11_HOST_SLCHOST_CONF45_Lsb	15u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W11_HOST_SLCHOST_CONF46_Msb	16u
#define SLCHOST_HOST_SLCHOST_CONF_W11_HOST_SLCHOST_CONF46_Lsb	23u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W11_HOST_SLCHOST_CONF47_Msb	24u
#define SLCHOST_HOST_SLCHOST_CONF_W11_HOST_SLCHOST_CONF47_Lsb	31u

	/* 0xAC:  */
	uint32_t volatile HOST_SLCHOST_CONF_W12;
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W12_HOST_SLCHOST_CONF48_Msb	0u
#define SLCHOST_HOST_SLCHOST_CONF_W12_HOST_SLCHOST_CONF48_Lsb	7u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W12_HOST_SLCHOST_CONF49_Msb	8u
#define SLCHOST_HOST_SLCHOST_CONF_W12_HOST_SLCHOST_CONF49_Lsb	15u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W12_HOST_SLCHOST_CONF50_Msb	16u
#define SLCHOST_HOST_SLCHOST_CONF_W12_HOST_SLCHOST_CONF50_Lsb	23u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W12_HOST_SLCHOST_CONF51_Msb	24u
#define SLCHOST_HOST_SLCHOST_CONF_W12_HOST_SLCHOST_CONF51_Lsb	31u

	/* 0xB0:  */
	uint32_t volatile HOST_SLCHOST_CONF_W13;
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W13_HOST_SLCHOST_CONF52_Msb	0u
#define SLCHOST_HOST_SLCHOST_CONF_W13_HOST_SLCHOST_CONF52_Lsb	7u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W13_HOST_SLCHOST_CONF53_Msb	8u
#define SLCHOST_HOST_SLCHOST_CONF_W13_HOST_SLCHOST_CONF53_Lsb	15u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W13_HOST_SLCHOST_CONF54_Msb	16u
#define SLCHOST_HOST_SLCHOST_CONF_W13_HOST_SLCHOST_CONF54_Lsb	23u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W13_HOST_SLCHOST_CONF55_Msb	24u
#define SLCHOST_HOST_SLCHOST_CONF_W13_HOST_SLCHOST_CONF55_Lsb	31u

	/* 0xB4:  */
	uint32_t volatile HOST_SLCHOST_CONF_W14;
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W14_HOST_SLCHOST_CONF56_Msb	0u
#define SLCHOST_HOST_SLCHOST_CONF_W14_HOST_SLCHOST_CONF56_Lsb	7u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W14_HOST_SLCHOST_CONF57_Msb	8u
#define SLCHOST_HOST_SLCHOST_CONF_W14_HOST_SLCHOST_CONF57_Lsb	15u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W14_HOST_SLCHOST_CONF58_Msb	16u
#define SLCHOST_HOST_SLCHOST_CONF_W14_HOST_SLCHOST_CONF58_Lsb	23u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W14_HOST_SLCHOST_CONF59_Msb	24u
#define SLCHOST_HOST_SLCHOST_CONF_W14_HOST_SLCHOST_CONF59_Lsb	31u

	/* 0xB8:  */
	uint32_t volatile HOST_SLCHOST_CONF_W15;
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W15_HOST_SLCHOST_CONF60_Msb	0u
#define SLCHOST_HOST_SLCHOST_CONF_W15_HOST_SLCHOST_CONF60_Lsb	7u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W15_HOST_SLCHOST_CONF61_Msb	8u
#define SLCHOST_HOST_SLCHOST_CONF_W15_HOST_SLCHOST_CONF61_Lsb	15u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W15_HOST_SLCHOST_CONF62_Msb	16u
#define SLCHOST_HOST_SLCHOST_CONF_W15_HOST_SLCHOST_CONF62_Lsb	23u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_W15_HOST_SLCHOST_CONF63_Msb	24u
#define SLCHOST_HOST_SLCHOST_CONF_W15_HOST_SLCHOST_CONF63_Lsb	31u

	/* 0xBC:  */
	uint32_t volatile HOST_SLCHOST_CHECK_SUM0;
	/*  */
#define SLCHOST_HOST_SLCHOST_CHECK_SUM0_HOST_SLCHOST_CHECK_SUM0_Msb	0u
#define SLCHOST_HOST_SLCHOST_CHECK_SUM0_HOST_SLCHOST_CHECK_SUM0_Lsb	31u

	/* 0xC0:  */
	uint32_t volatile HOST_SLCHOST_CHECK_SUM1;
	/*  */
#define SLCHOST_HOST_SLCHOST_CHECK_SUM1_HOST_SLCHOST_CHECK_SUM1_Msb	0u
#define SLCHOST_HOST_SLCHOST_CHECK_SUM1_HOST_SLCHOST_CHECK_SUM1_Lsb	31u

	/* 0xC4:  */
	uint32_t volatile HOST_SLC1HOST_TOKEN_RDATA;
	/*  */
#define SLCHOST_HOST_SLC1HOST_TOKEN_RDATA_HOST_SLC1_TOKEN0_Msb	0u
#define SLCHOST_HOST_SLC1HOST_TOKEN_RDATA_HOST_SLC1_TOKEN0_Lsb	11u
	/*  */
#define SLCHOST_HOST_SLC1HOST_TOKEN_RDATA_HOST_SLC1_RX_PF_VALID	12u
	/*  */
#define SLCHOST_HOST_SLC1HOST_TOKEN_RDATA_HOST_HOSTSLC1_TOKEN1_Msb	16u
#define SLCHOST_HOST_SLC1HOST_TOKEN_RDATA_HOST_HOSTSLC1_TOKEN1_Lsb	27u
	/*  */
#define SLCHOST_HOST_SLC1HOST_TOKEN_RDATA_HOST_SLC1_RX_PF_EOF_Msb	28u
#define SLCHOST_HOST_SLC1HOST_TOKEN_RDATA_HOST_SLC1_RX_PF_EOF_Lsb	31u

	/* 0xC8:  */
	uint32_t volatile HOST_SLC0HOST_TOKEN_WDATA;
	/*  */
#define SLCHOST_HOST_SLC0HOST_TOKEN_WDATA_HOST_SLC0HOST_TOKEN0_WD_Msb	0u
#define SLCHOST_HOST_SLC0HOST_TOKEN_WDATA_HOST_SLC0HOST_TOKEN0_WD_Lsb	11u
	/*  */
#define SLCHOST_HOST_SLC0HOST_TOKEN_WDATA_HOST_SLC0HOST_TOKEN1_WD_Msb	16u
#define SLCHOST_HOST_SLC0HOST_TOKEN_WDATA_HOST_SLC0HOST_TOKEN1_WD_Lsb	27u

	/* 0xCC:  */
	uint32_t volatile HOST_SLC1HOST_TOKEN_WDATA;
	/*  */
#define SLCHOST_HOST_SLC1HOST_TOKEN_WDATA_HOST_SLC1HOST_TOKEN0_WD_Msb	0u
#define SLCHOST_HOST_SLC1HOST_TOKEN_WDATA_HOST_SLC1HOST_TOKEN0_WD_Lsb	11u
	/*  */
#define SLCHOST_HOST_SLC1HOST_TOKEN_WDATA_HOST_SLC1HOST_TOKEN1_WD_Msb	16u
#define SLCHOST_HOST_SLC1HOST_TOKEN_WDATA_HOST_SLC1HOST_TOKEN1_WD_Lsb	27u

	/* 0xD0:  */
	uint32_t volatile HOST_SLCHOST_TOKEN_CON;
	/*  */
#define SLCHOST_HOST_SLCHOST_TOKEN_CON_HOST_SLC0HOST_TOKEN0_DEC	0u
	/*  */
#define SLCHOST_HOST_SLCHOST_TOKEN_CON_HOST_SLC0HOST_TOKEN1_DEC	1u
	/*  */
#define SLCHOST_HOST_SLCHOST_TOKEN_CON_HOST_SLC0HOST_TOKEN0_WR	2u
	/*  */
#define SLCHOST_HOST_SLCHOST_TOKEN_CON_HOST_SLC0HOST_TOKEN1_WR	3u
	/*  */
#define SLCHOST_HOST_SLCHOST_TOKEN_CON_HOST_SLC1HOST_TOKEN0_DEC	4u
	/*  */
#define SLCHOST_HOST_SLCHOST_TOKEN_CON_HOST_SLC1HOST_TOKEN1_DEC	5u
	/*  */
#define SLCHOST_HOST_SLCHOST_TOKEN_CON_HOST_SLC1HOST_TOKEN0_WR	6u
	/*  */
#define SLCHOST_HOST_SLCHOST_TOKEN_CON_HOST_SLC1HOST_TOKEN1_WR	7u
	/*  */
#define SLCHOST_HOST_SLCHOST_TOKEN_CON_HOST_SLC0HOST_LEN_WR	8u

	/* 0xD4:  */
	uint32_t volatile HOST_SLC0HOST_INT_CLR;
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_CLR_HOST_SLC0_TOHOST_BIT0_INT_CLR	0u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_CLR_HOST_SLC0_TOHOST_BIT1_INT_CLR	1u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_CLR_HOST_SLC0_TOHOST_BIT2_INT_CLR	2u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_CLR_HOST_SLC0_TOHOST_BIT3_INT_CLR	3u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_CLR_HOST_SLC0_TOHOST_BIT4_INT_CLR	4u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_CLR_HOST_SLC0_TOHOST_BIT5_INT_CLR	5u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_CLR_HOST_SLC0_TOHOST_BIT6_INT_CLR	6u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_CLR_HOST_SLC0_TOHOST_BIT7_INT_CLR	7u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_CLR_HOST_SLC0_TOKEN0_1TO0_INT_CLR	8u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_CLR_HOST_SLC0_TOKEN1_1TO0_INT_CLR	9u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_CLR_HOST_SLC0_TOKEN0_0TO1_INT_CLR	10u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_CLR_HOST_SLC0_TOKEN1_0TO1_INT_CLR	11u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_CLR_HOST_SLC0HOST_RX_SOF_INT_CLR	12u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_CLR_HOST_SLC0HOST_RX_EOF_INT_CLR	13u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_CLR_HOST_SLC0HOST_RX_START_INT_CLR	14u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_CLR_HOST_SLC0HOST_TX_START_INT_CLR	15u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_CLR_HOST_SLC0_RX_UDF_INT_CLR	16u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_CLR_HOST_SLC0_TX_OVF_INT_CLR	17u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_CLR_HOST_SLC0_RX_PF_VALID_INT_CLR	18u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_CLR_HOST_SLC0_EXT_BIT0_INT_CLR	19u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_CLR_HOST_SLC0_EXT_BIT1_INT_CLR	20u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_CLR_HOST_SLC0_EXT_BIT2_INT_CLR	21u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_CLR_HOST_SLC0_EXT_BIT3_INT_CLR	22u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_CLR_HOST_SLC0_RX_NEW_PACKET_INT_CLR	23u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_CLR_HOST_SLC0_HOST_RD_RETRY_INT_CLR	24u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_CLR_HOST_GPIO_SDIO_INT_CLR	25u

	/* 0xD8:  */
	uint32_t volatile HOST_SLC1HOST_INT_CLR;
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_CLR_HOST_SLC1_TOHOST_BIT0_INT_CLR	0u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_CLR_HOST_SLC1_TOHOST_BIT1_INT_CLR	1u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_CLR_HOST_SLC1_TOHOST_BIT2_INT_CLR	2u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_CLR_HOST_SLC1_TOHOST_BIT3_INT_CLR	3u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_CLR_HOST_SLC1_TOHOST_BIT4_INT_CLR	4u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_CLR_HOST_SLC1_TOHOST_BIT5_INT_CLR	5u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_CLR_HOST_SLC1_TOHOST_BIT6_INT_CLR	6u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_CLR_HOST_SLC1_TOHOST_BIT7_INT_CLR	7u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_CLR_HOST_SLC1_TOKEN0_1TO0_INT_CLR	8u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_CLR_HOST_SLC1_TOKEN1_1TO0_INT_CLR	9u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_CLR_HOST_SLC1_TOKEN0_0TO1_INT_CLR	10u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_CLR_HOST_SLC1_TOKEN1_0TO1_INT_CLR	11u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_CLR_HOST_SLC1HOST_RX_SOF_INT_CLR	12u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_CLR_HOST_SLC1HOST_RX_EOF_INT_CLR	13u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_CLR_HOST_SLC1HOST_RX_START_INT_CLR	14u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_CLR_HOST_SLC1HOST_TX_START_INT_CLR	15u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_CLR_HOST_SLC1_RX_UDF_INT_CLR	16u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_CLR_HOST_SLC1_TX_OVF_INT_CLR	17u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_CLR_HOST_SLC1_RX_PF_VALID_INT_CLR	18u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_CLR_HOST_SLC1_EXT_BIT0_INT_CLR	19u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_CLR_HOST_SLC1_EXT_BIT1_INT_CLR	20u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_CLR_HOST_SLC1_EXT_BIT2_INT_CLR	21u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_CLR_HOST_SLC1_EXT_BIT3_INT_CLR	22u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_CLR_HOST_SLC1_WIFI_RX_NEW_PACKET_INT_CLR	23u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_CLR_HOST_SLC1_HOST_RD_RETRY_INT_CLR	24u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_CLR_HOST_SLC1_BT_RX_NEW_PACKET_INT_CLR	25u

	/* 0xDC:  */
	uint32_t volatile HOST_SLC0HOST_FUNC1_INT_ENA;
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC1_INT_ENA_HOST_FN1_SLC0_TOHOST_BIT0_INT_ENA	0u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC1_INT_ENA_HOST_FN1_SLC0_TOHOST_BIT1_INT_ENA	1u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC1_INT_ENA_HOST_FN1_SLC0_TOHOST_BIT2_INT_ENA	2u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC1_INT_ENA_HOST_FN1_SLC0_TOHOST_BIT3_INT_ENA	3u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC1_INT_ENA_HOST_FN1_SLC0_TOHOST_BIT4_INT_ENA	4u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC1_INT_ENA_HOST_FN1_SLC0_TOHOST_BIT5_INT_ENA	5u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC1_INT_ENA_HOST_FN1_SLC0_TOHOST_BIT6_INT_ENA	6u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC1_INT_ENA_HOST_FN1_SLC0_TOHOST_BIT7_INT_ENA	7u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC1_INT_ENA_HOST_FN1_SLC0_TOKEN0_1TO0_INT_ENA	8u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC1_INT_ENA_HOST_FN1_SLC0_TOKEN1_1TO0_INT_ENA	9u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC1_INT_ENA_HOST_FN1_SLC0_TOKEN0_0TO1_INT_ENA	10u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC1_INT_ENA_HOST_FN1_SLC0_TOKEN1_0TO1_INT_ENA	11u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC1_INT_ENA_HOST_FN1_SLC0HOST_RX_SOF_INT_ENA	12u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC1_INT_ENA_HOST_FN1_SLC0HOST_RX_EOF_INT_ENA	13u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC1_INT_ENA_HOST_FN1_SLC0HOST_RX_START_INT_ENA	14u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC1_INT_ENA_HOST_FN1_SLC0HOST_TX_START_INT_ENA	15u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC1_INT_ENA_HOST_FN1_SLC0_RX_UDF_INT_ENA	16u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC1_INT_ENA_HOST_FN1_SLC0_TX_OVF_INT_ENA	17u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC1_INT_ENA_HOST_FN1_SLC0_RX_PF_VALID_INT_ENA	18u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC1_INT_ENA_HOST_FN1_SLC0_EXT_BIT0_INT_ENA	19u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC1_INT_ENA_HOST_FN1_SLC0_EXT_BIT1_INT_ENA	20u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC1_INT_ENA_HOST_FN1_SLC0_EXT_BIT2_INT_ENA	21u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC1_INT_ENA_HOST_FN1_SLC0_EXT_BIT3_INT_ENA	22u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC1_INT_ENA_HOST_FN1_SLC0_RX_NEW_PACKET_INT_ENA	23u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC1_INT_ENA_HOST_FN1_SLC0_HOST_RD_RETRY_INT_ENA	24u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC1_INT_ENA_HOST_FN1_GPIO_SDIO_INT_ENA	25u

	/* 0xE0:  */
	uint32_t volatile HOST_SLC1HOST_FUNC1_INT_ENA;
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC1_INT_ENA_HOST_FN1_SLC1_TOHOST_BIT0_INT_ENA	0u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC1_INT_ENA_HOST_FN1_SLC1_TOHOST_BIT1_INT_ENA	1u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC1_INT_ENA_HOST_FN1_SLC1_TOHOST_BIT2_INT_ENA	2u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC1_INT_ENA_HOST_FN1_SLC1_TOHOST_BIT3_INT_ENA	3u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC1_INT_ENA_HOST_FN1_SLC1_TOHOST_BIT4_INT_ENA	4u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC1_INT_ENA_HOST_FN1_SLC1_TOHOST_BIT5_INT_ENA	5u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC1_INT_ENA_HOST_FN1_SLC1_TOHOST_BIT6_INT_ENA	6u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC1_INT_ENA_HOST_FN1_SLC1_TOHOST_BIT7_INT_ENA	7u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC1_INT_ENA_HOST_FN1_SLC1_TOKEN0_1TO0_INT_ENA	8u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC1_INT_ENA_HOST_FN1_SLC1_TOKEN1_1TO0_INT_ENA	9u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC1_INT_ENA_HOST_FN1_SLC1_TOKEN0_0TO1_INT_ENA	10u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC1_INT_ENA_HOST_FN1_SLC1_TOKEN1_0TO1_INT_ENA	11u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC1_INT_ENA_HOST_FN1_SLC1HOST_RX_SOF_INT_ENA	12u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC1_INT_ENA_HOST_FN1_SLC1HOST_RX_EOF_INT_ENA	13u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC1_INT_ENA_HOST_FN1_SLC1HOST_RX_START_INT_ENA	14u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC1_INT_ENA_HOST_FN1_SLC1HOST_TX_START_INT_ENA	15u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC1_INT_ENA_HOST_FN1_SLC1_RX_UDF_INT_ENA	16u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC1_INT_ENA_HOST_FN1_SLC1_TX_OVF_INT_ENA	17u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC1_INT_ENA_HOST_FN1_SLC1_RX_PF_VALID_INT_ENA	18u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC1_INT_ENA_HOST_FN1_SLC1_EXT_BIT0_INT_ENA	19u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC1_INT_ENA_HOST_FN1_SLC1_EXT_BIT1_INT_ENA	20u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC1_INT_ENA_HOST_FN1_SLC1_EXT_BIT2_INT_ENA	21u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC1_INT_ENA_HOST_FN1_SLC1_EXT_BIT3_INT_ENA	22u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC1_INT_ENA_HOST_FN1_SLC1_WIFI_RX_NEW_PACKET_INT_ENA	23u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC1_INT_ENA_HOST_FN1_SLC1_HOST_RD_RETRY_INT_ENA	24u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC1_INT_ENA_HOST_FN1_SLC1_BT_RX_NEW_PACKET_INT_ENA	25u

	/* 0xE4:  */
	uint32_t volatile HOST_SLC0HOST_FUNC2_INT_ENA;
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC2_INT_ENA_HOST_FN2_SLC0_TOHOST_BIT0_INT_ENA	0u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC2_INT_ENA_HOST_FN2_SLC0_TOHOST_BIT1_INT_ENA	1u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC2_INT_ENA_HOST_FN2_SLC0_TOHOST_BIT2_INT_ENA	2u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC2_INT_ENA_HOST_FN2_SLC0_TOHOST_BIT3_INT_ENA	3u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC2_INT_ENA_HOST_FN2_SLC0_TOHOST_BIT4_INT_ENA	4u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC2_INT_ENA_HOST_FN2_SLC0_TOHOST_BIT5_INT_ENA	5u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC2_INT_ENA_HOST_FN2_SLC0_TOHOST_BIT6_INT_ENA	6u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC2_INT_ENA_HOST_FN2_SLC0_TOHOST_BIT7_INT_ENA	7u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC2_INT_ENA_HOST_FN2_SLC0_TOKEN0_1TO0_INT_ENA	8u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC2_INT_ENA_HOST_FN2_SLC0_TOKEN1_1TO0_INT_ENA	9u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC2_INT_ENA_HOST_FN2_SLC0_TOKEN0_0TO1_INT_ENA	10u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC2_INT_ENA_HOST_FN2_SLC0_TOKEN1_0TO1_INT_ENA	11u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC2_INT_ENA_HOST_FN2_SLC0HOST_RX_SOF_INT_ENA	12u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC2_INT_ENA_HOST_FN2_SLC0HOST_RX_EOF_INT_ENA	13u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC2_INT_ENA_HOST_FN2_SLC0HOST_RX_START_INT_ENA	14u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC2_INT_ENA_HOST_FN2_SLC0HOST_TX_START_INT_ENA	15u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC2_INT_ENA_HOST_FN2_SLC0_RX_UDF_INT_ENA	16u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC2_INT_ENA_HOST_FN2_SLC0_TX_OVF_INT_ENA	17u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC2_INT_ENA_HOST_FN2_SLC0_RX_PF_VALID_INT_ENA	18u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC2_INT_ENA_HOST_FN2_SLC0_EXT_BIT0_INT_ENA	19u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC2_INT_ENA_HOST_FN2_SLC0_EXT_BIT1_INT_ENA	20u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC2_INT_ENA_HOST_FN2_SLC0_EXT_BIT2_INT_ENA	21u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC2_INT_ENA_HOST_FN2_SLC0_EXT_BIT3_INT_ENA	22u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC2_INT_ENA_HOST_FN2_SLC0_RX_NEW_PACKET_INT_ENA	23u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC2_INT_ENA_HOST_FN2_SLC0_HOST_RD_RETRY_INT_ENA	24u
	/*  */
#define SLCHOST_HOST_SLC0HOST_FUNC2_INT_ENA_HOST_FN2_GPIO_SDIO_INT_ENA	25u

	/* 0xE8:  */
	uint32_t volatile HOST_SLC1HOST_FUNC2_INT_ENA;
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC2_INT_ENA_HOST_FN2_SLC1_TOHOST_BIT0_INT_ENA	0u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC2_INT_ENA_HOST_FN2_SLC1_TOHOST_BIT1_INT_ENA	1u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC2_INT_ENA_HOST_FN2_SLC1_TOHOST_BIT2_INT_ENA	2u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC2_INT_ENA_HOST_FN2_SLC1_TOHOST_BIT3_INT_ENA	3u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC2_INT_ENA_HOST_FN2_SLC1_TOHOST_BIT4_INT_ENA	4u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC2_INT_ENA_HOST_FN2_SLC1_TOHOST_BIT5_INT_ENA	5u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC2_INT_ENA_HOST_FN2_SLC1_TOHOST_BIT6_INT_ENA	6u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC2_INT_ENA_HOST_FN2_SLC1_TOHOST_BIT7_INT_ENA	7u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC2_INT_ENA_HOST_FN2_SLC1_TOKEN0_1TO0_INT_ENA	8u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC2_INT_ENA_HOST_FN2_SLC1_TOKEN1_1TO0_INT_ENA	9u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC2_INT_ENA_HOST_FN2_SLC1_TOKEN0_0TO1_INT_ENA	10u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC2_INT_ENA_HOST_FN2_SLC1_TOKEN1_0TO1_INT_ENA	11u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC2_INT_ENA_HOST_FN2_SLC1HOST_RX_SOF_INT_ENA	12u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC2_INT_ENA_HOST_FN2_SLC1HOST_RX_EOF_INT_ENA	13u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC2_INT_ENA_HOST_FN2_SLC1HOST_RX_START_INT_ENA	14u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC2_INT_ENA_HOST_FN2_SLC1HOST_TX_START_INT_ENA	15u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC2_INT_ENA_HOST_FN2_SLC1_RX_UDF_INT_ENA	16u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC2_INT_ENA_HOST_FN2_SLC1_TX_OVF_INT_ENA	17u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC2_INT_ENA_HOST_FN2_SLC1_RX_PF_VALID_INT_ENA	18u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC2_INT_ENA_HOST_FN2_SLC1_EXT_BIT0_INT_ENA	19u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC2_INT_ENA_HOST_FN2_SLC1_EXT_BIT1_INT_ENA	20u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC2_INT_ENA_HOST_FN2_SLC1_EXT_BIT2_INT_ENA	21u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC2_INT_ENA_HOST_FN2_SLC1_EXT_BIT3_INT_ENA	22u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC2_INT_ENA_HOST_FN2_SLC1_WIFI_RX_NEW_PACKET_INT_ENA	23u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC2_INT_ENA_HOST_FN2_SLC1_HOST_RD_RETRY_INT_ENA	24u
	/*  */
#define SLCHOST_HOST_SLC1HOST_FUNC2_INT_ENA_HOST_FN2_SLC1_BT_RX_NEW_PACKET_INT_ENA	25u

	/* 0xEC:  */
	uint32_t volatile HOST_SLC0HOST_INT_ENA;
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA_HOST_SLC0_TOHOST_BIT0_INT_ENA	0u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA_HOST_SLC0_TOHOST_BIT1_INT_ENA	1u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA_HOST_SLC0_TOHOST_BIT2_INT_ENA	2u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA_HOST_SLC0_TOHOST_BIT3_INT_ENA	3u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA_HOST_SLC0_TOHOST_BIT4_INT_ENA	4u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA_HOST_SLC0_TOHOST_BIT5_INT_ENA	5u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA_HOST_SLC0_TOHOST_BIT6_INT_ENA	6u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA_HOST_SLC0_TOHOST_BIT7_INT_ENA	7u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA_HOST_SLC0_TOKEN0_1TO0_INT_ENA	8u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA_HOST_SLC0_TOKEN1_1TO0_INT_ENA	9u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA_HOST_SLC0_TOKEN0_0TO1_INT_ENA	10u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA_HOST_SLC0_TOKEN1_0TO1_INT_ENA	11u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA_HOST_SLC0HOST_RX_SOF_INT_ENA	12u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA_HOST_SLC0HOST_RX_EOF_INT_ENA	13u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA_HOST_SLC0HOST_RX_START_INT_ENA	14u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA_HOST_SLC0HOST_TX_START_INT_ENA	15u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA_HOST_SLC0_RX_UDF_INT_ENA	16u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA_HOST_SLC0_TX_OVF_INT_ENA	17u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA_HOST_SLC0_RX_PF_VALID_INT_ENA	18u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA_HOST_SLC0_EXT_BIT0_INT_ENA	19u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA_HOST_SLC0_EXT_BIT1_INT_ENA	20u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA_HOST_SLC0_EXT_BIT2_INT_ENA	21u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA_HOST_SLC0_EXT_BIT3_INT_ENA	22u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA_HOST_SLC0_RX_NEW_PACKET_INT_ENA	23u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA_HOST_SLC0_HOST_RD_RETRY_INT_ENA	24u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA_HOST_GPIO_SDIO_INT_ENA	25u

	/* 0xF0:  */
	uint32_t volatile HOST_SLC1HOST_INT_ENA;
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA_HOST_SLC1_TOHOST_BIT0_INT_ENA	0u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA_HOST_SLC1_TOHOST_BIT1_INT_ENA	1u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA_HOST_SLC1_TOHOST_BIT2_INT_ENA	2u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA_HOST_SLC1_TOHOST_BIT3_INT_ENA	3u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA_HOST_SLC1_TOHOST_BIT4_INT_ENA	4u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA_HOST_SLC1_TOHOST_BIT5_INT_ENA	5u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA_HOST_SLC1_TOHOST_BIT6_INT_ENA	6u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA_HOST_SLC1_TOHOST_BIT7_INT_ENA	7u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA_HOST_SLC1_TOKEN0_1TO0_INT_ENA	8u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA_HOST_SLC1_TOKEN1_1TO0_INT_ENA	9u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA_HOST_SLC1_TOKEN0_0TO1_INT_ENA	10u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA_HOST_SLC1_TOKEN1_0TO1_INT_ENA	11u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA_HOST_SLC1HOST_RX_SOF_INT_ENA	12u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA_HOST_SLC1HOST_RX_EOF_INT_ENA	13u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA_HOST_SLC1HOST_RX_START_INT_ENA	14u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA_HOST_SLC1HOST_TX_START_INT_ENA	15u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA_HOST_SLC1_RX_UDF_INT_ENA	16u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA_HOST_SLC1_TX_OVF_INT_ENA	17u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA_HOST_SLC1_RX_PF_VALID_INT_ENA	18u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA_HOST_SLC1_EXT_BIT0_INT_ENA	19u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA_HOST_SLC1_EXT_BIT1_INT_ENA	20u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA_HOST_SLC1_EXT_BIT2_INT_ENA	21u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA_HOST_SLC1_EXT_BIT3_INT_ENA	22u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA_HOST_SLC1_WIFI_RX_NEW_PACKET_INT_ENA	23u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA_HOST_SLC1_HOST_RD_RETRY_INT_ENA	24u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA_HOST_SLC1_BT_RX_NEW_PACKET_INT_ENA	25u

	/* 0xF4:  */
	uint32_t volatile HOST_SLC0HOST_RX_INFOR;
	/*  */
#define SLCHOST_HOST_SLC0HOST_RX_INFOR_HOST_SLC0HOST_RX_INFOR_Msb	0u
#define SLCHOST_HOST_SLC0HOST_RX_INFOR_HOST_SLC0HOST_RX_INFOR_Lsb	19u

	/* 0xF8:  */
	uint32_t volatile HOST_SLC1HOST_RX_INFOR;
	/*  */
#define SLCHOST_HOST_SLC1HOST_RX_INFOR_HOST_SLC1HOST_RX_INFOR_Msb	0u
#define SLCHOST_HOST_SLC1HOST_RX_INFOR_HOST_SLC1HOST_RX_INFOR_Lsb	19u

	/* 0xFC:  */
	uint32_t volatile HOST_SLC0HOST_LEN_WD;
	/*  */
#define SLCHOST_HOST_SLC0HOST_LEN_WD_HOST_SLC0HOST_LEN_WD_Msb	0u
#define SLCHOST_HOST_SLC0HOST_LEN_WD_HOST_SLC0HOST_LEN_WD_Lsb	31u

	/* 0x100:  */
	uint32_t volatile HOST_SLC_APBWIN_WDATA;
	/*  */
#define SLCHOST_HOST_SLC_APBWIN_WDATA_HOST_SLC_APBWIN_WDATA_Msb	0u
#define SLCHOST_HOST_SLC_APBWIN_WDATA_HOST_SLC_APBWIN_WDATA_Lsb	31u

	/* 0x104:  */
	uint32_t volatile HOST_SLC_APBWIN_CONF;
	/*  */
#define SLCHOST_HOST_SLC_APBWIN_CONF_HOST_SLC_APBWIN_ADDR_Msb	0u
#define SLCHOST_HOST_SLC_APBWIN_CONF_HOST_SLC_APBWIN_ADDR_Lsb	27u
	/*  */
#define SLCHOST_HOST_SLC_APBWIN_CONF_HOST_SLC_APBWIN_WR		28u
	/*  */
#define SLCHOST_HOST_SLC_APBWIN_CONF_HOST_SLC_APBWIN_START	29u

	/* 0x108:  */
	uint32_t volatile HOST_SLC_APBWIN_RDATA;
	/*  */
#define SLCHOST_HOST_SLC_APBWIN_RDATA_HOST_SLC_APBWIN_RDATA_Msb	0u
#define SLCHOST_HOST_SLC_APBWIN_RDATA_HOST_SLC_APBWIN_RDATA_Lsb	31u

	/* 0x10C:  */
	uint32_t volatile HOST_SLCHOST_RDCLR0;
	/*  */
#define SLCHOST_HOST_SLCHOST_RDCLR0_HOST_SLCHOST_SLC0_BIT7_CLRADDR_Msb	0u
#define SLCHOST_HOST_SLCHOST_RDCLR0_HOST_SLCHOST_SLC0_BIT7_CLRADDR_Lsb	8u
	/*  */
#define SLCHOST_HOST_SLCHOST_RDCLR0_HOST_SLCHOST_SLC0_BIT6_CLRADDR_Msb	9u
#define SLCHOST_HOST_SLCHOST_RDCLR0_HOST_SLCHOST_SLC0_BIT6_CLRADDR_Lsb	17u

	/* 0x110:  */
	uint32_t volatile HOST_SLCHOST_RDCLR1;
	/*  */
#define SLCHOST_HOST_SLCHOST_RDCLR1_HOST_SLCHOST_SLC1_BIT7_CLRADDR_Msb	0u
#define SLCHOST_HOST_SLCHOST_RDCLR1_HOST_SLCHOST_SLC1_BIT7_CLRADDR_Lsb	8u
	/*  */
#define SLCHOST_HOST_SLCHOST_RDCLR1_HOST_SLCHOST_SLC1_BIT6_CLRADDR_Msb	9u
#define SLCHOST_HOST_SLCHOST_RDCLR1_HOST_SLCHOST_SLC1_BIT6_CLRADDR_Lsb	17u

	/* 0x114:  */
	uint32_t volatile HOST_SLC0HOST_INT_ENA1;
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA1_HOST_SLC0_TOHOST_BIT0_INT_ENA1	0u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA1_HOST_SLC0_TOHOST_BIT1_INT_ENA1	1u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA1_HOST_SLC0_TOHOST_BIT2_INT_ENA1	2u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA1_HOST_SLC0_TOHOST_BIT3_INT_ENA1	3u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA1_HOST_SLC0_TOHOST_BIT4_INT_ENA1	4u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA1_HOST_SLC0_TOHOST_BIT5_INT_ENA1	5u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA1_HOST_SLC0_TOHOST_BIT6_INT_ENA1	6u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA1_HOST_SLC0_TOHOST_BIT7_INT_ENA1	7u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA1_HOST_SLC0_TOKEN0_1TO0_INT_ENA1	8u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA1_HOST_SLC0_TOKEN1_1TO0_INT_ENA1	9u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA1_HOST_SLC0_TOKEN0_0TO1_INT_ENA1	10u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA1_HOST_SLC0_TOKEN1_0TO1_INT_ENA1	11u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA1_HOST_SLC0HOST_RX_SOF_INT_ENA1	12u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA1_HOST_SLC0HOST_RX_EOF_INT_ENA1	13u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA1_HOST_SLC0HOST_RX_START_INT_ENA1	14u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA1_HOST_SLC0HOST_TX_START_INT_ENA1	15u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA1_HOST_SLC0_RX_UDF_INT_ENA1	16u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA1_HOST_SLC0_TX_OVF_INT_ENA1	17u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA1_HOST_SLC0_RX_PF_VALID_INT_ENA1	18u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA1_HOST_SLC0_EXT_BIT0_INT_ENA1	19u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA1_HOST_SLC0_EXT_BIT1_INT_ENA1	20u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA1_HOST_SLC0_EXT_BIT2_INT_ENA1	21u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA1_HOST_SLC0_EXT_BIT3_INT_ENA1	22u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA1_HOST_SLC0_RX_NEW_PACKET_INT_ENA1	23u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA1_HOST_SLC0_HOST_RD_RETRY_INT_ENA1	24u
	/*  */
#define SLCHOST_HOST_SLC0HOST_INT_ENA1_HOST_GPIO_SDIO_INT_ENA1	25u

	/* 0x118:  */
	uint32_t volatile HOST_SLC1HOST_INT_ENA1;
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA1_HOST_SLC1_TOHOST_BIT0_INT_ENA1	0u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA1_HOST_SLC1_TOHOST_BIT1_INT_ENA1	1u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA1_HOST_SLC1_TOHOST_BIT2_INT_ENA1	2u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA1_HOST_SLC1_TOHOST_BIT3_INT_ENA1	3u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA1_HOST_SLC1_TOHOST_BIT4_INT_ENA1	4u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA1_HOST_SLC1_TOHOST_BIT5_INT_ENA1	5u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA1_HOST_SLC1_TOHOST_BIT6_INT_ENA1	6u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA1_HOST_SLC1_TOHOST_BIT7_INT_ENA1	7u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA1_HOST_SLC1_TOKEN0_1TO0_INT_ENA1	8u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA1_HOST_SLC1_TOKEN1_1TO0_INT_ENA1	9u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA1_HOST_SLC1_TOKEN0_0TO1_INT_ENA1	10u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA1_HOST_SLC1_TOKEN1_0TO1_INT_ENA1	11u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA1_HOST_SLC1HOST_RX_SOF_INT_ENA1	12u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA1_HOST_SLC1HOST_RX_EOF_INT_ENA1	13u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA1_HOST_SLC1HOST_RX_START_INT_ENA1	14u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA1_HOST_SLC1HOST_TX_START_INT_ENA1	15u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA1_HOST_SLC1_RX_UDF_INT_ENA1	16u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA1_HOST_SLC1_TX_OVF_INT_ENA1	17u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA1_HOST_SLC1_RX_PF_VALID_INT_ENA1	18u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA1_HOST_SLC1_EXT_BIT0_INT_ENA1	19u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA1_HOST_SLC1_EXT_BIT1_INT_ENA1	20u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA1_HOST_SLC1_EXT_BIT2_INT_ENA1	21u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA1_HOST_SLC1_EXT_BIT3_INT_ENA1	22u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA1_HOST_SLC1_WIFI_RX_NEW_PACKET_INT_ENA1	23u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA1_HOST_SLC1_HOST_RD_RETRY_INT_ENA1	24u
	/*  */
#define SLCHOST_HOST_SLC1HOST_INT_ENA1_HOST_SLC1_BT_RX_NEW_PACKET_INT_ENA1	25u

	/* 0x138 */
	uint8_t RESERVED0[0x178-0x138];

	/* 0x178:  */
	uint32_t volatile HOST_SLCHOSTDATE;
	/*  */
#define SLCHOST_HOST_SLCHOSTDATE_HOST_SLCHOST_DATE_Msb		0u
#define SLCHOST_HOST_SLCHOSTDATE_HOST_SLCHOST_DATE_Lsb		31u

	/* 0x17C:  */
	uint32_t volatile HOST_SLCHOSTID;
	/*  */
#define SLCHOST_HOST_SLCHOSTID_HOST_SLCHOST_ID_Msb		0u
#define SLCHOST_HOST_SLCHOSTID_HOST_SLCHOST_ID_Lsb		31u

	/* 0x19C */
	uint8_t RESERVED1[0x1F0-0x19C];

	/* 0x1F0:  */
	uint32_t volatile HOST_SLCHOST_CONF;
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_HOST_FRC_SDIO11_Msb		0u
#define SLCHOST_HOST_SLCHOST_CONF_HOST_FRC_SDIO11_Lsb		4u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_HOST_FRC_SDIO20_Msb		5u
#define SLCHOST_HOST_SLCHOST_CONF_HOST_FRC_SDIO20_Lsb		9u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_HOST_FRC_NEG_SAMP_Msb		10u
#define SLCHOST_HOST_SLCHOST_CONF_HOST_FRC_NEG_SAMP_Lsb		14u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_HOST_FRC_POS_SAMP_Msb		15u
#define SLCHOST_HOST_SLCHOST_CONF_HOST_FRC_POS_SAMP_Lsb		19u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_HOST_FRC_QUICK_IN_Msb		20u
#define SLCHOST_HOST_SLCHOST_CONF_HOST_FRC_QUICK_IN_Lsb		24u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_HOST_SDIO20_INT_DELAY		25u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_HOST_SDIO_PAD_PULLUP		26u
	/*  */
#define SLCHOST_HOST_SLCHOST_CONF_HOST_HSPEED_CON_EN		27u

	/* 0x1F4:  */
	uint32_t volatile HOST_SLCHOST_INF_ST;
	/*  */
#define SLCHOST_HOST_SLCHOST_INF_ST_HOST_SDIO20_MODE_Msb	0u
#define SLCHOST_HOST_SLCHOST_INF_ST_HOST_SDIO20_MODE_Lsb	4u
	/*  */
#define SLCHOST_HOST_SLCHOST_INF_ST_HOST_SDIO_NEG_SAMP_Msb	5u
#define SLCHOST_HOST_SLCHOST_INF_ST_HOST_SDIO_NEG_SAMP_Lsb	9u
	/*  */
#define SLCHOST_HOST_SLCHOST_INF_ST_HOST_SDIO_QUICK_IN_Msb	10u
#define SLCHOST_HOST_SLCHOST_INF_ST_HOST_SDIO_QUICK_IN_Lsb	14u

};


#define SPI0 ((struct mcu_spi0 *)0x3FF43000)

struct mcu_spi0 {

	/* 0x00:  */
	uint32_t volatile CMD;
	/* program erase resume bit  program erase suspend operation will be triggered when the bit is set. */
#define SPI0_CMD_FLASH_PER					16u
	/* program erase suspend bit  program erase suspend operation will be triggered when the bit is set. */
#define SPI0_CMD_FLASH_PES					17u
	/* User define command enable. */
#define SPI0_CMD_USR						18u
	/* Drive Flash into high performance mode. */
#define SPI0_CMD_FLASH_HPM					19u
	/* This bit combined with reg_resandres bit releases Flash from the power-down state or high performance mode and obtains the devices ID. */
#define SPI0_CMD_FLASH_RES					20u
	/* Drive Flash into power down. */
#define SPI0_CMD_FLASH_DP					21u
	/* Chip erase enable. */
#define SPI0_CMD_FLASH_CE					22u
	/* Block erase enable. */
#define SPI0_CMD_FLASH_BE					23u
	/* Sector erase enable. */
#define SPI0_CMD_FLASH_SE					24u
	/* Page program enable(1 byte ~256 bytes data to be programmed). */
#define SPI0_CMD_FLASH_PP					25u
	/* Write status register enable. */
#define SPI0_CMD_FLASH_WRSR					26u
	/* Read status register-1. */
#define SPI0_CMD_FLASH_RDSR					27u
	/* Read JEDEC ID . */
#define SPI0_CMD_FLASH_RDID					28u
	/* Write flash disable. */
#define SPI0_CMD_FLASH_WRDI					29u
	/* Write flash enable. */
#define SPI0_CMD_FLASH_WREN					30u
	/* Read flash enable. */
#define SPI0_CMD_FLASH_READ					31u

	/* 0x04:  */
	uint32_t volatile ADDR;

	/* 0x08:  */
	uint32_t volatile CTRL;
	/* For SPI1  initialize crc32 module before writing encrypted data to flash. */
#define SPI0_CTRL_FCS_CRC_EN					10u
	/* For SPI1  enable crc32 when writing encrypted data to flash. */
#define SPI0_CTRL_TX_CRC_EN					11u
	/* wait flash idle when program flash or erase flash. */
#define SPI0_CTRL_WAIT_FLASH_IDLE_EN				12u
	/* This bit enable the bits: spi_fread_qio  spi_fread_dio  spi_fread_qout and spi_fread_dout. */
#define SPI0_CTRL_FASTRD_MODE					13u
	/* In the read operations  read-data phase apply 2 signals. */
#define SPI0_CTRL_FREAD_DUAL					14u
	/* The Device ID is read out to SPI_RD_STATUS register, this bit combine with spi_flash_res bit. */
#define SPI0_CTRL_RESANDRES					15u
	/* In the read operations read-data phase apply 4 signals. */
#define SPI0_CTRL_FREAD_QUAD					20u
	/* Write protect signal output when SPI is idle. */
#define SPI0_CTRL_WP						21u
	/* two bytes data will be written to status register when it is set. */
#define SPI0_CTRL_WRSR_2B					22u
	/* In the read operations address phase and read-data phase apply 2 signals. */
#define SPI0_CTRL_FREAD_DIO					23u
	/* In the read operations address phase and read-data phase apply 4 signals. */
#define SPI0_CTRL_FREAD_QIO					24u
	/* In read-data (MISO) phase 1: LSB first 0: MSB first */
#define SPI0_CTRL_RD_BIT_ORDER					25u
	/* In command address write-data (MOSI) phases 1: LSB firs 0: MSB first */
#define SPI0_CTRL_WR_BIT_ORDER					26u

	/* 0x0C:  */
	uint32_t volatile CTRL1;
	/* Delay cycles of resume Flash when resume Flash is enable by spi clock. */
#define SPI0_CTRL1_CS_HOLD_DELAY_RES_Msb			16u
#define SPI0_CTRL1_CS_HOLD_DELAY_RES_Lsb			27u
	/* SPI cs signal is delayed by spi clock cycles */
#define SPI0_CTRL1_CS_HOLD_DELAY_Msb				28u
#define SPI0_CTRL1_CS_HOLD_DELAY_Lsb				31u

	/* 0x10:  */
	uint32_t volatile RD_STATUS;
	/* In the slave mode, it is the status for master to read out. */
#define SPI0_RD_STATUS_STATUS_Msb				0u
#define SPI0_RD_STATUS_STATUS_Lsb				15u
	/* Mode bits in the flash fast read mode, it is combined with spi_fastrd_mode bit. */
#define SPI0_RD_STATUS_WB_MODE_Msb				16u
#define SPI0_RD_STATUS_WB_MODE_Lsb				23u
	/* In the slave mode,it is the status for master to read out. */
#define SPI0_RD_STATUS_STATUS_EXT_Msb				24u
#define SPI0_RD_STATUS_STATUS_EXT_Lsb				31u

	/* 0x14:  */
	uint32_t volatile CTRL2;
	/* (cycles-1) of ¡°prepare¡± phase by spi clock, this bits combined with spi_cs_setup bit. */
#define SPI0_CTRL2_SETUP_TIME_Msb				0u
#define SPI0_CTRL2_SETUP_TIME_Lsb				3u
	/* delay cycles of cs pin by spi clock, this bits combined with spi_cs_hold bit. */
#define SPI0_CTRL2_HOLD_TIME_Msb				4u
#define SPI0_CTRL2_HOLD_TIME_Lsb				7u
	/* modify spi clock duty ratio when the value is lager than 8, the bits are combined with spi_clkcnt_N bits and spi_clkcnt_L bits. */
#define SPI0_CTRL2_CK_OUT_LOW_MODE_Msb				8u
#define SPI0_CTRL2_CK_OUT_LOW_MODE_Lsb				11u
	/* modify spi clock duty ratio when the value is lager than 8, the bits are combined with spi_clkcnt_N bits and spi_clkcnt_H bits. */
#define SPI0_CTRL2_CK_OUT_HIGH_MODE_Msb				12u
#define SPI0_CTRL2_CK_OUT_HIGH_MODE_Lsb				15u
	/* MISO signals are delayed by spi_clk. */
#define SPI0_CTRL2_MISO_DELAY_MODE_Msb				16u
#define SPI0_CTRL2_MISO_DELAY_MODE_Lsb				17u
	/* MISO signals are delayed by system clock cycles */
#define SPI0_CTRL2_MISO_DELAY_NUM_Msb				18u
#define SPI0_CTRL2_MISO_DELAY_NUM_Lsb				20u
	/* MOSI signals are delayed by spi_clk. */
#define SPI0_CTRL2_MOSI_DELAY_MODE_Msb				21u
#define SPI0_CTRL2_MOSI_DELAY_MODE_Lsb				22u
	/* MOSI signals are delayed by system clock cycles */
#define SPI0_CTRL2_MOSI_DELAY_NUM_Msb				23u
#define SPI0_CTRL2_MOSI_DELAY_NUM_Lsb				25u
	/* spi_cs signal is delayed by spi_clk . */
#define SPI0_CTRL2_CS_DELAY_MODE_Msb				26u
#define SPI0_CTRL2_CS_DELAY_MODE_Lsb				27u
	/* spi_cs signal is delayed by system clock cycles */
#define SPI0_CTRL2_CS_DELAY_NUM_Msb				28u
#define SPI0_CTRL2_CS_DELAY_NUM_Lsb				31u

	/* 0x18:  */
	uint32_t volatile CLOCK;
	/* In the master mode it must be equal to spi_clkcnt_N. */
#define SPI0_CLOCK_CLKCNT_L_Msb					0u
#define SPI0_CLOCK_CLKCNT_L_Lsb					5u
	/* In the master mode it must be floor((spi_clkcnt_N+1)/2-1). */
#define SPI0_CLOCK_CLKCNT_H_Msb					6u
#define SPI0_CLOCK_CLKCNT_H_Lsb					11u
	/* In the master mode it is the divider of spi_clk. So spi_clk frequency is system/(spi_clkdiv_pre+1)/(spi_clkcnt_N+1) */
#define SPI0_CLOCK_CLKCNT_N_Msb					12u
#define SPI0_CLOCK_CLKCNT_N_Lsb					17u
	/* In the master mode it is pre-divider of spi_clk. */
#define SPI0_CLOCK_CLKDIV_PRE_Msb				18u
#define SPI0_CLOCK_CLKDIV_PRE_Lsb				30u
	/* In the master mode 1: spi_clk is eqaul to system 0: spi_clk is divided from system clock. */
#define SPI0_CLOCK_CLK_EQU_SYSCLK				31u

	/* 0x1C:  */
	uint32_t volatile USER;
	/* Set the bit to enable full duplex communication. */
#define SPI0_USER_DOUTDIN					0u
	/* spi cs keep low when spi is in ¡°done¡± phase. */
#define SPI0_USER_CS_HOLD					4u
	/* spi cs is enable when spi is in ¡°prepare¡± phase. */
#define SPI0_USER_CS_SETUP					5u
	/* In the slave mode  the bit is same as spi_ck_out_edge in master mode. */
#define SPI0_USER_CK_I_EDGE					6u
	/* the bit combined with spi_mosi_delay_mode bits to set mosi signal delay mode. */
#define SPI0_USER_CK_OUT_EDGE					7u
	/* In read-data (MISO) phase 1: big-endian 0: little_endian */
#define SPI0_USER_RD_BYTE_ORDER					10u
	/* In command address write-data (MOSI) phases 1: big-endian 0: litte_endian */
#define SPI0_USER_WR_BYTE_ORDER					11u
	/* In the write operations read-data phase apply 2 signals */
#define SPI0_USER_FWRITE_DUAL					12u
	/* In the write operations read-data phase apply 4 signals */
#define SPI0_USER_FWRITE_QUAD					13u
	/* In the write operations address phase and read-data phase apply 2 signals. */
#define SPI0_USER_FWRITE_DIO					14u
	/* In the write operations address phase and read-data phase apply 4 signals. */
#define SPI0_USER_FWRITE_QIO					15u
	/* Set the bit to enable 3-line half duplex communication  mosi and miso signals share the same pin. */
#define SPI0_USER_SIO						16u
	/* It is combined with hold bits to set the polarity of spi hold line  1: spi will be held when spi hold line is high  0: spi will be held when spi hold line is low */
#define SPI0_USER_USR_HOLD_POL					17u
	/* spi is hold at data out state  the bit combined with spi_usr_hold_pol bit. */
#define SPI0_USER_USR_DOUT_HOLD					18u
	/* spi is hold at data in state  the bit combined with spi_usr_hold_pol bit. */
#define SPI0_USER_USR_DIN_HOLD					19u
	/* spi is hold at dummy state  the bit combined with spi_usr_hold_pol bit. */
#define SPI0_USER_USR_DUMMY_HOLD				20u
	/* spi is hold at address state  the bit combined with spi_usr_hold_pol bit. */
#define SPI0_USER_USR_ADDR_HOLD					21u
	/* spi is hold at command state  the bit combined with spi_usr_hold_pol bit. */
#define SPI0_USER_USR_CMD_HOLD					22u
	/* spi is hold at prepare state  the bit combined with spi_usr_hold_pol bit. */
#define SPI0_USER_USR_PREP_HOLD					23u
	/* read-data phase only access to high-part of the buffer spi_w8~spi_w15. */
#define SPI0_USER_USR_MISO_HIGHPART				24u
	/* write-data phase only access to high-part of the buffer spi_w8~spi_w15. */
#define SPI0_USER_USR_MOSI_HIGHPART				25u
	/* spi clock is disable in dummy phase when the bit is enable. */
#define SPI0_USER_USR_DUMMY_IDLE				26u
	/* This bit enable the write-data phase of an operation. */
#define SPI0_USER_USR_MOSI					27u
	/* This bit enable the read-data phase of an operation. */
#define SPI0_USER_USR_MISO					28u
	/* This bit enable the dummy phase of an operation. */
#define SPI0_USER_USR_DUMMY					29u
	/* This bit enable the address phase of an operation. */
#define SPI0_USER_USR_ADDR					30u
	/* This bit enable the command phase of an operation. */
#define SPI0_USER_USR_COMMAND					31u

	/* 0x20:  */
	uint32_t volatile USER1;
	/* The length in spi_clk cycles of dummy phase. The register value shall be (cycle_num-1). */
#define SPI0_USER1_USR_DUMMY_CYCLELEN_Msb			0u
#define SPI0_USER1_USR_DUMMY_CYCLELEN_Lsb			7u
	/* The length in bits of address phase. The register value shall be (bit_num-1). */
#define SPI0_USER1_USR_ADDR_BITLEN_Msb				26u
#define SPI0_USER1_USR_ADDR_BITLEN_Lsb				31u

	/* 0x24:  */
	uint32_t volatile USER2;
	/* The value of  command. */
#define SPI0_USER2_USR_COMMAND_VALUE_Msb			0u
#define SPI0_USER2_USR_COMMAND_VALUE_Lsb			15u
	/* The length in bits of command phase. The register value shall be (bit_num-1) */
#define SPI0_USER2_USR_COMMAND_BITLEN_Msb			28u
#define SPI0_USER2_USR_COMMAND_BITLEN_Lsb			31u

	/* 0x28:  */
	uint32_t volatile MOSI_DLEN;
	/* The length in bits of write-data. The register value shall be (bit_num-1). */
#define SPI0_MOSI_DLEN_USR_MOSI_DBITLEN_Msb			0u
#define SPI0_MOSI_DLEN_USR_MOSI_DBITLEN_Lsb			23u

	/* 0x2C:  */
	uint32_t volatile MISO_DLEN;
	/* The length in bits of  read-data. The register value shall be (bit_num-1). */
#define SPI0_MISO_DLEN_USR_MISO_DBITLEN_Msb			0u
#define SPI0_MISO_DLEN_USR_MISO_DBITLEN_Lsb			23u

	/* 0x30:  */
	uint32_t volatile SLV_WR_STATUS;
	/* In the slave mode this register are the status register for the master to write into. */
#define SPI0_SLV_WR_STATUS_SLV_WR_ST_Msb			0u
#define SPI0_SLV_WR_STATUS_SLV_WR_ST_Lsb			31u

	/* 0x34:  */
	uint32_t volatile PIN;
	/* SPI CS0 pin enable, 1: disable CS0, 0: spi_cs0 signal is from/to CS0 pin */
#define SPI0_PIN_CS0_DIS					0u
	/* SPI CS1 pin enable, 1: disable CS1, 0: spi_cs1 signal is from/to CS1 pin */
#define SPI0_PIN_CS1_DIS					1u
	/* SPI CS2 pin enable, 1: disable CS2, 0: spi_cs2 signal is from/to CS2 pin */
#define SPI0_PIN_CS2_DIS					2u
	/* 1: spi clk out disable  0: spi clk out enable */
#define SPI0_PIN_CK_DIS						5u
	/* In the master mode  the bits are the polarity of spi cs line  the value is equivalent to spi_cs ^ spi_master_cs_pol. */
#define SPI0_PIN_MASTER_CS_POL_Msb				6u
#define SPI0_PIN_MASTER_CS_POL_Lsb				8u
	/* In the master mode  spi cs line is enable as spi clk  it is combined with spi_cs0_dis spi_cs1_dis spi_cs2_dis. */
#define SPI0_PIN_MASTER_CK_SEL_Msb				11u
#define SPI0_PIN_MASTER_CK_SEL_Lsb				13u
	/* 1: spi clk line is high when idle     0: spi clk line is low when idle */
#define SPI0_PIN_CK_IDLE_EDGE					29u
	/* spi cs line keep low when the bit is set. */
#define SPI0_PIN_CS_KEEP_ACTIVE					30u

	/* 0x38:  */
	uint32_t volatile SLAVE;
	/* The interrupt raw bit for the completion of read-buffer operation in the slave mode. */
#define SPI0_SLAVE_SLV_RD_BUF_DONE				0u
	/* The interrupt raw bit for the completion of write-buffer operation in the slave mode. */
#define SPI0_SLAVE_SLV_WR_BUF_DONE				1u
	/* The interrupt raw bit for the completion of read-status operation in the slave mode. */
#define SPI0_SLAVE_SLV_RD_STA_DONE				2u
	/* The interrupt raw bit for the completion of write-status operation in the slave mode. */
#define SPI0_SLAVE_SLV_WR_STA_DONE				3u
	/* The interrupt raw bit for the completion of any operation in both the master mode and the slave mode. */
#define SPI0_SLAVE_TRANS_DONE					4u
	/* Interrupt enable bits for the below 5 sources */
#define SPI0_SLAVE_INT_EN_Msb					5u
#define SPI0_SLAVE_INT_EN_Lsb					9u
	/* In the slave mode  this bits used to synchronize the input spi cs signal and eliminate spi cs  jitter. */
#define SPI0_SLAVE_CS_I_MODE_Msb				10u
#define SPI0_SLAVE_CS_I_MODE_Lsb				11u
	/* In the slave mode it is the value of command. */
#define SPI0_SLAVE_SLV_LAST_COMMAND_Msb				17u
#define SPI0_SLAVE_SLV_LAST_COMMAND_Lsb				19u
	/* In the slave mode it is the state of spi state machine. */
#define SPI0_SLAVE_SLV_LAST_STATE_Msb				20u
#define SPI0_SLAVE_SLV_LAST_STATE_Lsb				22u
	/* The operations counter in both the master mode and the slave mode. */
#define SPI0_SLAVE_TRANS_CNT_Msb				23u
#define SPI0_SLAVE_TRANS_CNT_Lsb				26u
	/* 1: slave mode commands are defined in SPI_SLAVE3. */
#define SPI0_SLAVE_SLV_CMD_DEFINE				27u
	/* write and read status enable  in the slave mode */
#define SPI0_SLAVE_SLV_WR_RD_STA_EN				28u
	/* write and read buffer enable in the slave mode */
#define SPI0_SLAVE_SLV_WR_RD_BUF_EN				29u
	/* 1: slave mode 0: master mode. */
#define SPI0_SLAVE_MODE						30u
	/* Software reset enable, reset the spi clock line cs line and data lines. */
#define SPI0_SLAVE_SYNC_RESET					31u

	/* 0x3C:  */
	uint32_t volatile SLAVE1;
	/* In the slave mode it is the enable bit of dummy phase for read-buffer operations. */
#define SPI0_SLAVE1_SLV_RDBUF_DUMMY_EN				0u
	/* In the slave mode it is the enable bit of dummy phase for write-buffer operations. */
#define SPI0_SLAVE1_SLV_WRBUF_DUMMY_EN				1u
	/* In the slave mode it is the enable bit of dummy phase for read-status operations. */
#define SPI0_SLAVE1_SLV_RDSTA_DUMMY_EN				2u
	/* In the slave mode it is the enable bit of dummy phase for write-status operations. */
#define SPI0_SLAVE1_SLV_WRSTA_DUMMY_EN				3u
	/* In the slave mode it is the address length in bits for write-buffer operation. The register value shall be (bit_num-1). */
#define SPI0_SLAVE1_SLV_WR_ADDR_BITLEN_Msb			4u
#define SPI0_SLAVE1_SLV_WR_ADDR_BITLEN_Lsb			9u
	/* In the slave mode it is the address length in bits for read-buffer operation. The register value shall be (bit_num-1). */
#define SPI0_SLAVE1_SLV_RD_ADDR_BITLEN_Msb			10u
#define SPI0_SLAVE1_SLV_RD_ADDR_BITLEN_Lsb			15u
	/* In the slave mode  1:read register of SPI_SLV_WR_STATUS  0: read register of SPI_RD_STATUS. */
#define SPI0_SLAVE1_SLV_STATUS_READBACK				25u
	/* In the slave mode enable fast read status. */
#define SPI0_SLAVE1_SLV_STATUS_FAST_EN				26u
	/* In the slave mode it is the length of status bit. */
#define SPI0_SLAVE1_SLV_STATUS_BITLEN_Msb			27u
#define SPI0_SLAVE1_SLV_STATUS_BITLEN_Lsb			31u

	/* 0x40:  */
	uint32_t volatile SLAVE2;
	/* In the slave mode it is the length in spi_clk cycles of dummy phase for read-status operations. The register value shall be (cycle_num-1). */
#define SPI0_SLAVE2_SLV_RDSTA_DUMMY_CYCLELEN_Msb		0u
#define SPI0_SLAVE2_SLV_RDSTA_DUMMY_CYCLELEN_Lsb		7u
	/* In the slave mode it is the length in spi_clk cycles of dummy phase for write-status operations. The register value shall be (cycle_num-1). */
#define SPI0_SLAVE2_SLV_WRSTA_DUMMY_CYCLELEN_Msb		8u
#define SPI0_SLAVE2_SLV_WRSTA_DUMMY_CYCLELEN_Lsb		15u
	/* In the slave mode it is the length in spi_clk cycles of dummy phase for read-buffer operations. The register value shall be (cycle_num-1). */
#define SPI0_SLAVE2_SLV_RDBUF_DUMMY_CYCLELEN_Msb		16u
#define SPI0_SLAVE2_SLV_RDBUF_DUMMY_CYCLELEN_Lsb		23u
	/* In the slave mode it is the length in spi_clk cycles of dummy phase for write-buffer operations. The register value shall be (cycle_num-1). */
#define SPI0_SLAVE2_SLV_WRBUF_DUMMY_CYCLELEN_Msb		24u
#define SPI0_SLAVE2_SLV_WRBUF_DUMMY_CYCLELEN_Lsb		31u

	/* 0x44:  */
	uint32_t volatile SLAVE3;
	/* In the slave mode it is the value of read-buffer command. */
#define SPI0_SLAVE3_SLV_RDBUF_CMD_VALUE_Msb			0u
#define SPI0_SLAVE3_SLV_RDBUF_CMD_VALUE_Lsb			7u
	/* In the slave mode it is the value of write-buffer command. */
#define SPI0_SLAVE3_SLV_WRBUF_CMD_VALUE_Msb			8u
#define SPI0_SLAVE3_SLV_WRBUF_CMD_VALUE_Lsb			15u
	/* In the slave mode it is the value of read-status command. */
#define SPI0_SLAVE3_SLV_RDSTA_CMD_VALUE_Msb			16u
#define SPI0_SLAVE3_SLV_RDSTA_CMD_VALUE_Lsb			23u
	/* In the slave mode it is the value of write-status command. */
#define SPI0_SLAVE3_SLV_WRSTA_CMD_VALUE_Msb			24u
#define SPI0_SLAVE3_SLV_WRSTA_CMD_VALUE_Lsb			31u

	/* 0x48:  */
	uint32_t volatile SLV_WRBUF_DLEN;
	/* In the slave mode it is the length in bits for write-buffer operations. The register value shall be (bit_num-1). */
#define SPI0_SLV_WRBUF_DLEN_SLV_WRBUF_DBITLEN_Msb		0u
#define SPI0_SLV_WRBUF_DLEN_SLV_WRBUF_DBITLEN_Lsb		23u

	/* 0x4C:  */
	uint32_t volatile SLV_RDBUF_DLEN;
	/* In the slave mode it is the length in bits for read-buffer operations. The register value shall be (bit_num-1). */
#define SPI0_SLV_RDBUF_DLEN_SLV_RDBUF_DBITLEN_Msb		0u
#define SPI0_SLV_RDBUF_DLEN_SLV_RDBUF_DBITLEN_Lsb		23u

	/* 0x50:  */
	uint32_t volatile CACHE_FCTRL;
	/* For SPI0  Cache access enable  1: enable  0:disable. */
#define SPI0_CACHE_FCTRL_CACHE_REQ_EN				0u
	/* For SPI0  cache  read flash with 4 bytes command  1: enable  0:disable. */
#define SPI0_CACHE_FCTRL_CACHE_USR_CMD_4BYTE			1u
	/* For SPI0  cache  read flash for user define command  1: enable  0:disable. */
#define SPI0_CACHE_FCTRL_CACHE_FLASH_USR_CMD			2u
	/* For SPI0  spi1 send suspend command before cache read flash 1: enable  0:disable. */
#define SPI0_CACHE_FCTRL_CACHE_FLASH_PES_EN			3u

	/* 0x54:  */
	uint32_t volatile CACHE_SCTRL;
	/* For SPI0  In the spi sram mode  spi dual I/O mode enable  1: enable  0:disable */
#define SPI0_CACHE_SCTRL_USR_SRAM_DIO				1u
	/* For SPI0  In the spi sram mode  spi quad I/O mode enable  1: enable  0:disable */
#define SPI0_CACHE_SCTRL_USR_SRAM_QIO				2u
	/* For SPI0  In the spi sram mode  it is the enable bit of dummy phase for write operations. */
#define SPI0_CACHE_SCTRL_USR_WR_SRAM_DUMMY			3u
	/* For SPI0  In the spi sram mode  it is the enable bit of dummy phase for read operations. */
#define SPI0_CACHE_SCTRL_USR_RD_SRAM_DUMMY			4u
	/* For SPI0  In the spi sram mode cache read sram for user define command. */
#define SPI0_CACHE_SCTRL_CACHE_SRAM_USR_RCMD			5u
	/* For SPI0  In the sram mode  it is the byte length of spi read sram data. */
#define SPI0_CACHE_SCTRL_SRAM_BYTES_LEN_Msb			6u
#define SPI0_CACHE_SCTRL_SRAM_BYTES_LEN_Lsb			13u
	/* For SPI0  In the sram mode  it is the length in bits of address phase. The register value shall be (bit_num-1). */
#define SPI0_CACHE_SCTRL_SRAM_DUMMY_CYCLELEN_Msb		14u
#define SPI0_CACHE_SCTRL_SRAM_DUMMY_CYCLELEN_Lsb		21u
	/* For SPI0  In the sram mode  it is the length in bits of address phase. The register value shall be (bit_num-1). */
#define SPI0_CACHE_SCTRL_SRAM_ADDR_BITLEN_Msb			22u
#define SPI0_CACHE_SCTRL_SRAM_ADDR_BITLEN_Lsb			27u
	/* For SPI0  In the spi sram mode cache write sram for user define command */
#define SPI0_CACHE_SCTRL_CACHE_SRAM_USR_WCMD			28u

	/* 0x58:  */
	uint32_t volatile SRAM_CMD;
	/* For SPI0 SRAM DIO mode enable . */
#define SPI0_SRAM_CMD_SRAM_DIO					0u
	/* For SPI0 SRAM QIO mode enable . */
#define SPI0_SRAM_CMD_SRAM_QIO					1u
	/* For SPI0 SRAM IO mode reset enable. */
#define SPI0_SRAM_CMD_SRAM_RSTIO				4u

	/* 0x5C:  */
	uint32_t volatile SRAM_DRD_CMD;
	/* For SPI0 When cache mode is enable it is the read command value of command phase for SRAM. */
#define SPI0_SRAM_DRD_CMD_CACHE_SRAM_USR_RD_CMD_VALUE_Msb	0u
#define SPI0_SRAM_DRD_CMD_CACHE_SRAM_USR_RD_CMD_VALUE_Lsb	15u
	/* For SPI0 When cache mode is enable it is the length in bits of command phase for SRAM. The register value shall be (bit_num-1). */
#define SPI0_SRAM_DRD_CMD_CACHE_SRAM_USR_RD_CMD_BITLEN_Msb	28u
#define SPI0_SRAM_DRD_CMD_CACHE_SRAM_USR_RD_CMD_BITLEN_Lsb	31u

	/* 0x60:  */
	uint32_t volatile SRAM_DWR_CMD;
	/* For SPI0 When cache mode is enable it is the write command value of command phase for SRAM. */
#define SPI0_SRAM_DWR_CMD_CACHE_SRAM_USR_WR_CMD_VALUE_Msb	0u
#define SPI0_SRAM_DWR_CMD_CACHE_SRAM_USR_WR_CMD_VALUE_Lsb	15u
	/* For SPI0 When cache mode is enable it is the in bits of command phase  for SRAM. The register value shall be (bit_num-1). */
#define SPI0_SRAM_DWR_CMD_CACHE_SRAM_USR_WR_CMD_BITLEN_Msb	28u
#define SPI0_SRAM_DWR_CMD_CACHE_SRAM_USR_WR_CMD_BITLEN_Lsb	31u

	/* 0x64:  */
	uint32_t volatile SLV_RD_BIT;
	/* In the slave mode it is the bit length of read data. */
#define SPI0_SLV_RD_BIT_SLV_RDATA_BIT_Msb			0u
#define SPI0_SLV_RD_BIT_SLV_RDATA_BIT_Lsb			23u

	/* 0x80:  */
	uint32_t volatile W0;
	/* data buffer */
#define SPI0_W0_BUF0_Msb					0u
#define SPI0_W0_BUF0_Lsb					31u

	/* 0x84:  */
	uint32_t volatile W1;
	/* data buffer */
#define SPI0_W1_BUF1_Msb					0u
#define SPI0_W1_BUF1_Lsb					31u

	/* 0x88:  */
	uint32_t volatile W2;
	/* data buffer */
#define SPI0_W2_BUF2_Msb					0u
#define SPI0_W2_BUF2_Lsb					31u

	/* 0x8C:  */
	uint32_t volatile W3;
	/* data buffer */
#define SPI0_W3_BUF3_Msb					0u
#define SPI0_W3_BUF3_Lsb					31u

	/* 0x90:  */
	uint32_t volatile W4;
	/* data buffer */
#define SPI0_W4_BUF4_Msb					0u
#define SPI0_W4_BUF4_Lsb					31u

	/* 0x94:  */
	uint32_t volatile W5;
	/* data buffer */
#define SPI0_W5_BUF5_Msb					0u
#define SPI0_W5_BUF5_Lsb					31u

	/* 0x98:  */
	uint32_t volatile W6;
	/* data buffer */
#define SPI0_W6_BUF6_Msb					0u
#define SPI0_W6_BUF6_Lsb					31u

	/* 0x9C:  */
	uint32_t volatile W7;
	/* data buffer */
#define SPI0_W7_BUF7_Msb					0u
#define SPI0_W7_BUF7_Lsb					31u

	/* 0xA0:  */
	uint32_t volatile W8;
	/* data buffer */
#define SPI0_W8_BUF8_Msb					0u
#define SPI0_W8_BUF8_Lsb					31u

	/* 0xA4:  */
	uint32_t volatile W9;
	/* data buffer */
#define SPI0_W9_BUF9_Msb					0u
#define SPI0_W9_BUF9_Lsb					31u

	/* 0xA8:  */
	uint32_t volatile W10;
	/* data buffer */
#define SPI0_W10_BUF10_Msb					0u
#define SPI0_W10_BUF10_Lsb					31u

	/* 0xAC:  */
	uint32_t volatile W11;
	/* data buffer */
#define SPI0_W11_BUF11_Msb					0u
#define SPI0_W11_BUF11_Lsb					31u

	/* 0xB0:  */
	uint32_t volatile W12;
	/* data buffer */
#define SPI0_W12_BUF12_Msb					0u
#define SPI0_W12_BUF12_Lsb					31u

	/* 0xB4:  */
	uint32_t volatile W13;
	/* data buffer */
#define SPI0_W13_BUF13_Msb					0u
#define SPI0_W13_BUF13_Lsb					31u

	/* 0xB8:  */
	uint32_t volatile W14;
	/* data buffer */
#define SPI0_W14_BUF14_Msb					0u
#define SPI0_W14_BUF14_Lsb					31u

	/* 0xBC:  */
	uint32_t volatile W15;
	/* data buffer */
#define SPI0_W15_BUF15_Msb					0u
#define SPI0_W15_BUF15_Lsb					31u

	/* 0xC0:  */
	uint32_t volatile TX_CRC;
	/* For SPI1  the value of crc32 for 256 bits data. */
#define SPI0_TX_CRC_DATA_Msb					0u
#define SPI0_TX_CRC_DATA_Lsb					31u

	/* 0xE0 */
	uint8_t RESERVED0[0xF0-0xE0];

	/* 0xF0:  */
	uint32_t volatile EXT0;
	/* page program delay time  by system clock. */
#define SPI0_EXT0_T_PP_TIME_Msb					0u
#define SPI0_EXT0_T_PP_TIME_Lsb					11u
	/* page program delay time shift . */
#define SPI0_EXT0_T_PP_SHIFT_Msb				16u
#define SPI0_EXT0_T_PP_SHIFT_Lsb				19u
	/* page program delay enable. */
#define SPI0_EXT0_T_PP_ENA					31u

	/* 0xF4:  */
	uint32_t volatile EXT1;
	/* erase flash delay time by system clock. */
#define SPI0_EXT1_T_ERASE_TIME_Msb				0u
#define SPI0_EXT1_T_ERASE_TIME_Lsb				11u
	/* erase flash delay time shift. */
#define SPI0_EXT1_T_ERASE_SHIFT_Msb				16u
#define SPI0_EXT1_T_ERASE_SHIFT_Lsb				19u
	/* erase flash delay enable. */
#define SPI0_EXT1_T_ERASE_ENA					31u

	/* 0xF8:  */
	uint32_t volatile EXT2;
	/* The status of spi state machine . */
#define SPI0_EXT2_ST_Msb					0u
#define SPI0_EXT2_ST_Lsb					2u

	/* 0xFC:  */
	uint32_t volatile EXT3;
	/* This register is for two SPI masters to share the same cs clock and data signals. The bits of one SPI are set  if the other SPI is busy  the SPI will be hold. 1(3): hold at ¡°idle¡± phase 2: hold at ¡°prepare¡± phase. */
#define SPI0_EXT3_INT_HOLD_ENA_Msb				0u
#define SPI0_EXT3_INT_HOLD_ENA_Lsb				1u

	/* 0x100:  */
	uint32_t volatile DMA_CONF;
	/* The bit is used to reset in dma fsm and in data fifo pointer. */
#define SPI0_DMA_CONF_IN_RST					2u
	/* The bit is used to reset out dma fsm and out data fifo pointer. */
#define SPI0_DMA_CONF_OUT_RST					3u
	/* reset spi dma ahb master fifo pointer. */
#define SPI0_DMA_CONF_AHBM_FIFO_RST				4u
	/* reset spi dma ahb master. */
#define SPI0_DMA_CONF_AHBM_RST					5u
	/* Set bit to test in link. */
#define SPI0_DMA_CONF_IN_LOOP_TEST				6u
	/* Set bit to test out link. */
#define SPI0_DMA_CONF_OUT_LOOP_TEST				7u
	/* when the link is empty   jump to next automatically. */
#define SPI0_DMA_CONF_OUT_AUTO_WRBACK				8u
	/* out eof flag generation mode . */
#define SPI0_DMA_CONF_OUT_EOF_MODE				9u
	/* read descriptor use burst mode when read data for memory. */
#define SPI0_DMA_CONF_OUTDSCR_BURST_EN				10u
	/* read descriptor use burst mode when write data to memory. */
#define SPI0_DMA_CONF_INDSCR_BURST_EN				11u
	/* spi dma read data from memory in burst mode. */
#define SPI0_DMA_CONF_OUT_DATA_BURST_EN				12u
	/* spi dma read data stop  when in continue tx/rx mode. */
#define SPI0_DMA_CONF_DMA_RX_STOP				14u
	/* spi dma write data stop when in continue tx/rx mode. */
#define SPI0_DMA_CONF_DMA_TX_STOP				15u
	/* spi dma continue tx/rx data. */
#define SPI0_DMA_CONF_DMA_CONTINUE				16u

	/* 0x104:  */
	uint32_t volatile DMA_OUT_LINK;
	/* The address of the first outlink descriptor. */
#define SPI0_DMA_OUT_LINK_OUTLINK_ADDR_Msb			0u
#define SPI0_DMA_OUT_LINK_OUTLINK_ADDR_Lsb			19u
	/* Set the bit to stop to use outlink descriptor. */
#define SPI0_DMA_OUT_LINK_OUTLINK_STOP				28u
	/* Set the bit to start to use outlink descriptor. */
#define SPI0_DMA_OUT_LINK_OUTLINK_START				29u
	/* Set the bit to mount on new outlink descriptors. */
#define SPI0_DMA_OUT_LINK_OUTLINK_RESTART			30u

	/* 0x108:  */
	uint32_t volatile DMA_IN_LINK;
	/* The address of the first inlink descriptor. */
#define SPI0_DMA_IN_LINK_INLINK_ADDR_Msb			0u
#define SPI0_DMA_IN_LINK_INLINK_ADDR_Lsb			19u
	/* when the bit is set  inlink descriptor returns to the next descriptor while a packet is wrong */
#define SPI0_DMA_IN_LINK_INLINK_AUTO_RET			20u
	/* Set the bit to stop to use inlink descriptor. */
#define SPI0_DMA_IN_LINK_INLINK_STOP				28u
	/* Set the bit to start to use inlink descriptor. */
#define SPI0_DMA_IN_LINK_INLINK_START				29u
	/* Set the bit to mount on new inlink descriptors. */
#define SPI0_DMA_IN_LINK_INLINK_RESTART				30u

	/* 0x10C:  */
	uint32_t volatile DMA_STATUS;
	/* spi dma read data status bit. */
#define SPI0_DMA_STATUS_DMA_RX_EN				0u
	/* spi dma write data status bit. */
#define SPI0_DMA_STATUS_DMA_TX_EN				1u

	/* 0x110:  */
	uint32_t volatile DMA_INT_ENA;
	/* The enable bit for lack of enough inlink descriptors. */
#define SPI0_DMA_INT_ENA_INLINK_DSCR_EMPTY_INT_ENA		0u
	/* The enable bit for outlink descriptor error. */
#define SPI0_DMA_INT_ENA_OUTLINK_DSCR_ERROR_INT_ENA		1u
	/* The enable bit for inlink descriptor error. */
#define SPI0_DMA_INT_ENA_INLINK_DSCR_ERROR_INT_ENA		2u
	/* The enable bit for completing usage of a inlink descriptor. */
#define SPI0_DMA_INT_ENA_IN_DONE_INT_ENA			3u
	/* The enable bit for receiving error. */
#define SPI0_DMA_INT_ENA_IN_ERR_EOF_INT_ENA			4u
	/* The enable bit for completing receiving all the packets from host. */
#define SPI0_DMA_INT_ENA_IN_SUC_EOF_INT_ENA			5u
	/* The enable bit for completing usage of a outlink descriptor . */
#define SPI0_DMA_INT_ENA_OUT_DONE_INT_ENA			6u
	/* The enable bit for sending a packet to host done. */
#define SPI0_DMA_INT_ENA_OUT_EOF_INT_ENA			7u
	/* The enable bit for sending all the packets to host done. */
#define SPI0_DMA_INT_ENA_OUT_TOTAL_EOF_INT_ENA			8u

	/* 0x114:  */
	uint32_t volatile DMA_INT_RAW;
	/* The raw bit for lack of enough inlink descriptors. */
#define SPI0_DMA_INT_RAW_INLINK_DSCR_EMPTY_INT_RAW		0u
	/* The raw bit for outlink descriptor error. */
#define SPI0_DMA_INT_RAW_OUTLINK_DSCR_ERROR_INT_RAW		1u
	/* The raw bit for inlink descriptor error. */
#define SPI0_DMA_INT_RAW_INLINK_DSCR_ERROR_INT_RAW		2u
	/* The raw bit for completing usage of a inlink descriptor. */
#define SPI0_DMA_INT_RAW_IN_DONE_INT_RAW			3u
	/* The raw bit for receiving error. */
#define SPI0_DMA_INT_RAW_IN_ERR_EOF_INT_RAW			4u
	/* The raw bit for completing receiving all the packets from host. */
#define SPI0_DMA_INT_RAW_IN_SUC_EOF_INT_RAW			5u
	/* The raw bit for completing usage of a outlink descriptor. */
#define SPI0_DMA_INT_RAW_OUT_DONE_INT_RAW			6u
	/* The raw bit for sending a packet to host done. */
#define SPI0_DMA_INT_RAW_OUT_EOF_INT_RAW			7u
	/* The raw bit for sending all the packets to host done. */
#define SPI0_DMA_INT_RAW_OUT_TOTAL_EOF_INT_RAW			8u

	/* 0x118:  */
	uint32_t volatile DMA_INT_ST;
	/* The status bit for lack of enough inlink descriptors. */
#define SPI0_DMA_INT_ST_INLINK_DSCR_EMPTY_INT_ST		0u
	/* The status bit for outlink descriptor error. */
#define SPI0_DMA_INT_ST_OUTLINK_DSCR_ERROR_INT_ST		1u
	/* The status bit for inlink descriptor error. */
#define SPI0_DMA_INT_ST_INLINK_DSCR_ERROR_INT_ST		2u
	/* The status bit for completing usage of a inlink descriptor. */
#define SPI0_DMA_INT_ST_IN_DONE_INT_ST				3u
	/* The status bit for receiving error. */
#define SPI0_DMA_INT_ST_IN_ERR_EOF_INT_ST			4u
	/* The status bit for completing receiving all the packets from host. */
#define SPI0_DMA_INT_ST_IN_SUC_EOF_INT_ST			5u
	/* The status bit for completing usage of a outlink descriptor. */
#define SPI0_DMA_INT_ST_OUT_DONE_INT_ST				6u
	/* The status bit for sending a packet to host done. */
#define SPI0_DMA_INT_ST_OUT_EOF_INT_ST				7u
	/* The status bit for sending all the packets to host done. */
#define SPI0_DMA_INT_ST_OUT_TOTAL_EOF_INT_ST			8u

	/* 0x11C:  */
	uint32_t volatile DMA_INT_CLR;
	/* The clear bit for lack of enough inlink descriptors. */
#define SPI0_DMA_INT_CLR_INLINK_DSCR_EMPTY_INT_CLR		0u
	/* The clear bit for outlink descriptor error. */
#define SPI0_DMA_INT_CLR_OUTLINK_DSCR_ERROR_INT_CLR		1u
	/* The clear bit for inlink descriptor error. */
#define SPI0_DMA_INT_CLR_INLINK_DSCR_ERROR_INT_CLR		2u
	/* The clear bit for completing usage of a inlink descriptor. */
#define SPI0_DMA_INT_CLR_IN_DONE_INT_CLR			3u
	/* The clear bit for receiving error. */
#define SPI0_DMA_INT_CLR_IN_ERR_EOF_INT_CLR			4u
	/* The clear bit for completing receiving all the packets from host. */
#define SPI0_DMA_INT_CLR_IN_SUC_EOF_INT_CLR			5u
	/* The clear bit for completing usage of a outlink descriptor. */
#define SPI0_DMA_INT_CLR_OUT_DONE_INT_CLR			6u
	/* The clear bit for sending a packet to host done. */
#define SPI0_DMA_INT_CLR_OUT_EOF_INT_CLR			7u
	/* The clear bit for sending all the packets to host done. */
#define SPI0_DMA_INT_CLR_OUT_TOTAL_EOF_INT_CLR			8u

	/* 0x120:  */
	uint32_t volatile IN_ERR_EOF_DES_ADDR;
	/* The inlink descriptor address when spi dma produce receiving error. */
#define SPI0_IN_ERR_EOF_DES_ADDR_DMA_IN_ERR_EOF_DES_ADDR_Msb	0u
#define SPI0_IN_ERR_EOF_DES_ADDR_DMA_IN_ERR_EOF_DES_ADDR_Lsb	31u

	/* 0x124:  */
	uint32_t volatile IN_SUC_EOF_DES_ADDR;
	/* The last inlink descriptor address when spi dma produce from_suc_eof. */
#define SPI0_IN_SUC_EOF_DES_ADDR_DMA_IN_SUC_EOF_DES_ADDR_Msb	0u
#define SPI0_IN_SUC_EOF_DES_ADDR_DMA_IN_SUC_EOF_DES_ADDR_Lsb	31u

	/* 0x128:  */
	uint32_t volatile INLINK_DSCR;
	/* The content of current in descriptor pointer. */
#define SPI0_INLINK_DSCR_DMA_INLINK_DSCR_Msb			0u
#define SPI0_INLINK_DSCR_DMA_INLINK_DSCR_Lsb			31u

	/* 0x12C:  */
	uint32_t volatile INLINK_DSCR_BF0;
	/* The content of next in descriptor pointer. */
#define SPI0_INLINK_DSCR_BF0_DMA_INLINK_DSCR_BF0_Msb		0u
#define SPI0_INLINK_DSCR_BF0_DMA_INLINK_DSCR_BF0_Lsb		31u

	/* 0x130:  */
	uint32_t volatile INLINK_DSCR_BF1;
	/* The content of current in descriptor data buffer pointer. */
#define SPI0_INLINK_DSCR_BF1_DMA_INLINK_DSCR_BF1_Msb		0u
#define SPI0_INLINK_DSCR_BF1_DMA_INLINK_DSCR_BF1_Lsb		31u

	/* 0x134:  */
	uint32_t volatile OUT_EOF_BFR_DES_ADDR;
	/* The address of buffer relative to the outlink descriptor that produce eof. */
#define SPI0_OUT_EOF_BFR_DES_ADDR_DMA_OUT_EOF_BFR_DES_ADDR_Msb	0u
#define SPI0_OUT_EOF_BFR_DES_ADDR_DMA_OUT_EOF_BFR_DES_ADDR_Lsb	31u

	/* 0x138:  */
	uint32_t volatile OUT_EOF_DES_ADDR;
	/* The last outlink descriptor address when spi dma produce to_eof. */
#define SPI0_OUT_EOF_DES_ADDR_DMA_OUT_EOF_DES_ADDR_Msb		0u
#define SPI0_OUT_EOF_DES_ADDR_DMA_OUT_EOF_DES_ADDR_Lsb		31u

	/* 0x13C:  */
	uint32_t volatile OUTLINK_DSCR;
	/* The content of current out descriptor pointer. */
#define SPI0_OUTLINK_DSCR_DMA_OUTLINK_DSCR_Msb			0u
#define SPI0_OUTLINK_DSCR_DMA_OUTLINK_DSCR_Lsb			31u

	/* 0x140:  */
	uint32_t volatile OUTLINK_DSCR_BF0;
	/* The content of next out descriptor pointer. */
#define SPI0_OUTLINK_DSCR_BF0_DMA_OUTLINK_DSCR_BF0_Msb		0u
#define SPI0_OUTLINK_DSCR_BF0_DMA_OUTLINK_DSCR_BF0_Lsb		31u

	/* 0x144:  */
	uint32_t volatile OUTLINK_DSCR_BF1;
	/* The content of current out descriptor data buffer pointer. */
#define SPI0_OUTLINK_DSCR_BF1_DMA_OUTLINK_DSCR_BF1_Msb		0u
#define SPI0_OUTLINK_DSCR_BF1_DMA_OUTLINK_DSCR_BF1_Lsb		31u

	/* 0x148:  */
	uint32_t volatile DMA_RSTATUS;
	/* spi dma read data from memory status. */
#define SPI0_DMA_RSTATUS_DMA_OUT_STATUS_Msb			0u
#define SPI0_DMA_RSTATUS_DMA_OUT_STATUS_Lsb			31u

	/* 0x14C:  */
	uint32_t volatile DMA_TSTATUS;
	/* spi dma write data to memory status. */
#define SPI0_DMA_TSTATUS_DMA_IN_STATUS_Msb			0u
#define SPI0_DMA_TSTATUS_DMA_IN_STATUS_Lsb			31u

	/* 0x16C */
	uint8_t RESERVED1[0x3FC-0x16C];

	/* 0x3FC:  */
	uint32_t volatile DATE;
	/* SPI register version. */
#define SPI0_DATE_DATE_Msb					0u
#define SPI0_DATE_DATE_Lsb					27u

};


#define SPI1 ((struct mcu_spi1 *)0x3FF42000)

struct mcu_spi1 {

};


#define SPI2 ((struct mcu_spi2 *)0x3FF64000)

struct mcu_spi2 {

};


#define SPI3 ((struct mcu_spi3 *)0x3FF65000)

struct mcu_spi3 {

};


#define TIMG0 ((struct mcu_timg0 *)0x3FF5F000)

struct mcu_timg0 {

	/* 0x00:  */
	uint32_t volatile T0CONFIG;
	/* When set  alarm is enabled */
#define TIMG0_T0CONFIG_T0_ALARM_EN				10u
	/* When set  level type interrupt will be generated during alarm */
#define TIMG0_T0CONFIG_T0_LEVEL_INT_EN				11u
	/* When set  edge type interrupt will be generated during alarm */
#define TIMG0_T0CONFIG_T0_EDGE_INT_EN				12u
	/* Timer 0 clock (T0_clk) prescale value. */
#define TIMG0_T0CONFIG_T0_DIVIDER_Msb				13u
#define TIMG0_T0CONFIG_T0_DIVIDER_Lsb				28u
	/* When set  timer 0 auto-reload at alarming is enabled */
#define TIMG0_T0CONFIG_T0_AUTORELOAD				29u
	/* When set  timer 0 time-base counter increment. */
#define TIMG0_T0CONFIG_T0_INCREASE				30u
	/* When set  timer 0 time-base counter is enabled */
#define TIMG0_T0CONFIG_T0_EN					31u

	/* 0x04:  */
	uint32_t volatile T0LO;
	/* Register to store timer 0 time-base counter current value lower 32 bits. */
#define TIMG0_T0LO_T0_LO_Msb					0u
#define TIMG0_T0LO_T0_LO_Lsb					31u

	/* 0x08:  */
	uint32_t volatile T0HI;
	/* Register to store timer 0 time-base counter current value higher 32 bits. */
#define TIMG0_T0HI_T0_HI_Msb					0u
#define TIMG0_T0HI_T0_HI_Lsb					31u

	/* 0x0C:  */
	uint32_t volatile T0UPDATE;
	/* Write any value will trigger a timer 0 time-base counter value update (timer 0 current value will be stored in registers above) */
#define TIMG0_T0UPDATE_T0_UPDATE_Msb				0u
#define TIMG0_T0UPDATE_T0_UPDATE_Lsb				31u

	/* 0x10:  */
	uint32_t volatile T0ALARMLO;
	/* Timer 0 time-base counter value lower 32 bits that will trigger the alarm */
#define TIMG0_T0ALARMLO_T0_ALARM_LO_Msb				0u
#define TIMG0_T0ALARMLO_T0_ALARM_LO_Lsb				31u

	/* 0x14:  */
	uint32_t volatile T0ALARMHI;
	/* Timer 0 time-base counter value higher 32 bits that will trigger the alarm */
#define TIMG0_T0ALARMHI_T0_ALARM_HI_Msb				0u
#define TIMG0_T0ALARMHI_T0_ALARM_HI_Lsb				31u

	/* 0x18:  */
	uint32_t volatile T0LOADLO;
	/* Lower 32 bits of the value that will load into timer 0 time-base counter */
#define TIMG0_T0LOADLO_T0_LOAD_LO_Msb				0u
#define TIMG0_T0LOADLO_T0_LOAD_LO_Lsb				31u

	/* 0x1C:  */
	uint32_t volatile T0LOADHI;
	/* higher 32 bits of the value that will load into timer 0 time-base counter */
#define TIMG0_T0LOADHI_T0_LOAD_HI_Msb				0u
#define TIMG0_T0LOADHI_T0_LOAD_HI_Lsb				31u

	/* 0x20:  */
	uint32_t volatile T0LOAD;
	/* Write any value will trigger timer 0 time-base counter reload */
#define TIMG0_T0LOAD_T0_LOAD_Msb				0u
#define TIMG0_T0LOAD_T0_LOAD_Lsb				31u

	/* 0x24:  */
	uint32_t volatile T1CONFIG;
	/* When set  alarm is enabled */
#define TIMG0_T1CONFIG_T1_ALARM_EN				10u
	/* When set  level type interrupt will be generated during alarm */
#define TIMG0_T1CONFIG_T1_LEVEL_INT_EN				11u
	/* When set  edge type interrupt will be generated during alarm */
#define TIMG0_T1CONFIG_T1_EDGE_INT_EN				12u
	/* Timer 1 clock (T1_clk) prescale value. */
#define TIMG0_T1CONFIG_T1_DIVIDER_Msb				13u
#define TIMG0_T1CONFIG_T1_DIVIDER_Lsb				28u
	/* When set  timer 1 auto-reload at alarming is enabled */
#define TIMG0_T1CONFIG_T1_AUTORELOAD				29u
	/* When set  timer 1 time-base counter increment. */
#define TIMG0_T1CONFIG_T1_INCREASE				30u
	/* When set  timer 1 time-base counter is enabled */
#define TIMG0_T1CONFIG_T1_EN					31u

	/* 0x28:  */
	uint32_t volatile T1LO;
	/* Register to store timer 1 time-base counter current value lower 32 bits. */
#define TIMG0_T1LO_T1_LO_Msb					0u
#define TIMG0_T1LO_T1_LO_Lsb					31u

	/* 0x2C:  */
	uint32_t volatile T1HI;
	/* Register to store timer 1 time-base counter current value higher 32 bits. */
#define TIMG0_T1HI_T1_HI_Msb					0u
#define TIMG0_T1HI_T1_HI_Lsb					31u

	/* 0x30:  */
	uint32_t volatile T1UPDATE;
	/* Write any value will trigger a timer 1 time-base counter value update (timer 1 current value will be stored in registers above) */
#define TIMG0_T1UPDATE_T1_UPDATE_Msb				0u
#define TIMG0_T1UPDATE_T1_UPDATE_Lsb				31u

	/* 0x34:  */
	uint32_t volatile T1ALARMLO;
	/* Timer 1 time-base counter value lower 32 bits that will trigger the alarm */
#define TIMG0_T1ALARMLO_T1_ALARM_LO_Msb				0u
#define TIMG0_T1ALARMLO_T1_ALARM_LO_Lsb				31u

	/* 0x38:  */
	uint32_t volatile T1ALARMHI;
	/* Timer 1 time-base counter value higher 32 bits that will trigger the alarm */
#define TIMG0_T1ALARMHI_T1_ALARM_HI_Msb				0u
#define TIMG0_T1ALARMHI_T1_ALARM_HI_Lsb				31u

	/* 0x3C:  */
	uint32_t volatile T1LOADLO;
	/* Lower 32 bits of the value that will load into timer 1 time-base counter */
#define TIMG0_T1LOADLO_T1_LOAD_LO_Msb				0u
#define TIMG0_T1LOADLO_T1_LOAD_LO_Lsb				31u

	/* 0x40:  */
	uint32_t volatile T1LOADHI;
	/* higher 32 bits of the value that will load into timer 1 time-base counter */
#define TIMG0_T1LOADHI_T1_LOAD_HI_Msb				0u
#define TIMG0_T1LOADHI_T1_LOAD_HI_Lsb				31u

	/* 0x44:  */
	uint32_t volatile T1LOAD;
	/* Write any value will trigger timer 1 time-base counter reload */
#define TIMG0_T1LOAD_T1_LOAD_Msb				0u
#define TIMG0_T1LOAD_T1_LOAD_Lsb				31u

	/* 0x48:  */
	uint32_t volatile WDTCONFIG0;
	/* When set  flash boot protection is enabled */
#define TIMG0_WDTCONFIG0_WDT_FLASHBOOT_MOD_EN			14u
	/* length of system reset selection. */
#define TIMG0_WDTCONFIG0_WDT_SYS_RESET_LENGTH_Msb		15u
#define TIMG0_WDTCONFIG0_WDT_SYS_RESET_LENGTH_Lsb		17u
	/* length of CPU reset selection. */
#define TIMG0_WDTCONFIG0_WDT_CPU_RESET_LENGTH_Msb		18u
#define TIMG0_WDTCONFIG0_WDT_CPU_RESET_LENGTH_Lsb		20u
	/* When set  level type interrupt generation is enabled */
#define TIMG0_WDTCONFIG0_WDT_LEVEL_INT_EN			21u
	/* When set  edge type interrupt generation is enabled */
#define TIMG0_WDTCONFIG0_WDT_EDGE_INT_EN			22u
	/* Stage 3 configuration. */
#define TIMG0_WDTCONFIG0_WDT_STG3_Msb				23u
#define TIMG0_WDTCONFIG0_WDT_STG3_Lsb				24u
	/* Stage 2 configuration. */
#define TIMG0_WDTCONFIG0_WDT_STG2_Msb				25u
#define TIMG0_WDTCONFIG0_WDT_STG2_Lsb				26u
	/* Stage 1 configuration. */
#define TIMG0_WDTCONFIG0_WDT_STG1_Msb				27u
#define TIMG0_WDTCONFIG0_WDT_STG1_Lsb				28u
	/* Stage 0 configuration. */
#define TIMG0_WDTCONFIG0_WDT_STG0_Msb				29u
#define TIMG0_WDTCONFIG0_WDT_STG0_Lsb				30u
	/* When set  SWDT is enabled */
#define TIMG0_WDTCONFIG0_WDT_EN					31u

	/* 0x4C:  */
	uint32_t volatile WDTCONFIG1;
	/* SWDT clock prescale value. */
#define TIMG0_WDTCONFIG1_WDT_CLK_PRESCALE_Msb			16u
#define TIMG0_WDTCONFIG1_WDT_CLK_PRESCALE_Lsb			31u

	/* 0x50:  */
	uint32_t volatile WDTCONFIG2;
	/* Stage 0 timeout value in SWDT clock cycles */
#define TIMG0_WDTCONFIG2_WDT_STG0_HOLD_Msb			0u
#define TIMG0_WDTCONFIG2_WDT_STG0_HOLD_Lsb			31u

	/* 0x54:  */
	uint32_t volatile WDTCONFIG3;
	/* Stage 1 timeout value in SWDT clock cycles */
#define TIMG0_WDTCONFIG3_WDT_STG1_HOLD_Msb			0u
#define TIMG0_WDTCONFIG3_WDT_STG1_HOLD_Lsb			31u

	/* 0x58:  */
	uint32_t volatile WDTCONFIG4;
	/* Stage 2 timeout value in SWDT clock cycles */
#define TIMG0_WDTCONFIG4_WDT_STG2_HOLD_Msb			0u
#define TIMG0_WDTCONFIG4_WDT_STG2_HOLD_Lsb			31u

	/* 0x5C:  */
	uint32_t volatile WDTCONFIG5;
	/* Stage 3 timeout value in SWDT clock cycles */
#define TIMG0_WDTCONFIG5_WDT_STG3_HOLD_Msb			0u
#define TIMG0_WDTCONFIG5_WDT_STG3_HOLD_Lsb			31u

	/* 0x60:  */
	uint32_t volatile WDTFEED;
	/* Write any value will feed SWDT */
#define TIMG0_WDTFEED_WDT_FEED_Msb				0u
#define TIMG0_WDTFEED_WDT_FEED_Lsb				31u

	/* 0x64:  */
	uint32_t volatile WDTWPROTECT;
	/* If change its value from default  then write protection is on. */
#define TIMG0_WDTWPROTECT_WDT_WKEY_Msb				0u
#define TIMG0_WDTWPROTECT_WDT_WKEY_Lsb				31u

	/* 0x68:  */
	uint32_t volatile RTCCALICFG;
	/*  */
#define TIMG0_RTCCALICFG_RTC_CALI_START_CYCLING			12u
	/*  */
#define TIMG0_RTCCALICFG_RTC_CALI_CLK_SEL_Msb			13u
#define TIMG0_RTCCALICFG_RTC_CALI_CLK_SEL_Lsb			14u
	/*  */
#define TIMG0_RTCCALICFG_RTC_CALI_RDY				15u
	/*  */
#define TIMG0_RTCCALICFG_RTC_CALI_MAX_Msb			16u
#define TIMG0_RTCCALICFG_RTC_CALI_MAX_Lsb			30u
	/*  */
#define TIMG0_RTCCALICFG_RTC_CALI_START				31u

	/* 0x6C:  */
	uint32_t volatile RTCCALICFG1;
	/*  */
#define TIMG0_RTCCALICFG1_RTC_CALI_VALUE_Msb			7u
#define TIMG0_RTCCALICFG1_RTC_CALI_VALUE_Lsb			31u

	/* 0x70:  */
	uint32_t volatile LACTCONFIG;
	/*  */
#define TIMG0_LACTCONFIG_LACT_RTC_ONLY				7u
	/*  */
#define TIMG0_LACTCONFIG_LACT_CPST_EN				8u
	/*  */
#define TIMG0_LACTCONFIG_LACT_LAC_EN				9u
	/*  */
#define TIMG0_LACTCONFIG_LACT_ALARM_EN				10u
	/*  */
#define TIMG0_LACTCONFIG_LACT_LEVEL_INT_EN			11u
	/*  */
#define TIMG0_LACTCONFIG_LACT_EDGE_INT_EN			12u
	/*  */
#define TIMG0_LACTCONFIG_LACT_DIVIDER_Msb			13u
#define TIMG0_LACTCONFIG_LACT_DIVIDER_Lsb			28u
	/*  */
#define TIMG0_LACTCONFIG_LACT_AUTORELOAD			29u
	/*  */
#define TIMG0_LACTCONFIG_LACT_INCREASE				30u
	/*  */
#define TIMG0_LACTCONFIG_LACT_EN				31u

	/* 0x74:  */
	uint32_t volatile LACTRTC;
	/*  */
#define TIMG0_LACTRTC_LACT_RTC_STEP_LEN_Msb			6u
#define TIMG0_LACTRTC_LACT_RTC_STEP_LEN_Lsb			31u

	/* 0x78:  */
	uint32_t volatile LACTLO;
	/*  */
#define TIMG0_LACTLO_LACT_LO_Msb				0u
#define TIMG0_LACTLO_LACT_LO_Lsb				31u

	/* 0x7C:  */
	uint32_t volatile LACTHI;
	/*  */
#define TIMG0_LACTHI_LACT_HI_Msb				0u
#define TIMG0_LACTHI_LACT_HI_Lsb				31u

	/* 0x80:  */
	uint32_t volatile LACTUPDATE;
	/*  */
#define TIMG0_LACTUPDATE_LACT_UPDATE_Msb			0u
#define TIMG0_LACTUPDATE_LACT_UPDATE_Lsb			31u

	/* 0x84:  */
	uint32_t volatile LACTALARMLO;
	/*  */
#define TIMG0_LACTALARMLO_LACT_ALARM_LO_Msb			0u
#define TIMG0_LACTALARMLO_LACT_ALARM_LO_Lsb			31u

	/* 0x88:  */
	uint32_t volatile LACTALARMHI;
	/*  */
#define TIMG0_LACTALARMHI_LACT_ALARM_HI_Msb			0u
#define TIMG0_LACTALARMHI_LACT_ALARM_HI_Lsb			31u

	/* 0x8C:  */
	uint32_t volatile LACTLOADLO;
	/*  */
#define TIMG0_LACTLOADLO_LACT_LOAD_LO_Msb			0u
#define TIMG0_LACTLOADLO_LACT_LOAD_LO_Lsb			31u

	/* 0x90:  */
	uint32_t volatile LACTLOADHI;
	/*  */
#define TIMG0_LACTLOADHI_LACT_LOAD_HI_Msb			0u
#define TIMG0_LACTLOADHI_LACT_LOAD_HI_Lsb			31u

	/* 0x94:  */
	uint32_t volatile LACTLOAD;
	/*  */
#define TIMG0_LACTLOAD_LACT_LOAD_Msb				0u
#define TIMG0_LACTLOAD_LACT_LOAD_Lsb				31u

	/* 0x98:  */
	uint32_t volatile INT_ENA_TIMERS;
	/* interrupt when timer0 alarm */
#define TIMG0_INT_ENA_TIMERS_T0_INT_ENA				0u
	/* interrupt when timer1 alarm */
#define TIMG0_INT_ENA_TIMERS_T1_INT_ENA				1u
	/* Interrupt when an interrupt stage timeout */
#define TIMG0_INT_ENA_TIMERS_WDT_INT_ENA			2u
	/*  */
#define TIMG0_INT_ENA_TIMERS_LACT_INT_ENA			3u

	/* 0x9C:  */
	uint32_t volatile INT_RAW_TIMERS;
	/* interrupt when timer0 alarm */
#define TIMG0_INT_RAW_TIMERS_T0_INT_RAW				0u
	/* interrupt when timer1 alarm */
#define TIMG0_INT_RAW_TIMERS_T1_INT_RAW				1u
	/* Interrupt when an interrupt stage timeout */
#define TIMG0_INT_RAW_TIMERS_WDT_INT_RAW			2u
	/*  */
#define TIMG0_INT_RAW_TIMERS_LACT_INT_RAW			3u

	/* 0xA0:  */
	uint32_t volatile INT_ST_TIMERS;
	/* interrupt when timer0 alarm */
#define TIMG0_INT_ST_TIMERS_T0_INT_ST				0u
	/* interrupt when timer1 alarm */
#define TIMG0_INT_ST_TIMERS_T1_INT_ST				1u
	/* Interrupt when an interrupt stage timeout */
#define TIMG0_INT_ST_TIMERS_WDT_INT_ST				2u
	/*  */
#define TIMG0_INT_ST_TIMERS_LACT_INT_ST				3u

	/* 0xA4:  */
	uint32_t volatile INT_CLR_TIMERS;
	/* interrupt when timer0 alarm */
#define TIMG0_INT_CLR_TIMERS_T0_INT_CLR				0u
	/* interrupt when timer1 alarm */
#define TIMG0_INT_CLR_TIMERS_T1_INT_CLR				1u
	/* Interrupt when an interrupt stage timeout */
#define TIMG0_INT_CLR_TIMERS_WDT_INT_CLR			2u
	/*  */
#define TIMG0_INT_CLR_TIMERS_LACT_INT_CLR			3u

	/* 0xC4 */
	uint8_t RESERVED0[0xF8-0xC4];

	/* 0xF8:  */
	uint32_t volatile NTIMERS_DATE;
	/* Version of this regfile */
#define TIMG0_NTIMERS_DATE_NTIMERS_DATE_Msb			0u
#define TIMG0_NTIMERS_DATE_NTIMERS_DATE_Lsb			27u

	/* 0xFC:  */
	uint32_t volatile TIMGCLK;
	/* Force clock enable for this regfile */
#define TIMG0_TIMGCLK_CLK_EN					31u

};


#define TIMG1 ((struct mcu_timg1 *)0x3FF60000)

struct mcu_timg1 {

};


#define UART0 ((struct mcu_uart0 *)0x3FF40000)

struct mcu_uart0 {

	/* 0x00:  */
	uint32_t volatile FIFO;
	/* This register stores one byte data  read by rx fifo. */
#define UART0_FIFO_RXFIFO_RD_BYTE_Msb				0u
#define UART0_FIFO_RXFIFO_RD_BYTE_Lsb				7u

	/* 0x04:  */
	uint32_t volatile INT_RAW;
	/* This interrupt raw bit turns to high level when receiver receives more data than (rx_flow_thrhd_h3 rx_flow_thrhd). */
#define UART0_INT_RAW_RXFIFO_FULL_INT_RAW			0u
	/* This interrupt raw bit turns to high level when the amount of data in transmitter's fifo is less than ((tx_mem_cnttxfifo_cnt) . */
#define UART0_INT_RAW_TXFIFO_EMPTY_INT_RAW			1u
	/* This interrupt raw bit turns to high level when receiver detects the parity error of data. */
#define UART0_INT_RAW_PARITY_ERR_INT_RAW			2u
	/* This interrupt raw bit turns to high level when receiver detects data's frame error . */
#define UART0_INT_RAW_FRM_ERR_INT_RAW				3u
	/* This interrupt raw bit turns to high level when receiver receives more data than the fifo can store. */
#define UART0_INT_RAW_RXFIFO_OVF_INT_RAW			4u
	/* This interrupt raw bit turns to high level when receiver detects the edge change of dsrn signal. */
#define UART0_INT_RAW_DSR_CHG_INT_RAW				5u
	/* This interrupt raw bit turns to high level when receiver detects the edge change of ctsn signal. */
#define UART0_INT_RAW_CTS_CHG_INT_RAW				6u
	/* This interrupt raw bit turns to high level when receiver detects the 0 after the stop bit. */
#define UART0_INT_RAW_BRK_DET_INT_RAW				7u
	/* This interrupt raw bit turns to high level when receiver takes more time than rx_tout_thrhd to receive a byte. */
#define UART0_INT_RAW_RXFIFO_TOUT_INT_RAW			8u
	/* This interrupt raw bit turns to high level when receiver receives xoff char with uart_sw_flow_con_en is set to 1. */
#define UART0_INT_RAW_SW_XON_INT_RAW				9u
	/* This interrupt raw bit turns to high level when receiver receives xon char with uart_sw_flow_con_en is set to 1. */
#define UART0_INT_RAW_SW_XOFF_INT_RAW				10u
	/* This interrupt raw bit turns to high level when receiver detects the start bit. */
#define UART0_INT_RAW_GLITCH_DET_INT_RAW			11u
	/* This interrupt raw bit turns to high level when transmitter completes  sendding  0 after all the datas in transmitter's fifo are send. */
#define UART0_INT_RAW_TX_BRK_DONE_INT_RAW			12u
	/* This interrupt raw bit turns to high level when transmitter has kept the shortest duration after the  last data has been send. */
#define UART0_INT_RAW_TX_BRK_IDLE_DONE_INT_RAW			13u
	/* This interrupt raw bit turns to high level when transmitter has send all the data in fifo. */
#define UART0_INT_RAW_TX_DONE_INT_RAW				14u
	/* This interrupt raw bit turns to high level when rs485 detects the parity error. */
#define UART0_INT_RAW_RS485_PARITY_ERR_INT_RAW			15u
	/* This interrupt raw bit turns to high level when rs485 detects the data frame error. */
#define UART0_INT_RAW_RS485_FRM_ERR_INT_RAW			16u
	/* This interrupt raw bit turns to high level when rs485 detects the clash between transmitter and receiver. */
#define UART0_INT_RAW_RS485_CLASH_INT_RAW			17u
	/* This interrupt raw bit turns to high level when receiver detects the configured at_cmd chars. */
#define UART0_INT_RAW_AT_CMD_CHAR_DET_INT_RAW			18u

	/* 0x08:  */
	uint32_t volatile INT_ST;
	/* This is the status bit for rxfifo_full_int_raw when rxfifo_full_int_ena is set to 1. */
#define UART0_INT_ST_RXFIFO_FULL_INT_ST				0u
	/* This is the status bit for  txfifo_empty_int_raw  when txfifo_empty_int_ena is set to 1. */
#define UART0_INT_ST_TXFIFO_EMPTY_INT_ST			1u
	/* This is the status bit for parity_err_int_raw when parity_err_int_ena is set to 1. */
#define UART0_INT_ST_PARITY_ERR_INT_ST				2u
	/* This is the status bit for frm_err_int_raw when fm_err_int_ena is set to 1. */
#define UART0_INT_ST_FRM_ERR_INT_ST				3u
	/* This is the status bit for rxfifo_ovf_int_raw when rxfifo_ovf_int_ena is set to 1. */
#define UART0_INT_ST_RXFIFO_OVF_INT_ST				4u
	/* This is the status bit for dsr_chg_int_raw when dsr_chg_int_ena is set to 1. */
#define UART0_INT_ST_DSR_CHG_INT_ST				5u
	/* This is the status bit for cts_chg_int_raw when cts_chg_int_ena is set to 1. */
#define UART0_INT_ST_CTS_CHG_INT_ST				6u
	/* This is the status bit for brk_det_int_raw when brk_det_int_ena is set to 1. */
#define UART0_INT_ST_BRK_DET_INT_ST				7u
	/* This is the status bit for rxfifo_tout_int_raw when rxfifo_tout_int_ena is set to 1. */
#define UART0_INT_ST_RXFIFO_TOUT_INT_ST				8u
	/* This is the status bit for sw_xon_int_raw when sw_xon_int_ena is set to 1. */
#define UART0_INT_ST_SW_XON_INT_ST				9u
	/* This is the status bit for sw_xoff_int_raw when sw_xoff_int_ena is set to 1. */
#define UART0_INT_ST_SW_XOFF_INT_ST				10u
	/* This is the status bit for glitch_det_int_raw when glitch_det_int_ena is set to 1. */
#define UART0_INT_ST_GLITCH_DET_INT_ST				11u
	/* This is the status bit for tx_brk_done_int_raw when tx_brk_done_int_ena is set to 1. */
#define UART0_INT_ST_TX_BRK_DONE_INT_ST				12u
	/* This is the stauts bit for tx_brk_idle_done_int_raw when tx_brk_idle_done_int_ena is set to 1. */
#define UART0_INT_ST_TX_BRK_IDLE_DONE_INT_ST			13u
	/* This is the status bit for tx_done_int_raw when tx_done_int_ena is set to 1. */
#define UART0_INT_ST_TX_DONE_INT_ST				14u
	/* This is the status bit for rs485_parity_err_int_raw when rs485_parity_int_ena is set to 1. */
#define UART0_INT_ST_RS485_PARITY_ERR_INT_ST			15u
	/* This is the status bit for rs485_fm_err_int_raw when rs485_fm_err_int_ena is set to 1. */
#define UART0_INT_ST_RS485_FRM_ERR_INT_ST			16u
	/* This is the status bit for rs485_clash_int_raw when rs485_clash_int_ena is set to 1. */
#define UART0_INT_ST_RS485_CLASH_INT_ST				17u
	/* This is the status bit for at_cmd_det_int_raw when at_cmd_char_det_int_ena is set to 1. */
#define UART0_INT_ST_AT_CMD_CHAR_DET_INT_ST			18u

	/* 0x0C:  */
	uint32_t volatile INT_ENA;
	/* This is the enable bit for rxfifo_full_int_st register. */
#define UART0_INT_ENA_RXFIFO_FULL_INT_ENA			0u
	/* This is the enable bit for rxfifo_full_int_st register. */
#define UART0_INT_ENA_TXFIFO_EMPTY_INT_ENA			1u
	/* This is the enable bit for parity_err_int_st register. */
#define UART0_INT_ENA_PARITY_ERR_INT_ENA			2u
	/* This is the enable bit for frm_err_int_st register. */
#define UART0_INT_ENA_FRM_ERR_INT_ENA				3u
	/* This is the enable bit for rxfifo_ovf_int_st register. */
#define UART0_INT_ENA_RXFIFO_OVF_INT_ENA			4u
	/* This is the enable bit for dsr_chg_int_st register. */
#define UART0_INT_ENA_DSR_CHG_INT_ENA				5u
	/* This is the enable bit for cts_chg_int_st register. */
#define UART0_INT_ENA_CTS_CHG_INT_ENA				6u
	/* This is the enable bit for brk_det_int_st register. */
#define UART0_INT_ENA_BRK_DET_INT_ENA				7u
	/* This is the enable bit for rxfifo_tout_int_st register. */
#define UART0_INT_ENA_RXFIFO_TOUT_INT_ENA			8u
	/* This is the enable bit for sw_xon_int_st register. */
#define UART0_INT_ENA_SW_XON_INT_ENA				9u
	/* This is the enable bit for sw_xoff_int_st register. */
#define UART0_INT_ENA_SW_XOFF_INT_ENA				10u
	/* This is the enable bit for glitch_det_int_st register. */
#define UART0_INT_ENA_GLITCH_DET_INT_ENA			11u
	/* This is the enable bit for tx_brk_done_int_st register. */
#define UART0_INT_ENA_TX_BRK_DONE_INT_ENA			12u
	/* This is the enable bit for tx_brk_idle_done_int_st register. */
#define UART0_INT_ENA_TX_BRK_IDLE_DONE_INT_ENA			13u
	/* This is the enable bit for tx_done_int_st register. */
#define UART0_INT_ENA_TX_DONE_INT_ENA				14u
	/* This is the enable bit for rs485_parity_err_int_st register. */
#define UART0_INT_ENA_RS485_PARITY_ERR_INT_ENA			15u
	/* This is the enable bit for rs485_parity_err_int_st register. */
#define UART0_INT_ENA_RS485_FRM_ERR_INT_ENA			16u
	/* This is the enable bit for rs485_clash_int_st register. */
#define UART0_INT_ENA_RS485_CLASH_INT_ENA			17u
	/* This is the enable bit for at_cmd_char_det_int_st register. */
#define UART0_INT_ENA_AT_CMD_CHAR_DET_INT_ENA			18u

	/* 0x10:  */
	uint32_t volatile INT_CLR;
	/* Set this bit to clear the rxfifo_full_int_raw interrupt. */
#define UART0_INT_CLR_RXFIFO_FULL_INT_CLR			0u
	/* Set this bit to clear txfifo_empty_int_raw interrupt. */
#define UART0_INT_CLR_TXFIFO_EMPTY_INT_CLR			1u
	/* Set this bit to clear parity_err_int_raw interrupt. */
#define UART0_INT_CLR_PARITY_ERR_INT_CLR			2u
	/* Set this bit to clear frm_err_int_raw interrupt. */
#define UART0_INT_CLR_FRM_ERR_INT_CLR				3u
	/* Set this bit to clear rxfifo_ovf_int_raw interrupt. */
#define UART0_INT_CLR_RXFIFO_OVF_INT_CLR			4u
	/* Set this bit to clear the dsr_chg_int_raw interrupt. */
#define UART0_INT_CLR_DSR_CHG_INT_CLR				5u
	/* Set this bit to clear the cts_chg_int_raw interrupt. */
#define UART0_INT_CLR_CTS_CHG_INT_CLR				6u
	/* Set this bit to clear the brk_det_int_raw interrupt. */
#define UART0_INT_CLR_BRK_DET_INT_CLR				7u
	/* Set this bit to clear the rxfifo_tout_int_raw interrupt. */
#define UART0_INT_CLR_RXFIFO_TOUT_INT_CLR			8u
	/* Set this bit to clear the sw_xon_int_raw interrupt. */
#define UART0_INT_CLR_SW_XON_INT_CLR				9u
	/* Set this bit to clear the sw_xon_int_raw interrupt. */
#define UART0_INT_CLR_SW_XOFF_INT_CLR				10u
	/* Set this bit to clear the glitch_det_int_raw interrupt. */
#define UART0_INT_CLR_GLITCH_DET_INT_CLR			11u
	/* Set this bit to clear the tx_brk_done_int_raw interrupt.. */
#define UART0_INT_CLR_TX_BRK_DONE_INT_CLR			12u
	/* Set this bit to clear the tx_brk_idle_done_int_raw interrupt. */
#define UART0_INT_CLR_TX_BRK_IDLE_DONE_INT_CLR			13u
	/* Set this bit to clear the tx_done_int_raw interrupt. */
#define UART0_INT_CLR_TX_DONE_INT_CLR				14u
	/* Set this bit to clear the rs485_parity_err_int_raw interrupt. */
#define UART0_INT_CLR_RS485_PARITY_ERR_INT_CLR			15u
	/* Set this bit to clear the rs485_frm_err_int_raw interrupt. */
#define UART0_INT_CLR_RS485_FRM_ERR_INT_CLR			16u
	/* Set this bit to clear the rs485_clash_int_raw interrupt. */
#define UART0_INT_CLR_RS485_CLASH_INT_CLR			17u
	/* Set this bit to clear the at_cmd_char_det_int_raw interrupt. */
#define UART0_INT_CLR_AT_CMD_CHAR_DET_INT_CLR			18u

	/* 0x14:  */
	uint32_t volatile CLKDIV;
	/* The register value is  the  integer part of the frequency divider's factor. */
#define UART0_CLKDIV_CLKDIV_Msb					0u
#define UART0_CLKDIV_CLKDIV_Lsb					19u
	/* The register  value is the decimal part of the frequency divider's factor. */
#define UART0_CLKDIV_FRAG_Msb					20u
#define UART0_CLKDIV_FRAG_Lsb					23u

	/* 0x18:  */
	uint32_t volatile AUTOBAUD;
	/* This is the enable bit for detecting baudrate. */
#define UART0_AUTOBAUD_EN					0u
	/* when input pulse width is lower then this value igore this pulse.this register is used in autobaud detect process. */
#define UART0_AUTOBAUD_GLITCH_FILT_Msb				8u
#define UART0_AUTOBAUD_GLITCH_FILT_Lsb				15u

	/* 0x1C:  */
	uint32_t volatile STATUS;
	/* (rx_mem_cnt rxfifo_cnt) stores the byte num of valid datas in receiver's fifo. */
#define UART0_STATUS_RXFIFO_CNT_Msb				0u
#define UART0_STATUS_RXFIFO_CNT_Lsb				7u
	/* This register stores the value of receiver's finite state machine. */
#define UART0_STATUS_ST_URX_OUT_Msb				8u
#define UART0_STATUS_ST_URX_OUT_Lsb				11u
	/* This register stores the level value of the internal uart dsr signal. */
#define UART0_STATUS_DSRN					13u
	/* This register stores the level value of the internal uart cts signal. */
#define UART0_STATUS_CTSN					14u
	/* This register stores the level value of the internal uart rxd signal. */
#define UART0_STATUS_RXD					15u
	/* (tx_mem_cnt txfifo_cnt) stores the byte num of valid datas in transmitter's fifo.tx_mem_cnt stores the 3 most significant bits  txfifo_cnt stores the 8 least significant bits. */
#define UART0_STATUS_TXFIFO_CNT_Msb				16u
#define UART0_STATUS_TXFIFO_CNT_Lsb				23u
	/* This register stores the value of transmitter's finite state machine. */
#define UART0_STATUS_ST_UTX_OUT_Msb				24u
#define UART0_STATUS_ST_UTX_OUT_Lsb				27u
	/* The register represent the level value of the internal uart dsr signal. */
#define UART0_STATUS_DTRN					29u
	/* This register represent the level value of the internal uart cts signal. */
#define UART0_STATUS_RTSN					30u
	/* This register represent the  level value of the internal uart rxd signal. */
#define UART0_STATUS_TXD					31u

	/* 0x20:  */
	uint32_t volatile CONF0;
	/* This register is used to configure the parity check mode. */
#define UART0_CONF0_PARITY					0u
	/* Set this bit to enable uart parity check. */
#define UART0_CONF0_PARITY_EN					1u
	/* This registe is used to set the length of data:  0:5bits 1:6bits 2:7bits 3:8bits */
#define UART0_CONF0_BIT_NUM_Msb					2u
#define UART0_CONF0_BIT_NUM_Lsb					3u
	/* This register is used to set the length of  stop bit. */
#define UART0_CONF0_STOP_BIT_NUM_Msb				4u
#define UART0_CONF0_STOP_BIT_NUM_Lsb				5u
	/* This register is used to configure the software rts signal which is used in software flow control. */
#define UART0_CONF0_SW_RTS					6u
	/* This register is used to configure the software dtr signal which is used in software flow control.. */
#define UART0_CONF0_SW_DTR					7u
	/* Set this bit to enbale transmitter to  send 0 when the process of sending data is done. */
#define UART0_CONF0_TXD_BRK					8u
	/* Set this bit to enable irda loopback mode. */
#define UART0_CONF0_IRDA_DPLX					9u
	/* This is the start enable bit for irda transmitter. */
#define UART0_CONF0_IRDA_TX_EN					10u
	/* 1.the irda transmitter's 11th bit is the same to the 10th bit. */
#define UART0_CONF0_IRDA_WCTL					11u
	/* Set this bit to inverse the level value of  irda transmitter's level. */
#define UART0_CONF0_IRDA_TX_INV					12u
	/* Set this bit to inverse the level value of irda receiver's level. */
#define UART0_CONF0_IRDA_RX_INV					13u
	/* Set this bit to enable uart loopback test mode. */
#define UART0_CONF0_LOOPBACK					14u
	/* Set this bit to enable transmitter's flow control function. */
#define UART0_CONF0_TX_FLOW_EN					15u
	/* Set this bit to enable irda protocol. */
#define UART0_CONF0_IRDA_EN					16u
	/* Set this bit to reset uart receiver's fifo. */
#define UART0_CONF0_RXFIFO_RST					17u
	/* Set this bit to reset uart transmitter's fifo. */
#define UART0_CONF0_TXFIFO_RST					18u
	/* Set this bit to inverse the level value of uart rxd signal. */
#define UART0_CONF0_RXD_INV					19u
	/* Set this bit to inverse the level value of uart cts signal. */
#define UART0_CONF0_CTS_INV					20u
	/* Set this bit to inverse the level value of uart dsr signal. */
#define UART0_CONF0_DSR_INV					21u
	/* Set this bit to inverse the level value of uart txd signal. */
#define UART0_CONF0_TXD_INV					22u
	/* Set this bit to inverse the level value of uart rts signal. */
#define UART0_CONF0_RTS_INV					23u
	/* Set this bit to inverse the level value of uart dtr signal. */
#define UART0_CONF0_DTR_INV					24u
	/* 1.force clock on for registers.support clock only when write registers */
#define UART0_CONF0_CLK_EN					25u
	/* 1.receiver stops storing data int fifo when data is wrong. */
#define UART0_CONF0_ERR_WR_MASK					26u
	/* This register is used to select the clock.1.apb clock 0:ref_tick */
#define UART0_CONF0_TICK_REF_ALWAYS_ON				27u

	/* 0x24:  */
	uint32_t volatile CONF1;
	/* When receiver receives more data than its threshold value.receiver will produce rxfifo_full_int_raw interrupt.the threshold value is (rx_flow_thrhd_h3 rxfifo_full_thrhd). */
#define UART0_CONF1_RXFIFO_FULL_THRHD_Msb			0u
#define UART0_CONF1_RXFIFO_FULL_THRHD_Lsb			6u
	/* when the data amount in transmitter fifo is less than its threshold value. it will produce txfifo_empty_int_raw interrupt. the threshold value is (tx_mem_empty_thrhd txfifo_empty_thrhd) */
#define UART0_CONF1_TXFIFO_EMPTY_THRHD_Msb			8u
#define UART0_CONF1_TXFIFO_EMPTY_THRHD_Lsb			14u
	/* when receiver receives more data than its threshold value. receiver produce signal to tell the transmitter stop transferring data. the threshold value is (rx_flow_thrhd_h3 rx_flow_thrhd). */
#define UART0_CONF1_RX_FLOW_THRHD_Msb				16u
#define UART0_CONF1_RX_FLOW_THRHD_Lsb				22u
	/* This is the flow enable bit for uart receiver. */
#define UART0_CONF1_RX_FLOW_EN					23u
	/* This register is used to configure the timeout value for uart receiver receiving a byte. */
#define UART0_CONF1_RX_TOUT_THRHD_Msb				24u
#define UART0_CONF1_RX_TOUT_THRHD_Lsb				30u
	/* This is the enble bit for uart receiver's timeout function. */
#define UART0_CONF1_RX_TOUT_EN					31u

	/* 0x28:  */
	uint32_t volatile LOWPULSE;
	/* This register stores the value of the minimum duration time for the low level pulse. */
#define UART0_LOWPULSE_MIN_CNT_Msb				0u
#define UART0_LOWPULSE_MIN_CNT_Lsb				19u

	/* 0x2C:  */
	uint32_t volatile HIGHPULSE;
	/* This register stores  the value of the maxinum duration time for the high level pulse. */
#define UART0_HIGHPULSE_MIN_CNT_Msb				0u
#define UART0_HIGHPULSE_MIN_CNT_Lsb				19u

	/* 0x30:  */
	uint32_t volatile RXD_CNT;
	/* This register stores the count of rxd edge change. */
#define UART0_RXD_CNT_RXD_EDGE_CNT_Msb				0u
#define UART0_RXD_CNT_RXD_EDGE_CNT_Lsb				9u

	/* 0x34:  */
	uint32_t volatile FLOW_CONF;
	/* Set this bit to enable software  flow control. */
#define UART0_FLOW_CONF_SW_FLOW_CON_EN				0u
	/* Set this bit to remove flow control char from the received data. */
#define UART0_FLOW_CONF_XONOFF_DEL				1u
	/* Set this bit to clear ctsn to stop the  transmitter from sending data. */
#define UART0_FLOW_CONF_FORCE_XON				2u
	/* Set this bit to set ctsn to enable the transmitter to go on sending data. */
#define UART0_FLOW_CONF_FORCE_XOFF				3u
	/* Set this bit to send xon char. */
#define UART0_FLOW_CONF_SEND_XON				4u
	/* Set this bit to send xoff char. */
#define UART0_FLOW_CONF_SEND_XOFF				5u

	/* 0x38:  */
	uint32_t volatile SLEEP_CONF;
	/* When the input rxd edge changes more than this register value. */
#define UART0_SLEEP_CONF_ACTIVE_THRESHOLD_Msb			0u
#define UART0_SLEEP_CONF_ACTIVE_THRESHOLD_Lsb			9u

	/* 0x3C:  */
	uint32_t volatile SWFC_CONF;
	/* when the data amount in receiver's fifo is more than this register value. */
#define UART0_SWFC_CONF_XON_THRESHOLD_Msb			0u
#define UART0_SWFC_CONF_XON_THRESHOLD_Lsb			7u
	/* When the data amount in receiver's fifo is less than this register value. */
#define UART0_SWFC_CONF_XOFF_THRESHOLD_Msb			8u
#define UART0_SWFC_CONF_XOFF_THRESHOLD_Lsb			15u
	/* This register stores the xon flow control char. */
#define UART0_SWFC_CONF_XON_CHAR_Msb				16u
#define UART0_SWFC_CONF_XON_CHAR_Lsb				23u
	/* This register stores the xoff flow control char. */
#define UART0_SWFC_CONF_XOFF_CHAR_Msb				24u
#define UART0_SWFC_CONF_XOFF_CHAR_Lsb				31u

	/* 0x40:  */
	uint32_t volatile IDLE_CONF;
	/* when receiver takes more time than this register value to receive a byte data. */
#define UART0_IDLE_CONF_RX_IDLE_THRHD_Msb			0u
#define UART0_IDLE_CONF_RX_IDLE_THRHD_Lsb			9u
	/* This register is used to configure the duration time between transfers. */
#define UART0_IDLE_CONF_TX_IDLE_NUM_Msb				10u
#define UART0_IDLE_CONF_TX_IDLE_NUM_Lsb				19u
	/* This register is used to configure the num of 0 send after the process of sending data is done. */
#define UART0_IDLE_CONF_TX_BRK_NUM_Msb				20u
#define UART0_IDLE_CONF_TX_BRK_NUM_Lsb				27u

	/* 0x44:  */
	uint32_t volatile RS485_CONF;
	/* Set this bit to choose rs485 mode. */
#define UART0_RS485_CONF_RS485_EN				0u
	/* Set this bit to delay the stop bit by 1 bit. */
#define UART0_RS485_CONF_DL0_EN					1u
	/* Set this bit to delay the stop bit by 1 bit. */
#define UART0_RS485_CONF_DL1_EN					2u
	/* Set this bit to enable loopback transmitter's output data signal to receiver's input data signal. */
#define UART0_RS485_CONF_RS485TX_RX_EN				3u
	/* 1: enable rs485's transmitter to send data when rs485's receiver is busy. */
#define UART0_RS485_CONF_RS485RXBY_TX_EN			4u
	/* This register is used to delay the receiver's internal data signal. */
#define UART0_RS485_CONF_RS485_RX_DLY_NUM			5u
	/* This register is used to delay the transmitter's internal data signal. */
#define UART0_RS485_CONF_RS485_TX_DLY_NUM_Msb			6u
#define UART0_RS485_CONF_RS485_TX_DLY_NUM_Lsb			9u

	/* 0x48:  */
	uint32_t volatile AT_CMD_PRECNT;
	/* This register is used to configure the idle duration time before the first at_cmd is received by receiver. */
#define UART0_AT_CMD_PRECNT_PRE_IDLE_NUM_Msb			0u
#define UART0_AT_CMD_PRECNT_PRE_IDLE_NUM_Lsb			23u

	/* 0x4C:  */
	uint32_t volatile AT_CMD_POSTCNT;
	/* This register is used to configure the duration time between the last at_cmd and the next data. */
#define UART0_AT_CMD_POSTCNT_POST_IDLE_NUM_Msb			0u
#define UART0_AT_CMD_POSTCNT_POST_IDLE_NUM_Lsb			23u

	/* 0x50:  */
	uint32_t volatile AT_CMD_GAPTOUT;
	/* This register is used to configure the duration time between the at_cmd chars. */
#define UART0_AT_CMD_GAPTOUT_RX_GAP_TOUT_Msb			0u
#define UART0_AT_CMD_GAPTOUT_RX_GAP_TOUT_Lsb			23u

	/* 0x54:  */
	uint32_t volatile AT_CMD_CHAR;
	/* This register is used to configure the content of at_cmd char. */
#define UART0_AT_CMD_CHAR_AT_CMD_CHAR_Msb			0u
#define UART0_AT_CMD_CHAR_AT_CMD_CHAR_Lsb			7u
	/* This register is used to configure the num of continous at_cmd chars received by receiver. */
#define UART0_AT_CMD_CHAR_CHAR_NUM_Msb				8u
#define UART0_AT_CMD_CHAR_CHAR_NUM_Lsb				15u

	/* 0x58:  */
	uint32_t volatile MEM_CONF;
	/* Set this bit to power down mem.when reg_mem_pd registers in the 3 uarts are all set to 1  mem will enter low power mode. */
#define UART0_MEM_CONF_MEM_PD					0u
	/* This register is used to configure the amount of mem allocated to receiver's fifo. */
#define UART0_MEM_CONF_RX_SIZE_Msb				3u
#define UART0_MEM_CONF_RX_SIZE_Lsb				6u
	/* This register is used to configure the amount of mem allocated to transmitter's fifo.the default byte num is 128. */
#define UART0_MEM_CONF_TX_SIZE_Msb				7u
#define UART0_MEM_CONF_TX_SIZE_Lsb				10u
	/* refer to the rx_flow_thrhd's describtion. */
#define UART0_MEM_CONF_RX_FLOW_THRHD_H3_Msb			15u
#define UART0_MEM_CONF_RX_FLOW_THRHD_H3_Lsb			17u
	/* refer to the rx_tout_thrhd's describtion. */
#define UART0_MEM_CONF_RX_TOUT_THRHD_H3_Msb			18u
#define UART0_MEM_CONF_RX_TOUT_THRHD_H3_Lsb			20u
	/* refer to the uart_xon_threshold's describtion. */
#define UART0_MEM_CONF_XON_THRESHOLD_H2_Msb			21u
#define UART0_MEM_CONF_XON_THRESHOLD_H2_Lsb			22u
	/* refer to the uart_xoff_threshold's describtion. */
#define UART0_MEM_CONF_XOFF_THRESHOLD_H2_Msb			23u
#define UART0_MEM_CONF_XOFF_THRESHOLD_H2_Lsb			24u
	/* refer to the rxfifo_full_thrhd's describtion. */
#define UART0_MEM_CONF_RX_MEM_FULL_THRHD_Msb			25u
#define UART0_MEM_CONF_RX_MEM_FULL_THRHD_Lsb			27u
	/* refer to txfifo_empty_thrhd 's describtion. */
#define UART0_MEM_CONF_TX_MEM_EMPTY_THRHD_Msb			28u
#define UART0_MEM_CONF_TX_MEM_EMPTY_THRHD_Lsb			30u

	/* 0x5C:  */
	uint32_t volatile MEM_TX_STATUS;
	/*  */
#define UART0_MEM_TX_STATUS_MEM_TX_STATUS_Msb			0u
#define UART0_MEM_TX_STATUS_MEM_TX_STATUS_Lsb			23u

	/* 0x60:  */
	uint32_t volatile MEM_RX_STATUS;
	/* This register stores the current uart rx mem read address  and rx mem write address */
#define UART0_MEM_RX_STATUS_MEM_RX_STATUS_Msb			0u
#define UART0_MEM_RX_STATUS_MEM_RX_STATUS_Lsb			23u
	/* This register stores the rx mem read address */
#define UART0_MEM_RX_STATUS_MEM_RX_RD_ADDR_Msb			2u
#define UART0_MEM_RX_STATUS_MEM_RX_RD_ADDR_Lsb			12u
	/* This register stores the rx mem write address */
#define UART0_MEM_RX_STATUS_MEM_RX_WR_ADDR_Msb			13u
#define UART0_MEM_RX_STATUS_MEM_RX_WR_ADDR_Lsb			23u

	/* 0x64:  */
	uint32_t volatile MEM_CNT_STATUS;
	/* refer to the rxfifo_cnt's describtion. */
#define UART0_MEM_CNT_STATUS_RX_MEM_CNT_Msb			0u
#define UART0_MEM_CNT_STATUS_RX_MEM_CNT_Lsb			2u
	/* refer to the txfifo_cnt's describtion. */
#define UART0_MEM_CNT_STATUS_TX_MEM_CNT_Msb			3u
#define UART0_MEM_CNT_STATUS_TX_MEM_CNT_Lsb			5u

	/* 0x68:  */
	uint32_t volatile POSPULSE;
	/* This register stores the count of rxd posedge edge. */
#define UART0_POSPULSE_POSEDGE_MIN_CNT_Msb			0u
#define UART0_POSPULSE_POSEDGE_MIN_CNT_Lsb			19u

	/* 0x6C:  */
	uint32_t volatile NEGPULSE;
	/* This register stores the count of rxd negedge edge. */
#define UART0_NEGPULSE_NEGEDGE_MIN_CNT_Msb			0u
#define UART0_NEGPULSE_NEGEDGE_MIN_CNT_Lsb			19u

	/* 0x78:  */
	uint32_t volatile DATE;
	/*  */
#define UART0_DATE_DATE_Msb					0u
#define UART0_DATE_DATE_Lsb					31u

	/* 0x7C:  */
	uint32_t volatile ID;
	/*  */
#define UART0_ID_ID_Msb						0u
#define UART0_ID_ID_Lsb						31u

};


#define UART1 ((struct mcu_uart1 *)0x3FF50000)

struct mcu_uart1 {

};


#define UART2 ((struct mcu_uart2 *)0x3FF6E000)

struct mcu_uart2 {

};


#define UHCI0 ((struct mcu_uhci0 *)0x3FF54000)

struct mcu_uhci0 {

	/* 0x00:  */
	uint32_t volatile CONF0;
	/* Set this bit to reset in link operations. */
#define UHCI0_CONF0_IN_RST					0u
	/* Set this bit to reset out link operations. */
#define UHCI0_CONF0_OUT_RST					1u
	/* Set this bit to reset dma ahb fifo. */
#define UHCI0_CONF0_AHBM_FIFO_RST				2u
	/* Set this bit to reset dma  ahb interface. */
#define UHCI0_CONF0_AHBM_RST					3u
	/* Set this bit to enable loop test for in links. */
#define UHCI0_CONF0_IN_LOOP_TEST				4u
	/* Set this bit to enable loop test for out links. */
#define UHCI0_CONF0_OUT_LOOP_TEST				5u
	/* when in link's length is 0  go on to use the next in link automatically. */
#define UHCI0_CONF0_OUT_AUTO_WRBACK				6u
	/* don't use */
#define UHCI0_CONF0_OUT_NO_RESTART_CLR				7u
	/* Set this bit to produce eof after DMA pops all data  clear this bit to produce eof after DMA pushes all data */
#define UHCI0_CONF0_OUT_EOF_MODE				8u
	/* Set this bit to use UART to transmit or receive data. */
#define UHCI0_CONF0_UART0_CE					9u
	/* Set this bit to use UART1 to transmit or receive data. */
#define UHCI0_CONF0_UART1_CE					10u
	/* Set this bit to use UART2 to transmit or receive data. */
#define UHCI0_CONF0_UART2_CE					11u
	/* Set this bit to enable DMA in links to use burst mode. */
#define UHCI0_CONF0_OUTDSCR_BURST_EN				12u
	/* Set this bit to enable DMA out links to use burst mode. */
#define UHCI0_CONF0_INDSCR_BURST_EN				13u
	/* Set this bit to enable DMA burst MODE */
#define UHCI0_CONF0_OUT_DATA_BURST_EN				14u
	/*  */
#define UHCI0_CONF0_MEM_TRANS_EN				15u
	/* Set this bit to use special char to separate the data frame. */
#define UHCI0_CONF0_SEPER_EN					16u
	/* Set this bit to enable to use head packet  before the data frame. */
#define UHCI0_CONF0_HEAD_EN					17u
	/* Set this bit to enable receiver''s ability of crc calculation  when crc_en bit in head packet is 1 then there will be crc bytes after data_frame */
#define UHCI0_CONF0_CRC_REC_EN					18u
	/* Set this bit to enable to use idle time  when the idle time after data frame is satisfied  this means the end of a data frame. */
#define UHCI0_CONF0_UART_IDLE_EOF_EN				19u
	/* Set this bit to enable to use packet_len in packet head  when the received data is equal to packet_len  this means the end of a data frame. */
#define UHCI0_CONF0_LEN_EOF_EN					20u
	/* Set this bit to enable crc calculation for data frame when bit6 in the head packet is 1. */
#define UHCI0_CONF0_ENCODE_CRC_EN				21u
	/* Set this bit to enable clock-gating for read or write registers. */
#define UHCI0_CONF0_CLK_EN					22u
	/* Set this bit to enable to use brk char as the end of a data frame. */
#define UHCI0_CONF0_UART_RX_BRK_EOF_EN				23u

	/* 0x04:  */
	uint32_t volatile INT_RAW;
	/* when a separator char has been send  it will produce uhci_rx_start_int interrupt. */
#define UHCI0_INT_RAW_RX_START_INT_RAW				0u
	/* when DMA detects a separator char it will produce uhci_tx_start_int interrupt. */
#define UHCI0_INT_RAW_TX_START_INT_RAW				1u
	/* when DMA takes a lot of time to receive a data   it will produce uhci_rx_hung_int interrupt. */
#define UHCI0_INT_RAW_RX_HUNG_INT_RAW				2u
	/* when DMA takes a lot of time to read a data from RAM  it will produce uhci_tx_hung_int interrupt. */
#define UHCI0_INT_RAW_TX_HUNG_INT_RAW				3u
	/* when a in link descriptor has been completed it will produce uhci_in_done_int interrupt. */
#define UHCI0_INT_RAW_IN_DONE_INT_RAW				4u
	/* when a data packet has been received  it will produce uhci_in_suc_eof_int interrupt. */
#define UHCI0_INT_RAW_IN_SUC_EOF_INT_RAW			5u
	/* when there are some errors about eof in in link descriptor  it will produce uhci_in_err_eof_int interrupt. */
#define UHCI0_INT_RAW_IN_ERR_EOF_INT_RAW			6u
	/* when a out link descriptor is completed  it will produce uhci_out_done_int interrupt. */
#define UHCI0_INT_RAW_OUT_DONE_INT_RAW				7u
	/* when the current descriptor's eof bit is 1  it will produce uhci_out_eof_int interrupt. */
#define UHCI0_INT_RAW_OUT_EOF_INT_RAW				8u
	/* when there are some errors about the out link descriptor  it will produce uhci_in_dscr_err_int interrupt. */
#define UHCI0_INT_RAW_IN_DSCR_ERR_INT_RAW			9u
	/* when there are some errors about the in link descriptor  it will produce uhci_out_dscr_err_int interrupt. */
#define UHCI0_INT_RAW_OUT_DSCR_ERR_INT_RAW			10u
	/* when there are not enough in links for DMA it will produce uhci_in_dscr_err_int interrupt. */
#define UHCI0_INT_RAW_IN_DSCR_EMPTY_INT_RAW			11u
	/* when there are some errors about eof in outlink descriptor  it will produce uhci_outlink_eof_err_int interrupt. */
#define UHCI0_INT_RAW_OUTLINK_EOF_ERR_INT_RAW			12u
	/* When all data have been send  it will produce uhci_out_total_eof_int interrupt. */
#define UHCI0_INT_RAW_OUT_TOTAL_EOF_INT_RAW			13u
	/* When use single send registers to send a short packets it will produce this interrupt when dma has send the short packet. */
#define UHCI0_INT_RAW_SEND_S_Q_INT_RAW				14u
	/* When use always_send registers to send a series of short packets it will produce this interrupt when dma has send the short packet. */
#define UHCI0_INT_RAW_SEND_A_Q_INT_RAW				15u
	/*  */
#define UHCI0_INT_RAW_DMA_INFIFO_FULL_WM_INT_RAW		16u

	/* 0x08:  */
	uint32_t volatile INT_ST;
	/*  */
#define UHCI0_INT_ST_RX_START_INT_ST				0u
	/*  */
#define UHCI0_INT_ST_TX_START_INT_ST				1u
	/*  */
#define UHCI0_INT_ST_RX_HUNG_INT_ST				2u
	/*  */
#define UHCI0_INT_ST_TX_HUNG_INT_ST				3u
	/*  */
#define UHCI0_INT_ST_IN_DONE_INT_ST				4u
	/*  */
#define UHCI0_INT_ST_IN_SUC_EOF_INT_ST				5u
	/*  */
#define UHCI0_INT_ST_IN_ERR_EOF_INT_ST				6u
	/*  */
#define UHCI0_INT_ST_OUT_DONE_INT_ST				7u
	/*  */
#define UHCI0_INT_ST_OUT_EOF_INT_ST				8u
	/*  */
#define UHCI0_INT_ST_IN_DSCR_ERR_INT_ST				9u
	/*  */
#define UHCI0_INT_ST_OUT_DSCR_ERR_INT_ST			10u
	/*  */
#define UHCI0_INT_ST_IN_DSCR_EMPTY_INT_ST			11u
	/*  */
#define UHCI0_INT_ST_OUTLINK_EOF_ERR_INT_ST			12u
	/*  */
#define UHCI0_INT_ST_OUT_TOTAL_EOF_INT_ST			13u
	/*  */
#define UHCI0_INT_ST_SEND_S_Q_INT_ST				14u
	/*  */
#define UHCI0_INT_ST_SEND_A_Q_INT_ST				15u
	/*  */
#define UHCI0_INT_ST_DMA_INFIFO_FULL_WM_INT_ST			16u

	/* 0x0C:  */
	uint32_t volatile INT_ENA;
	/*  */
#define UHCI0_INT_ENA_RX_START_INT_ENA				0u
	/*  */
#define UHCI0_INT_ENA_TX_START_INT_ENA				1u
	/*  */
#define UHCI0_INT_ENA_RX_HUNG_INT_ENA				2u
	/*  */
#define UHCI0_INT_ENA_TX_HUNG_INT_ENA				3u
	/*  */
#define UHCI0_INT_ENA_IN_DONE_INT_ENA				4u
	/*  */
#define UHCI0_INT_ENA_IN_SUC_EOF_INT_ENA			5u
	/*  */
#define UHCI0_INT_ENA_IN_ERR_EOF_INT_ENA			6u
	/*  */
#define UHCI0_INT_ENA_OUT_DONE_INT_ENA				7u
	/*  */
#define UHCI0_INT_ENA_OUT_EOF_INT_ENA				8u
	/*  */
#define UHCI0_INT_ENA_IN_DSCR_ERR_INT_ENA			9u
	/*  */
#define UHCI0_INT_ENA_OUT_DSCR_ERR_INT_ENA			10u
	/*  */
#define UHCI0_INT_ENA_IN_DSCR_EMPTY_INT_ENA			11u
	/*  */
#define UHCI0_INT_ENA_OUTLINK_EOF_ERR_INT_ENA			12u
	/*  */
#define UHCI0_INT_ENA_OUT_TOTAL_EOF_INT_ENA			13u
	/*  */
#define UHCI0_INT_ENA_SEND_S_Q_INT_ENA				14u
	/*  */
#define UHCI0_INT_ENA_SEND_A_Q_INT_ENA				15u
	/*  */
#define UHCI0_INT_ENA_DMA_INFIFO_FULL_WM_INT_ENA		16u

	/* 0x10:  */
	uint32_t volatile INT_CLR;
	/*  */
#define UHCI0_INT_CLR_RX_START_INT_CLR				0u
	/*  */
#define UHCI0_INT_CLR_TX_START_INT_CLR				1u
	/*  */
#define UHCI0_INT_CLR_RX_HUNG_INT_CLR				2u
	/*  */
#define UHCI0_INT_CLR_TX_HUNG_INT_CLR				3u
	/*  */
#define UHCI0_INT_CLR_IN_DONE_INT_CLR				4u
	/*  */
#define UHCI0_INT_CLR_IN_SUC_EOF_INT_CLR			5u
	/*  */
#define UHCI0_INT_CLR_IN_ERR_EOF_INT_CLR			6u
	/*  */
#define UHCI0_INT_CLR_OUT_DONE_INT_CLR				7u
	/*  */
#define UHCI0_INT_CLR_OUT_EOF_INT_CLR				8u
	/*  */
#define UHCI0_INT_CLR_IN_DSCR_ERR_INT_CLR			9u
	/*  */
#define UHCI0_INT_CLR_OUT_DSCR_ERR_INT_CLR			10u
	/*  */
#define UHCI0_INT_CLR_IN_DSCR_EMPTY_INT_CLR			11u
	/*  */
#define UHCI0_INT_CLR_OUTLINK_EOF_ERR_INT_CLR			12u
	/*  */
#define UHCI0_INT_CLR_OUT_TOTAL_EOF_INT_CLR			13u
	/*  */
#define UHCI0_INT_CLR_SEND_S_Q_INT_CLR				14u
	/*  */
#define UHCI0_INT_CLR_SEND_A_Q_INT_CLR				15u
	/*  */
#define UHCI0_INT_CLR_DMA_INFIFO_FULL_WM_INT_CLR		16u

	/* 0x14:  */
	uint32_t volatile DMA_OUT_STATUS;
	/* 1:DMA out link descriptor's fifo is full. */
#define UHCI0_DMA_OUT_STATUS_OUT_FULL				0u
	/* 1:DMA in link descriptor's fifo is empty. */
#define UHCI0_DMA_OUT_STATUS_OUT_EMPTY				1u

	/* 0x18:  */
	uint32_t volatile DMA_OUT_PUSH;
	/* This is the data need to be pushed into out link descriptor's fifo. */
#define UHCI0_DMA_OUT_PUSH_OUTFIFO_WDATA_Msb			0u
#define UHCI0_DMA_OUT_PUSH_OUTFIFO_WDATA_Lsb			8u
	/* Set this bit to push data in out link descriptor's fifo. */
#define UHCI0_DMA_OUT_PUSH_OUTFIFO_PUSH				16u

	/* 0x1C:  */
	uint32_t volatile DMA_IN_STATUS;
	/*  */
#define UHCI0_DMA_IN_STATUS_IN_FULL				0u
	/*  */
#define UHCI0_DMA_IN_STATUS_IN_EMPTY				1u
	/* This register stores the errors caused in out link descriptor's data packet. */
#define UHCI0_DMA_IN_STATUS_RX_ERR_CAUSE_Msb			4u
#define UHCI0_DMA_IN_STATUS_RX_ERR_CAUSE_Lsb			6u

	/* 0x20:  */
	uint32_t volatile DMA_IN_POP;
	/* This register stores the data pop from in link descriptor's fifo. */
#define UHCI0_DMA_IN_POP_INFIFO_RDATA_Msb			0u
#define UHCI0_DMA_IN_POP_INFIFO_RDATA_Lsb			11u
	/* Set this bit to pop data in in link descriptor's fifo. */
#define UHCI0_DMA_IN_POP_INFIFO_POP				16u

	/* 0x24:  */
	uint32_t volatile DMA_OUT_LINK;
	/* This register stores the least 20 bits of the first out link descriptor's address. */
#define UHCI0_DMA_OUT_LINK_OUTLINK_ADDR_Msb			0u
#define UHCI0_DMA_OUT_LINK_OUTLINK_ADDR_Lsb			19u
	/* Set this bit to stop dealing with the out link descriptors. */
#define UHCI0_DMA_OUT_LINK_OUTLINK_STOP				28u
	/* Set this bit to start dealing with the out link descriptors. */
#define UHCI0_DMA_OUT_LINK_OUTLINK_START			29u
	/* Set this bit to mount on new out link descriptors */
#define UHCI0_DMA_OUT_LINK_OUTLINK_RESTART			30u
	/* 1£º the out link descriptor's fsm is in idle state. */
#define UHCI0_DMA_OUT_LINK_OUTLINK_PARK				31u

	/* 0x28:  */
	uint32_t volatile DMA_IN_LINK;
	/* This register stores the least 20 bits of the first in link descriptor's address. */
#define UHCI0_DMA_IN_LINK_INLINK_ADDR_Msb			0u
#define UHCI0_DMA_IN_LINK_INLINK_ADDR_Lsb			19u
	/* 1:when a packet is wrong in link descriptor returns to the descriptor which is lately used. */
#define UHCI0_DMA_IN_LINK_INLINK_AUTO_RET			20u
	/* Set this bit to stop dealing with the in link descriptors. */
#define UHCI0_DMA_IN_LINK_INLINK_STOP				28u
	/* Set this bit to start dealing with the in link descriptors. */
#define UHCI0_DMA_IN_LINK_INLINK_START				29u
	/* Set this bit to mount on new in link descriptors */
#define UHCI0_DMA_IN_LINK_INLINK_RESTART			30u
	/* 1:the in link descriptor's fsm is in idle state. */
#define UHCI0_DMA_IN_LINK_INLINK_PARK				31u

	/* 0x2C:  */
	uint32_t volatile CONF1;
	/* Set this bit to enable decoder to check  check_sum in packet header. */
#define UHCI0_CONF1_CHECK_SUM_EN				0u
	/* Set this bit to enable decoder to check seq num in packet header. */
#define UHCI0_CONF1_CHECK_SEQ_EN				1u
	/* Set this bit to disable crc calculation. */
#define UHCI0_CONF1_CRC_DISABLE					2u
	/* Set this bit to save packet header . */
#define UHCI0_CONF1_SAVE_HEAD					3u
	/* Set this bit to enable hardware replace check_sum in packet header automatically. */
#define UHCI0_CONF1_TX_CHECK_SUM_RE				4u
	/* Set this bit to enable hardware replace ack num in packet header automatically. */
#define UHCI0_CONF1_TX_ACK_NUM_RE				5u
	/* Set this bit to check the owner bit in link descriptor. */
#define UHCI0_CONF1_CHECK_OWNER					6u
	/* Set this bit to enable software way to add packet header. */
#define UHCI0_CONF1_WAIT_SW_START				7u
	/* Set this bit to start inserting the packet header. */
#define UHCI0_CONF1_SW_START					8u
	/* when data amount in link descriptor's fifo is more than this register value  it will produce uhci_dma_infifo_full_wm_int interrupt. */
#define UHCI0_CONF1_DMA_INFIFO_FULL_THRS_Msb			9u
#define UHCI0_CONF1_DMA_INFIFO_FULL_THRS_Lsb			20u

	/* 0x30:  */
	uint32_t volatile STATE0;
	/*  */
#define UHCI0_STATE0_STATE0_Msb					0u
#define UHCI0_STATE0_STATE0_Lsb					31u

	/* 0x34:  */
	uint32_t volatile STATE1;
	/*  */
#define UHCI0_STATE1_STATE1_Msb					0u
#define UHCI0_STATE1_STATE1_Lsb					31u

	/* 0x38:  */
	uint32_t volatile DMA_OUT_EOF_DES_ADDR;
	/* This register stores the address of out link descriptoir when eof bit in this descriptor is 1. */
#define UHCI0_DMA_OUT_EOF_DES_ADDR_OUT_EOF_DES_ADDR_Msb		0u
#define UHCI0_DMA_OUT_EOF_DES_ADDR_OUT_EOF_DES_ADDR_Lsb		31u

	/* 0x3C:  */
	uint32_t volatile DMA_IN_SUC_EOF_DES_ADDR;
	/* This register stores the address of in link descriptor when eof bit in this descriptor is 1. */
#define UHCI0_DMA_IN_SUC_EOF_DES_ADDR_IN_SUC_EOF_DES_ADDR_Msb	0u
#define UHCI0_DMA_IN_SUC_EOF_DES_ADDR_IN_SUC_EOF_DES_ADDR_Lsb	31u

	/* 0x40:  */
	uint32_t volatile DMA_IN_ERR_EOF_DES_ADDR;
	/* This register stores the address of in link descriptor when there are some errors in this descriptor. */
#define UHCI0_DMA_IN_ERR_EOF_DES_ADDR_IN_ERR_EOF_DES_ADDR_Msb	0u
#define UHCI0_DMA_IN_ERR_EOF_DES_ADDR_IN_ERR_EOF_DES_ADDR_Lsb	31u

	/* 0x44:  */
	uint32_t volatile DMA_OUT_EOF_BFR_DES_ADDR;
	/* This register stores the address of out link descriptor when there are some errors in this descriptor. */
#define UHCI0_DMA_OUT_EOF_BFR_DES_ADDR_OUT_EOF_BFR_DES_ADDR_Msb	0u
#define UHCI0_DMA_OUT_EOF_BFR_DES_ADDR_OUT_EOF_BFR_DES_ADDR_Lsb	31u

	/* 0x48:  */
	uint32_t volatile AHB_TEST;
	/* bit2 is ahb bus test enable ,bit1 is used to choose wrtie(1) or read(0) mode. bit0 is used to choose test only once(1) or continue(0) */
#define UHCI0_AHB_TEST_AHB_TESTMODE_Msb				0u
#define UHCI0_AHB_TEST_AHB_TESTMODE_Lsb				2u
	/* The two bits represent ahb bus address bit[20:19] */
#define UHCI0_AHB_TEST_AHB_TESTADDR_Msb				4u
#define UHCI0_AHB_TEST_AHB_TESTADDR_Lsb				5u

	/* 0x4C:  */
	uint32_t volatile DMA_IN_DSCR;
	/* The content of current in link descriptor's third dword */
#define UHCI0_DMA_IN_DSCR_INLINK_DSCR_Msb			0u
#define UHCI0_DMA_IN_DSCR_INLINK_DSCR_Lsb			31u

	/* 0x50:  */
	uint32_t volatile DMA_IN_DSCR_BF0;
	/* The content of current in link descriptor's first dword */
#define UHCI0_DMA_IN_DSCR_BF0_INLINK_DSCR_BF0_Msb		0u
#define UHCI0_DMA_IN_DSCR_BF0_INLINK_DSCR_BF0_Lsb		31u

	/* 0x54:  */
	uint32_t volatile DMA_IN_DSCR_BF1;
	/* The content of current in link descriptor's second dword */
#define UHCI0_DMA_IN_DSCR_BF1_INLINK_DSCR_BF1_Msb		0u
#define UHCI0_DMA_IN_DSCR_BF1_INLINK_DSCR_BF1_Lsb		31u

	/* 0x58:  */
	uint32_t volatile DMA_OUT_DSCR;
	/* The content of current out link descriptor's third dword */
#define UHCI0_DMA_OUT_DSCR_OUTLINK_DSCR_Msb			0u
#define UHCI0_DMA_OUT_DSCR_OUTLINK_DSCR_Lsb			31u

	/* 0x5C:  */
	uint32_t volatile DMA_OUT_DSCR_BF0;
	/* The content of current out link descriptor's first dword */
#define UHCI0_DMA_OUT_DSCR_BF0_OUTLINK_DSCR_BF0_Msb		0u
#define UHCI0_DMA_OUT_DSCR_BF0_OUTLINK_DSCR_BF0_Lsb		31u

	/* 0x60:  */
	uint32_t volatile DMA_OUT_DSCR_BF1;
	/* The content of current out link descriptor's second dword */
#define UHCI0_DMA_OUT_DSCR_BF1_OUTLINK_DSCR_BF1_Msb		0u
#define UHCI0_DMA_OUT_DSCR_BF1_OUTLINK_DSCR_BF1_Lsb		31u

	/* 0x64:  */
	uint32_t volatile ESCAPE_CONF;
	/* Set this bit to enable  0xc0 char decode when DMA receives data. */
#define UHCI0_ESCAPE_CONF_TX_C0_ESC_EN				0u
	/* Set this bit to enable  0xdb char decode when DMA receives data. */
#define UHCI0_ESCAPE_CONF_TX_DB_ESC_EN				1u
	/* Set this bit to enable  flow control char 0x11 decode when DMA receives data. */
#define UHCI0_ESCAPE_CONF_TX_11_ESC_EN				2u
	/* Set this bit to enable flow control char 0x13 decode when DMA receives data. */
#define UHCI0_ESCAPE_CONF_TX_13_ESC_EN				3u
	/* Set this bit to enable  0xc0 char replace when DMA sends data. */
#define UHCI0_ESCAPE_CONF_RX_C0_ESC_EN				4u
	/* Set this bit to enable  0xdb char replace when DMA sends data. */
#define UHCI0_ESCAPE_CONF_RX_DB_ESC_EN				5u
	/* Set this bit to enable  flow control char 0x11 replace when DMA sends data. */
#define UHCI0_ESCAPE_CONF_RX_11_ESC_EN				6u
	/* Set this bit to enable  flow control char 0x13 replace when DMA sends data. */
#define UHCI0_ESCAPE_CONF_RX_13_ESC_EN				7u

	/* 0x68:  */
	uint32_t volatile HUNG_CONF;
	/* This register stores the timeout value.when DMA takes more time than this register value to receive a data  it will produce  uhci_tx_hung_int interrupt. */
#define UHCI0_HUNG_CONF_TXFIFO_TIMEOUT_Msb			0u
#define UHCI0_HUNG_CONF_TXFIFO_TIMEOUT_Lsb			7u
	/* The tick count is cleared when its value >=(17'd8000>>reg_txfifo_timeout_shift) */
#define UHCI0_HUNG_CONF_TXFIFO_TIMEOUT_SHIFT_Msb		8u
#define UHCI0_HUNG_CONF_TXFIFO_TIMEOUT_SHIFT_Lsb		10u
	/* The enable bit for txfifo receive data  timeout */
#define UHCI0_HUNG_CONF_TXFIFO_TIMEOUT_ENA			11u
	/* This register stores the timeout value.when DMA takes more time than this register value to read a data from RAM  it will produce  uhci_rx_hung_int interrupt. */
#define UHCI0_HUNG_CONF_RXFIFO_TIMEOUT_Msb			12u
#define UHCI0_HUNG_CONF_RXFIFO_TIMEOUT_Lsb			19u
	/* The tick count is cleared when its value >=(17'd8000>>reg_rxfifo_timeout_shift) */
#define UHCI0_HUNG_CONF_RXFIFO_TIMEOUT_SHIFT_Msb		20u
#define UHCI0_HUNG_CONF_RXFIFO_TIMEOUT_SHIFT_Lsb		22u
	/* This is the enable bit for DMA  send data timeout */
#define UHCI0_HUNG_CONF_RXFIFO_TIMEOUT_ENA			23u

	/* 0x6C:  */
	uint32_t volatile ACK_NUM;

	/* 0x70:  */
	uint32_t volatile RX_HEAD;
	/* This register stores the packet header received by DMA */
#define UHCI0_RX_HEAD_RX_HEAD_Msb				0u
#define UHCI0_RX_HEAD_RX_HEAD_Lsb				31u

	/* 0x74:  */
	uint32_t volatile QUICK_SENT;
	/* The bits are used to choose which short packet */
#define UHCI0_QUICK_SENT_SINGLE_SEND_NUM_Msb			0u
#define UHCI0_QUICK_SENT_SINGLE_SEND_NUM_Lsb			2u
	/* Set this bit to enable  send a short packet */
#define UHCI0_QUICK_SENT_SINGLE_SEND_EN				3u
	/* The bits are used to choose which short packet */
#define UHCI0_QUICK_SENT_ALWAYS_SEND_NUM_Msb			4u
#define UHCI0_QUICK_SENT_ALWAYS_SEND_NUM_Lsb			6u
	/* Set this bit to enable continuously send the same short packet */
#define UHCI0_QUICK_SENT_ALWAYS_SEND_EN				7u

	/* 0x78:  */
	uint32_t volatile Q0_WORD0;
	/* This register stores the content of short packet's first dword */
#define UHCI0_Q0_WORD0_SEND_Q0_WORD0_Msb			0u
#define UHCI0_Q0_WORD0_SEND_Q0_WORD0_Lsb			31u

	/* 0x7C:  */
	uint32_t volatile Q0_WORD1;
	/* This register stores the content of short packet's second dword */
#define UHCI0_Q0_WORD1_SEND_Q0_WORD1_Msb			0u
#define UHCI0_Q0_WORD1_SEND_Q0_WORD1_Lsb			31u

	/* 0x80:  */
	uint32_t volatile Q1_WORD0;
	/* This register stores the content of short packet's first dword */
#define UHCI0_Q1_WORD0_SEND_Q1_WORD0_Msb			0u
#define UHCI0_Q1_WORD0_SEND_Q1_WORD0_Lsb			31u

	/* 0x84:  */
	uint32_t volatile Q1_WORD1;
	/* This register stores the content of short packet's second dword */
#define UHCI0_Q1_WORD1_SEND_Q1_WORD1_Msb			0u
#define UHCI0_Q1_WORD1_SEND_Q1_WORD1_Lsb			31u

	/* 0x88:  */
	uint32_t volatile Q2_WORD0;
	/* This register stores the content of short packet's first dword */
#define UHCI0_Q2_WORD0_SEND_Q2_WORD0_Msb			0u
#define UHCI0_Q2_WORD0_SEND_Q2_WORD0_Lsb			31u

	/* 0x8C:  */
	uint32_t volatile Q2_WORD1;
	/* This register stores the content of short packet's second dword */
#define UHCI0_Q2_WORD1_SEND_Q2_WORD1_Msb			0u
#define UHCI0_Q2_WORD1_SEND_Q2_WORD1_Lsb			31u

	/* 0x90:  */
	uint32_t volatile Q3_WORD0;
	/* This register stores the content of short packet's first dword */
#define UHCI0_Q3_WORD0_SEND_Q3_WORD0_Msb			0u
#define UHCI0_Q3_WORD0_SEND_Q3_WORD0_Lsb			31u

	/* 0x94:  */
	uint32_t volatile Q3_WORD1;
	/* This register stores the content of short packet's second dword */
#define UHCI0_Q3_WORD1_SEND_Q3_WORD1_Msb			0u
#define UHCI0_Q3_WORD1_SEND_Q3_WORD1_Lsb			31u

	/* 0x98:  */
	uint32_t volatile Q4_WORD0;
	/* This register stores the content of short packet's first dword */
#define UHCI0_Q4_WORD0_SEND_Q4_WORD0_Msb			0u
#define UHCI0_Q4_WORD0_SEND_Q4_WORD0_Lsb			31u

	/* 0x9C:  */
	uint32_t volatile Q4_WORD1;
	/* This register stores the content of short packet's second dword */
#define UHCI0_Q4_WORD1_SEND_Q4_WORD1_Msb			0u
#define UHCI0_Q4_WORD1_SEND_Q4_WORD1_Lsb			31u

	/* 0xA0:  */
	uint32_t volatile Q5_WORD0;
	/* This register stores the content of short packet's first dword */
#define UHCI0_Q5_WORD0_SEND_Q5_WORD0_Msb			0u
#define UHCI0_Q5_WORD0_SEND_Q5_WORD0_Lsb			31u

	/* 0xA4:  */
	uint32_t volatile Q5_WORD1;
	/* This register stores the content of short packet's second dword */
#define UHCI0_Q5_WORD1_SEND_Q5_WORD1_Msb			0u
#define UHCI0_Q5_WORD1_SEND_Q5_WORD1_Lsb			31u

	/* 0xA8:  */
	uint32_t volatile Q6_WORD0;
	/* This register stores the content of short packet's first dword */
#define UHCI0_Q6_WORD0_SEND_Q6_WORD0_Msb			0u
#define UHCI0_Q6_WORD0_SEND_Q6_WORD0_Lsb			31u

	/* 0xAC:  */
	uint32_t volatile Q6_WORD1;
	/* This register stores the content of short packet's second dword */
#define UHCI0_Q6_WORD1_SEND_Q6_WORD1_Msb			0u
#define UHCI0_Q6_WORD1_SEND_Q6_WORD1_Lsb			31u

	/* 0xB0:  */
	uint32_t volatile ESC_CONF0;
	/* This register stores the seperator char  seperator char is used to seperate the data frame. */
#define UHCI0_ESC_CONF0_SEPER_CHAR_Msb				0u
#define UHCI0_ESC_CONF0_SEPER_CHAR_Lsb				7u
	/* This register stores thee first char used to replace seperator char in data. */
#define UHCI0_ESC_CONF0_SEPER_ESC_CHAR0_Msb			8u
#define UHCI0_ESC_CONF0_SEPER_ESC_CHAR0_Lsb			15u
	/* This register stores the second char used to replace seperator char in data . */
#define UHCI0_ESC_CONF0_SEPER_ESC_CHAR1_Msb			16u
#define UHCI0_ESC_CONF0_SEPER_ESC_CHAR1_Lsb			23u

	/* 0xB4:  */
	uint32_t volatile ESC_CONF1;
	/* This register stores the first substitute char used to replace the seperator char. */
#define UHCI0_ESC_CONF1_ESC_SEQ0_Msb				0u
#define UHCI0_ESC_CONF1_ESC_SEQ0_Lsb				7u
	/* This register stores the first char used to replace reg_esc_seq0 in data. */
#define UHCI0_ESC_CONF1_ESC_SEQ0_CHAR0_Msb			8u
#define UHCI0_ESC_CONF1_ESC_SEQ0_CHAR0_Lsb			15u
	/* This register stores the second char used to replace the reg_esc_seq0 in data */
#define UHCI0_ESC_CONF1_ESC_SEQ0_CHAR1_Msb			16u
#define UHCI0_ESC_CONF1_ESC_SEQ0_CHAR1_Lsb			23u

	/* 0xB8:  */
	uint32_t volatile ESC_CONF2;
	/* This register stores the flow control char to turn on the flow_control */
#define UHCI0_ESC_CONF2_ESC_SEQ1_Msb				0u
#define UHCI0_ESC_CONF2_ESC_SEQ1_Lsb				7u
	/* This register stores the first char used to replace the reg_esc_seq1 in data. */
#define UHCI0_ESC_CONF2_ESC_SEQ1_CHAR0_Msb			8u
#define UHCI0_ESC_CONF2_ESC_SEQ1_CHAR0_Lsb			15u
	/* This register stores the second char used to replace the reg_esc_seq1 in data. */
#define UHCI0_ESC_CONF2_ESC_SEQ1_CHAR1_Msb			16u
#define UHCI0_ESC_CONF2_ESC_SEQ1_CHAR1_Lsb			23u

	/* 0xBC:  */
	uint32_t volatile ESC_CONF3;
	/* This register stores the flow_control char to turn off the flow_control */
#define UHCI0_ESC_CONF3_ESC_SEQ2_Msb				0u
#define UHCI0_ESC_CONF3_ESC_SEQ2_Lsb				7u
	/* This register stores the first char used to replace the reg_esc_seq2 in data. */
#define UHCI0_ESC_CONF3_ESC_SEQ2_CHAR0_Msb			8u
#define UHCI0_ESC_CONF3_ESC_SEQ2_CHAR0_Lsb			15u
	/* This register stores  the second char used to replace the reg_esc_seq2 in data. */
#define UHCI0_ESC_CONF3_ESC_SEQ2_CHAR1_Msb			16u
#define UHCI0_ESC_CONF3_ESC_SEQ2_CHAR1_Lsb			23u

	/* 0xC0:  */
	uint32_t volatile PKT_THRES;
	/* when the amount of packet payload is greater than this value the process of receiving data is done. */
#define UHCI0_PKT_THRES_PKT_THRS_Msb				0u
#define UHCI0_PKT_THRES_PKT_THRS_Lsb				12u

	/* 0xE0 */
	uint8_t RESERVED0[0xFC-0xE0];

	/* 0xFC:  */
	uint32_t volatile DATE;
	/* version information */
#define UHCI0_DATE_DATE_Msb					0u
#define UHCI0_DATE_DATE_Lsb					31u

};


#define UHCI1 ((struct mcu_uhci1 *)0x3FF4C000)

struct mcu_uhci1 {

};


#define WDEV ((struct mcu_wdev *)0x60035144)

struct mcu_wdev {

	/* 0x00: Hardware random number generator register */
	uint32_t volatile RND;

};

#endif

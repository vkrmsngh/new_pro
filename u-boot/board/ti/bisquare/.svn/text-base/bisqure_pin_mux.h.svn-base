/*
 * VVDN Technolgies, <www.vvdntech.com>
 *
 *	Vikram Singh Shekhawat	<vikram.singh@vvdntech.com>
 *	Ravi Kant 		<ravi.kant@vvdntech.com>
 * 	Sumit Sharma 		<sumit.sharma@vvdntech.com>
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */
#ifndef _PANDA_MUX_DATA_H_
#define _PANDA_MUX_DATA_H_

#include <asm/arch/mux_omap4.h>
#define TARGET_BOARD 1

const struct pad_conf_entry core_padconf_array_essential[] = {

/* For NAND */
#if TARGET_BOARD
	{GPMC_AD0, (PTU | IEN | M0)}, 						/* GPMC_AD0  */
	{GPMC_AD1, (PTU | IEN | M0)},						/* GPMC_AD1  */
	{GPMC_AD2, (PTU | IEN | M0)},						/* GPMC_AD2  */
	{GPMC_AD3, (PTU | IEN | M0)},						/* GPMC_AD3  */
	{GPMC_AD4, (PTU | IEN | M0)},						/* GPMC_AD4  */
	{GPMC_AD5, (PTU | IEN | M0)},						/* GPMC_AD5  */
	{GPMC_AD6, (PTU | IEN | M0)},						/* GPMC_AD6  */
	{GPMC_AD7, (PTU | IEN | M0)},						/* GPMC_AD7  */
	{GPMC_AD8, (PTU | IEN | M0)},						/* GPMC_AD8  */
	{GPMC_AD9, (PTU | IEN | M0)},	 					/* GPMC_AD9  */
	{GPMC_AD10,(PTU | IEN | M0)},						/* GPMC_AD10 */
	{GPMC_AD11,(PTU | IEN | M0)},						/* GPMC_AD11 */
	{GPMC_AD12,(PTU | IEN | M0)},						/* GPMC_AD12 */
	{GPMC_AD13,(PTU | IEN | M0)},						/* GPMC_AD13 */
	{GPMC_AD14,(PTU | IEN | M0)},						/* GPMC_AD14 */
	{GPMC_AD15,(PTU | IEN | M0)},						/* GPMC_AD15 */

	{GPMC_NCS0, (EN | M0)},							/* GPMC_CS0     */
	{GPMC_NCS2, (EN | M0)},							/* GPMC_CS2     */
	{GPMC_NWP, (PTU | IEN | M0)},						/* GPMC_WP      */
	{GPMC_CLK, (PTU | IEN | M0)},						/* GPMC_CLK     */
	{GPMC_NADV_ALE, (EN | M0)},						/* GPMC_ADV_ALE */
	{GPMC_NOE, (EN | M0)},							/* GPMC_OE      */
	{GPMC_NWE, (EN | M0)},							/* GPMC_WE      */
	{GPMC_NBE0_CLE, (EN | M0)},						/* GPMC_BE0_CLE */
	{GPMC_WAIT0, (PTU | IEN | M0)},						/* GPMC_WAIT0   */


/* For FPGA */
	{GPMC_A17, (M3)},							/* gpio_41 HANDSHAKE 0 */
	{GPMC_A18, (M3)},							/* gpio_42 HANDSHAKE 1 */
	{GPMC_A20, (M3)},							/* gpio_44 HANDSHAKE 2 */
	{GPMC_A21, (M3)},							/* gpio_45 HANDSHAKE 3 */
	{GPMC_A23, (M3)},							/* gpio_47 HANDSHAKE 4 */	
	{MCSPI4_SOMI, (M3)},				        		/* gpio_153 CPLD_RST   */
	{MCSPI4_CS0, (M3)},                                     		/* gpio_154 FPGA_RST   */
	{GPMC_NCS4, (M0)},							/* GPMC_CS4 */
	{GPMC_NCS5, (M0)},							/* GPMC_CS5 */
	{GPMC_NCS6, (M0)},							/* GPMC_CS6 */
	{GPMC_NCS7, (M0)},							/* GPMC_CS7 */
#endif


/* For memory card */
	{SDMMC1_CLK, (PTU | OFF_EN | OFF_OUT_PTD | M0)},	 		/* sdmmc1_clk  */
	{SDMMC1_CMD, (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0)}, 		/* sdmmc1_cmd  */
	{SDMMC1_DAT0, (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0)}, 		/* sdmmc1_dat0 */
	{SDMMC1_DAT1, (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0)}, 		/* sdmmc1_dat1 */
	{SDMMC1_DAT2, (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0)}, 		/* sdmmc1_dat2 */
	{SDMMC1_DAT3, (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0)}, 		/* sdmmc1_dat3 */


/* For PMIC */
	{I2C1_SCL, (PTU | IEN | M0)},						/* i2c1_scl */
	{I2C1_SDA, (PTU | IEN | M0)},						/* i2c1_sda */


/* For serial console */
	{UART3_RX_IRRX, (IEN | M0)},						/* uart3_rx */
	{UART3_TX_IRTX, (M0)},							/* uart3_tx */


/* For USB host */
	{USBB1_ULPITLL_CLK, (PTD | IEN | OFF_EN | OFF_PD | OFF_IN | M4)},	/* usbb1_ulpiphy_clk  */
	{USBB1_ULPITLL_STP, (OFF_EN | OFF_OUT_PTD | M4)},			/* usbb1_ulpiphy_stp  */
	{USBB1_ULPITLL_DIR, (IEN | OFF_EN | OFF_PD | OFF_IN | M4)},		/* usbb1_ulpiphy_dir  */
	{USBB1_ULPITLL_NXT, (IEN | OFF_EN | OFF_PD | OFF_IN | M4)},		/* usbb1_ulpiphy_nxt  */
	{USBB1_ULPITLL_DAT0, (IEN | OFF_EN | OFF_PD | OFF_IN | M4)},		/* usbb1_ulpiphy_dat0 */
	{USBB1_ULPITLL_DAT1, (IEN | OFF_EN | OFF_PD | OFF_IN | M4)},		/* usbb1_ulpiphy_dat1 */
	{USBB1_ULPITLL_DAT2, (IEN | OFF_EN | OFF_PD | OFF_IN | M4)},		/* usbb1_ulpiphy_dat2 */
	{USBB1_ULPITLL_DAT3, (IEN | OFF_EN | OFF_PD | OFF_IN | M4)},		/* usbb1_ulpiphy_dat3 */
	{USBB1_ULPITLL_DAT4, (IEN | OFF_EN | OFF_PD | OFF_IN | M4)},		/* usbb1_ulpiphy_dat4 */
	{USBB1_ULPITLL_DAT5, (IEN | OFF_EN | OFF_PD | OFF_IN | M4)},		/* usbb1_ulpiphy_dat5 */
	{USBB1_ULPITLL_DAT6, (IEN | OFF_EN | OFF_PD | OFF_IN | M4)},		/* usbb1_ulpiphy_dat6 */
	{USBB1_ULPITLL_DAT7, (IEN | OFF_EN | OFF_PD | OFF_IN | M4)},		/* usbb1_ulpiphy_dat7 */
#if TARGET_BOARD
	{MCSPI4_SIMO, (PTD | M3)},						/* USB RESET pin */
#endif
};

const struct pad_conf_entry wkup_padconf_array_essential[] = {

/* For sr-i2c(PMIC) */
	{PAD1_SR_SCL, (PTU | IEN | M0)},				 	/* sr_scl  */
	{PAD0_SR_SDA, (PTU | IEN | M0)},				 	/* sr_sda  */
	{PAD1_SYS_32K, (IEN | M0)},					 	/* sys_32k */

	
	{PAD1_FREF_CLK3_REQ, (M3)},					 	/* boot gpio wake up */


/* For USB */
#if TARGET_BOARD
	{PAD0_FREF_CLK3_OUT, (M0)}, 						/* USB phy REF clk */
#endif
};

const struct pad_conf_entry core_padconf_array_non_essential[] = {

/* For Audio */
	{ABE_MCBSP2_DR, (IEN | OFF_EN | OFF_OUT_PTD | M0)},			/* abe_mcbsp2_dr   */
	{ABE_MCBSP2_DX, (OFF_EN | OFF_OUT_PTD | M0)},				/* abe_mcbsp2_dx   */
	{ABE_MCBSP2_FSX, (IEN | OFF_EN | OFF_PD | OFF_IN | M0)},		/* abe_mcbsp2_fsx  */
	{ABE_MCBSP2_CLKX, (IEN | OFF_EN | OFF_PD | OFF_IN | M0)},       	/* abe_mcbsp2_clkx */
	{I2C3_SCL, (PTU | IEN | M0)},						/* i2c3_scl */
	{I2C3_SDA, (PTU | IEN | M0)},						/* i2c3_sda */
#if TARGET_BOARD	
	 {KPD_COL1, (OFF_EN | OFF_IN | PTD | M3)},  		 			/* GPIO_0 AUDIO RESET PIN */
#endif


/* FOR BT */
	{UART2_CTS, (PTU | IEN | M7)},						/* uart2_cts */
	{UART2_RTS, (M7)},							/* uart2_rts */
	{UART2_RX, (PTU | IEN | M7)},						/* uart2_rx  */
	{UART2_TX, (M7)},							/* uart2_tx  */
	{ABE_MCBSP1_CLKX, (IEN | M0)},						/* abe_mcbsp1_clkx */
	{ABE_MCBSP1_DR, (IEN | M0)},						/* abe_mcbsp1_dr   */
	{ABE_MCBSP1_DX, (OFF_EN | OFF_OUT_PTD | M0)},				/* abe_mcbsp1_dx   */
	{ABE_MCBSP1_FSX, (IEN | OFF_EN | OFF_PD | OFF_IN | M0)},		/* abe_mcbsp1_fsx  */
#if TARGET_BOARD
	{GPMC_A22, (OFF_EN | M3)},						/* gpio_46 BT ENABLE */
#endif


/* For Wi-Fi */
	{SDMMC5_CLK, (PTU | IEN | OFF_EN | OFF_OUT_PTD | M0)},			/* sdmmc5_clk  */
	{SDMMC5_CMD, (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0)},		/* sdmmc5_cmd  */
	{SDMMC5_DAT0, (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0)},		/* sdmmc5_dat0 */
	{SDMMC5_DAT1, (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0)},		/* sdmmc5_dat1 */
	{SDMMC5_DAT2, (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0)},		/* sdmmc5_dat2 */
	{SDMMC5_DAT3, (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0)},		/* sdmmc5_dat3 */
#if TARGET_BOARD
	{GPMC_NCS3, (IEN | M3)}, 						/* gpio_40 wlan nirq   */
	{GPMC_A19, (OFF_EN | M3)},						/* gpio_43 wlan enable */
#endif


/* For USB OTG */
	{USBA0_OTG_CE, (PTD | OFF_EN | OFF_PD | OFF_OUT_PTD | M0)},		/* usba0_otg_ce */
	{USBA0_OTG_DP, (IEN | OFF_EN | OFF_PD | OFF_IN | M0)},			/* usba0_otg_dp */
	{USBA0_OTG_DM, (IEN | OFF_EN | OFF_PD | OFF_IN | M0)},			/* usba0_otg_dm */


/* System boot pins */
	{SYS_BOOT0, (PTU | IEN | M3)},						/* SYS BOOT 0 */
	{SYS_BOOT1, (PTU | IEN | M3)},						/* SYS BOOT 1 */
	{SYS_BOOT2, (PTU | IEN | M3)},						/* SYS BOOT 2 */
	{SYS_BOOT3, (PTU | IEN | M3)},						/* SYS BOOT 3 */
	{SYS_BOOT4, (PTU | IEN | M3)},						/* SYS BOOT 4 */
	{SYS_BOOT5, (PTU | IEN | M3)},						/* SYS BOOT 5 */


/* For PMIC */	
	{SYS_NIRQ1, (PTU | IEN | M0)},						/* sys_nirq1 */


/* For JTAG */
	{DPM_EMU0, (IEN | M0)},							/* dpm_emu0 */
	{DPM_EMU1, (IEN | M0)},							/* dpm_emu1 */
};

const struct pad_conf_entry wkup_padconf_array_non_essential[] = {

/* For Oscillator */
	{PAD0_FREF_SLICER_IN, (M0)},						/* fref_slicer_in */


/* For PMIC */
	{PAD0_SYS_NRESPWRON, (M0)},						/* sys_nrespwron   */
	{PAD1_SYS_NRESWARM, (M0)},						/* sys_nreswarm    */
	{PAD0_SYS_PWR_REQ, (PTU | M0)},						/* sys_pwr_req     */
	{PAD0_FREF_CLK0_OUT, (M2)},            				 	/* sys_drm_msecure */


/* For Audio */
#if TARGET_BOARD
	{PAD0_FREF_CLK4_OUT, (PTD | IEN | OFF_EN | OFF_PD | OFF_IN |M0)}, 	/* Audio mclk */
#endif


/* For SYSBOOT */
	{PAD0_SYS_BOOT6, (M0)},							/* SYS BOOT 6 */
	{PAD1_SYS_BOOT7, (M0)},							/* SYS BOOT 7 */
};
#endif /* _PANDA_MUX_DATA_H_ */

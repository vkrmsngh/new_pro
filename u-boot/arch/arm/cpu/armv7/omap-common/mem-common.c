/*
 * (C) Copyright 2010
 * Texas Instruments, <www.ti.com>
 *
 * Steve Sakoman <steve@sakoman.com>
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#include <asm/arch/cpu.h>
#include <asm/arch/mem.h>
#include <asm/arch/sys_proto.h>

struct gpmc *gpmc_cfg;

void enable_gpmc_cs_config(const u32 *gpmc_config, struct gpmc_cs *cs, u32 base,
			u32 size)
{
	writel(0, &cs->config7);
	sdelay(1000);
	/* Delay for settling */
	writel(gpmc_config[0], &cs->config1);
	writel(gpmc_config[1], &cs->config2);
	writel(gpmc_config[2], &cs->config3);
	writel(gpmc_config[3], &cs->config4);
	writel(gpmc_config[4], &cs->config5);
	writel(gpmc_config[5], &cs->config6);
	/* Enable the config */
	writel((((size & 0xF) << 8) | ((base >> 24) & 0x3F) |
		(1 << 6)), &cs->config7);
	sdelay(2000);
}


/*****************************************************
 * gpmc_init(): init gpmc bus
 * This code can only be executed from SRAM or SDRAM.
 *****************************************************/
void gpmc_init(void)
{
	gpmc_cfg = (struct gpmc *)GPMC_BASE;
#if defined(CONFIG_NAND)
/* configure GPMC for NAND */
	const u32  gpmc_regs[GPMC_MAX_REG] = {
		M_NAND_GPMC_CONFIG1,
		M_NAND_GPMC_CONFIG2,
		M_NAND_GPMC_CONFIG3,
		M_NAND_GPMC_CONFIG4,
		M_NAND_GPMC_CONFIG5,
		M_NAND_GPMC_CONFIG6,
		0
	};
	u32 size = GPMC_SIZE_256M;
	u32 base = CONFIG_SYS_NAND_BASE;
#else
	const u32 gpmc_regs[GPMC_MAX_REG] = { 0, 0, 0, 0, 0, 0, 0 };
	u32 size = 0;
	u32 base = 0;
#endif
	/* global settings */
	writel(0x00000008, &gpmc_cfg->sysconfig);
	writel(0x00000000, &gpmc_cfg->irqstatus);
	writel(0, &gpmc_cfg->irqenable); /* isr's sources masked */
	writel(0x00000012, &gpmc_cfg->config);
	writel(0, &gpmc_cfg->timeout_control);/* timeout disable */

	/*
	 * Disable the GPMC0 config set by ROM code
	 * It conflicts with our MPDB (both at 0x08000000)
	 */
	writel(0, &gpmc_cfg->cs[0].config7);
	sdelay(1000);
	/* enable chip-select specific configurations */
	enable_gpmc_cs_config(gpmc_regs, &gpmc_cfg->cs[0], base, size);
}

/*
 * (C) Copyright 2013
 * VVDN Technologies.
 * Abraham Varricatt  <abraham.varricatt@vvdntech.com>
 *
 * Configuration settings for the BSQI_USNA project.
 * Based on pandaboard config/settings.
 *
 * See omap4_common.h for OMAP4 common part
 *
 * SPDX-License-Identifier:	GPL-2.0
 */

#ifndef __CONFIG_PANDA_H
#define __CONFIG_PANDA_H

/*
 * High Level Configuration Options
 */

/* USB UHH support options */

#define CONFIG_CMD_USB
#define CONFIG_USB_HOST
#define CONFIG_USB_EHCI
#define CONFIG_USB_EHCI_OMAP
#define CONFIG_USB_STORAGE
#define CONFIG_SYS_USB_EHCI_MAX_ROOT_PORTS 3

#define CONFIG_OMAP_EHCI_PHY1_RESET_GPIO 1
#define CONFIG_OMAP_EHCI_PHY2_RESET_GPIO 62

/* USB Networking options */
#define CONFIG_USB_HOST_ETHER
#define CONFIG_USB_ETHER_SMSC95XX

#define CONFIG_UBOOT_ENABLE_PADS_ALL

#define CONFIG_CMD_PING
#define CONFIG_CMD_DHCP

#define CONFIG_USB_ULPI
#define CONFIG_USB_ULPI_VIEWPORT_OMAP
#include <configs/omap4_common.h>
#define CONFIG_CMD_NET
#define CONFIG_FAT_WRITE					/*To write from memory to mmc card*/

/* GPIO */
#define CONFIG_CMD_GPIO

/* ENV related config options */
#ifndef CONFIG_NAND
#define CONFIG_ENV_IS_NOWHERE
#endif
#define CONFIG_ENV_VARS_UBOOT_RUNTIME_CONFIG


#ifdef CONFIG_NAND
/*NAND support*/
#define NAND_BASE               0x8000000      /* NAND addr */

/* Physical address to access NAND */
#define CONFIG_SYS_NAND_ADDR            NAND_BASE

/* Max number of NAND devices */
#define CONFIG_SYS_MAX_NAND_DEVICE      1

/*NAND COMMAND*/
#define CONFIG_CMD_NAND
/* Enable 5 address cycle for nand*/
#define CONFIG_SYS_NAND_5_ADDR_CYCLE
/*number of pages in 1 block*/
#define CONFIG_SYS_NAND_PAGE_COUNT      64
/*Page size in bytes*/
#define CONFIG_SYS_NAND_PAGE_SIZE       2048
/*oob(spare area) sector size for ECC*/
#define CONFIG_SYS_NAND_OOBSIZE         64
/*Nand block size*/
#define CONFIG_SYS_NAND_BLOCK_SIZE      (128*1024)
/*bad block postion*/
#define CONFIG_SYS_NAND_BAD_BLOCK_POS   0
/*ECC position in spare area*/
#define CONFIG_SYS_NAND_ECCPOS          {2, 3, 4, 5, 6, 7, 8, 9,\
					10, 11, 12, 13, 14, 15, 16, \
					17, 18, 19, 20, 21, 22, 23, \
					24, 25, 26, 27, 28, 29, 30, \
					31, 32, 33, 34, 35, 36, 37, \
					38, 39, 40, 41, 42, 43, 44, \
					45, 46, 47, 48, 49, 50, 51, \
					52, 53, 54, 55, 56, 57}
/*ECC size*/
#define CONFIG_SYS_NAND_ECCSIZE         512
/*ECC bytes*/
#define CONFIG_SYS_NAND_ECCBYTES        14
/*ECC scheme*/
#define CONFIG_NAND_OMAP_ECCSCHEME      OMAP_ECC_HAM1_CODE_HW
/*env(enviorment file ) is in nand*/
#define CONFIG_ENV_IS_IN_NAND
#define CONFIG_SYS_NAND_ECCSTEPS	4
#define CONFIG_ENV_OFFSET               0x260000 /* environment starts here */

#define CONFIG_SYS_ENV_SECT_SIZE        (128 << 10)     /* 128 KiB */
/*Command for mtdpars*/
#define CONFIG_CMD_MTDPARTS
#define ELM_BASE			0x48078000
#define CONFIG_NAND_OMAP_ELM

#define CONFIG_NAND_OMAP_GPMC

#define GPMC_NAND_ECC_LP_x8_LAYOUT     1
/*nand support in SPL */
#define CONFIG_SPL_OMAP4_ID_NAND
#define CONFIG_SPL_BOARD_INIT

#define MTDIDS_DEFAULT                  "nand0=bsqi_omap4-nand.0"
#define MTDPARTS_DEFAULT                "mtdparts=bsqi_omap4-nand.0:128k(SPL)," \
		"128k(SPL.backup1)," \
		"128k(SPL.backup2)," \
		"128k(SPL.backup3),1792k(u-boot)," \
		"128k(u-boot-spl-os)," \
		"128k(u-boot-env),5m(kernel),-(rootfs)"

#define CONFIG_DFU_NAND
#define DFU_ALT_INFO_NAND \
		"SPL part 0 1;" \
		"SPL.backup1 part 0 2;" \
		"SPL.backup2 part 0 3;" \
		"SPL.backup3 part 0 4;" \
		"u-boot part 0 5;" \
		"u-boot-spl-os part 0 6;" \
		"kernel part 0 8;"       \
		"rootfs part 0 9"


#define NANDARGS \
		"mtdids=" MTDIDS_DEFAULT "\0" \
		"mtdparts=" MTDPARTS_DEFAULT "\0" \
		"nandargs=setenv bootargs console=${console} " \
		"${optargs} " \
		"root=${nandroot} " \
		"rootfstype=${nandrootfstype}\0" \
		"dfu_alt_info_nand=" DFU_ALT_INFO_NAND "\0" \
		"nandroot=ubi0:rootfs rw ubi.mtd=7,2048\0" \
		"nandrootfstype=ubifs rootwait=1\0" \
		"nandsrcaddr=0x280000\0" \
		"nandboot=echo Booting from nand ...; " \
		"run nandargs; " \
		"nand read ${loadaddr} ${nandsrcaddr} ${nandimgsize}; " \
		"bootz ${loadaddr}\0" \
		"nandimgsize=0x500000\0"

#else
#define NANDARGS " "
#endif
#if 0
#define CONFIG_BOOTSTAGE
#define CONFI_BOOTSTAGE_REPORT
#define CONFIG_CMD_BOOTSTAGE
#define DEBUG
#define CONFIG_SYS_CLOCKS_ENABLE_ALL
#endif
#endif /* __CONFIG_PANDA_H */

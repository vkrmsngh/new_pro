#
# Copyright 2007 Freescale Semiconductor, Inc.
# (C) Copyright 2002,2003 Motorola Inc.
# Xianghua Xiao,X.Xiao@motorola.com
#
# (C) Copyright 2004 Freescale Semiconductor. (MC86xx Port)
# Jeff Brown
# SPDX-License-Identifier:	GPL-2.0+
#

extra-y	= start.o
extra-y	+= traps.o

obj-y += cache.o
obj-$(CONFIG_MP) += release.o

obj-y	+= cpu.o
obj-y	+= cpu_init.o
# 8610 & 8641 are identical w/regards to DDR
obj-$(CONFIG_MPC8610) += ddr-8641.o
obj-$(CONFIG_MPC8641) += ddr-8641.o
obj-$(CONFIG_OF_LIBFDT) += fdt.o
obj-y	+= interrupts.o
obj-$(CONFIG_MP) += mp.o
obj-$(CONFIG_MPC8610) += mpc8610_serdes.o
obj-$(CONFIG_MPC8641) += mpc8641_serdes.o
obj-y	+= speed.o

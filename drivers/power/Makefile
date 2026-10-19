# SPDX-License-Identifier: GPL-2.0-only
obj-$(CONFIG_POWER_RESET)	+= reset/
obj-$(CONFIG_POWER_SEQUENCING)	+= sequencing/
obj-$(CONFIG_POWER_SUPPLY)	+= supply/

# Allwinner AXP2101/AXP8191 PMU (ported from 6.6.98 vendor BSP for OPi Zero 3W).
# Without it the board's PMU never probes, regulator dcdc1 never registers, and
# sunxi-mmc defers forever => "Waiting for root device" boot hang.
obj-$(CONFIG_AW_MFD_AXP2101)		+= axp2101.o
obj-$(CONFIG_AW_MFD_AXP2101_I2C)	+= axp2101-i2c.o
obj-$(CONFIG_AW_REGULATOR_AXP2101)	+= axp2101-regulator.o

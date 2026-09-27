#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(st_magn_get_settings, "IIO_ST_SENSORS");
SYMBOL_FLAGS(st_magn_get_settings, 0x00);
KSYMTAB_FUNC(st_magn_common_probe, "IIO_ST_SENSORS");
SYMBOL_FLAGS(st_magn_common_probe, 0x00);

MODULE_INFO(depends, "st_sensors,industrialio-triggered-buffer");


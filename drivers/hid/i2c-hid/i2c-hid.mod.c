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

KSYMTAB_FUNC(i2c_hid_core_probe, "");
SYMBOL_FLAGS(i2c_hid_core_probe, 0x01);
KSYMTAB_FUNC(i2c_hid_core_remove, "");
SYMBOL_FLAGS(i2c_hid_core_remove, 0x01);
KSYMTAB_FUNC(i2c_hid_core_shutdown, "");
SYMBOL_FLAGS(i2c_hid_core_shutdown, 0x01);
KSYMTAB_DATA(i2c_hid_core_pm, "");
SYMBOL_FLAGS(i2c_hid_core_pm, 0x01);

MODULE_INFO(depends, "");


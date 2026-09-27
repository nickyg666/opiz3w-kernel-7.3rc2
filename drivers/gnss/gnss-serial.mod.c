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

KSYMTAB_FUNC(gnss_serial_allocate, "");
SYMBOL_FLAGS(gnss_serial_allocate, 0x01);
KSYMTAB_FUNC(gnss_serial_free, "");
SYMBOL_FLAGS(gnss_serial_free, 0x01);
KSYMTAB_FUNC(gnss_serial_register, "");
SYMBOL_FLAGS(gnss_serial_register, 0x01);
KSYMTAB_FUNC(gnss_serial_deregister, "");
SYMBOL_FLAGS(gnss_serial_deregister, 0x01);
KSYMTAB_DATA(gnss_serial_pm_ops, "");
SYMBOL_FLAGS(gnss_serial_pm_ops, 0x01);

MODULE_INFO(depends, "gnss");


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

KSYMTAB_DATA(goodix_berlin_pm_ops, "");
SYMBOL_FLAGS(goodix_berlin_pm_ops, 0x01);
KSYMTAB_DATA(goodix_berlin_groups, "");
SYMBOL_FLAGS(goodix_berlin_groups, 0x01);
KSYMTAB_FUNC(goodix_berlin_probe, "");
SYMBOL_FLAGS(goodix_berlin_probe, 0x01);

MODULE_INFO(depends, "");


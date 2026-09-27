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

KSYMTAB_DATA(tps6594_volatile_table, "");
SYMBOL_FLAGS(tps6594_volatile_table, 0x01);
KSYMTAB_DATA(tps65224_volatile_table, "");
SYMBOL_FLAGS(tps65224_volatile_table, 0x01);
KSYMTAB_FUNC(tps6594_device_init, "");
SYMBOL_FLAGS(tps6594_device_init, 0x01);

MODULE_INFO(depends, "");


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

KSYMTAB_DATA(i2c_bit_algo, "");
SYMBOL_FLAGS(i2c_bit_algo, 0x00);
KSYMTAB_FUNC(i2c_bit_add_bus, "");
SYMBOL_FLAGS(i2c_bit_add_bus, 0x00);
KSYMTAB_FUNC(i2c_bit_add_numbered_bus, "");
SYMBOL_FLAGS(i2c_bit_add_numbered_bus, 0x00);

MODULE_INFO(depends, "");


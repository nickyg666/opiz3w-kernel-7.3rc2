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

KSYMTAB_FUNC(pasemi_i2c_common_probe, "");
SYMBOL_FLAGS(pasemi_i2c_common_probe, 0x01);
KSYMTAB_FUNC(pasemi_irq_handler, "");
SYMBOL_FLAGS(pasemi_irq_handler, 0x01);

MODULE_INFO(depends, "");


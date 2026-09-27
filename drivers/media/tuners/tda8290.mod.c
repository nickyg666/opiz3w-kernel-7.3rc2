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

KSYMTAB_FUNC(tda829x_attach, "");
SYMBOL_FLAGS(tda829x_attach, 0x01);
KSYMTAB_FUNC(tda829x_probe, "");
SYMBOL_FLAGS(tda829x_probe, 0x01);

MODULE_INFO(depends, "");


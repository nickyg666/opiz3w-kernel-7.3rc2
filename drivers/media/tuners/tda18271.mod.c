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

KSYMTAB_FUNC(tda18271_attach, "");
SYMBOL_FLAGS(tda18271_attach, 0x01);

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "45296CDA7988947E76928F0");

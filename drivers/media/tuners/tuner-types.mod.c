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

KSYMTAB_DATA(tuners, "");
SYMBOL_FLAGS(tuners, 0x00);
KSYMTAB_DATA(tuner_count, "");
SYMBOL_FLAGS(tuner_count, 0x00);

MODULE_INFO(depends, "");


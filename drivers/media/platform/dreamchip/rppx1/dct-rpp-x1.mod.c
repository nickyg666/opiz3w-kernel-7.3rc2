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

KSYMTAB_FUNC(rppx1_params, "");
SYMBOL_FLAGS(rppx1_params, 0x01);
KSYMTAB_FUNC(rppx1_stats_fill_isr, "");
SYMBOL_FLAGS(rppx1_stats_fill_isr, 0x01);
KSYMTAB_FUNC(rppx1_interrupt, "");
SYMBOL_FLAGS(rppx1_interrupt, 0x01);
KSYMTAB_FUNC(rppx1_destroy, "");
SYMBOL_FLAGS(rppx1_destroy, 0x01);
KSYMTAB_FUNC(rppx1_create, "");
SYMBOL_FLAGS(rppx1_create, 0x01);
KSYMTAB_FUNC(rppx1_start, "");
SYMBOL_FLAGS(rppx1_start, 0x01);
KSYMTAB_FUNC(rppx1_stop, "");
SYMBOL_FLAGS(rppx1_stop, 0x01);

MODULE_INFO(depends, "v4l2-isp,videobuf2-common");


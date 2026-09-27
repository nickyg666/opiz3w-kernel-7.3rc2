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

KSYMTAB_FUNC(cpsw_sl_reg_read, "");
SYMBOL_FLAGS(cpsw_sl_reg_read, 0x01);
KSYMTAB_FUNC(cpsw_sl_reg_write, "");
SYMBOL_FLAGS(cpsw_sl_reg_write, 0x01);
KSYMTAB_FUNC(cpsw_sl_get, "");
SYMBOL_FLAGS(cpsw_sl_get, 0x01);
KSYMTAB_FUNC(cpsw_sl_reset, "");
SYMBOL_FLAGS(cpsw_sl_reset, 0x01);
KSYMTAB_FUNC(cpsw_sl_ctl_set, "");
SYMBOL_FLAGS(cpsw_sl_ctl_set, 0x01);
KSYMTAB_FUNC(cpsw_sl_ctl_clr, "");
SYMBOL_FLAGS(cpsw_sl_ctl_clr, 0x01);
KSYMTAB_FUNC(cpsw_sl_ctl_reset, "");
SYMBOL_FLAGS(cpsw_sl_ctl_reset, 0x01);
KSYMTAB_FUNC(cpsw_sl_wait_for_idle, "");
SYMBOL_FLAGS(cpsw_sl_wait_for_idle, 0x01);

MODULE_INFO(depends, "");


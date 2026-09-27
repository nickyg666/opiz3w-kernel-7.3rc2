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

KSYMTAB_DATA(meson_clk_phase_ops, "CLK_MESON");
SYMBOL_FLAGS(meson_clk_phase_ops, 0x01);
KSYMTAB_DATA(meson_clk_triphase_ops, "CLK_MESON");
SYMBOL_FLAGS(meson_clk_triphase_ops, 0x01);
KSYMTAB_DATA(meson_sclk_ws_inv_ops, "CLK_MESON");
SYMBOL_FLAGS(meson_sclk_ws_inv_ops, 0x01);

MODULE_INFO(depends, "");


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

KSYMTAB_FUNC(rcar_gen4_ptp_register, "");
SYMBOL_FLAGS(rcar_gen4_ptp_register, 0x01);
KSYMTAB_FUNC(rcar_gen4_ptp_unregister, "");
SYMBOL_FLAGS(rcar_gen4_ptp_unregister, 0x01);
KSYMTAB_FUNC(rcar_gen4_ptp_alloc, "");
SYMBOL_FLAGS(rcar_gen4_ptp_alloc, 0x01);
KSYMTAB_FUNC(rcar_gen4_ptp_clock_index, "");
SYMBOL_FLAGS(rcar_gen4_ptp_clock_index, 0x01);
KSYMTAB_FUNC(rcar_gen4_ptp_gettime64, "");
SYMBOL_FLAGS(rcar_gen4_ptp_gettime64, 0x01);

MODULE_INFO(depends, "");


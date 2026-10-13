#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(rcar_cmm_setup, "");
SYMBOL_FLAGS(rcar_cmm_setup, 0x01);
KSYMTAB_FUNC(rcar_cmm_enable, "");
SYMBOL_FLAGS(rcar_cmm_enable, 0x01);
KSYMTAB_FUNC(rcar_cmm_disable, "");
SYMBOL_FLAGS(rcar_cmm_disable, 0x01);
KSYMTAB_FUNC(rcar_cmm_init, "");
SYMBOL_FLAGS(rcar_cmm_init, 0x01);

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Crenesas,rcar-gen3-cmm");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen3-cmmC*");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen2-cmm");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen2-cmmC*");

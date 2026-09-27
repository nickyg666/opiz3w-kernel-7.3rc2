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

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(xpcs_to_phylink_pcs, "");
SYMBOL_FLAGS(xpcs_to_phylink_pcs, 0x01);
KSYMTAB_FUNC(xpcs_get_an_mode, "");
SYMBOL_FLAGS(xpcs_get_an_mode, 0x01);
KSYMTAB_FUNC(xpcs_config_eee_mult_fact, "");
SYMBOL_FLAGS(xpcs_config_eee_mult_fact, 0x01);
KSYMTAB_FUNC(xpcs_create_mdiodev, "");
SYMBOL_FLAGS(xpcs_create_mdiodev, 0x01);
KSYMTAB_FUNC(xpcs_create_pcs_mdiodev, "");
SYMBOL_FLAGS(xpcs_create_pcs_mdiodev, 0x01);
KSYMTAB_FUNC(xpcs_create_fwnode, "");
SYMBOL_FLAGS(xpcs_create_fwnode, 0x01);
KSYMTAB_FUNC(xpcs_destroy, "");
SYMBOL_FLAGS(xpcs_destroy, 0x01);
KSYMTAB_FUNC(xpcs_destroy_pcs, "");
SYMBOL_FLAGS(xpcs_destroy_pcs, 0x01);

MODULE_INFO(depends, "phylink");

MODULE_ALIAS("of:N*T*Csnps,dw-xpcs");
MODULE_ALIAS("of:N*T*Csnps,dw-xpcsC*");
MODULE_ALIAS("of:N*T*Csnps,dw-xpcs-gen1-3g");
MODULE_ALIAS("of:N*T*Csnps,dw-xpcs-gen1-3gC*");
MODULE_ALIAS("of:N*T*Csnps,dw-xpcs-gen2-3g");
MODULE_ALIAS("of:N*T*Csnps,dw-xpcs-gen2-3gC*");
MODULE_ALIAS("of:N*T*Csnps,dw-xpcs-gen2-6g");
MODULE_ALIAS("of:N*T*Csnps,dw-xpcs-gen2-6gC*");
MODULE_ALIAS("of:N*T*Csnps,dw-xpcs-gen4-3g");
MODULE_ALIAS("of:N*T*Csnps,dw-xpcs-gen4-3gC*");
MODULE_ALIAS("of:N*T*Csnps,dw-xpcs-gen4-6g");
MODULE_ALIAS("of:N*T*Csnps,dw-xpcs-gen4-6gC*");
MODULE_ALIAS("of:N*T*Csnps,dw-xpcs-gen5-10g");
MODULE_ALIAS("of:N*T*Csnps,dw-xpcs-gen5-10gC*");
MODULE_ALIAS("of:N*T*Csnps,dw-xpcs-gen5-12g");
MODULE_ALIAS("of:N*T*Csnps,dw-xpcs-gen5-12gC*");

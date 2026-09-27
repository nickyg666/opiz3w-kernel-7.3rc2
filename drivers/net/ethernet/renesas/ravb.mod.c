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


MODULE_INFO(depends, "mdio-bitbang");

MODULE_ALIAS("of:N*T*Crenesas,etheravb-r8a7790");
MODULE_ALIAS("of:N*T*Crenesas,etheravb-r8a7790C*");
MODULE_ALIAS("of:N*T*Crenesas,etheravb-r8a7794");
MODULE_ALIAS("of:N*T*Crenesas,etheravb-r8a7794C*");
MODULE_ALIAS("of:N*T*Crenesas,etheravb-rcar-gen2");
MODULE_ALIAS("of:N*T*Crenesas,etheravb-rcar-gen2C*");
MODULE_ALIAS("of:N*T*Crenesas,etheravb-r8a7795");
MODULE_ALIAS("of:N*T*Crenesas,etheravb-r8a7795C*");
MODULE_ALIAS("of:N*T*Crenesas,etheravb-rcar-gen3");
MODULE_ALIAS("of:N*T*Crenesas,etheravb-rcar-gen3C*");
MODULE_ALIAS("of:N*T*Crenesas,etheravb-rcar-gen4");
MODULE_ALIAS("of:N*T*Crenesas,etheravb-rcar-gen4C*");
MODULE_ALIAS("of:N*T*Crenesas,etheravb-rzv2m");
MODULE_ALIAS("of:N*T*Crenesas,etheravb-rzv2mC*");
MODULE_ALIAS("of:N*T*Crenesas,rzg2l-gbeth");
MODULE_ALIAS("of:N*T*Crenesas,rzg2l-gbethC*");

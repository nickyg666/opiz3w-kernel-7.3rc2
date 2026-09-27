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


MODULE_INFO(depends, "");

MODULE_ALIAS("platform:spi_sh_msiof");
MODULE_ALIAS("of:N*T*Crenesas,sh-mobile-msiof");
MODULE_ALIAS("of:N*T*Crenesas,sh-mobile-msiofC*");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen2-msiof");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen2-msiofC*");
MODULE_ALIAS("of:N*T*Crenesas,msiof-r8a7795");
MODULE_ALIAS("of:N*T*Crenesas,msiof-r8a7795C*");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen3-msiof");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen3-msiofC*");
MODULE_ALIAS("of:N*T*Crenesas,msiof-r8a779a0");
MODULE_ALIAS("of:N*T*Crenesas,msiof-r8a779a0C*");
MODULE_ALIAS("of:N*T*Crenesas,msiof-r8a779f0");
MODULE_ALIAS("of:N*T*Crenesas,msiof-r8a779f0C*");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen4-msiof");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen4-msiofC*");
MODULE_ALIAS("of:N*T*Crenesas,sh-msiof");
MODULE_ALIAS("of:N*T*Crenesas,sh-msiofC*");

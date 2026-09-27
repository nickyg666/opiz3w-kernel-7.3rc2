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


MODULE_INFO(depends, "ti-cpsw-ale,ti-cpsw-sl,k3-cppi-desc-pool,phylink");

MODULE_ALIAS("of:N*T*Cti,am654-cpsw-nuss");
MODULE_ALIAS("of:N*T*Cti,am654-cpsw-nussC*");
MODULE_ALIAS("of:N*T*Cti,j721e-cpsw-nuss");
MODULE_ALIAS("of:N*T*Cti,j721e-cpsw-nussC*");
MODULE_ALIAS("of:N*T*Cti,am642-cpsw-nuss");
MODULE_ALIAS("of:N*T*Cti,am642-cpsw-nussC*");
MODULE_ALIAS("of:N*T*Cti,j722s-cpsw-nuss");
MODULE_ALIAS("of:N*T*Cti,j722s-cpsw-nussC*");
MODULE_ALIAS("of:N*T*Cti,j7200-cpswxg-nuss");
MODULE_ALIAS("of:N*T*Cti,j7200-cpswxg-nussC*");
MODULE_ALIAS("of:N*T*Cti,j721e-cpswxg-nuss");
MODULE_ALIAS("of:N*T*Cti,j721e-cpswxg-nussC*");
MODULE_ALIAS("of:N*T*Cti,j784s4-cpswxg-nuss");
MODULE_ALIAS("of:N*T*Cti,j784s4-cpswxg-nussC*");

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

MODULE_ALIAS("of:N*T*Cti,j721e-wiz-16g");
MODULE_ALIAS("of:N*T*Cti,j721e-wiz-16gC*");
MODULE_ALIAS("of:N*T*Cti,j721e-wiz-10g");
MODULE_ALIAS("of:N*T*Cti,j721e-wiz-10gC*");
MODULE_ALIAS("of:N*T*Cti,am64-wiz-10g");
MODULE_ALIAS("of:N*T*Cti,am64-wiz-10gC*");
MODULE_ALIAS("of:N*T*Cti,j722s-wiz-10g");
MODULE_ALIAS("of:N*T*Cti,j722s-wiz-10gC*");
MODULE_ALIAS("of:N*T*Cti,j7200-wiz-10g");
MODULE_ALIAS("of:N*T*Cti,j7200-wiz-10gC*");
MODULE_ALIAS("of:N*T*Cti,j784s4-wiz-10g");
MODULE_ALIAS("of:N*T*Cti,j784s4-wiz-10gC*");
MODULE_ALIAS("of:N*T*Cti,j721s2-wiz-10g");
MODULE_ALIAS("of:N*T*Cti,j721s2-wiz-10gC*");

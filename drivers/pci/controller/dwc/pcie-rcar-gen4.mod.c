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

MODULE_ALIAS("of:N*T*Crenesas,r8a779f0-pcie");
MODULE_ALIAS("of:N*T*Crenesas,r8a779f0-pcieC*");
MODULE_ALIAS("of:N*T*Crenesas,r8a779f0-pcie-ep");
MODULE_ALIAS("of:N*T*Crenesas,r8a779f0-pcie-epC*");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen4-pcie");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen4-pcieC*");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen4-pcie-ep");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen4-pcie-epC*");

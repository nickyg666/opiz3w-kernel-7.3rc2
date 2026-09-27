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


MODULE_INFO(depends, "pcie-cadence-mod,pcie-cadence-host-mod");

MODULE_ALIAS("of:N*T*Cti,j721e-pcie-host");
MODULE_ALIAS("of:N*T*Cti,j721e-pcie-hostC*");
MODULE_ALIAS("of:N*T*Cti,j721e-pcie-ep");
MODULE_ALIAS("of:N*T*Cti,j721e-pcie-epC*");
MODULE_ALIAS("of:N*T*Cti,j7200-pcie-host");
MODULE_ALIAS("of:N*T*Cti,j7200-pcie-hostC*");
MODULE_ALIAS("of:N*T*Cti,j7200-pcie-ep");
MODULE_ALIAS("of:N*T*Cti,j7200-pcie-epC*");
MODULE_ALIAS("of:N*T*Cti,am64-pcie-host");
MODULE_ALIAS("of:N*T*Cti,am64-pcie-hostC*");
MODULE_ALIAS("of:N*T*Cti,am64-pcie-ep");
MODULE_ALIAS("of:N*T*Cti,am64-pcie-epC*");
MODULE_ALIAS("of:N*T*Cti,j784s4-pcie-host");
MODULE_ALIAS("of:N*T*Cti,j784s4-pcie-hostC*");
MODULE_ALIAS("of:N*T*Cti,j784s4-pcie-ep");
MODULE_ALIAS("of:N*T*Cti,j784s4-pcie-epC*");
MODULE_ALIAS("of:N*T*Cti,j722s-pcie-host");
MODULE_ALIAS("of:N*T*Cti,j722s-pcie-hostC*");

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


MODULE_INFO(depends, "pcs-lynx,mdio-regmap,stmmac-platform");

MODULE_ALIAS("of:N*T*Caltr,socfpga-stmmac");
MODULE_ALIAS("of:N*T*Caltr,socfpga-stmmacC*");
MODULE_ALIAS("of:N*T*Caltr,socfpga-stmmac-a10-s10");
MODULE_ALIAS("of:N*T*Caltr,socfpga-stmmac-a10-s10C*");
MODULE_ALIAS("of:N*T*Caltr,socfpga-stmmac-agilex5");
MODULE_ALIAS("of:N*T*Caltr,socfpga-stmmac-agilex5C*");

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


MODULE_INFO(depends, "stmmac,stmmac-platform");

MODULE_ALIAS("of:N*T*Cst,stm32-dwmac");
MODULE_ALIAS("of:N*T*Cst,stm32-dwmacC*");
MODULE_ALIAS("of:N*T*Cst,stm32mp1-dwmac");
MODULE_ALIAS("of:N*T*Cst,stm32mp1-dwmacC*");
MODULE_ALIAS("of:N*T*Cst,stm32mp13-dwmac");
MODULE_ALIAS("of:N*T*Cst,stm32mp13-dwmacC*");
MODULE_ALIAS("of:N*T*Cst,stm32mp25-dwmac");
MODULE_ALIAS("of:N*T*Cst,stm32mp25-dwmacC*");

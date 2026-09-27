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

MODULE_ALIAS("of:N*T*Cnxp,imx8mp-dwmac-eqos");
MODULE_ALIAS("of:N*T*Cnxp,imx8mp-dwmac-eqosC*");
MODULE_ALIAS("of:N*T*Cnxp,imx8dxl-dwmac-eqos");
MODULE_ALIAS("of:N*T*Cnxp,imx8dxl-dwmac-eqosC*");
MODULE_ALIAS("of:N*T*Cnxp,imx93-dwmac-eqos");
MODULE_ALIAS("of:N*T*Cnxp,imx93-dwmac-eqosC*");

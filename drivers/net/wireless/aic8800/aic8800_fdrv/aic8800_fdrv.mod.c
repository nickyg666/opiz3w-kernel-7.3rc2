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


MODULE_INFO(depends, "sunxi_rfkill,aic8800_bsp");

MODULE_ALIAS("sdio:c*v5449d0145*");
MODULE_ALIAS("sdio:c*vC8A1dC08D*");
MODULE_ALIAS("sdio:c*vC8A1d0082*");

MODULE_INFO(srcversion, "C037AE96F9E976155445C76");

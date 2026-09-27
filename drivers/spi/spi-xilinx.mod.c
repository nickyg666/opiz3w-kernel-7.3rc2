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


MODULE_INFO(depends, "spi-bitbang");

MODULE_ALIAS("of:N*T*Cxlnx,axi-quad-spi-1.00.a");
MODULE_ALIAS("of:N*T*Cxlnx,axi-quad-spi-1.00.aC*");
MODULE_ALIAS("of:N*T*Cxlnx,xps-spi-2.00.a");
MODULE_ALIAS("of:N*T*Cxlnx,xps-spi-2.00.aC*");
MODULE_ALIAS("of:N*T*Cxlnx,xps-spi-2.00.b");
MODULE_ALIAS("of:N*T*Cxlnx,xps-spi-2.00.bC*");

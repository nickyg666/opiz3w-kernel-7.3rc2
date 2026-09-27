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


MODULE_INFO(depends, "phylink,xilinx_dma");

MODULE_ALIAS("of:N*T*Cxlnx,axi-ethernet-1.00.a");
MODULE_ALIAS("of:N*T*Cxlnx,axi-ethernet-1.00.aC*");
MODULE_ALIAS("of:N*T*Cxlnx,axi-ethernet-1.01.a");
MODULE_ALIAS("of:N*T*Cxlnx,axi-ethernet-1.01.aC*");
MODULE_ALIAS("of:N*T*Cxlnx,axi-ethernet-2.01.a");
MODULE_ALIAS("of:N*T*Cxlnx,axi-ethernet-2.01.aC*");

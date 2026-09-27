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

MODULE_ALIAS("of:N*T*Cxlnx,zynq-gpio-1.0");
MODULE_ALIAS("of:N*T*Cxlnx,zynq-gpio-1.0C*");
MODULE_ALIAS("of:N*T*Cxlnx,zynqmp-gpio-1.0");
MODULE_ALIAS("of:N*T*Cxlnx,zynqmp-gpio-1.0C*");
MODULE_ALIAS("of:N*T*Cxlnx,versal-gpio-1.0");
MODULE_ALIAS("of:N*T*Cxlnx,versal-gpio-1.0C*");
MODULE_ALIAS("of:N*T*Cxlnx,pmc-gpio-1.0");
MODULE_ALIAS("of:N*T*Cxlnx,pmc-gpio-1.0C*");
MODULE_ALIAS("of:N*T*Cxlnx,eio-gpio-1.0");
MODULE_ALIAS("of:N*T*Cxlnx,eio-gpio-1.0C*");

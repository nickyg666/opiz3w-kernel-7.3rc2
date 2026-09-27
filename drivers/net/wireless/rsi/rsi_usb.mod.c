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


MODULE_INFO(depends, "btrsi,rsi_91x");

MODULE_ALIAS("usb:v1618p9113d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1618p9116d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A88AA9F47B48977291ADC92");

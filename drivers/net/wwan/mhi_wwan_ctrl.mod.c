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


MODULE_INFO(depends, "mhi,wwan");

MODULE_ALIAS("mhi:DUN");
MODULE_ALIAS("mhi:DUN2");
MODULE_ALIAS("mhi:MBIM");
MODULE_ALIAS("mhi:QMI");
MODULE_ALIAS("mhi:DIAG");
MODULE_ALIAS("mhi:FIREHOSE");
MODULE_ALIAS("mhi:NMEA");

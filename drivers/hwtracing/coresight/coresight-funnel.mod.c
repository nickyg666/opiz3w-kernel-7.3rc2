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


MODULE_INFO(depends, "coresight");

MODULE_ALIAS("amba:d???BB908");
MODULE_ALIAS("amba:d???BB9EB");
MODULE_ALIAS("of:N*T*Carm,coresight-static-funnel");
MODULE_ALIAS("of:N*T*Carm,coresight-static-funnelC*");

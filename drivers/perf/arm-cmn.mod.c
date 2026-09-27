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

MODULE_ALIAS("of:N*T*Carm,cmn-600");
MODULE_ALIAS("of:N*T*Carm,cmn-600C*");
MODULE_ALIAS("of:N*T*Carm,cmn-650");
MODULE_ALIAS("of:N*T*Carm,cmn-650C*");
MODULE_ALIAS("of:N*T*Carm,cmn-700");
MODULE_ALIAS("of:N*T*Carm,cmn-700C*");
MODULE_ALIAS("of:N*T*Carm,cmn-s3");
MODULE_ALIAS("of:N*T*Carm,cmn-s3C*");
MODULE_ALIAS("of:N*T*Carm,ci-700");
MODULE_ALIAS("of:N*T*Carm,ci-700C*");

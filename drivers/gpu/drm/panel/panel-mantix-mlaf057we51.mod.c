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

MODULE_ALIAS("of:N*T*Cmantix,mlaf057we51-x");
MODULE_ALIAS("of:N*T*Cmantix,mlaf057we51-xC*");
MODULE_ALIAS("of:N*T*Cys,ys57pss36bh5gq");
MODULE_ALIAS("of:N*T*Cys,ys57pss36bh5gqC*");

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

MODULE_ALIAS("of:N*T*Capple,t8103-dart");
MODULE_ALIAS("of:N*T*Capple,t8103-dartC*");
MODULE_ALIAS("of:N*T*Capple,t8103-usb4-dart");
MODULE_ALIAS("of:N*T*Capple,t8103-usb4-dartC*");
MODULE_ALIAS("of:N*T*Capple,t8110-dart");
MODULE_ALIAS("of:N*T*Capple,t8110-dartC*");
MODULE_ALIAS("of:N*T*Capple,t6000-dart");
MODULE_ALIAS("of:N*T*Capple,t6000-dartC*");

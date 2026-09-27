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


MODULE_INFO(depends, "v4l2-cci,videodev,v4l2-fwnode,v4l2-async,mc");

MODULE_ALIAS("of:N*T*Csony,imx412");
MODULE_ALIAS("of:N*T*Csony,imx412C*");
MODULE_ALIAS("of:N*T*Csony,imx577");
MODULE_ALIAS("of:N*T*Csony,imx577C*");

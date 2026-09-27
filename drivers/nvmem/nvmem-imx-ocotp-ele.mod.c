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

MODULE_ALIAS("of:N*T*Cfsl,imx93-ocotp");
MODULE_ALIAS("of:N*T*Cfsl,imx93-ocotpC*");
MODULE_ALIAS("of:N*T*Cfsl,imx94-ocotp");
MODULE_ALIAS("of:N*T*Cfsl,imx94-ocotpC*");
MODULE_ALIAS("of:N*T*Cfsl,imx95-ocotp");
MODULE_ALIAS("of:N*T*Cfsl,imx95-ocotpC*");

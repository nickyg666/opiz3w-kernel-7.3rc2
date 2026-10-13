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


MODULE_INFO(depends, "drm_kms_helper");

MODULE_ALIAS("of:N*T*Cfsl,imx6sx-ldb");
MODULE_ALIAS("of:N*T*Cfsl,imx6sx-ldbC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8mp-ldb");
MODULE_ALIAS("of:N*T*Cfsl,imx8mp-ldbC*");
MODULE_ALIAS("of:N*T*Cfsl,imx93-ldb");
MODULE_ALIAS("of:N*T*Cfsl,imx93-ldbC*");

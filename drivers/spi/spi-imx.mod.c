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

MODULE_ALIAS("of:N*T*Cfsl,imx1-cspi");
MODULE_ALIAS("of:N*T*Cfsl,imx1-cspiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx21-cspi");
MODULE_ALIAS("of:N*T*Cfsl,imx21-cspiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx27-cspi");
MODULE_ALIAS("of:N*T*Cfsl,imx27-cspiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx31-cspi");
MODULE_ALIAS("of:N*T*Cfsl,imx31-cspiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx35-cspi");
MODULE_ALIAS("of:N*T*Cfsl,imx35-cspiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx51-ecspi");
MODULE_ALIAS("of:N*T*Cfsl,imx51-ecspiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx53-ecspi");
MODULE_ALIAS("of:N*T*Cfsl,imx53-ecspiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx6ul-ecspi");
MODULE_ALIAS("of:N*T*Cfsl,imx6ul-ecspiC*");

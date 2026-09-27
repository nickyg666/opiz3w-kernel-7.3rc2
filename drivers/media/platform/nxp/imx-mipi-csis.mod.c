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


MODULE_INFO(depends, "videodev,v4l2-async,v4l2-fwnode,mc");

MODULE_ALIAS("of:N*T*Cfsl,imx7-mipi-csi2");
MODULE_ALIAS("of:N*T*Cfsl,imx7-mipi-csi2C*");
MODULE_ALIAS("of:N*T*Cfsl,imx8mm-mipi-csi2");
MODULE_ALIAS("of:N*T*Cfsl,imx8mm-mipi-csi2C*");

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

MODULE_ALIAS("of:N*T*Cfsl,imx6sx-usbphy");
MODULE_ALIAS("of:N*T*Cfsl,imx6sx-usbphyC*");
MODULE_ALIAS("of:N*T*Cfsl,imx6sl-usbphy");
MODULE_ALIAS("of:N*T*Cfsl,imx6sl-usbphyC*");
MODULE_ALIAS("of:N*T*Cfsl,imx6q-usbphy");
MODULE_ALIAS("of:N*T*Cfsl,imx6q-usbphyC*");
MODULE_ALIAS("of:N*T*Cfsl,imx23-usbphy");
MODULE_ALIAS("of:N*T*Cfsl,imx23-usbphyC*");
MODULE_ALIAS("of:N*T*Cfsl,vf610-usbphy");
MODULE_ALIAS("of:N*T*Cfsl,vf610-usbphyC*");
MODULE_ALIAS("of:N*T*Cfsl,imx6ul-usbphy");
MODULE_ALIAS("of:N*T*Cfsl,imx6ul-usbphyC*");
MODULE_ALIAS("of:N*T*Cfsl,imx7ulp-usbphy");
MODULE_ALIAS("of:N*T*Cfsl,imx7ulp-usbphyC*");

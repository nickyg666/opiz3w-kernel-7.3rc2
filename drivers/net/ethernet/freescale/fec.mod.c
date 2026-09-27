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

MODULE_ALIAS("of:N*T*Cfsl,imx25-fec");
MODULE_ALIAS("of:N*T*Cfsl,imx25-fecC*");
MODULE_ALIAS("of:N*T*Cfsl,imx27-fec");
MODULE_ALIAS("of:N*T*Cfsl,imx27-fecC*");
MODULE_ALIAS("of:N*T*Cfsl,imx28-fec");
MODULE_ALIAS("of:N*T*Cfsl,imx28-fecC*");
MODULE_ALIAS("of:N*T*Cfsl,imx6q-fec");
MODULE_ALIAS("of:N*T*Cfsl,imx6q-fecC*");
MODULE_ALIAS("of:N*T*Cfsl,mvf600-fec");
MODULE_ALIAS("of:N*T*Cfsl,mvf600-fecC*");
MODULE_ALIAS("of:N*T*Cfsl,imx6sx-fec");
MODULE_ALIAS("of:N*T*Cfsl,imx6sx-fecC*");
MODULE_ALIAS("of:N*T*Cfsl,imx6ul-fec");
MODULE_ALIAS("of:N*T*Cfsl,imx6ul-fecC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8mq-fec");
MODULE_ALIAS("of:N*T*Cfsl,imx8mq-fecC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8qm-fec");
MODULE_ALIAS("of:N*T*Cfsl,imx8qm-fecC*");
MODULE_ALIAS("of:N*T*Cfsl,s32v234-fec");
MODULE_ALIAS("of:N*T*Cfsl,s32v234-fecC*");
MODULE_ALIAS("platform:fec");

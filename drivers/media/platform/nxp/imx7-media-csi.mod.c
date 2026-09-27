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


MODULE_INFO(depends, "videodev,videobuf2-common,videobuf2-v4l2,mc,videobuf2-dma-contig,v4l2-async");

MODULE_ALIAS("of:N*T*Cfsl,imx8mq-csi");
MODULE_ALIAS("of:N*T*Cfsl,imx8mq-csiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx7-csi");
MODULE_ALIAS("of:N*T*Cfsl,imx7-csiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx6ul-csi");
MODULE_ALIAS("of:N*T*Cfsl,imx6ul-csiC*");

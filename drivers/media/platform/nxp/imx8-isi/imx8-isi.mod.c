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


MODULE_INFO(depends, "v4l2-mem2mem,videobuf2-v4l2,videodev,mc,v4l2-async,videobuf2-dma-contig,videobuf2-common");

MODULE_ALIAS("of:N*T*Cfsl,imx8mn-isi");
MODULE_ALIAS("of:N*T*Cfsl,imx8mn-isiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8mp-isi");
MODULE_ALIAS("of:N*T*Cfsl,imx8mp-isiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8qm-isi");
MODULE_ALIAS("of:N*T*Cfsl,imx8qm-isiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8qxp-isi");
MODULE_ALIAS("of:N*T*Cfsl,imx8qxp-isiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8ulp-isi");
MODULE_ALIAS("of:N*T*Cfsl,imx8ulp-isiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx91-isi");
MODULE_ALIAS("of:N*T*Cfsl,imx91-isiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx93-isi");
MODULE_ALIAS("of:N*T*Cfsl,imx93-isiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx95-isi");
MODULE_ALIAS("of:N*T*Cfsl,imx95-isiC*");

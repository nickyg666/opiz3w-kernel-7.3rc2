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


MODULE_INFO(depends, "v4l2-mem2mem,videobuf2-v4l2,videodev,videobuf2-dma-contig,videobuf2-common,v4l2-jpeg");

MODULE_ALIAS("of:N*T*Cnxp,imx8qxp-jpgdec");
MODULE_ALIAS("of:N*T*Cnxp,imx8qxp-jpgdecC*");
MODULE_ALIAS("of:N*T*Cnxp,imx8qxp-jpgenc");
MODULE_ALIAS("of:N*T*Cnxp,imx8qxp-jpgencC*");

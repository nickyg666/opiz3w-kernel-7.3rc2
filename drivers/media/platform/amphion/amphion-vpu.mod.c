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


MODULE_INFO(depends, "v4l2-mem2mem,videobuf2-v4l2,videodev,mc,videobuf2-dma-contig,videobuf2-common,videobuf2-vmalloc");

MODULE_ALIAS("of:N*T*Cnxp,imx8qxp-vpu");
MODULE_ALIAS("of:N*T*Cnxp,imx8qxp-vpuC*");
MODULE_ALIAS("of:N*T*Cnxp,imx8qm-vpu");
MODULE_ALIAS("of:N*T*Cnxp,imx8qm-vpuC*");
MODULE_ALIAS("of:N*T*Cnxp,imx8q-vpu-encoder");
MODULE_ALIAS("of:N*T*Cnxp,imx8q-vpu-encoderC*");
MODULE_ALIAS("of:N*T*Cnxp,imx8q-vpu-decoder");
MODULE_ALIAS("of:N*T*Cnxp,imx8q-vpu-decoderC*");

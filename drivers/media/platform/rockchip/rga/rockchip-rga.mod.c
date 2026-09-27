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


MODULE_INFO(depends, "v4l2-mem2mem,videobuf2-v4l2,videodev,videobuf2-dma-sg,videobuf2-dma-contig,videobuf2-common");

MODULE_ALIAS("of:N*T*Crockchip,rk3288-rga");
MODULE_ALIAS("of:N*T*Crockchip,rk3288-rgaC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3399-rga");
MODULE_ALIAS("of:N*T*Crockchip,rk3399-rgaC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3588-rga3");
MODULE_ALIAS("of:N*T*Crockchip,rk3588-rga3C*");

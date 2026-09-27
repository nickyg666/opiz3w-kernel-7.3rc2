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


MODULE_INFO(depends, "videobuf2-v4l2,cec,v4l2-dv-timings,videodev,videobuf2-dma-contig,videobuf2-common");

MODULE_ALIAS("of:N*T*Crockchip,rk3588-hdmirx-ctrler");
MODULE_ALIAS("of:N*T*Crockchip,rk3588-hdmirx-ctrlerC*");

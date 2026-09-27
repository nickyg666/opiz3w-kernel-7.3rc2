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


MODULE_INFO(depends, "videobuf2-common,mc,cdns-csi2rx,videodev,videobuf2-v4l2,videobuf2-dma-contig,v4l2-async");

MODULE_ALIAS("of:N*T*Cti,j721e-csi2rx-shim");
MODULE_ALIAS("of:N*T*Cti,j721e-csi2rx-shimC*");

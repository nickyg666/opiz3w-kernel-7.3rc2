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


MODULE_INFO(depends, "drm_kms_helper,drm_display_helper,snd-soc-core,drm_dma_helper,drm_client_lib,snd-pcm");

MODULE_ALIAS("of:N*T*Cxlnx,zynqmp-dpsub-1.7");
MODULE_ALIAS("of:N*T*Cxlnx,zynqmp-dpsub-1.7C*");

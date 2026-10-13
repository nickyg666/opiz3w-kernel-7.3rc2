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


MODULE_INFO(depends, "drm_dma_helper,drm_display_helper,drm_kms_helper,drm_exec,snd-soc-core,drm_client_lib");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2711-vc5");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2711-vc5C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2712-vc6");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2712-vc6C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-vc4");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-vc4C*");
MODULE_ALIAS("of:N*T*Cbrcm,cygnus-vc4");
MODULE_ALIAS("of:N*T*Cbrcm,cygnus-vc4C*");

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


MODULE_INFO(depends, "drm_kms_helper,vsp1,drm_dma_helper,drm_client_lib,drm_display_helper");

MODULE_ALIAS("of:N*T*Crenesas,r9a07g043u-du");
MODULE_ALIAS("of:N*T*Crenesas,r9a07g043u-duC*");
MODULE_ALIAS("of:N*T*Crenesas,r9a07g044-du");
MODULE_ALIAS("of:N*T*Crenesas,r9a07g044-duC*");
MODULE_ALIAS("of:N*T*Crenesas,r9a09g057-du");
MODULE_ALIAS("of:N*T*Crenesas,r9a09g057-duC*");
MODULE_ALIAS("of:N*T*Crenesas,r9a09g077-du");
MODULE_ALIAS("of:N*T*Crenesas,r9a09g077-duC*");

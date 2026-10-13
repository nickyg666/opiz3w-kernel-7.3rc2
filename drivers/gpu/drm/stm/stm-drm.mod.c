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


MODULE_INFO(depends, "drm_kms_helper,drm_dma_helper,drm_client_lib");

MODULE_ALIAS("of:N*T*Cst,stm32-ltdc");
MODULE_ALIAS("of:N*T*Cst,stm32-ltdcC*");
MODULE_ALIAS("of:N*T*Cst,stm32mp251-ltdc");
MODULE_ALIAS("of:N*T*Cst,stm32mp251-ltdcC*");
MODULE_ALIAS("of:N*T*Cst,stm32mp255-ltdc");
MODULE_ALIAS("of:N*T*Cst,stm32mp255-ltdcC*");

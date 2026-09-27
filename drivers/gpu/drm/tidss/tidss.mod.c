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


MODULE_INFO(depends, "drm_kms_helper,drm_dma_helper,drm_client_lib,drm_display_helper");

MODULE_ALIAS("of:N*T*Cti,k2g-dss");
MODULE_ALIAS("of:N*T*Cti,k2g-dssC*");
MODULE_ALIAS("of:N*T*Cti,am625-dss");
MODULE_ALIAS("of:N*T*Cti,am625-dssC*");
MODULE_ALIAS("of:N*T*Cti,am62a7-dss");
MODULE_ALIAS("of:N*T*Cti,am62a7-dssC*");
MODULE_ALIAS("of:N*T*Cti,am62l-dss");
MODULE_ALIAS("of:N*T*Cti,am62l-dssC*");
MODULE_ALIAS("of:N*T*Cti,am65x-dss");
MODULE_ALIAS("of:N*T*Cti,am65x-dssC*");
MODULE_ALIAS("of:N*T*Cti,j721e-dss");
MODULE_ALIAS("of:N*T*Cti,j721e-dssC*");

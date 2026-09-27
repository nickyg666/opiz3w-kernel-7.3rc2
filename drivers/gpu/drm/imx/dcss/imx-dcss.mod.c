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

KSYMTAB_DATA(dcss_dev_pm_ops, "");
SYMBOL_FLAGS(dcss_dev_pm_ops, 0x01);

MODULE_INFO(depends, "drm_kms_helper,drm_dma_helper,drm_client_lib,drm_display_helper");

MODULE_ALIAS("of:N*T*Cnxp,imx8mq-dcss");
MODULE_ALIAS("of:N*T*Cnxp,imx8mq-dcssC*");

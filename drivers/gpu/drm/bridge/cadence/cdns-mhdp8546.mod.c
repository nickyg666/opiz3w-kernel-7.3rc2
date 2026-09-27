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


MODULE_INFO(depends, "drm_display_helper,drm_kms_helper");

MODULE_ALIAS("of:N*T*Ccdns,mhdp8546");
MODULE_ALIAS("of:N*T*Ccdns,mhdp8546C*");
MODULE_ALIAS("of:N*T*Cti,j721e-mhdp8546");
MODULE_ALIAS("of:N*T*Cti,j721e-mhdp8546C*");

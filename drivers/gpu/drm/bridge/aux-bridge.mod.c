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

KSYMTAB_FUNC(drm_aux_bridge_register, "");
SYMBOL_FLAGS(drm_aux_bridge_register, 0x01);

MODULE_INFO(depends, "drm_kms_helper");

MODULE_ALIAS("auxiliary:aux_bridge.aux_bridge");

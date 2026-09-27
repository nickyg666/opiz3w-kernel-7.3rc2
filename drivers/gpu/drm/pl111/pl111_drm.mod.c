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

KSYMTAB_FUNC(pl111_versatile_init, "");
SYMBOL_FLAGS(pl111_versatile_init, 0x01);

MODULE_INFO(depends, "drm_kms_helper,drm_dma_helper,drm_client_lib");

MODULE_ALIAS("amba:d???41110");
MODULE_ALIAS("amba:d??18011[01]");
MODULE_ALIAS("amba:d???41111");

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

KSYMTAB_DATA(caam_dpaa2, "");
SYMBOL_FLAGS(caam_dpaa2, 0x00);
KSYMTAB_DATA(caam_congested, "");
SYMBOL_FLAGS(caam_congested, 0x00);
KSYMTAB_FUNC(caam_qi_enqueue, "");
SYMBOL_FLAGS(caam_qi_enqueue, 0x00);
KSYMTAB_FUNC(caam_drv_ctx_update, "");
SYMBOL_FLAGS(caam_drv_ctx_update, 0x00);
KSYMTAB_FUNC(caam_drv_ctx_init, "");
SYMBOL_FLAGS(caam_drv_ctx_init, 0x00);
KSYMTAB_FUNC(qi_cache_alloc, "");
SYMBOL_FLAGS(qi_cache_alloc, 0x00);
KSYMTAB_FUNC(qi_cache_free, "");
SYMBOL_FLAGS(qi_cache_free, 0x00);
KSYMTAB_FUNC(caam_drv_ctx_rel, "");
SYMBOL_FLAGS(caam_drv_ctx_rel, 0x00);

MODULE_INFO(depends, "error");

MODULE_ALIAS("of:N*T*Cfsl,sec-v4.0");
MODULE_ALIAS("of:N*T*Cfsl,sec-v4.0C*");
MODULE_ALIAS("of:N*T*Cfsl,sec4.0");
MODULE_ALIAS("of:N*T*Cfsl,sec4.0C*");

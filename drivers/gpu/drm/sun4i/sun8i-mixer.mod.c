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


MODULE_INFO(depends, "drm_kms_helper,drm_dma_helper");

MODULE_ALIAS("of:N*T*Callwinner,sun8i-a83t-de2-mixer-0");
MODULE_ALIAS("of:N*T*Callwinner,sun8i-a83t-de2-mixer-0C*");
MODULE_ALIAS("of:N*T*Callwinner,sun8i-a83t-de2-mixer-1");
MODULE_ALIAS("of:N*T*Callwinner,sun8i-a83t-de2-mixer-1C*");
MODULE_ALIAS("of:N*T*Callwinner,sun8i-h3-de2-mixer-0");
MODULE_ALIAS("of:N*T*Callwinner,sun8i-h3-de2-mixer-0C*");
MODULE_ALIAS("of:N*T*Callwinner,sun8i-r40-de2-mixer-0");
MODULE_ALIAS("of:N*T*Callwinner,sun8i-r40-de2-mixer-0C*");
MODULE_ALIAS("of:N*T*Callwinner,sun8i-r40-de2-mixer-1");
MODULE_ALIAS("of:N*T*Callwinner,sun8i-r40-de2-mixer-1C*");
MODULE_ALIAS("of:N*T*Callwinner,sun8i-v3s-de2-mixer");
MODULE_ALIAS("of:N*T*Callwinner,sun8i-v3s-de2-mixerC*");
MODULE_ALIAS("of:N*T*Callwinner,sun20i-d1-de2-mixer-0");
MODULE_ALIAS("of:N*T*Callwinner,sun20i-d1-de2-mixer-0C*");
MODULE_ALIAS("of:N*T*Callwinner,sun20i-d1-de2-mixer-1");
MODULE_ALIAS("of:N*T*Callwinner,sun20i-d1-de2-mixer-1C*");
MODULE_ALIAS("of:N*T*Callwinner,sun50i-a64-de2-mixer-0");
MODULE_ALIAS("of:N*T*Callwinner,sun50i-a64-de2-mixer-0C*");
MODULE_ALIAS("of:N*T*Callwinner,sun50i-a64-de2-mixer-1");
MODULE_ALIAS("of:N*T*Callwinner,sun50i-a64-de2-mixer-1C*");
MODULE_ALIAS("of:N*T*Callwinner,sun50i-h6-de3-mixer-0");
MODULE_ALIAS("of:N*T*Callwinner,sun50i-h6-de3-mixer-0C*");
MODULE_ALIAS("of:N*T*Callwinner,sun50i-h616-de33-mixer-0");
MODULE_ALIAS("of:N*T*Callwinner,sun50i-h616-de33-mixer-0C*");

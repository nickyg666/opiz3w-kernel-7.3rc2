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

KSYMTAB_FUNC(rcar_lvds_pclk_enable, "");
SYMBOL_FLAGS(rcar_lvds_pclk_enable, 0x01);
KSYMTAB_FUNC(rcar_lvds_pclk_disable, "");
SYMBOL_FLAGS(rcar_lvds_pclk_disable, 0x01);
KSYMTAB_FUNC(rcar_lvds_dual_link, "");
SYMBOL_FLAGS(rcar_lvds_dual_link, 0x01);
KSYMTAB_FUNC(rcar_lvds_is_connected, "");
SYMBOL_FLAGS(rcar_lvds_is_connected, 0x01);

MODULE_INFO(depends, "drm_kms_helper");

MODULE_ALIAS("of:N*T*Crenesas,r8a7742-lvds");
MODULE_ALIAS("of:N*T*Crenesas,r8a7742-lvdsC*");
MODULE_ALIAS("of:N*T*Crenesas,r8a7743-lvds");
MODULE_ALIAS("of:N*T*Crenesas,r8a7743-lvdsC*");
MODULE_ALIAS("of:N*T*Crenesas,r8a7744-lvds");
MODULE_ALIAS("of:N*T*Crenesas,r8a7744-lvdsC*");
MODULE_ALIAS("of:N*T*Crenesas,r8a774a1-lvds");
MODULE_ALIAS("of:N*T*Crenesas,r8a774a1-lvdsC*");
MODULE_ALIAS("of:N*T*Crenesas,r8a774b1-lvds");
MODULE_ALIAS("of:N*T*Crenesas,r8a774b1-lvdsC*");
MODULE_ALIAS("of:N*T*Crenesas,r8a774c0-lvds");
MODULE_ALIAS("of:N*T*Crenesas,r8a774c0-lvdsC*");
MODULE_ALIAS("of:N*T*Crenesas,r8a774e1-lvds");
MODULE_ALIAS("of:N*T*Crenesas,r8a774e1-lvdsC*");
MODULE_ALIAS("of:N*T*Crenesas,r8a7790-lvds");
MODULE_ALIAS("of:N*T*Crenesas,r8a7790-lvdsC*");
MODULE_ALIAS("of:N*T*Crenesas,r8a7791-lvds");
MODULE_ALIAS("of:N*T*Crenesas,r8a7791-lvdsC*");
MODULE_ALIAS("of:N*T*Crenesas,r8a7793-lvds");
MODULE_ALIAS("of:N*T*Crenesas,r8a7793-lvdsC*");
MODULE_ALIAS("of:N*T*Crenesas,r8a7795-lvds");
MODULE_ALIAS("of:N*T*Crenesas,r8a7795-lvdsC*");
MODULE_ALIAS("of:N*T*Crenesas,r8a7796-lvds");
MODULE_ALIAS("of:N*T*Crenesas,r8a7796-lvdsC*");
MODULE_ALIAS("of:N*T*Crenesas,r8a77961-lvds");
MODULE_ALIAS("of:N*T*Crenesas,r8a77961-lvdsC*");
MODULE_ALIAS("of:N*T*Crenesas,r8a77965-lvds");
MODULE_ALIAS("of:N*T*Crenesas,r8a77965-lvdsC*");
MODULE_ALIAS("of:N*T*Crenesas,r8a77970-lvds");
MODULE_ALIAS("of:N*T*Crenesas,r8a77970-lvdsC*");
MODULE_ALIAS("of:N*T*Crenesas,r8a77980-lvds");
MODULE_ALIAS("of:N*T*Crenesas,r8a77980-lvdsC*");
MODULE_ALIAS("of:N*T*Crenesas,r8a77990-lvds");
MODULE_ALIAS("of:N*T*Crenesas,r8a77990-lvdsC*");
MODULE_ALIAS("of:N*T*Crenesas,r8a77995-lvds");
MODULE_ALIAS("of:N*T*Crenesas,r8a77995-lvdsC*");

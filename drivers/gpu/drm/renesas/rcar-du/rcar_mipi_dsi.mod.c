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

KSYMTAB_FUNC(rcar_mipi_dsi_pclk_enable, "");
SYMBOL_FLAGS(rcar_mipi_dsi_pclk_enable, 0x01);
KSYMTAB_FUNC(rcar_mipi_dsi_pclk_disable, "");
SYMBOL_FLAGS(rcar_mipi_dsi_pclk_disable, 0x01);

MODULE_INFO(depends, "drm_kms_helper");

MODULE_ALIAS("of:N*T*Crenesas,r8a779a0-dsi-csi2-tx");
MODULE_ALIAS("of:N*T*Crenesas,r8a779a0-dsi-csi2-txC*");
MODULE_ALIAS("of:N*T*Crenesas,r8a779g0-dsi-csi2-tx");
MODULE_ALIAS("of:N*T*Crenesas,r8a779g0-dsi-csi2-txC*");
MODULE_ALIAS("of:N*T*Crenesas,r8a779h0-dsi-csi2-tx");
MODULE_ALIAS("of:N*T*Crenesas,r8a779h0-dsi-csi2-txC*");

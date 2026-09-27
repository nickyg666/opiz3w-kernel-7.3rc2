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

KSYMTAB_FUNC(meson_venc_hdmi_supported_mode, "");
SYMBOL_FLAGS(meson_venc_hdmi_supported_mode, 0x01);
KSYMTAB_FUNC(meson_venc_hdmi_supported_vic, "");
SYMBOL_FLAGS(meson_venc_hdmi_supported_vic, 0x01);
KSYMTAB_FUNC(meson_venc_hdmi_venc_repeat, "");
SYMBOL_FLAGS(meson_venc_hdmi_venc_repeat, 0x01);
KSYMTAB_FUNC(meson_venc_hdmi_mode_set, "");
SYMBOL_FLAGS(meson_venc_hdmi_mode_set, 0x01);
KSYMTAB_FUNC(meson_venc_mipi_dsi_mode_set, "");
SYMBOL_FLAGS(meson_venc_mipi_dsi_mode_set, 0x01);
KSYMTAB_FUNC(meson_vclk_dmt_supported_freq, "");
SYMBOL_FLAGS(meson_vclk_dmt_supported_freq, 0x01);
KSYMTAB_FUNC(meson_vclk_vic_supported_freq, "");
SYMBOL_FLAGS(meson_vclk_vic_supported_freq, 0x01);
KSYMTAB_FUNC(meson_vclk_setup, "");
SYMBOL_FLAGS(meson_vclk_setup, 0x01);

MODULE_INFO(depends, "drm_kms_helper,cec,drm_dma_helper,meson-canvas,drm_client_lib,drm_display_helper");

MODULE_ALIAS("of:N*T*Camlogic,meson-gxbb-vpu");
MODULE_ALIAS("of:N*T*Camlogic,meson-gxbb-vpuC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-gxl-vpu");
MODULE_ALIAS("of:N*T*Camlogic,meson-gxl-vpuC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-gxm-vpu");
MODULE_ALIAS("of:N*T*Camlogic,meson-gxm-vpuC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-g12a-vpu");
MODULE_ALIAS("of:N*T*Camlogic,meson-g12a-vpuC*");

#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(mtk_hdmi_get_ncts, "DRM_MTK_HDMI");
SYMBOL_FLAGS(mtk_hdmi_get_ncts, 0x01);
KSYMTAB_FUNC(mtk_hdmi_audio_params, "DRM_MTK_HDMI");
SYMBOL_FLAGS(mtk_hdmi_audio_params, 0x01);
KSYMTAB_FUNC(mtk_hdmi_audio_get_eld, "DRM_MTK_HDMI");
SYMBOL_FLAGS(mtk_hdmi_audio_get_eld, 0x01);
KSYMTAB_FUNC(mtk_hdmi_audio_set_plugged_cb, "DRM_MTK_HDMI");
SYMBOL_FLAGS(mtk_hdmi_audio_set_plugged_cb, 0x01);
KSYMTAB_FUNC(mtk_hdmi_bridge_mode_fixup, "DRM_MTK_HDMI");
SYMBOL_FLAGS(mtk_hdmi_bridge_mode_fixup, 0x01);
KSYMTAB_FUNC(mtk_hdmi_bridge_mode_set, "DRM_MTK_HDMI");
SYMBOL_FLAGS(mtk_hdmi_bridge_mode_set, 0x01);
KSYMTAB_FUNC(mtk_hdmi_common_probe, "DRM_MTK_HDMI");
SYMBOL_FLAGS(mtk_hdmi_common_probe, 0x01);

MODULE_INFO(depends, "");


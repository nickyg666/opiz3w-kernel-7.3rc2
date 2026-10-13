#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(dw_hdmi_to_plat_data, "");
SYMBOL_FLAGS(dw_hdmi_to_plat_data, 0x01);
KSYMTAB_FUNC(dw_hdmi_set_plugged_cb, "");
SYMBOL_FLAGS(dw_hdmi_set_plugged_cb, 0x01);
KSYMTAB_FUNC(dw_hdmi_set_channel_status, "");
SYMBOL_FLAGS(dw_hdmi_set_channel_status, 0x01);
KSYMTAB_FUNC(dw_hdmi_set_sample_width, "");
SYMBOL_FLAGS(dw_hdmi_set_sample_width, 0x01);
KSYMTAB_FUNC(dw_hdmi_set_sample_non_pcm, "");
SYMBOL_FLAGS(dw_hdmi_set_sample_non_pcm, 0x01);
KSYMTAB_FUNC(dw_hdmi_set_sample_iec958, "");
SYMBOL_FLAGS(dw_hdmi_set_sample_iec958, 0x01);
KSYMTAB_FUNC(dw_hdmi_set_sample_rate, "");
SYMBOL_FLAGS(dw_hdmi_set_sample_rate, 0x01);
KSYMTAB_FUNC(dw_hdmi_set_channel_count, "");
SYMBOL_FLAGS(dw_hdmi_set_channel_count, 0x01);
KSYMTAB_FUNC(dw_hdmi_set_channel_allocation, "");
SYMBOL_FLAGS(dw_hdmi_set_channel_allocation, 0x01);
KSYMTAB_FUNC(dw_hdmi_audio_enable, "");
SYMBOL_FLAGS(dw_hdmi_audio_enable, 0x01);
KSYMTAB_FUNC(dw_hdmi_audio_disable, "");
SYMBOL_FLAGS(dw_hdmi_audio_disable, 0x01);
KSYMTAB_FUNC(dw_hdmi_phy_i2c_write, "");
SYMBOL_FLAGS(dw_hdmi_phy_i2c_write, 0x01);
KSYMTAB_FUNC(dw_hdmi_set_high_tmds_clock_ratio, "");
SYMBOL_FLAGS(dw_hdmi_set_high_tmds_clock_ratio, 0x01);
KSYMTAB_FUNC(dw_hdmi_phy_gen2_pddq, "");
SYMBOL_FLAGS(dw_hdmi_phy_gen2_pddq, 0x01);
KSYMTAB_FUNC(dw_hdmi_phy_gen2_txpwron, "");
SYMBOL_FLAGS(dw_hdmi_phy_gen2_txpwron, 0x01);
KSYMTAB_FUNC(dw_hdmi_phy_gen1_reset, "");
SYMBOL_FLAGS(dw_hdmi_phy_gen1_reset, 0x01);
KSYMTAB_FUNC(dw_hdmi_phy_gen2_reset, "");
SYMBOL_FLAGS(dw_hdmi_phy_gen2_reset, 0x01);
KSYMTAB_FUNC(dw_hdmi_phy_i2c_set_addr, "");
SYMBOL_FLAGS(dw_hdmi_phy_i2c_set_addr, 0x01);
KSYMTAB_FUNC(dw_hdmi_phy_read_hpd, "");
SYMBOL_FLAGS(dw_hdmi_phy_read_hpd, 0x01);
KSYMTAB_FUNC(dw_hdmi_phy_update_hpd, "");
SYMBOL_FLAGS(dw_hdmi_phy_update_hpd, 0x01);
KSYMTAB_FUNC(dw_hdmi_phy_setup_hpd, "");
SYMBOL_FLAGS(dw_hdmi_phy_setup_hpd, 0x01);
KSYMTAB_FUNC(dw_hdmi_setup_rx_sense, "");
SYMBOL_FLAGS(dw_hdmi_setup_rx_sense, 0x01);
KSYMTAB_FUNC(dw_hdmi_bus_fmt_is_420, "");
SYMBOL_FLAGS(dw_hdmi_bus_fmt_is_420, 0x01);
KSYMTAB_FUNC(dw_hdmi_probe, "");
SYMBOL_FLAGS(dw_hdmi_probe, 0x01);
KSYMTAB_FUNC(dw_hdmi_remove, "");
SYMBOL_FLAGS(dw_hdmi_remove, 0x01);
KSYMTAB_FUNC(dw_hdmi_bind, "");
SYMBOL_FLAGS(dw_hdmi_bind, 0x01);
KSYMTAB_FUNC(dw_hdmi_unbind, "");
SYMBOL_FLAGS(dw_hdmi_unbind, 0x01);
KSYMTAB_FUNC(dw_hdmi_resume, "");
SYMBOL_FLAGS(dw_hdmi_resume, 0x01);

MODULE_INFO(depends, "cec,drm_kms_helper,drm_display_helper");


#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(phylink_set_port_modes, "");
SYMBOL_FLAGS(phylink_set_port_modes, 0x01);
KSYMTAB_FUNC(phylink_limit_mac_speed, "");
SYMBOL_FLAGS(phylink_limit_mac_speed, 0x01);
KSYMTAB_FUNC(phylink_pcs_pre_init, "");
SYMBOL_FLAGS(phylink_pcs_pre_init, 0x01);
KSYMTAB_FUNC(phylink_set_fixed_link, "");
SYMBOL_FLAGS(phylink_set_fixed_link, 0x01);
KSYMTAB_FUNC(phylink_create, "");
SYMBOL_FLAGS(phylink_create, 0x01);
KSYMTAB_FUNC(phylink_destroy, "");
SYMBOL_FLAGS(phylink_destroy, 0x01);
KSYMTAB_FUNC(phylink_expects_phy, "");
SYMBOL_FLAGS(phylink_expects_phy, 0x01);
KSYMTAB_FUNC(phylink_connect_phy, "");
SYMBOL_FLAGS(phylink_connect_phy, 0x01);
KSYMTAB_FUNC(phylink_of_phy_connect, "");
SYMBOL_FLAGS(phylink_of_phy_connect, 0x01);
KSYMTAB_FUNC(phylink_fwnode_phy_connect, "");
SYMBOL_FLAGS(phylink_fwnode_phy_connect, 0x01);
KSYMTAB_FUNC(phylink_disconnect_phy, "");
SYMBOL_FLAGS(phylink_disconnect_phy, 0x01);
KSYMTAB_FUNC(phylink_mac_change, "");
SYMBOL_FLAGS(phylink_mac_change, 0x01);
KSYMTAB_FUNC(phylink_pcs_change, "");
SYMBOL_FLAGS(phylink_pcs_change, 0x01);
KSYMTAB_FUNC(phylink_start, "");
SYMBOL_FLAGS(phylink_start, 0x01);
KSYMTAB_FUNC(phylink_stop, "");
SYMBOL_FLAGS(phylink_stop, 0x01);
KSYMTAB_FUNC(phylink_rx_clk_stop_block, "");
SYMBOL_FLAGS(phylink_rx_clk_stop_block, 0x01);
KSYMTAB_FUNC(phylink_rx_clk_stop_unblock, "");
SYMBOL_FLAGS(phylink_rx_clk_stop_unblock, 0x01);
KSYMTAB_FUNC(phylink_suspend, "");
SYMBOL_FLAGS(phylink_suspend, 0x01);
KSYMTAB_FUNC(phylink_prepare_resume, "");
SYMBOL_FLAGS(phylink_prepare_resume, 0x01);
KSYMTAB_FUNC(phylink_resume, "");
SYMBOL_FLAGS(phylink_resume, 0x01);
KSYMTAB_FUNC(phylink_ethtool_get_wol, "");
SYMBOL_FLAGS(phylink_ethtool_get_wol, 0x01);
KSYMTAB_FUNC(phylink_ethtool_set_wol, "");
SYMBOL_FLAGS(phylink_ethtool_set_wol, 0x01);
KSYMTAB_FUNC(phylink_ethtool_ksettings_get, "");
SYMBOL_FLAGS(phylink_ethtool_ksettings_get, 0x01);
KSYMTAB_FUNC(phylink_ethtool_ksettings_set, "");
SYMBOL_FLAGS(phylink_ethtool_ksettings_set, 0x01);
KSYMTAB_FUNC(phylink_ethtool_nway_reset, "");
SYMBOL_FLAGS(phylink_ethtool_nway_reset, 0x01);
KSYMTAB_FUNC(phylink_ethtool_get_pauseparam, "");
SYMBOL_FLAGS(phylink_ethtool_get_pauseparam, 0x01);
KSYMTAB_FUNC(phylink_ethtool_set_pauseparam, "");
SYMBOL_FLAGS(phylink_ethtool_set_pauseparam, 0x01);
KSYMTAB_FUNC(phylink_get_eee_err, "");
SYMBOL_FLAGS(phylink_get_eee_err, 0x01);
KSYMTAB_FUNC(phylink_ethtool_get_eee, "");
SYMBOL_FLAGS(phylink_ethtool_get_eee, 0x01);
KSYMTAB_FUNC(phylink_ethtool_set_eee, "");
SYMBOL_FLAGS(phylink_ethtool_set_eee, 0x01);
KSYMTAB_FUNC(phylink_mii_ioctl, "");
SYMBOL_FLAGS(phylink_mii_ioctl, 0x01);
KSYMTAB_FUNC(phylink_speed_down, "");
SYMBOL_FLAGS(phylink_speed_down, 0x01);
KSYMTAB_FUNC(phylink_speed_up, "");
SYMBOL_FLAGS(phylink_speed_up, 0x01);
KSYMTAB_FUNC(phylink_resolve_c73, "");
SYMBOL_FLAGS(phylink_resolve_c73, 0x01);
KSYMTAB_FUNC(phylink_decode_usxgmii_word, "");
SYMBOL_FLAGS(phylink_decode_usxgmii_word, 0x01);
KSYMTAB_FUNC(phylink_mii_c22_pcs_decode_state, "");
SYMBOL_FLAGS(phylink_mii_c22_pcs_decode_state, 0x01);
KSYMTAB_FUNC(phylink_mii_c22_pcs_get_state, "");
SYMBOL_FLAGS(phylink_mii_c22_pcs_get_state, 0x01);
KSYMTAB_FUNC(phylink_mii_c22_pcs_encode_advertisement, "");
SYMBOL_FLAGS(phylink_mii_c22_pcs_encode_advertisement, 0x01);
KSYMTAB_FUNC(phylink_mii_c22_pcs_config, "");
SYMBOL_FLAGS(phylink_mii_c22_pcs_config, 0x01);
KSYMTAB_FUNC(phylink_mii_c22_pcs_an_restart, "");
SYMBOL_FLAGS(phylink_mii_c22_pcs_an_restart, 0x01);
KSYMTAB_FUNC(phylink_mii_c45_pcs_get_state, "");
SYMBOL_FLAGS(phylink_mii_c45_pcs_get_state, 0x01);
KSYMTAB_FUNC(phylink_replay_link_begin, "");
SYMBOL_FLAGS(phylink_replay_link_begin, 0x01);
KSYMTAB_FUNC(phylink_replay_link_end, "");
SYMBOL_FLAGS(phylink_replay_link_end, 0x01);

MODULE_INFO(depends, "");


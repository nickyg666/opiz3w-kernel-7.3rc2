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

KSYMTAB_FUNC(enetc_port_mac_rd, "");
SYMBOL_FLAGS(enetc_port_mac_rd, 0x01);
KSYMTAB_FUNC(enetc_port_mac_wr, "");
SYMBOL_FLAGS(enetc_port_mac_wr, 0x01);
KSYMTAB_FUNC(enetc_add_mac_addr_ht_filter, "");
SYMBOL_FLAGS(enetc_add_mac_addr_ht_filter, 0x01);
KSYMTAB_FUNC(enetc_reset_mac_addr_filter, "");
SYMBOL_FLAGS(enetc_reset_mac_addr_filter, 0x01);
KSYMTAB_FUNC(enetc_set_congestion_mode, "");
SYMBOL_FLAGS(enetc_set_congestion_mode, 0x01);
KSYMTAB_FUNC(enetc_xmit, "");
SYMBOL_FLAGS(enetc_xmit, 0x01);
KSYMTAB_FUNC(enetc_xdp_xmit, "");
SYMBOL_FLAGS(enetc_xdp_xmit, 0x01);
KSYMTAB_FUNC(enetc_get_si_caps, "");
SYMBOL_FLAGS(enetc_get_si_caps, 0x01);
KSYMTAB_FUNC(enetc_configure_si, "");
SYMBOL_FLAGS(enetc_configure_si, 0x01);
KSYMTAB_FUNC(enetc_init_si_rings_params, "");
SYMBOL_FLAGS(enetc_init_si_rings_params, 0x01);
KSYMTAB_FUNC(enetc_alloc_si_resources, "");
SYMBOL_FLAGS(enetc_alloc_si_resources, 0x01);
KSYMTAB_FUNC(enetc_free_si_resources, "");
SYMBOL_FLAGS(enetc_free_si_resources, 0x01);
KSYMTAB_FUNC(enetc_start, "");
SYMBOL_FLAGS(enetc_start, 0x01);
KSYMTAB_FUNC(enetc_open, "");
SYMBOL_FLAGS(enetc_open, 0x01);
KSYMTAB_FUNC(enetc_stop, "");
SYMBOL_FLAGS(enetc_stop, 0x01);
KSYMTAB_FUNC(enetc_close, "");
SYMBOL_FLAGS(enetc_close, 0x01);
KSYMTAB_FUNC(enetc_reset_tc_mqprio, "");
SYMBOL_FLAGS(enetc_reset_tc_mqprio, 0x01);
KSYMTAB_FUNC(enetc_setup_tc_mqprio, "");
SYMBOL_FLAGS(enetc_setup_tc_mqprio, 0x01);
KSYMTAB_FUNC(enetc_setup_bpf, "");
SYMBOL_FLAGS(enetc_setup_bpf, 0x01);
KSYMTAB_FUNC(enetc_get_stats, "");
SYMBOL_FLAGS(enetc_get_stats, 0x01);
KSYMTAB_FUNC(enetc_set_features, "");
SYMBOL_FLAGS(enetc_set_features, 0x01);
KSYMTAB_FUNC(enetc_hwtstamp_set, "");
SYMBOL_FLAGS(enetc_hwtstamp_set, 0x01);
KSYMTAB_FUNC(enetc_hwtstamp_get, "");
SYMBOL_FLAGS(enetc_hwtstamp_get, 0x01);
KSYMTAB_FUNC(enetc_ioctl, "");
SYMBOL_FLAGS(enetc_ioctl, 0x01);
KSYMTAB_FUNC(enetc_alloc_msix, "");
SYMBOL_FLAGS(enetc_alloc_msix, 0x01);
KSYMTAB_FUNC(enetc_free_msix, "");
SYMBOL_FLAGS(enetc_free_msix, 0x01);
KSYMTAB_FUNC(enetc_pci_probe, "");
SYMBOL_FLAGS(enetc_pci_probe, 0x01);
KSYMTAB_FUNC(enetc_pci_remove, "");
SYMBOL_FLAGS(enetc_pci_remove, 0x01);
KSYMTAB_FUNC(enetc_get_driver_data, "");
SYMBOL_FLAGS(enetc_get_driver_data, 0x01);
KSYMTAB_FUNC(enetc_setup_cbdr, "");
SYMBOL_FLAGS(enetc_setup_cbdr, 0x01);
KSYMTAB_FUNC(enetc_teardown_cbdr, "");
SYMBOL_FLAGS(enetc_teardown_cbdr, 0x01);
KSYMTAB_FUNC(enetc4_setup_cbdr, "");
SYMBOL_FLAGS(enetc4_setup_cbdr, 0x01);
KSYMTAB_FUNC(enetc4_teardown_cbdr, "");
SYMBOL_FLAGS(enetc4_teardown_cbdr, 0x01);
KSYMTAB_FUNC(enetc_send_cmd, "");
SYMBOL_FLAGS(enetc_send_cmd, 0x01);
KSYMTAB_FUNC(enetc_clear_mac_flt_entry, "");
SYMBOL_FLAGS(enetc_clear_mac_flt_entry, 0x01);
KSYMTAB_FUNC(enetc_set_mac_flt_entry, "");
SYMBOL_FLAGS(enetc_set_mac_flt_entry, 0x01);
KSYMTAB_FUNC(enetc_set_fs_entry, "");
SYMBOL_FLAGS(enetc_set_fs_entry, 0x01);
KSYMTAB_FUNC(enetc_get_rss_table, "");
SYMBOL_FLAGS(enetc_get_rss_table, 0x01);
KSYMTAB_FUNC(enetc_set_rss_table, "");
SYMBOL_FLAGS(enetc_set_rss_table, 0x01);
KSYMTAB_FUNC(enetc4_get_rss_table, "");
SYMBOL_FLAGS(enetc4_get_rss_table, 0x01);
KSYMTAB_FUNC(enetc4_set_rss_table, "");
SYMBOL_FLAGS(enetc4_set_rss_table, 0x01);
KSYMTAB_FUNC(enetc_set_rss_key, "");
SYMBOL_FLAGS(enetc_set_rss_key, 0x01);
KSYMTAB_FUNC(enetc_mm_link_state_update, "");
SYMBOL_FLAGS(enetc_mm_link_state_update, 0x01);
KSYMTAB_FUNC(enetc_set_ethtool_ops, "");
SYMBOL_FLAGS(enetc_set_ethtool_ops, 0x01);

MODULE_INFO(depends, "fsl-enetc-mdio,nxp-netc-lib,phylink");


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

KSYMTAB_FUNC(enetc_set_si_hw_addr, "");
SYMBOL_FLAGS(enetc_set_si_hw_addr, 0x01);
KSYMTAB_FUNC(enetc_pf_set_mac_addr, "");
SYMBOL_FLAGS(enetc_pf_set_mac_addr, 0x01);
KSYMTAB_FUNC(enetc_setup_mac_addresses, "");
SYMBOL_FLAGS(enetc_setup_mac_addresses, 0x01);
KSYMTAB_FUNC(enetc_set_si_uc_promisc, "");
SYMBOL_FLAGS(enetc_set_si_uc_promisc, 0x01);
KSYMTAB_FUNC(enetc_set_si_mc_promisc, "");
SYMBOL_FLAGS(enetc_set_si_mc_promisc, 0x01);
KSYMTAB_FUNC(enetc_set_si_uc_hash_filter, "");
SYMBOL_FLAGS(enetc_set_si_uc_hash_filter, 0x01);
KSYMTAB_FUNC(enetc_set_si_mc_hash_filter, "");
SYMBOL_FLAGS(enetc_set_si_mc_hash_filter, 0x01);
KSYMTAB_FUNC(enetc_set_si_vlan_promisc, "");
SYMBOL_FLAGS(enetc_set_si_vlan_promisc, 0x01);
KSYMTAB_FUNC(enetc_pf_netdev_setup, "");
SYMBOL_FLAGS(enetc_pf_netdev_setup, 0x01);
KSYMTAB_FUNC(enetc_mdiobus_create, "");
SYMBOL_FLAGS(enetc_mdiobus_create, 0x01);
KSYMTAB_FUNC(enetc_mdiobus_destroy, "");
SYMBOL_FLAGS(enetc_mdiobus_destroy, 0x01);
KSYMTAB_FUNC(enetc_phylink_create, "");
SYMBOL_FLAGS(enetc_phylink_create, 0x01);
KSYMTAB_FUNC(enetc_phylink_destroy, "");
SYMBOL_FLAGS(enetc_phylink_destroy, 0x01);
KSYMTAB_FUNC(enetc_set_default_rss_key, "");
SYMBOL_FLAGS(enetc_set_default_rss_key, 0x01);
KSYMTAB_FUNC(enetc_vlan_rx_add_vid, "");
SYMBOL_FLAGS(enetc_vlan_rx_add_vid, 0x01);
KSYMTAB_FUNC(enetc_vlan_rx_del_vid, "");
SYMBOL_FLAGS(enetc_vlan_rx_del_vid, 0x01);
KSYMTAB_FUNC(enetc_init_sriov_resources, "");
SYMBOL_FLAGS(enetc_init_sriov_resources, 0x01);
KSYMTAB_FUNC(enetc_sriov_configure, "");
SYMBOL_FLAGS(enetc_sriov_configure, 0x01);

MODULE_INFO(depends, "fsl-enetc-mdio,fsl-enetc-core,phylink");


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

KSYMTAB_FUNC(cdns_pcie_hpa_link_up, "");
SYMBOL_FLAGS(cdns_pcie_hpa_link_up, 0x01);
KSYMTAB_FUNC(cdns_pcie_hpa_detect_quiet_min_delay_set, "");
SYMBOL_FLAGS(cdns_pcie_hpa_detect_quiet_min_delay_set, 0x01);
KSYMTAB_FUNC(cdns_pcie_hpa_set_outbound_region, "");
SYMBOL_FLAGS(cdns_pcie_hpa_set_outbound_region, 0x01);
KSYMTAB_FUNC(cdns_pcie_hpa_set_outbound_region_for_normal_msg, "");
SYMBOL_FLAGS(cdns_pcie_hpa_set_outbound_region_for_normal_msg, 0x01);
KSYMTAB_FUNC(cdns_pcie_find_capability, "");
SYMBOL_FLAGS(cdns_pcie_find_capability, 0x01);
KSYMTAB_FUNC(cdns_pcie_find_ext_capability, "");
SYMBOL_FLAGS(cdns_pcie_find_ext_capability, 0x01);
KSYMTAB_FUNC(cdns_pcie_linkup, "");
SYMBOL_FLAGS(cdns_pcie_linkup, 0x01);
KSYMTAB_FUNC(cdns_pcie_detect_quiet_min_delay_set, "");
SYMBOL_FLAGS(cdns_pcie_detect_quiet_min_delay_set, 0x01);
KSYMTAB_FUNC(cdns_pcie_set_outbound_region, "");
SYMBOL_FLAGS(cdns_pcie_set_outbound_region, 0x01);
KSYMTAB_FUNC(cdns_pcie_set_outbound_region_for_normal_msg, "");
SYMBOL_FLAGS(cdns_pcie_set_outbound_region_for_normal_msg, 0x01);
KSYMTAB_FUNC(cdns_pcie_reset_outbound_region, "");
SYMBOL_FLAGS(cdns_pcie_reset_outbound_region, 0x01);
KSYMTAB_FUNC(cdns_pcie_disable_phy, "");
SYMBOL_FLAGS(cdns_pcie_disable_phy, 0x01);
KSYMTAB_FUNC(cdns_pcie_enable_phy, "");
SYMBOL_FLAGS(cdns_pcie_enable_phy, 0x01);
KSYMTAB_FUNC(cdns_pcie_init_phy, "");
SYMBOL_FLAGS(cdns_pcie_init_phy, 0x01);
KSYMTAB_DATA(cdns_pcie_pm_ops, "");
SYMBOL_FLAGS(cdns_pcie_pm_ops, 0x01);

MODULE_INFO(depends, "");


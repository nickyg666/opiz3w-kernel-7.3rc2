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

KSYMTAB_DATA(bar_max_size, "");
SYMBOL_FLAGS(bar_max_size, 0x01);
KSYMTAB_FUNC(cdns_pcie_host_training_complete, "");
SYMBOL_FLAGS(cdns_pcie_host_training_complete, 0x01);
KSYMTAB_FUNC(cdns_pcie_host_wait_for_link, "");
SYMBOL_FLAGS(cdns_pcie_host_wait_for_link, 0x01);
KSYMTAB_FUNC(cdns_pcie_retrain, "");
SYMBOL_FLAGS(cdns_pcie_retrain, 0x01);
KSYMTAB_FUNC(cdns_pcie_host_start_link, "");
SYMBOL_FLAGS(cdns_pcie_host_start_link, 0x01);
KSYMTAB_FUNC(cdns_pcie_host_find_min_bar, "");
SYMBOL_FLAGS(cdns_pcie_host_find_min_bar, 0x01);
KSYMTAB_FUNC(cdns_pcie_host_find_max_bar, "");
SYMBOL_FLAGS(cdns_pcie_host_find_max_bar, 0x01);
KSYMTAB_FUNC(cdns_pcie_host_dma_ranges_cmp, "");
SYMBOL_FLAGS(cdns_pcie_host_dma_ranges_cmp, 0x01);
KSYMTAB_FUNC(cdns_pci_map_bus, "");
SYMBOL_FLAGS(cdns_pci_map_bus, 0x01);
KSYMTAB_FUNC(cdns_pcie_host_init, "");
SYMBOL_FLAGS(cdns_pcie_host_init, 0x01);
KSYMTAB_FUNC(cdns_pcie_host_link_setup, "");
SYMBOL_FLAGS(cdns_pcie_host_link_setup, 0x01);
KSYMTAB_FUNC(cdns_pcie_host_disable, "");
SYMBOL_FLAGS(cdns_pcie_host_disable, 0x01);
KSYMTAB_FUNC(cdns_pcie_host_setup, "");
SYMBOL_FLAGS(cdns_pcie_host_setup, 0x01);
KSYMTAB_FUNC(cdns_pcie_hpa_host_link_setup, "");
SYMBOL_FLAGS(cdns_pcie_hpa_host_link_setup, 0x01);
KSYMTAB_FUNC(cdns_pcie_hpa_host_disable, "");
SYMBOL_FLAGS(cdns_pcie_hpa_host_disable, 0x01);
KSYMTAB_FUNC(cdns_pcie_hpa_host_setup, "");
SYMBOL_FLAGS(cdns_pcie_hpa_host_setup, 0x01);

MODULE_INFO(depends, "pcie-cadence-mod");


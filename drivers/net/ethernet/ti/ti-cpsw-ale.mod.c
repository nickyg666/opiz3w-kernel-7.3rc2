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

KSYMTAB_FUNC(cpsw_ale_flush_multicast, "");
SYMBOL_FLAGS(cpsw_ale_flush_multicast, 0x01);
KSYMTAB_FUNC(cpsw_ale_add_ucast, "");
SYMBOL_FLAGS(cpsw_ale_add_ucast, 0x01);
KSYMTAB_FUNC(cpsw_ale_del_ucast, "");
SYMBOL_FLAGS(cpsw_ale_del_ucast, 0x01);
KSYMTAB_FUNC(cpsw_ale_add_mcast, "");
SYMBOL_FLAGS(cpsw_ale_add_mcast, 0x01);
KSYMTAB_FUNC(cpsw_ale_del_mcast, "");
SYMBOL_FLAGS(cpsw_ale_del_mcast, 0x01);
KSYMTAB_FUNC(cpsw_ale_add_vlan, "");
SYMBOL_FLAGS(cpsw_ale_add_vlan, 0x01);
KSYMTAB_FUNC(cpsw_ale_vlan_del_modify, "");
SYMBOL_FLAGS(cpsw_ale_vlan_del_modify, 0x01);
KSYMTAB_FUNC(cpsw_ale_del_vlan, "");
SYMBOL_FLAGS(cpsw_ale_del_vlan, 0x01);
KSYMTAB_FUNC(cpsw_ale_vlan_add_modify, "");
SYMBOL_FLAGS(cpsw_ale_vlan_add_modify, 0x01);
KSYMTAB_FUNC(cpsw_ale_set_unreg_mcast, "");
SYMBOL_FLAGS(cpsw_ale_set_unreg_mcast, 0x01);
KSYMTAB_FUNC(cpsw_ale_set_allmulti, "");
SYMBOL_FLAGS(cpsw_ale_set_allmulti, 0x01);
KSYMTAB_FUNC(cpsw_ale_control_set, "");
SYMBOL_FLAGS(cpsw_ale_control_set, 0x01);
KSYMTAB_FUNC(cpsw_ale_control_get, "");
SYMBOL_FLAGS(cpsw_ale_control_get, 0x01);
KSYMTAB_FUNC(cpsw_ale_rx_ratelimit_mc, "");
SYMBOL_FLAGS(cpsw_ale_rx_ratelimit_mc, 0x01);
KSYMTAB_FUNC(cpsw_ale_rx_ratelimit_bc, "");
SYMBOL_FLAGS(cpsw_ale_rx_ratelimit_bc, 0x01);
KSYMTAB_FUNC(cpsw_ale_start, "");
SYMBOL_FLAGS(cpsw_ale_start, 0x01);
KSYMTAB_FUNC(cpsw_ale_stop, "");
SYMBOL_FLAGS(cpsw_ale_stop, 0x01);
KSYMTAB_FUNC(cpsw_ale_create, "");
SYMBOL_FLAGS(cpsw_ale_create, 0x01);
KSYMTAB_FUNC(cpsw_ale_dump, "");
SYMBOL_FLAGS(cpsw_ale_dump, 0x01);
KSYMTAB_FUNC(cpsw_ale_restore, "");
SYMBOL_FLAGS(cpsw_ale_restore, 0x01);
KSYMTAB_FUNC(cpsw_ale_get_num_entries, "");
SYMBOL_FLAGS(cpsw_ale_get_num_entries, 0x01);
KSYMTAB_FUNC(cpsw_ale_classifier_setup_default, "");
SYMBOL_FLAGS(cpsw_ale_classifier_setup_default, 0x01);

MODULE_INFO(depends, "");


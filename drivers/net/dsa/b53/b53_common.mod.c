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

KSYMTAB_FUNC(b53_imp_vlan_setup, "");
SYMBOL_FLAGS(b53_imp_vlan_setup, 0x00);
KSYMTAB_FUNC(b53_setup_port, "");
SYMBOL_FLAGS(b53_setup_port, 0x00);
KSYMTAB_FUNC(b53_enable_port, "");
SYMBOL_FLAGS(b53_enable_port, 0x00);
KSYMTAB_FUNC(b53_disable_port, "");
SYMBOL_FLAGS(b53_disable_port, 0x00);
KSYMTAB_FUNC(b53_brcm_hdr_setup, "");
SYMBOL_FLAGS(b53_brcm_hdr_setup, 0x00);
KSYMTAB_FUNC(b53_configure_vlan, "");
SYMBOL_FLAGS(b53_configure_vlan, 0x00);
KSYMTAB_FUNC(b53_get_strings, "");
SYMBOL_FLAGS(b53_get_strings, 0x00);
KSYMTAB_FUNC(b53_get_ethtool_stats, "");
SYMBOL_FLAGS(b53_get_ethtool_stats, 0x00);
KSYMTAB_FUNC(b53_get_ethtool_phy_stats, "");
SYMBOL_FLAGS(b53_get_ethtool_phy_stats, 0x00);
KSYMTAB_FUNC(b53_get_sset_count, "");
SYMBOL_FLAGS(b53_get_sset_count, 0x00);
KSYMTAB_FUNC(b53_setup_devlink_resources, "");
SYMBOL_FLAGS(b53_setup_devlink_resources, 0x00);
KSYMTAB_FUNC(b53_port_event, "");
SYMBOL_FLAGS(b53_port_event, 0x00);
KSYMTAB_FUNC(b53_vlan_filtering, "");
SYMBOL_FLAGS(b53_vlan_filtering, 0x00);
KSYMTAB_FUNC(b53_vlan_add, "");
SYMBOL_FLAGS(b53_vlan_add, 0x00);
KSYMTAB_FUNC(b53_vlan_del, "");
SYMBOL_FLAGS(b53_vlan_del, 0x00);
KSYMTAB_FUNC(b53_fdb_add, "");
SYMBOL_FLAGS(b53_fdb_add, 0x00);
KSYMTAB_FUNC(b53_fdb_del, "");
SYMBOL_FLAGS(b53_fdb_del, 0x00);
KSYMTAB_FUNC(b53_fdb_dump, "");
SYMBOL_FLAGS(b53_fdb_dump, 0x00);
KSYMTAB_FUNC(b53_mdb_add, "");
SYMBOL_FLAGS(b53_mdb_add, 0x00);
KSYMTAB_FUNC(b53_mdb_del, "");
SYMBOL_FLAGS(b53_mdb_del, 0x00);
KSYMTAB_FUNC(b53_br_join, "");
SYMBOL_FLAGS(b53_br_join, 0x00);
KSYMTAB_FUNC(b53_br_leave, "");
SYMBOL_FLAGS(b53_br_leave, 0x00);
KSYMTAB_FUNC(b53_br_set_stp_state, "");
SYMBOL_FLAGS(b53_br_set_stp_state, 0x00);
KSYMTAB_FUNC(b53_br_fast_age, "");
SYMBOL_FLAGS(b53_br_fast_age, 0x00);
KSYMTAB_FUNC(b53_br_flags_pre, "");
SYMBOL_FLAGS(b53_br_flags_pre, 0x00);
KSYMTAB_FUNC(b53_br_flags, "");
SYMBOL_FLAGS(b53_br_flags, 0x00);
KSYMTAB_FUNC(b53_get_tag_protocol, "");
SYMBOL_FLAGS(b53_get_tag_protocol, 0x00);
KSYMTAB_FUNC(b53_mirror_add, "");
SYMBOL_FLAGS(b53_mirror_add, 0x00);
KSYMTAB_FUNC(b53_mirror_del, "");
SYMBOL_FLAGS(b53_mirror_del, 0x00);
KSYMTAB_FUNC(b53_eee_init, "");
SYMBOL_FLAGS(b53_eee_init, 0x00);
KSYMTAB_FUNC(b53_support_eee, "");
SYMBOL_FLAGS(b53_support_eee, 0x00);
KSYMTAB_FUNC(b53_set_mac_eee, "");
SYMBOL_FLAGS(b53_set_mac_eee, 0x00);
KSYMTAB_FUNC(b53_set_ageing_time, "");
SYMBOL_FLAGS(b53_set_ageing_time, 0x01);
KSYMTAB_FUNC(b53_switch_alloc, "");
SYMBOL_FLAGS(b53_switch_alloc, 0x00);
KSYMTAB_FUNC(b53_switch_detect, "");
SYMBOL_FLAGS(b53_switch_detect, 0x00);
KSYMTAB_FUNC(b53_switch_register, "");
SYMBOL_FLAGS(b53_switch_register, 0x00);

MODULE_INFO(depends, "dsa_core");


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

KSYMTAB_FUNC(ntmp_lookup_free_eid, "");
SYMBOL_FLAGS(ntmp_lookup_free_eid, 0x01);
KSYMTAB_FUNC(ntmp_clear_eid_bitmap, "");
SYMBOL_FLAGS(ntmp_clear_eid_bitmap, 0x01);
KSYMTAB_FUNC(ntmp_init_cbdr, "");
SYMBOL_FLAGS(ntmp_init_cbdr, 0x01);
KSYMTAB_FUNC(ntmp_free_cbdr, "");
SYMBOL_FLAGS(ntmp_free_cbdr, 0x01);
KSYMTAB_FUNC(ntmp_maft_add_entry, "");
SYMBOL_FLAGS(ntmp_maft_add_entry, 0x01);
KSYMTAB_FUNC(ntmp_maft_query_entry, "");
SYMBOL_FLAGS(ntmp_maft_query_entry, 0x01);
KSYMTAB_FUNC(ntmp_maft_delete_entry, "");
SYMBOL_FLAGS(ntmp_maft_delete_entry, 0x01);
KSYMTAB_FUNC(ntmp_rsst_update_entry, "");
SYMBOL_FLAGS(ntmp_rsst_update_entry, 0x01);
KSYMTAB_FUNC(ntmp_rsst_query_entry, "");
SYMBOL_FLAGS(ntmp_rsst_query_entry, 0x01);
KSYMTAB_FUNC(ntmp_ipft_add_entry, "");
SYMBOL_FLAGS(ntmp_ipft_add_entry, 0x01);
KSYMTAB_FUNC(ntmp_ipft_delete_entry, "");
SYMBOL_FLAGS(ntmp_ipft_delete_entry, 0x01);
KSYMTAB_FUNC(ntmp_fdbt_add_entry, "");
SYMBOL_FLAGS(ntmp_fdbt_add_entry, 0x01);
KSYMTAB_FUNC(ntmp_fdbt_update_entry, "");
SYMBOL_FLAGS(ntmp_fdbt_update_entry, 0x01);
KSYMTAB_FUNC(ntmp_fdbt_delete_entry, "");
SYMBOL_FLAGS(ntmp_fdbt_delete_entry, 0x01);
KSYMTAB_FUNC(ntmp_fdbt_search_port_entry, "");
SYMBOL_FLAGS(ntmp_fdbt_search_port_entry, 0x01);
KSYMTAB_FUNC(ntmp_fdbt_update_activity_element, "");
SYMBOL_FLAGS(ntmp_fdbt_update_activity_element, 0x01);
KSYMTAB_FUNC(ntmp_fdbt_delete_ageing_entries, "");
SYMBOL_FLAGS(ntmp_fdbt_delete_ageing_entries, 0x01);
KSYMTAB_FUNC(ntmp_fdbt_delete_port_dynamic_entries, "");
SYMBOL_FLAGS(ntmp_fdbt_delete_port_dynamic_entries, 0x01);
KSYMTAB_FUNC(ntmp_vft_add_entry, "");
SYMBOL_FLAGS(ntmp_vft_add_entry, 0x01);
KSYMTAB_FUNC(ntmp_vft_update_entry, "");
SYMBOL_FLAGS(ntmp_vft_update_entry, 0x01);
KSYMTAB_FUNC(ntmp_vft_delete_entry, "");
SYMBOL_FLAGS(ntmp_vft_delete_entry, 0x01);
KSYMTAB_FUNC(ntmp_ett_add_entry, "");
SYMBOL_FLAGS(ntmp_ett_add_entry, 0x01);
KSYMTAB_FUNC(ntmp_ett_update_entry, "");
SYMBOL_FLAGS(ntmp_ett_update_entry, 0x01);
KSYMTAB_FUNC(ntmp_ett_delete_entry, "");
SYMBOL_FLAGS(ntmp_ett_delete_entry, 0x01);
KSYMTAB_FUNC(ntmp_ect_update_entry, "");
SYMBOL_FLAGS(ntmp_ect_update_entry, 0x01);
KSYMTAB_FUNC(ntmp_bpt_update_entry, "");
SYMBOL_FLAGS(ntmp_bpt_update_entry, 0x01);

MODULE_INFO(depends, "");


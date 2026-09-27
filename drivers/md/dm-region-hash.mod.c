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

KSYMTAB_FUNC(dm_rh_region_to_sector, "");
SYMBOL_FLAGS(dm_rh_region_to_sector, 0x01);
KSYMTAB_FUNC(dm_rh_bio_to_region, "");
SYMBOL_FLAGS(dm_rh_bio_to_region, 0x01);
KSYMTAB_FUNC(dm_rh_region_context, "");
SYMBOL_FLAGS(dm_rh_region_context, 0x01);
KSYMTAB_FUNC(dm_rh_get_region_key, "");
SYMBOL_FLAGS(dm_rh_get_region_key, 0x01);
KSYMTAB_FUNC(dm_rh_get_region_size, "");
SYMBOL_FLAGS(dm_rh_get_region_size, 0x01);
KSYMTAB_FUNC(dm_region_hash_create, "");
SYMBOL_FLAGS(dm_region_hash_create, 0x01);
KSYMTAB_FUNC(dm_region_hash_destroy, "");
SYMBOL_FLAGS(dm_region_hash_destroy, 0x01);
KSYMTAB_FUNC(dm_rh_dirty_log, "");
SYMBOL_FLAGS(dm_rh_dirty_log, 0x01);
KSYMTAB_FUNC(dm_rh_get_state, "");
SYMBOL_FLAGS(dm_rh_get_state, 0x01);
KSYMTAB_FUNC(dm_rh_mark_nosync, "");
SYMBOL_FLAGS(dm_rh_mark_nosync, 0x01);
KSYMTAB_FUNC(dm_rh_update_states, "");
SYMBOL_FLAGS(dm_rh_update_states, 0x01);
KSYMTAB_FUNC(dm_rh_inc_pending, "");
SYMBOL_FLAGS(dm_rh_inc_pending, 0x01);
KSYMTAB_FUNC(dm_rh_dec, "");
SYMBOL_FLAGS(dm_rh_dec, 0x01);
KSYMTAB_FUNC(dm_rh_recovery_prepare, "");
SYMBOL_FLAGS(dm_rh_recovery_prepare, 0x01);
KSYMTAB_FUNC(dm_rh_recovery_start, "");
SYMBOL_FLAGS(dm_rh_recovery_start, 0x01);
KSYMTAB_FUNC(dm_rh_recovery_end, "");
SYMBOL_FLAGS(dm_rh_recovery_end, 0x01);
KSYMTAB_FUNC(dm_rh_recovery_in_flight, "");
SYMBOL_FLAGS(dm_rh_recovery_in_flight, 0x01);
KSYMTAB_FUNC(dm_rh_flush, "");
SYMBOL_FLAGS(dm_rh_flush, 0x01);
KSYMTAB_FUNC(dm_rh_delay, "");
SYMBOL_FLAGS(dm_rh_delay, 0x01);
KSYMTAB_FUNC(dm_rh_stop_recovery, "");
SYMBOL_FLAGS(dm_rh_stop_recovery, 0x01);
KSYMTAB_FUNC(dm_rh_start_recovery, "");
SYMBOL_FLAGS(dm_rh_start_recovery, 0x01);

MODULE_INFO(depends, "dm-log");


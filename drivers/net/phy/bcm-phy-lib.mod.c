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

KSYMTAB_FUNC(__bcm_phy_write_exp, "");
SYMBOL_FLAGS(__bcm_phy_write_exp, 0x01);
KSYMTAB_FUNC(bcm_phy_write_exp, "");
SYMBOL_FLAGS(bcm_phy_write_exp, 0x01);
KSYMTAB_FUNC(__bcm_phy_read_exp, "");
SYMBOL_FLAGS(__bcm_phy_read_exp, 0x01);
KSYMTAB_FUNC(bcm_phy_read_exp, "");
SYMBOL_FLAGS(bcm_phy_read_exp, 0x01);
KSYMTAB_FUNC(__bcm_phy_modify_exp, "");
SYMBOL_FLAGS(__bcm_phy_modify_exp, 0x01);
KSYMTAB_FUNC(bcm_phy_modify_exp, "");
SYMBOL_FLAGS(bcm_phy_modify_exp, 0x01);
KSYMTAB_FUNC(bcm54xx_auxctl_read, "");
SYMBOL_FLAGS(bcm54xx_auxctl_read, 0x01);
KSYMTAB_FUNC(bcm54xx_auxctl_write, "");
SYMBOL_FLAGS(bcm54xx_auxctl_write, 0x00);
KSYMTAB_FUNC(bcm_phy_write_misc, "");
SYMBOL_FLAGS(bcm_phy_write_misc, 0x01);
KSYMTAB_FUNC(bcm_phy_read_misc, "");
SYMBOL_FLAGS(bcm_phy_read_misc, 0x01);
KSYMTAB_FUNC(bcm_phy_ack_intr, "");
SYMBOL_FLAGS(bcm_phy_ack_intr, 0x01);
KSYMTAB_FUNC(bcm_phy_config_intr, "");
SYMBOL_FLAGS(bcm_phy_config_intr, 0x01);
KSYMTAB_FUNC(bcm_phy_handle_interrupt, "");
SYMBOL_FLAGS(bcm_phy_handle_interrupt, 0x01);
KSYMTAB_FUNC(bcm_phy_read_shadow, "");
SYMBOL_FLAGS(bcm_phy_read_shadow, 0x01);
KSYMTAB_FUNC(bcm_phy_write_shadow, "");
SYMBOL_FLAGS(bcm_phy_write_shadow, 0x01);
KSYMTAB_FUNC(__bcm_phy_read_rdb, "");
SYMBOL_FLAGS(__bcm_phy_read_rdb, 0x01);
KSYMTAB_FUNC(bcm_phy_read_rdb, "");
SYMBOL_FLAGS(bcm_phy_read_rdb, 0x01);
KSYMTAB_FUNC(__bcm_phy_write_rdb, "");
SYMBOL_FLAGS(__bcm_phy_write_rdb, 0x01);
KSYMTAB_FUNC(bcm_phy_write_rdb, "");
SYMBOL_FLAGS(bcm_phy_write_rdb, 0x01);
KSYMTAB_FUNC(__bcm_phy_modify_rdb, "");
SYMBOL_FLAGS(__bcm_phy_modify_rdb, 0x01);
KSYMTAB_FUNC(bcm_phy_modify_rdb, "");
SYMBOL_FLAGS(bcm_phy_modify_rdb, 0x01);
KSYMTAB_FUNC(bcm_phy_enable_apd, "");
SYMBOL_FLAGS(bcm_phy_enable_apd, 0x01);
KSYMTAB_FUNC(bcm_phy_set_eee, "");
SYMBOL_FLAGS(bcm_phy_set_eee, 0x01);
KSYMTAB_FUNC(bcm_phy_downshift_get, "");
SYMBOL_FLAGS(bcm_phy_downshift_get, 0x01);
KSYMTAB_FUNC(bcm_phy_downshift_set, "");
SYMBOL_FLAGS(bcm_phy_downshift_set, 0x01);
KSYMTAB_FUNC(bcm_phy_get_sset_count, "");
SYMBOL_FLAGS(bcm_phy_get_sset_count, 0x01);
KSYMTAB_FUNC(bcm_phy_get_strings, "");
SYMBOL_FLAGS(bcm_phy_get_strings, 0x01);
KSYMTAB_FUNC(bcm_phy_get_stats, "");
SYMBOL_FLAGS(bcm_phy_get_stats, 0x01);
KSYMTAB_FUNC(bcm_phy_update_stats_shadow, "");
SYMBOL_FLAGS(bcm_phy_update_stats_shadow, 0x01);
KSYMTAB_FUNC(bcm_phy_r_rc_cal_reset, "");
SYMBOL_FLAGS(bcm_phy_r_rc_cal_reset, 0x01);
KSYMTAB_FUNC(bcm_phy_28nm_a0b0_afe_config_init, "");
SYMBOL_FLAGS(bcm_phy_28nm_a0b0_afe_config_init, 0x01);
KSYMTAB_FUNC(bcm_phy_enable_jumbo, "");
SYMBOL_FLAGS(bcm_phy_enable_jumbo, 0x01);
KSYMTAB_FUNC(bcm_phy_cable_test_start, "");
SYMBOL_FLAGS(bcm_phy_cable_test_start, 0x01);
KSYMTAB_FUNC(bcm_phy_cable_test_get_status, "");
SYMBOL_FLAGS(bcm_phy_cable_test_get_status, 0x01);
KSYMTAB_FUNC(bcm_phy_cable_test_start_rdb, "");
SYMBOL_FLAGS(bcm_phy_cable_test_start_rdb, 0x01);
KSYMTAB_FUNC(bcm_phy_cable_test_get_status_rdb, "");
SYMBOL_FLAGS(bcm_phy_cable_test_get_status_rdb, 0x01);
KSYMTAB_FUNC(bcm_phy_set_wol, "");
SYMBOL_FLAGS(bcm_phy_set_wol, 0x01);
KSYMTAB_FUNC(bcm_phy_get_wol, "");
SYMBOL_FLAGS(bcm_phy_get_wol, 0x01);
KSYMTAB_FUNC(bcm_phy_wol_isr, "");
SYMBOL_FLAGS(bcm_phy_wol_isr, 0x01);
KSYMTAB_FUNC(bcm_phy_led_brightness_set, "");
SYMBOL_FLAGS(bcm_phy_led_brightness_set, 0x01);
KSYMTAB_FUNC(bcm_setup_lre_master_slave, "");
SYMBOL_FLAGS(bcm_setup_lre_master_slave, 0x01);
KSYMTAB_FUNC(bcm_config_lre_aneg, "");
SYMBOL_FLAGS(bcm_config_lre_aneg, 0x01);
KSYMTAB_FUNC(bcm_config_lre_advert, "");
SYMBOL_FLAGS(bcm_config_lre_advert, 0x01);

MODULE_INFO(depends, "");


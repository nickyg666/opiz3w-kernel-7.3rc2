#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(fsg_common_set_sysfs, "");
SYMBOL_FLAGS(fsg_common_set_sysfs, 0x01);
KSYMTAB_FUNC(fsg_common_set_num_buffers, "");
SYMBOL_FLAGS(fsg_common_set_num_buffers, 0x01);
KSYMTAB_FUNC(fsg_common_remove_lun, "");
SYMBOL_FLAGS(fsg_common_remove_lun, 0x01);
KSYMTAB_FUNC(fsg_common_remove_luns, "");
SYMBOL_FLAGS(fsg_common_remove_luns, 0x01);
KSYMTAB_FUNC(fsg_common_free_buffers, "");
SYMBOL_FLAGS(fsg_common_free_buffers, 0x01);
KSYMTAB_FUNC(fsg_common_set_cdev, "");
SYMBOL_FLAGS(fsg_common_set_cdev, 0x01);
KSYMTAB_FUNC(fsg_common_create_lun, "");
SYMBOL_FLAGS(fsg_common_create_lun, 0x01);
KSYMTAB_FUNC(fsg_common_create_luns, "");
SYMBOL_FLAGS(fsg_common_create_luns, 0x01);
KSYMTAB_FUNC(fsg_common_set_inquiry_string, "");
SYMBOL_FLAGS(fsg_common_set_inquiry_string, 0x01);
KSYMTAB_FUNC(fsg_config_from_params, "");
SYMBOL_FLAGS(fsg_config_from_params, 0x01);
KSYMTAB_DATA(fsg_intf_desc, "");
SYMBOL_FLAGS(fsg_intf_desc, 0x01);
KSYMTAB_DATA(fsg_fs_bulk_in_desc, "");
SYMBOL_FLAGS(fsg_fs_bulk_in_desc, 0x01);
KSYMTAB_DATA(fsg_fs_bulk_out_desc, "");
SYMBOL_FLAGS(fsg_fs_bulk_out_desc, 0x01);
KSYMTAB_DATA(fsg_fs_function, "");
SYMBOL_FLAGS(fsg_fs_function, 0x01);
KSYMTAB_DATA(fsg_hs_bulk_in_desc, "");
SYMBOL_FLAGS(fsg_hs_bulk_in_desc, 0x01);
KSYMTAB_DATA(fsg_hs_bulk_out_desc, "");
SYMBOL_FLAGS(fsg_hs_bulk_out_desc, 0x01);
KSYMTAB_DATA(fsg_hs_function, "");
SYMBOL_FLAGS(fsg_hs_function, 0x01);
KSYMTAB_DATA(fsg_ss_bulk_in_desc, "");
SYMBOL_FLAGS(fsg_ss_bulk_in_desc, 0x01);
KSYMTAB_DATA(fsg_ss_bulk_in_comp_desc, "");
SYMBOL_FLAGS(fsg_ss_bulk_in_comp_desc, 0x01);
KSYMTAB_DATA(fsg_ss_bulk_out_desc, "");
SYMBOL_FLAGS(fsg_ss_bulk_out_desc, 0x01);
KSYMTAB_DATA(fsg_ss_bulk_out_comp_desc, "");
SYMBOL_FLAGS(fsg_ss_bulk_out_comp_desc, 0x01);
KSYMTAB_DATA(fsg_ss_function, "");
SYMBOL_FLAGS(fsg_ss_function, 0x01);
KSYMTAB_FUNC(fsg_lun_close, "");
SYMBOL_FLAGS(fsg_lun_close, 0x01);
KSYMTAB_FUNC(fsg_lun_open, "");
SYMBOL_FLAGS(fsg_lun_open, 0x01);
KSYMTAB_FUNC(fsg_lun_fsync_sub, "");
SYMBOL_FLAGS(fsg_lun_fsync_sub, 0x01);
KSYMTAB_FUNC(store_cdrom_address, "");
SYMBOL_FLAGS(store_cdrom_address, 0x01);
KSYMTAB_FUNC(fsg_show_ro, "");
SYMBOL_FLAGS(fsg_show_ro, 0x01);
KSYMTAB_FUNC(fsg_show_nofua, "");
SYMBOL_FLAGS(fsg_show_nofua, 0x01);
KSYMTAB_FUNC(fsg_show_file, "");
SYMBOL_FLAGS(fsg_show_file, 0x01);
KSYMTAB_FUNC(fsg_show_cdrom, "");
SYMBOL_FLAGS(fsg_show_cdrom, 0x01);
KSYMTAB_FUNC(fsg_show_removable, "");
SYMBOL_FLAGS(fsg_show_removable, 0x01);
KSYMTAB_FUNC(fsg_show_inquiry_string, "");
SYMBOL_FLAGS(fsg_show_inquiry_string, 0x01);
KSYMTAB_FUNC(fsg_store_ro, "");
SYMBOL_FLAGS(fsg_store_ro, 0x01);
KSYMTAB_FUNC(fsg_store_nofua, "");
SYMBOL_FLAGS(fsg_store_nofua, 0x01);
KSYMTAB_FUNC(fsg_store_file, "");
SYMBOL_FLAGS(fsg_store_file, 0x01);
KSYMTAB_FUNC(fsg_store_cdrom, "");
SYMBOL_FLAGS(fsg_store_cdrom, 0x01);
KSYMTAB_FUNC(fsg_store_removable, "");
SYMBOL_FLAGS(fsg_store_removable, 0x01);
KSYMTAB_FUNC(fsg_store_inquiry_string, "");
SYMBOL_FLAGS(fsg_store_inquiry_string, 0x01);
KSYMTAB_FUNC(fsg_store_forced_eject, "");
SYMBOL_FLAGS(fsg_store_forced_eject, 0x01);

MODULE_INFO(depends, "libcomposite");


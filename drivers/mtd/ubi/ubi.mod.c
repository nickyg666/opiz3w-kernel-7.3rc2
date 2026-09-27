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

KSYMTAB_FUNC(ubi_do_get_device_info, "");
SYMBOL_FLAGS(ubi_do_get_device_info, 0x01);
KSYMTAB_FUNC(ubi_get_device_info, "");
SYMBOL_FLAGS(ubi_get_device_info, 0x01);
KSYMTAB_FUNC(ubi_get_volume_info, "");
SYMBOL_FLAGS(ubi_get_volume_info, 0x01);
KSYMTAB_FUNC(ubi_open_volume, "");
SYMBOL_FLAGS(ubi_open_volume, 0x01);
KSYMTAB_FUNC(ubi_open_volume_nm, "");
SYMBOL_FLAGS(ubi_open_volume_nm, 0x01);
KSYMTAB_FUNC(ubi_open_volume_path, "");
SYMBOL_FLAGS(ubi_open_volume_path, 0x01);
KSYMTAB_FUNC(ubi_close_volume, "");
SYMBOL_FLAGS(ubi_close_volume, 0x01);
KSYMTAB_FUNC(ubi_leb_read, "");
SYMBOL_FLAGS(ubi_leb_read, 0x01);
KSYMTAB_FUNC(ubi_leb_read_sg, "");
SYMBOL_FLAGS(ubi_leb_read_sg, 0x01);
KSYMTAB_FUNC(ubi_leb_write, "");
SYMBOL_FLAGS(ubi_leb_write, 0x01);
KSYMTAB_FUNC(ubi_leb_change, "");
SYMBOL_FLAGS(ubi_leb_change, 0x01);
KSYMTAB_FUNC(ubi_leb_erase, "");
SYMBOL_FLAGS(ubi_leb_erase, 0x01);
KSYMTAB_FUNC(ubi_leb_unmap, "");
SYMBOL_FLAGS(ubi_leb_unmap, 0x01);
KSYMTAB_FUNC(ubi_leb_map, "");
SYMBOL_FLAGS(ubi_leb_map, 0x01);
KSYMTAB_FUNC(ubi_is_mapped, "");
SYMBOL_FLAGS(ubi_is_mapped, 0x01);
KSYMTAB_FUNC(ubi_sync, "");
SYMBOL_FLAGS(ubi_sync, 0x01);
KSYMTAB_FUNC(ubi_register_volume_notifier, "");
SYMBOL_FLAGS(ubi_register_volume_notifier, 0x01);
KSYMTAB_FUNC(ubi_unregister_volume_notifier, "");
SYMBOL_FLAGS(ubi_unregister_volume_notifier, 0x01);

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "115B1418CB9984F0E08A45E");

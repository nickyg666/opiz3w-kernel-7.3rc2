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

KSYMTAB_FUNC(backlight_notify_blank, "");
SYMBOL_FLAGS(backlight_notify_blank, 0x00);
KSYMTAB_FUNC(backlight_notify_blank_all, "");
SYMBOL_FLAGS(backlight_notify_blank_all, 0x00);
KSYMTAB_FUNC(backlight_device_set_brightness, "");
SYMBOL_FLAGS(backlight_device_set_brightness, 0x00);
KSYMTAB_FUNC(backlight_force_update, "");
SYMBOL_FLAGS(backlight_force_update, 0x00);
KSYMTAB_FUNC(backlight_device_register, "");
SYMBOL_FLAGS(backlight_device_register, 0x00);
KSYMTAB_FUNC(backlight_device_get_by_type, "");
SYMBOL_FLAGS(backlight_device_get_by_type, 0x00);
KSYMTAB_FUNC(backlight_device_get_by_name, "");
SYMBOL_FLAGS(backlight_device_get_by_name, 0x00);
KSYMTAB_FUNC(backlight_device_unregister, "");
SYMBOL_FLAGS(backlight_device_unregister, 0x00);
KSYMTAB_FUNC(devm_backlight_device_register, "");
SYMBOL_FLAGS(devm_backlight_device_register, 0x00);
KSYMTAB_FUNC(devm_backlight_device_unregister, "");
SYMBOL_FLAGS(devm_backlight_device_unregister, 0x00);
KSYMTAB_FUNC(of_find_backlight_by_node, "");
SYMBOL_FLAGS(of_find_backlight_by_node, 0x00);
KSYMTAB_FUNC(devm_of_find_backlight, "");
SYMBOL_FLAGS(devm_of_find_backlight, 0x00);

MODULE_INFO(depends, "");


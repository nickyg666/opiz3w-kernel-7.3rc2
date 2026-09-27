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

KSYMTAB_FUNC(led_classdev_flash_register_ext, "");
SYMBOL_FLAGS(led_classdev_flash_register_ext, 0x01);
KSYMTAB_FUNC(led_classdev_flash_unregister, "");
SYMBOL_FLAGS(led_classdev_flash_unregister, 0x01);
KSYMTAB_FUNC(devm_led_classdev_flash_register_ext, "");
SYMBOL_FLAGS(devm_led_classdev_flash_register_ext, 0x01);
KSYMTAB_FUNC(devm_led_classdev_flash_unregister, "");
SYMBOL_FLAGS(devm_led_classdev_flash_unregister, 0x01);
KSYMTAB_FUNC(led_set_flash_timeout, "");
SYMBOL_FLAGS(led_set_flash_timeout, 0x01);
KSYMTAB_FUNC(led_get_flash_fault, "");
SYMBOL_FLAGS(led_get_flash_fault, 0x01);
KSYMTAB_FUNC(led_set_flash_brightness, "");
SYMBOL_FLAGS(led_set_flash_brightness, 0x01);
KSYMTAB_FUNC(led_update_flash_brightness, "");
SYMBOL_FLAGS(led_update_flash_brightness, 0x01);
KSYMTAB_FUNC(led_set_flash_duration, "");
SYMBOL_FLAGS(led_set_flash_duration, 0x01);

MODULE_INFO(depends, "");


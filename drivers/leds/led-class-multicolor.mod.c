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

KSYMTAB_FUNC(led_mc_calc_color_components, "");
SYMBOL_FLAGS(led_mc_calc_color_components, 0x01);
KSYMTAB_FUNC(led_classdev_multicolor_register_ext, "");
SYMBOL_FLAGS(led_classdev_multicolor_register_ext, 0x01);
KSYMTAB_FUNC(led_classdev_multicolor_unregister, "");
SYMBOL_FLAGS(led_classdev_multicolor_unregister, 0x01);
KSYMTAB_FUNC(devm_led_classdev_multicolor_register_ext, "");
SYMBOL_FLAGS(devm_led_classdev_multicolor_register_ext, 0x01);
KSYMTAB_FUNC(devm_led_classdev_multicolor_unregister, "");
SYMBOL_FLAGS(devm_led_classdev_multicolor_unregister, 0x01);

MODULE_INFO(depends, "");


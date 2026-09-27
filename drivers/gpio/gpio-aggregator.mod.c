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

KSYMTAB_FUNC(gpiochip_fwd_get_gpiochip, "GPIO_FORWARDER");
SYMBOL_FLAGS(gpiochip_fwd_get_gpiochip, 0x01);
KSYMTAB_FUNC(gpiochip_fwd_get_data, "GPIO_FORWARDER");
SYMBOL_FLAGS(gpiochip_fwd_get_data, 0x01);
KSYMTAB_FUNC(gpiochip_fwd_gpio_request, "GPIO_FORWARDER");
SYMBOL_FLAGS(gpiochip_fwd_gpio_request, 0x01);
KSYMTAB_FUNC(gpiochip_fwd_gpio_get_direction, "GPIO_FORWARDER");
SYMBOL_FLAGS(gpiochip_fwd_gpio_get_direction, 0x01);
KSYMTAB_FUNC(gpiochip_fwd_gpio_direction_output, "GPIO_FORWARDER");
SYMBOL_FLAGS(gpiochip_fwd_gpio_direction_output, 0x01);
KSYMTAB_FUNC(gpiochip_fwd_gpio_direction_input, "GPIO_FORWARDER");
SYMBOL_FLAGS(gpiochip_fwd_gpio_direction_input, 0x01);
KSYMTAB_FUNC(gpiochip_fwd_gpio_get, "GPIO_FORWARDER");
SYMBOL_FLAGS(gpiochip_fwd_gpio_get, 0x01);
KSYMTAB_FUNC(gpiochip_fwd_gpio_get_multiple, "GPIO_FORWARDER");
SYMBOL_FLAGS(gpiochip_fwd_gpio_get_multiple, 0x01);
KSYMTAB_FUNC(gpiochip_fwd_gpio_set, "GPIO_FORWARDER");
SYMBOL_FLAGS(gpiochip_fwd_gpio_set, 0x01);
KSYMTAB_FUNC(gpiochip_fwd_gpio_set_multiple, "GPIO_FORWARDER");
SYMBOL_FLAGS(gpiochip_fwd_gpio_set_multiple, 0x01);
KSYMTAB_FUNC(gpiochip_fwd_gpio_set_config, "GPIO_FORWARDER");
SYMBOL_FLAGS(gpiochip_fwd_gpio_set_config, 0x01);
KSYMTAB_FUNC(gpiochip_fwd_gpio_to_irq, "GPIO_FORWARDER");
SYMBOL_FLAGS(gpiochip_fwd_gpio_to_irq, 0x01);
KSYMTAB_FUNC(devm_gpiochip_fwd_alloc, "GPIO_FORWARDER");
SYMBOL_FLAGS(devm_gpiochip_fwd_alloc, 0x01);
KSYMTAB_FUNC(gpiochip_fwd_desc_add, "GPIO_FORWARDER");
SYMBOL_FLAGS(gpiochip_fwd_desc_add, 0x01);
KSYMTAB_FUNC(gpiochip_fwd_desc_free, "GPIO_FORWARDER");
SYMBOL_FLAGS(gpiochip_fwd_desc_free, 0x01);
KSYMTAB_FUNC(gpiochip_fwd_register, "GPIO_FORWARDER");
SYMBOL_FLAGS(gpiochip_fwd_register, 0x01);

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-delay");
MODULE_ALIAS("of:N*T*Cgpio-delayC*");

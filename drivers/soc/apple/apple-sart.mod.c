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

KSYMTAB_FUNC(devm_apple_sart_get, "");
SYMBOL_FLAGS(devm_apple_sart_get, 0x01);
KSYMTAB_FUNC(apple_sart_add_allowed_region, "");
SYMBOL_FLAGS(apple_sart_add_allowed_region, 0x01);
KSYMTAB_FUNC(apple_sart_remove_allowed_region, "");
SYMBOL_FLAGS(apple_sart_remove_allowed_region, 0x01);

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Capple,t6000-sart");
MODULE_ALIAS("of:N*T*Capple,t6000-sartC*");
MODULE_ALIAS("of:N*T*Capple,t8103-sart");
MODULE_ALIAS("of:N*T*Capple,t8103-sartC*");
MODULE_ALIAS("of:N*T*Capple,t8015-sart");
MODULE_ALIAS("of:N*T*Capple,t8015-sartC*");

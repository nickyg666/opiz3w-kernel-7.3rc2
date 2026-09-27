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

KSYMTAB_FUNC(counter_priv, "COUNTER");
SYMBOL_FLAGS(counter_priv, 0x01);
KSYMTAB_FUNC(counter_alloc, "COUNTER");
SYMBOL_FLAGS(counter_alloc, 0x01);
KSYMTAB_FUNC(counter_put, "COUNTER");
SYMBOL_FLAGS(counter_put, 0x01);
KSYMTAB_FUNC(counter_add, "COUNTER");
SYMBOL_FLAGS(counter_add, 0x01);
KSYMTAB_FUNC(counter_unregister, "COUNTER");
SYMBOL_FLAGS(counter_unregister, 0x01);
KSYMTAB_FUNC(devm_counter_alloc, "COUNTER");
SYMBOL_FLAGS(devm_counter_alloc, 0x01);
KSYMTAB_FUNC(devm_counter_add, "COUNTER");
SYMBOL_FLAGS(devm_counter_add, 0x01);
KSYMTAB_FUNC(counter_push_event, "COUNTER");
SYMBOL_FLAGS(counter_push_event, 0x01);

MODULE_INFO(depends, "");


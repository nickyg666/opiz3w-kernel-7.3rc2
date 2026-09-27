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

KSYMTAB_FUNC(apple_smc_read, "");
SYMBOL_FLAGS(apple_smc_read, 0x00);
KSYMTAB_FUNC(apple_smc_write, "");
SYMBOL_FLAGS(apple_smc_write, 0x00);
KSYMTAB_FUNC(apple_smc_rw, "");
SYMBOL_FLAGS(apple_smc_rw, 0x00);
KSYMTAB_FUNC(apple_smc_get_key_by_index, "");
SYMBOL_FLAGS(apple_smc_get_key_by_index, 0x00);
KSYMTAB_FUNC(apple_smc_get_key_info, "");
SYMBOL_FLAGS(apple_smc_get_key_info, 0x00);
KSYMTAB_FUNC(apple_smc_enter_atomic, "");
SYMBOL_FLAGS(apple_smc_enter_atomic, 0x00);
KSYMTAB_FUNC(apple_smc_write_atomic, "");
SYMBOL_FLAGS(apple_smc_write_atomic, 0x00);

MODULE_INFO(depends, "apple-rtkit");

MODULE_ALIAS("of:N*T*Capple,t8103-smc");
MODULE_ALIAS("of:N*T*Capple,t8103-smcC*");
MODULE_ALIAS("of:N*T*Capple,smc");
MODULE_ALIAS("of:N*T*Capple,smcC*");

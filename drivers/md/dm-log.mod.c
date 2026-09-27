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

KSYMTAB_FUNC(dm_dirty_log_type_register, "");
SYMBOL_FLAGS(dm_dirty_log_type_register, 0x00);
KSYMTAB_FUNC(dm_dirty_log_type_unregister, "");
SYMBOL_FLAGS(dm_dirty_log_type_unregister, 0x00);
KSYMTAB_FUNC(dm_dirty_log_create, "");
SYMBOL_FLAGS(dm_dirty_log_create, 0x00);
KSYMTAB_FUNC(dm_dirty_log_destroy, "");
SYMBOL_FLAGS(dm_dirty_log_destroy, 0x00);

MODULE_INFO(depends, "dm-mod");


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

KSYMTAB_FUNC(hnae_register_notifier, "");
SYMBOL_FLAGS(hnae_register_notifier, 0x00);
KSYMTAB_FUNC(hnae_unregister_notifier, "");
SYMBOL_FLAGS(hnae_unregister_notifier, 0x00);
KSYMTAB_FUNC(hnae_reinit_handle, "");
SYMBOL_FLAGS(hnae_reinit_handle, 0x00);
KSYMTAB_FUNC(hnae_get_handle, "");
SYMBOL_FLAGS(hnae_get_handle, 0x00);
KSYMTAB_FUNC(hnae_put_handle, "");
SYMBOL_FLAGS(hnae_put_handle, 0x00);
KSYMTAB_FUNC(hnae_ae_register, "");
SYMBOL_FLAGS(hnae_ae_register, 0x00);
KSYMTAB_FUNC(hnae_ae_unregister, "");
SYMBOL_FLAGS(hnae_ae_unregister, 0x00);

MODULE_INFO(depends, "");


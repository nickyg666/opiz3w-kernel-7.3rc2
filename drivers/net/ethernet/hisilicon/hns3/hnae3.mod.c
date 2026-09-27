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

KSYMTAB_FUNC(hnae3_unregister_ae_algo_prepare, "");
SYMBOL_FLAGS(hnae3_unregister_ae_algo_prepare, 0x00);
KSYMTAB_FUNC(hnae3_acquire_unload_lock, "");
SYMBOL_FLAGS(hnae3_acquire_unload_lock, 0x00);
KSYMTAB_FUNC(hnae3_release_unload_lock, "");
SYMBOL_FLAGS(hnae3_release_unload_lock, 0x00);
KSYMTAB_FUNC(hnae3_set_client_init_flag, "");
SYMBOL_FLAGS(hnae3_set_client_init_flag, 0x00);
KSYMTAB_FUNC(hnae3_register_client, "");
SYMBOL_FLAGS(hnae3_register_client, 0x00);
KSYMTAB_FUNC(hnae3_unregister_client, "");
SYMBOL_FLAGS(hnae3_unregister_client, 0x00);
KSYMTAB_FUNC(hnae3_register_ae_algo, "");
SYMBOL_FLAGS(hnae3_register_ae_algo, 0x00);
KSYMTAB_FUNC(hnae3_unregister_ae_algo, "");
SYMBOL_FLAGS(hnae3_unregister_ae_algo, 0x00);
KSYMTAB_FUNC(hnae3_register_ae_dev, "");
SYMBOL_FLAGS(hnae3_register_ae_dev, 0x00);
KSYMTAB_FUNC(hnae3_unregister_ae_dev, "");
SYMBOL_FLAGS(hnae3_unregister_ae_dev, 0x00);

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E337F0A31168A29DA360264");

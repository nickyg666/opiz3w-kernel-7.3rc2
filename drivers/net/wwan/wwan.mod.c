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

KSYMTAB_FUNC(wwan_get_debugfs_dir, "");
SYMBOL_FLAGS(wwan_get_debugfs_dir, 0x01);
KSYMTAB_FUNC(wwan_put_debugfs_dir, "");
SYMBOL_FLAGS(wwan_put_debugfs_dir, 0x01);
KSYMTAB_FUNC(wwan_create_port, "");
SYMBOL_FLAGS(wwan_create_port, 0x01);
KSYMTAB_FUNC(wwan_remove_port, "");
SYMBOL_FLAGS(wwan_remove_port, 0x01);
KSYMTAB_FUNC(wwan_port_rx, "");
SYMBOL_FLAGS(wwan_port_rx, 0x01);
KSYMTAB_FUNC(wwan_port_txon, "");
SYMBOL_FLAGS(wwan_port_txon, 0x01);
KSYMTAB_FUNC(wwan_port_txoff, "");
SYMBOL_FLAGS(wwan_port_txoff, 0x01);
KSYMTAB_FUNC(wwan_port_get_drvdata, "");
SYMBOL_FLAGS(wwan_port_get_drvdata, 0x01);
KSYMTAB_FUNC(wwan_register_ops, "");
SYMBOL_FLAGS(wwan_register_ops, 0x01);
KSYMTAB_FUNC(wwan_unregister_ops, "");
SYMBOL_FLAGS(wwan_unregister_ops, 0x01);

MODULE_INFO(depends, "gnss");


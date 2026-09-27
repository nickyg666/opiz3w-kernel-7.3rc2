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

KSYMTAB_FUNC(gnss_allocate_device, "");
SYMBOL_FLAGS(gnss_allocate_device, 0x01);
KSYMTAB_FUNC(gnss_put_device, "");
SYMBOL_FLAGS(gnss_put_device, 0x01);
KSYMTAB_FUNC(gnss_register_device, "");
SYMBOL_FLAGS(gnss_register_device, 0x01);
KSYMTAB_FUNC(gnss_deregister_device, "");
SYMBOL_FLAGS(gnss_deregister_device, 0x01);
KSYMTAB_FUNC(gnss_insert_raw, "");
SYMBOL_FLAGS(gnss_insert_raw, 0x01);

MODULE_INFO(depends, "");


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

KSYMTAB_DATA(ffs_lock, "");
SYMBOL_FLAGS(ffs_lock, 0x01);
KSYMTAB_FUNC(ffs_name_dev, "");
SYMBOL_FLAGS(ffs_name_dev, 0x01);
KSYMTAB_FUNC(ffs_single_dev, "");
SYMBOL_FLAGS(ffs_single_dev, 0x01);

MODULE_INFO(depends, "libcomposite");


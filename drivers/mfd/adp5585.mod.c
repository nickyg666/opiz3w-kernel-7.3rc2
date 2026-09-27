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


MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cadi,adp5585-00");
MODULE_ALIAS("of:N*T*Cadi,adp5585-00C*");
MODULE_ALIAS("of:N*T*Cadi,adp5585-01");
MODULE_ALIAS("of:N*T*Cadi,adp5585-01C*");
MODULE_ALIAS("of:N*T*Cadi,adp5585-02");
MODULE_ALIAS("of:N*T*Cadi,adp5585-02C*");
MODULE_ALIAS("of:N*T*Cadi,adp5585-03");
MODULE_ALIAS("of:N*T*Cadi,adp5585-03C*");
MODULE_ALIAS("of:N*T*Cadi,adp5585-04");
MODULE_ALIAS("of:N*T*Cadi,adp5585-04C*");
MODULE_ALIAS("of:N*T*Cadi,adp5589-00");
MODULE_ALIAS("of:N*T*Cadi,adp5589-00C*");
MODULE_ALIAS("of:N*T*Cadi,adp5589-01");
MODULE_ALIAS("of:N*T*Cadi,adp5589-01C*");
MODULE_ALIAS("of:N*T*Cadi,adp5589-02");
MODULE_ALIAS("of:N*T*Cadi,adp5589-02C*");
MODULE_ALIAS("of:N*T*Cadi,adp5589");
MODULE_ALIAS("of:N*T*Cadi,adp5589C*");

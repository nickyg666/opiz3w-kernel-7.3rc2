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

MODULE_ALIAS("platform:bd71837-clk");
MODULE_ALIAS("platform:bd71847-clk");
MODULE_ALIAS("platform:bd71828-clk");
MODULE_ALIAS("platform:bd71815-clk");
MODULE_ALIAS("platform:bd72720-clk");

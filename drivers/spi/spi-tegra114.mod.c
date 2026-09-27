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

MODULE_ALIAS("of:N*T*Cnvidia,tegra114-spi");
MODULE_ALIAS("of:N*T*Cnvidia,tegra114-spiC*");
MODULE_ALIAS("of:N*T*Cnvidia,tegra124-spi");
MODULE_ALIAS("of:N*T*Cnvidia,tegra124-spiC*");
MODULE_ALIAS("of:N*T*Cnvidia,tegra210-spi");
MODULE_ALIAS("of:N*T*Cnvidia,tegra210-spiC*");

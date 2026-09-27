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


MODULE_INFO(depends, "crypto_engine");

MODULE_ALIAS("of:N*T*Callwinner,sun8i-h3-crypto");
MODULE_ALIAS("of:N*T*Callwinner,sun8i-h3-cryptoC*");
MODULE_ALIAS("of:N*T*Callwinner,sun8i-r40-crypto");
MODULE_ALIAS("of:N*T*Callwinner,sun8i-r40-cryptoC*");
MODULE_ALIAS("of:N*T*Callwinner,sun20i-d1-crypto");
MODULE_ALIAS("of:N*T*Callwinner,sun20i-d1-cryptoC*");
MODULE_ALIAS("of:N*T*Callwinner,sun50i-a64-crypto");
MODULE_ALIAS("of:N*T*Callwinner,sun50i-a64-cryptoC*");
MODULE_ALIAS("of:N*T*Callwinner,sun50i-h5-crypto");
MODULE_ALIAS("of:N*T*Callwinner,sun50i-h5-cryptoC*");
MODULE_ALIAS("of:N*T*Callwinner,sun50i-h6-crypto");
MODULE_ALIAS("of:N*T*Callwinner,sun50i-h6-cryptoC*");
MODULE_ALIAS("of:N*T*Callwinner,sun50i-h616-crypto");
MODULE_ALIAS("of:N*T*Callwinner,sun50i-h616-cryptoC*");

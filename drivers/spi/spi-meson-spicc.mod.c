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

MODULE_ALIAS("of:N*T*Camlogic,meson-gx-spicc");
MODULE_ALIAS("of:N*T*Camlogic,meson-gx-spiccC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-axg-spicc");
MODULE_ALIAS("of:N*T*Camlogic,meson-axg-spiccC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-g12a-spicc");
MODULE_ALIAS("of:N*T*Camlogic,meson-g12a-spiccC*");

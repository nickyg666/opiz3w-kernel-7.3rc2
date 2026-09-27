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

MODULE_ALIAS("of:N*T*Camlogic,meson6-wdt");
MODULE_ALIAS("of:N*T*Camlogic,meson6-wdtC*");
MODULE_ALIAS("of:N*T*Camlogic,meson8-wdt");
MODULE_ALIAS("of:N*T*Camlogic,meson8-wdtC*");
MODULE_ALIAS("of:N*T*Camlogic,meson8b-wdt");
MODULE_ALIAS("of:N*T*Camlogic,meson8b-wdtC*");
MODULE_ALIAS("of:N*T*Camlogic,meson8m2-wdt");
MODULE_ALIAS("of:N*T*Camlogic,meson8m2-wdtC*");

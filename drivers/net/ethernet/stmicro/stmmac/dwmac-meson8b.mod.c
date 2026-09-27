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


MODULE_INFO(depends, "stmmac,stmmac-platform");

MODULE_ALIAS("of:N*T*Camlogic,meson8b-dwmac");
MODULE_ALIAS("of:N*T*Camlogic,meson8b-dwmacC*");
MODULE_ALIAS("of:N*T*Camlogic,meson8m2-dwmac");
MODULE_ALIAS("of:N*T*Camlogic,meson8m2-dwmacC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-gxbb-dwmac");
MODULE_ALIAS("of:N*T*Camlogic,meson-gxbb-dwmacC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-axg-dwmac");
MODULE_ALIAS("of:N*T*Camlogic,meson-axg-dwmacC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-g12a-dwmac");
MODULE_ALIAS("of:N*T*Camlogic,meson-g12a-dwmacC*");

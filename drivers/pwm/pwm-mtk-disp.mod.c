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

MODULE_ALIAS("of:N*T*Cmediatek,mt2701-disp-pwm");
MODULE_ALIAS("of:N*T*Cmediatek,mt2701-disp-pwmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6595-disp-pwm");
MODULE_ALIAS("of:N*T*Cmediatek,mt6595-disp-pwmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-disp-pwm");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-disp-pwmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-disp-pwm");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-disp-pwmC*");

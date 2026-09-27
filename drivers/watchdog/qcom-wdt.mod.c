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

MODULE_ALIAS("of:N*T*Cqcom,apss-wdt-ipq5332");
MODULE_ALIAS("of:N*T*Cqcom,apss-wdt-ipq5332C*");
MODULE_ALIAS("of:N*T*Cqcom,apss-wdt-ipq5424");
MODULE_ALIAS("of:N*T*Cqcom,apss-wdt-ipq5424C*");
MODULE_ALIAS("of:N*T*Cqcom,apss-wdt-ipq9574");
MODULE_ALIAS("of:N*T*Cqcom,apss-wdt-ipq9574C*");
MODULE_ALIAS("of:N*T*Cqcom,kpss-timer");
MODULE_ALIAS("of:N*T*Cqcom,kpss-timerC*");
MODULE_ALIAS("of:N*T*Cqcom,scss-timer");
MODULE_ALIAS("of:N*T*Cqcom,scss-timerC*");
MODULE_ALIAS("of:N*T*Cqcom,kpss-wdt");
MODULE_ALIAS("of:N*T*Cqcom,kpss-wdtC*");

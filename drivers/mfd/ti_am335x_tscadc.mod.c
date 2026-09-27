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

KSYMTAB_FUNC(am335x_tsc_se_set_cache, "");
SYMBOL_FLAGS(am335x_tsc_se_set_cache, 0x01);
KSYMTAB_FUNC(am335x_tsc_se_set_once, "");
SYMBOL_FLAGS(am335x_tsc_se_set_once, 0x01);
KSYMTAB_FUNC(am335x_tsc_se_adc_done, "");
SYMBOL_FLAGS(am335x_tsc_se_adc_done, 0x01);
KSYMTAB_FUNC(am335x_tsc_se_clr, "");
SYMBOL_FLAGS(am335x_tsc_se_clr, 0x01);

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,am3359-tscadc");
MODULE_ALIAS("of:N*T*Cti,am3359-tscadcC*");
MODULE_ALIAS("of:N*T*Cti,am4372-magadc");
MODULE_ALIAS("of:N*T*Cti,am4372-magadcC*");

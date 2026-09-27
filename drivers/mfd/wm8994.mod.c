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

KSYMTAB_FUNC(wm8994_irq_init, "");
SYMBOL_FLAGS(wm8994_irq_init, 0x00);
KSYMTAB_FUNC(wm8994_irq_exit, "");
SYMBOL_FLAGS(wm8994_irq_exit, 0x00);
KSYMTAB_DATA(wm1811_regmap_config, "");
SYMBOL_FLAGS(wm1811_regmap_config, 0x00);
KSYMTAB_DATA(wm8994_regmap_config, "");
SYMBOL_FLAGS(wm8994_regmap_config, 0x00);
KSYMTAB_DATA(wm8958_regmap_config, "");
SYMBOL_FLAGS(wm8958_regmap_config, 0x00);
KSYMTAB_DATA(wm8994_base_regmap_config, "");
SYMBOL_FLAGS(wm8994_base_regmap_config, 0x00);

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:wm1811");
MODULE_ALIAS("i2c:wm1811a");
MODULE_ALIAS("i2c:wm8994");
MODULE_ALIAS("i2c:wm8958");
MODULE_ALIAS("of:N*T*Cwlf,wm1811");
MODULE_ALIAS("of:N*T*Cwlf,wm1811C*");
MODULE_ALIAS("of:N*T*Cwlf,wm8994");
MODULE_ALIAS("of:N*T*Cwlf,wm8994C*");
MODULE_ALIAS("of:N*T*Cwlf,wm8958");
MODULE_ALIAS("of:N*T*Cwlf,wm8958C*");

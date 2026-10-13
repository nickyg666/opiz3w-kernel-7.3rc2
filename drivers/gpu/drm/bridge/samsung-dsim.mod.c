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

KSYMTAB_FUNC(samsung_dsim_probe, "");
SYMBOL_FLAGS(samsung_dsim_probe, 0x01);
KSYMTAB_FUNC(samsung_dsim_remove, "");
SYMBOL_FLAGS(samsung_dsim_remove, 0x01);
KSYMTAB_DATA(samsung_dsim_pm_ops, "");
SYMBOL_FLAGS(samsung_dsim_pm_ops, 0x01);

MODULE_INFO(depends, "drm_kms_helper");

MODULE_ALIAS("of:N*T*Cfsl,imx8mm-mipi-dsim");
MODULE_ALIAS("of:N*T*Cfsl,imx8mm-mipi-dsimC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8mp-mipi-dsim");
MODULE_ALIAS("of:N*T*Cfsl,imx8mp-mipi-dsimC*");

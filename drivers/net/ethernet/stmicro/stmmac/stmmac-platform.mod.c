#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(devm_stmmac_probe_config_dt, "");
SYMBOL_FLAGS(devm_stmmac_probe_config_dt, 0x01);
KSYMTAB_FUNC(stmmac_pltfr_find_clk, "");
SYMBOL_FLAGS(stmmac_pltfr_find_clk, 0x01);
KSYMTAB_FUNC(stmmac_get_platform_resources, "");
SYMBOL_FLAGS(stmmac_get_platform_resources, 0x01);
KSYMTAB_FUNC(stmmac_pltfr_probe, "");
SYMBOL_FLAGS(stmmac_pltfr_probe, 0x01);
KSYMTAB_FUNC(devm_stmmac_pltfr_probe, "");
SYMBOL_FLAGS(devm_stmmac_pltfr_probe, 0x01);
KSYMTAB_FUNC(stmmac_pltfr_remove, "");
SYMBOL_FLAGS(stmmac_pltfr_remove, 0x01);
KSYMTAB_DATA(stmmac_pltfr_pm_ops, "");
SYMBOL_FLAGS(stmmac_pltfr_pm_ops, 0x01);

MODULE_INFO(depends, "stmmac");


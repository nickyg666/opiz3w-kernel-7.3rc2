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

KSYMTAB_FUNC(dw_mipi_dsi_set_slave, "");
SYMBOL_FLAGS(dw_mipi_dsi_set_slave, 0x01);
KSYMTAB_FUNC(dw_mipi_dsi_get_bridge, "");
SYMBOL_FLAGS(dw_mipi_dsi_get_bridge, 0x01);
KSYMTAB_FUNC(dw_mipi_dsi_probe, "");
SYMBOL_FLAGS(dw_mipi_dsi_probe, 0x01);
KSYMTAB_FUNC(dw_mipi_dsi_remove, "");
SYMBOL_FLAGS(dw_mipi_dsi_remove, 0x01);
KSYMTAB_FUNC(dw_mipi_dsi_bind, "");
SYMBOL_FLAGS(dw_mipi_dsi_bind, 0x01);
KSYMTAB_FUNC(dw_mipi_dsi_unbind, "");
SYMBOL_FLAGS(dw_mipi_dsi_unbind, 0x01);

MODULE_INFO(depends, "drm_kms_helper");


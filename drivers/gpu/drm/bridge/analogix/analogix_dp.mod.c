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

KSYMTAB_FUNC(analogix_dp_probe, "");
SYMBOL_FLAGS(analogix_dp_probe, 0x01);
KSYMTAB_FUNC(analogix_dp_suspend, "");
SYMBOL_FLAGS(analogix_dp_suspend, 0x01);
KSYMTAB_FUNC(analogix_dp_resume, "");
SYMBOL_FLAGS(analogix_dp_resume, 0x01);
KSYMTAB_FUNC(analogix_dp_bind, "");
SYMBOL_FLAGS(analogix_dp_bind, 0x01);
KSYMTAB_FUNC(analogix_dp_unbind, "");
SYMBOL_FLAGS(analogix_dp_unbind, 0x01);
KSYMTAB_FUNC(analogix_dp_start_crc, "");
SYMBOL_FLAGS(analogix_dp_start_crc, 0x01);
KSYMTAB_FUNC(analogix_dp_stop_crc, "");
SYMBOL_FLAGS(analogix_dp_stop_crc, 0x01);
KSYMTAB_FUNC(analogix_dp_aux_to_plat_data, "");
SYMBOL_FLAGS(analogix_dp_aux_to_plat_data, 0x01);
KSYMTAB_FUNC(analogix_dp_get_aux, "");
SYMBOL_FLAGS(analogix_dp_get_aux, 0x01);
KSYMTAB_FUNC(analogix_dp_finish_probe, "");
SYMBOL_FLAGS(analogix_dp_finish_probe, 0x01);
KSYMTAB_FUNC(anx_dp_aux_transfer, "");
SYMBOL_FLAGS(anx_dp_aux_transfer, 0x01);

MODULE_INFO(depends, "drm_display_helper,drm_dp_aux_bus,drm_kms_helper");


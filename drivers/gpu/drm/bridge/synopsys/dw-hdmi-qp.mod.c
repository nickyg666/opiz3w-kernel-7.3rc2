#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(dw_hdmi_qp_bind, "");
SYMBOL_FLAGS(dw_hdmi_qp_bind, 0x01);
KSYMTAB_FUNC(dw_hdmi_qp_suspend, "");
SYMBOL_FLAGS(dw_hdmi_qp_suspend, 0x01);
KSYMTAB_FUNC(dw_hdmi_qp_resume, "");
SYMBOL_FLAGS(dw_hdmi_qp_resume, 0x01);

MODULE_INFO(depends, "drm_display_helper,drm_kms_helper");


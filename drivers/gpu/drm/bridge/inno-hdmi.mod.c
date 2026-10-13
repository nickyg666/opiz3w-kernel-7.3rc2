#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(inno_hdmi_bind, "");
SYMBOL_FLAGS(inno_hdmi_bind, 0x01);

MODULE_INFO(depends, "drm_kms_helper,drm_display_helper");


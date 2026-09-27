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


MODULE_INFO(depends, "drm_display_helper,drm_kms_helper");

MODULE_ALIAS("i2c:it6610");
MODULE_ALIAS("i2c:it66121");
MODULE_ALIAS("i2c:it66122");
MODULE_ALIAS("of:N*T*Cite,it6610");
MODULE_ALIAS("of:N*T*Cite,it6610C*");
MODULE_ALIAS("of:N*T*Cite,it66121");
MODULE_ALIAS("of:N*T*Cite,it66121C*");
MODULE_ALIAS("of:N*T*Cite,it66122");
MODULE_ALIAS("of:N*T*Cite,it66122C*");

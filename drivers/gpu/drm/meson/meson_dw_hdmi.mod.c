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


MODULE_INFO(depends, "dw-hdmi,drm_kms_helper");

MODULE_ALIAS("of:N*T*Camlogic,meson-gxbb-dw-hdmi");
MODULE_ALIAS("of:N*T*Camlogic,meson-gxbb-dw-hdmiC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-gxl-dw-hdmi");
MODULE_ALIAS("of:N*T*Camlogic,meson-gxl-dw-hdmiC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-gxm-dw-hdmi");
MODULE_ALIAS("of:N*T*Camlogic,meson-gxm-dw-hdmiC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-g12a-dw-hdmi");
MODULE_ALIAS("of:N*T*Camlogic,meson-g12a-dw-hdmiC*");

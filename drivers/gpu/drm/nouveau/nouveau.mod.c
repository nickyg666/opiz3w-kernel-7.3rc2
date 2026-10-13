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


MODULE_INFO(depends, "drm_display_helper,drm_kms_helper,ttm,drm_gpuvm,i2c-algo-bit,gpu-sched,drm_exec,backlight,drm_client_lib,drm_ttm_helper");

MODULE_ALIAS("pci:v000010DEd*sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v000012D2d*sv*sd*bc03sc*i*");
MODULE_ALIAS("of:N*T*Cnvidia,gk20a");
MODULE_ALIAS("of:N*T*Cnvidia,gk20aC*");
MODULE_ALIAS("of:N*T*Cnvidia,gm20b");
MODULE_ALIAS("of:N*T*Cnvidia,gm20bC*");
MODULE_ALIAS("of:N*T*Cnvidia,gp10b");
MODULE_ALIAS("of:N*T*Cnvidia,gp10bC*");

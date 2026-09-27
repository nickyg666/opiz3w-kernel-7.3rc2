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


MODULE_INFO(depends, "gpu-sched,drm_gpuvm,drm_exec");

MODULE_ALIAS("of:N*T*Cmediatek,mt8196-mali");
MODULE_ALIAS("of:N*T*Cmediatek,mt8196-maliC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3588-mali");
MODULE_ALIAS("of:N*T*Crockchip,rk3588-maliC*");
MODULE_ALIAS("of:N*T*Carm,mali-valhall-csf");
MODULE_ALIAS("of:N*T*Carm,mali-valhall-csfC*");

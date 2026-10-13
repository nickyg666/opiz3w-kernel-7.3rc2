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


MODULE_INFO(depends, "gpu-sched,drm_shmem_helper,drm_exec");

MODULE_ALIAS("of:N*T*Cbrcm,2711-v3d");
MODULE_ALIAS("of:N*T*Cbrcm,2711-v3dC*");
MODULE_ALIAS("of:N*T*Cbrcm,2712-v3d");
MODULE_ALIAS("of:N*T*Cbrcm,2712-v3dC*");
MODULE_ALIAS("of:N*T*Cbrcm,7268-v3d");
MODULE_ALIAS("of:N*T*Cbrcm,7268-v3dC*");
MODULE_ALIAS("of:N*T*Cbrcm,7278-v3d");
MODULE_ALIAS("of:N*T*Cbrcm,7278-v3dC*");

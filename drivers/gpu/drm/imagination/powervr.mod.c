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


MODULE_INFO(depends, "gpu-sched,drm_gpuvm,drm_shmem_helper,drm_exec");

MODULE_ALIAS("of:N*T*Cthead,th1520-gpu");
MODULE_ALIAS("of:N*T*Cthead,th1520-gpuC*");
MODULE_ALIAS("of:N*T*Cimg,img-rogue");
MODULE_ALIAS("of:N*T*Cimg,img-rogueC*");
MODULE_ALIAS("of:N*T*Cimg,img-axe");
MODULE_ALIAS("of:N*T*Cimg,img-axeC*");

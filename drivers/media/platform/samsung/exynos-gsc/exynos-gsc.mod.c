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


MODULE_INFO(depends, "v4l2-mem2mem,videobuf2-v4l2,videodev,videobuf2-dma-contig,videobuf2-common");

MODULE_ALIAS("of:N*T*Csamsung,exynos5250-gsc");
MODULE_ALIAS("of:N*T*Csamsung,exynos5250-gscC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos5420-gsc");
MODULE_ALIAS("of:N*T*Csamsung,exynos5420-gscC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos5433-gsc");
MODULE_ALIAS("of:N*T*Csamsung,exynos5433-gscC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos5-gsc");
MODULE_ALIAS("of:N*T*Csamsung,exynos5-gscC*");

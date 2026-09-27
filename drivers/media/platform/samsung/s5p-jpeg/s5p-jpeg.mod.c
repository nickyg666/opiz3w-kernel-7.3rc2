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

MODULE_ALIAS("of:N*T*Csamsung,s5pv210-jpeg");
MODULE_ALIAS("of:N*T*Csamsung,s5pv210-jpegC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos3250-jpeg");
MODULE_ALIAS("of:N*T*Csamsung,exynos3250-jpegC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos4210-jpeg");
MODULE_ALIAS("of:N*T*Csamsung,exynos4210-jpegC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos4212-jpeg");
MODULE_ALIAS("of:N*T*Csamsung,exynos4212-jpegC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos5420-jpeg");
MODULE_ALIAS("of:N*T*Csamsung,exynos5420-jpegC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos5433-jpeg");
MODULE_ALIAS("of:N*T*Csamsung,exynos5433-jpegC*");

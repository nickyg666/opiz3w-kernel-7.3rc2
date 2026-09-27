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


MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cqcom,glymur-gxclkctl");
MODULE_ALIAS("of:N*T*Cqcom,glymur-gxclkctlC*");
MODULE_ALIAS("of:N*T*Cqcom,kaanapali-gxclkctl");
MODULE_ALIAS("of:N*T*Cqcom,kaanapali-gxclkctlC*");
MODULE_ALIAS("of:N*T*Cqcom,milos-gxclkctl");
MODULE_ALIAS("of:N*T*Cqcom,milos-gxclkctlC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8750-gxclkctl");
MODULE_ALIAS("of:N*T*Cqcom,sm8750-gxclkctlC*");

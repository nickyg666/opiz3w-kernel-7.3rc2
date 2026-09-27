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

MODULE_ALIAS("of:N*T*Cqcom,sm8150-usb-hs-phy");
MODULE_ALIAS("of:N*T*Cqcom,sm8150-usb-hs-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,usb-snps-hs-5nm-phy");
MODULE_ALIAS("of:N*T*Cqcom,usb-snps-hs-5nm-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,usb-snps-hs-7nm-phy");
MODULE_ALIAS("of:N*T*Cqcom,usb-snps-hs-7nm-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,usb-snps-femto-v2-phy");
MODULE_ALIAS("of:N*T*Cqcom,usb-snps-femto-v2-phyC*");

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


MODULE_INFO(depends, "typec");

MODULE_ALIAS("of:N*T*Cgoogle,gs101-usb31drd-phy");
MODULE_ALIAS("of:N*T*Cgoogle,gs101-usb31drd-phyC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos2200-usb32drd-phy");
MODULE_ALIAS("of:N*T*Csamsung,exynos2200-usb32drd-phyC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos5250-usbdrd-phy");
MODULE_ALIAS("of:N*T*Csamsung,exynos5250-usbdrd-phyC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos5420-usbdrd-phy");
MODULE_ALIAS("of:N*T*Csamsung,exynos5420-usbdrd-phyC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos5433-usbdrd-phy");
MODULE_ALIAS("of:N*T*Csamsung,exynos5433-usbdrd-phyC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos7-usbdrd-phy");
MODULE_ALIAS("of:N*T*Csamsung,exynos7-usbdrd-phyC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos7870-usbdrd-phy");
MODULE_ALIAS("of:N*T*Csamsung,exynos7870-usbdrd-phyC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos850-usbdrd-phy");
MODULE_ALIAS("of:N*T*Csamsung,exynos850-usbdrd-phyC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos990-usbdrd-phy");
MODULE_ALIAS("of:N*T*Csamsung,exynos990-usbdrd-phyC*");
MODULE_ALIAS("of:N*T*Csamsung,exynosautov920-usb31drd-combo-ssphy");
MODULE_ALIAS("of:N*T*Csamsung,exynosautov920-usb31drd-combo-ssphyC*");
MODULE_ALIAS("of:N*T*Csamsung,exynosautov920-usbdrd-combo-hsphy");
MODULE_ALIAS("of:N*T*Csamsung,exynosautov920-usbdrd-combo-hsphyC*");
MODULE_ALIAS("of:N*T*Csamsung,exynosautov920-usbdrd-phy");
MODULE_ALIAS("of:N*T*Csamsung,exynosautov920-usbdrd-phyC*");

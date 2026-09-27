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

KSYMTAB_DATA(vop2_component_ops, "");
SYMBOL_FLAGS(vop2_component_ops, 0x01);
KSYMTAB_FUNC(rockchip_drm_wait_vact_end, "");
SYMBOL_FLAGS(rockchip_drm_wait_vact_end, 0x00);
KSYMTAB_DATA(vop_component_ops, "");
SYMBOL_FLAGS(vop_component_ops, 0x01);

MODULE_INFO(depends, "drm_kms_helper,analogix_dp,dw-mipi-dsi,drm_display_helper,dw-dp,dw-hdmi,inno-hdmi,dw-hdmi-qp,drm_dma_helper,drm_client_lib");

MODULE_ALIAS("of:N*T*Crockchip,display-subsystem");
MODULE_ALIAS("of:N*T*Crockchip,display-subsystemC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3566-vop");
MODULE_ALIAS("of:N*T*Crockchip,rk3566-vopC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3568-vop");
MODULE_ALIAS("of:N*T*Crockchip,rk3568-vopC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3576-vop");
MODULE_ALIAS("of:N*T*Crockchip,rk3576-vopC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3588-vop");
MODULE_ALIAS("of:N*T*Crockchip,rk3588-vopC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3036-vop");
MODULE_ALIAS("of:N*T*Crockchip,rk3036-vopC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3126-vop");
MODULE_ALIAS("of:N*T*Crockchip,rk3126-vopC*");
MODULE_ALIAS("of:N*T*Crockchip,px30-vop-big");
MODULE_ALIAS("of:N*T*Crockchip,px30-vop-bigC*");
MODULE_ALIAS("of:N*T*Crockchip,px30-vop-lit");
MODULE_ALIAS("of:N*T*Crockchip,px30-vop-litC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3066-vop");
MODULE_ALIAS("of:N*T*Crockchip,rk3066-vopC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3188-vop");
MODULE_ALIAS("of:N*T*Crockchip,rk3188-vopC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3288-vop");
MODULE_ALIAS("of:N*T*Crockchip,rk3288-vopC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3368-vop");
MODULE_ALIAS("of:N*T*Crockchip,rk3368-vopC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3366-vop");
MODULE_ALIAS("of:N*T*Crockchip,rk3366-vopC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3399-vop-big");
MODULE_ALIAS("of:N*T*Crockchip,rk3399-vop-bigC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3399-vop-lit");
MODULE_ALIAS("of:N*T*Crockchip,rk3399-vop-litC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3228-vop");
MODULE_ALIAS("of:N*T*Crockchip,rk3228-vopC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3328-vop");
MODULE_ALIAS("of:N*T*Crockchip,rk3328-vopC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3506-vop");
MODULE_ALIAS("of:N*T*Crockchip,rk3506-vopC*");
MODULE_ALIAS("of:N*T*Crockchip,rv1126-vop");
MODULE_ALIAS("of:N*T*Crockchip,rv1126-vopC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3288-dp");
MODULE_ALIAS("of:N*T*Crockchip,rk3288-dpC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3399-edp");
MODULE_ALIAS("of:N*T*Crockchip,rk3399-edpC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3576-edp");
MODULE_ALIAS("of:N*T*Crockchip,rk3576-edpC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3588-edp");
MODULE_ALIAS("of:N*T*Crockchip,rk3588-edpC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3399-cdn-dp");
MODULE_ALIAS("of:N*T*Crockchip,rk3399-cdn-dpC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3228-dw-hdmi");
MODULE_ALIAS("of:N*T*Crockchip,rk3228-dw-hdmiC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3288-dw-hdmi");
MODULE_ALIAS("of:N*T*Crockchip,rk3288-dw-hdmiC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3328-dw-hdmi");
MODULE_ALIAS("of:N*T*Crockchip,rk3328-dw-hdmiC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3368-dw-hdmi");
MODULE_ALIAS("of:N*T*Crockchip,rk3368-dw-hdmiC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3399-dw-hdmi");
MODULE_ALIAS("of:N*T*Crockchip,rk3399-dw-hdmiC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3568-dw-hdmi");
MODULE_ALIAS("of:N*T*Crockchip,rk3568-dw-hdmiC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3576-dw-hdmi-qp");
MODULE_ALIAS("of:N*T*Crockchip,rk3576-dw-hdmi-qpC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3588-dw-hdmi-qp");
MODULE_ALIAS("of:N*T*Crockchip,rk3588-dw-hdmi-qpC*");
MODULE_ALIAS("of:N*T*Crockchip,px30-mipi-dsi");
MODULE_ALIAS("of:N*T*Crockchip,px30-mipi-dsiC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3128-mipi-dsi");
MODULE_ALIAS("of:N*T*Crockchip,rk3128-mipi-dsiC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3288-mipi-dsi");
MODULE_ALIAS("of:N*T*Crockchip,rk3288-mipi-dsiC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3368-mipi-dsi");
MODULE_ALIAS("of:N*T*Crockchip,rk3368-mipi-dsiC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3399-mipi-dsi");
MODULE_ALIAS("of:N*T*Crockchip,rk3399-mipi-dsiC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3506-mipi-dsi");
MODULE_ALIAS("of:N*T*Crockchip,rk3506-mipi-dsiC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3568-mipi-dsi");
MODULE_ALIAS("of:N*T*Crockchip,rk3568-mipi-dsiC*");
MODULE_ALIAS("of:N*T*Crockchip,rv1126-mipi-dsi");
MODULE_ALIAS("of:N*T*Crockchip,rv1126-mipi-dsiC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3588-dp");
MODULE_ALIAS("of:N*T*Crockchip,rk3588-dpC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3576-dp");
MODULE_ALIAS("of:N*T*Crockchip,rk3576-dpC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3036-inno-hdmi");
MODULE_ALIAS("of:N*T*Crockchip,rk3036-inno-hdmiC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3128-inno-hdmi");
MODULE_ALIAS("of:N*T*Crockchip,rk3128-inno-hdmiC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3288-lvds");
MODULE_ALIAS("of:N*T*Crockchip,rk3288-lvdsC*");
MODULE_ALIAS("of:N*T*Crockchip,px30-lvds");
MODULE_ALIAS("of:N*T*Crockchip,px30-lvdsC*");

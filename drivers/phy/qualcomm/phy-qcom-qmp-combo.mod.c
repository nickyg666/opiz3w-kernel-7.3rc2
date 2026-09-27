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


MODULE_INFO(depends, "typec,aux-bridge");

MODULE_ALIAS("of:N*T*Cqcom,glymur-qmp-usb3-dp-phy");
MODULE_ALIAS("of:N*T*Cqcom,glymur-qmp-usb3-dp-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,hawi-qmp-usb3-dp-phy");
MODULE_ALIAS("of:N*T*Cqcom,hawi-qmp-usb3-dp-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sar2130p-qmp-usb3-dp-phy");
MODULE_ALIAS("of:N*T*Cqcom,sar2130p-qmp-usb3-dp-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sc7180-qmp-usb3-dp-phy");
MODULE_ALIAS("of:N*T*Cqcom,sc7180-qmp-usb3-dp-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sc7280-qmp-usb3-dp-phy");
MODULE_ALIAS("of:N*T*Cqcom,sc7280-qmp-usb3-dp-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sc8180x-qmp-usb3-dp-phy");
MODULE_ALIAS("of:N*T*Cqcom,sc8180x-qmp-usb3-dp-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sc8280xp-qmp-usb43dp-phy");
MODULE_ALIAS("of:N*T*Cqcom,sc8280xp-qmp-usb43dp-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sdm845-qmp-usb3-dp-phy");
MODULE_ALIAS("of:N*T*Cqcom,sdm845-qmp-usb3-dp-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sm6350-qmp-usb3-dp-phy");
MODULE_ALIAS("of:N*T*Cqcom,sm6350-qmp-usb3-dp-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8150-qmp-usb3-dp-phy");
MODULE_ALIAS("of:N*T*Cqcom,sm8150-qmp-usb3-dp-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8250-qmp-usb3-dp-phy");
MODULE_ALIAS("of:N*T*Cqcom,sm8250-qmp-usb3-dp-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8350-qmp-usb3-dp-phy");
MODULE_ALIAS("of:N*T*Cqcom,sm8350-qmp-usb3-dp-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8450-qmp-usb3-dp-phy");
MODULE_ALIAS("of:N*T*Cqcom,sm8450-qmp-usb3-dp-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8475-qmp-usb3-dp-phy");
MODULE_ALIAS("of:N*T*Cqcom,sm8475-qmp-usb3-dp-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8550-qmp-usb3-dp-phy");
MODULE_ALIAS("of:N*T*Cqcom,sm8550-qmp-usb3-dp-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8650-qmp-usb3-dp-phy");
MODULE_ALIAS("of:N*T*Cqcom,sm8650-qmp-usb3-dp-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8750-qmp-usb3-dp-phy");
MODULE_ALIAS("of:N*T*Cqcom,sm8750-qmp-usb3-dp-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,x1e80100-qmp-usb3-dp-phy");
MODULE_ALIAS("of:N*T*Cqcom,x1e80100-qmp-usb3-dp-phyC*");

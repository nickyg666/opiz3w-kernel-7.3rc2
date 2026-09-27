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

MODULE_ALIAS("of:N*T*Cqcom,glymur-qmp-usb3-uni-phy");
MODULE_ALIAS("of:N*T*Cqcom,glymur-qmp-usb3-uni-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,ipq5424-qmp-usb3-phy");
MODULE_ALIAS("of:N*T*Cqcom,ipq5424-qmp-usb3-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,ipq6018-qmp-usb3-phy");
MODULE_ALIAS("of:N*T*Cqcom,ipq6018-qmp-usb3-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,ipq8074-qmp-usb3-phy");
MODULE_ALIAS("of:N*T*Cqcom,ipq8074-qmp-usb3-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,ipq9574-qmp-usb3-phy");
MODULE_ALIAS("of:N*T*Cqcom,ipq9574-qmp-usb3-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,msm8996-qmp-usb3-phy");
MODULE_ALIAS("of:N*T*Cqcom,msm8996-qmp-usb3-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,qcs8300-qmp-usb3-uni-phy");
MODULE_ALIAS("of:N*T*Cqcom,qcs8300-qmp-usb3-uni-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,qdu1000-qmp-usb3-uni-phy");
MODULE_ALIAS("of:N*T*Cqcom,qdu1000-qmp-usb3-uni-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sa8775p-qmp-usb3-uni-phy");
MODULE_ALIAS("of:N*T*Cqcom,sa8775p-qmp-usb3-uni-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sc8180x-qmp-usb3-uni-phy");
MODULE_ALIAS("of:N*T*Cqcom,sc8180x-qmp-usb3-uni-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sc8280xp-qmp-usb3-uni-phy");
MODULE_ALIAS("of:N*T*Cqcom,sc8280xp-qmp-usb3-uni-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sdm845-qmp-usb3-uni-phy");
MODULE_ALIAS("of:N*T*Cqcom,sdm845-qmp-usb3-uni-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sdx55-qmp-usb3-uni-phy");
MODULE_ALIAS("of:N*T*Cqcom,sdx55-qmp-usb3-uni-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sdx65-qmp-usb3-uni-phy");
MODULE_ALIAS("of:N*T*Cqcom,sdx65-qmp-usb3-uni-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sdx75-qmp-usb3-uni-phy");
MODULE_ALIAS("of:N*T*Cqcom,sdx75-qmp-usb3-uni-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8150-qmp-usb3-uni-phy");
MODULE_ALIAS("of:N*T*Cqcom,sm8150-qmp-usb3-uni-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8250-qmp-usb3-uni-phy");
MODULE_ALIAS("of:N*T*Cqcom,sm8250-qmp-usb3-uni-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8350-qmp-usb3-uni-phy");
MODULE_ALIAS("of:N*T*Cqcom,sm8350-qmp-usb3-uni-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,x1e80100-qmp-usb3-uni-phy");
MODULE_ALIAS("of:N*T*Cqcom,x1e80100-qmp-usb3-uni-phyC*");

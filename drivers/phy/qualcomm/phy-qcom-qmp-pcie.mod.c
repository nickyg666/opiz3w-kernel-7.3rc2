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

MODULE_ALIAS("of:N*T*Cqcom,eliza-qmp-gen3x1-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,eliza-qmp-gen3x1-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,eliza-qmp-gen3x2-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,eliza-qmp-gen3x2-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,glymur-qmp-gen4x2-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,glymur-qmp-gen4x2-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,glymur-qmp-gen5x4-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,glymur-qmp-gen5x4-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,hawi-qmp-gen3x2-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,hawi-qmp-gen3x2-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,hawi-qmp-gen4x1-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,hawi-qmp-gen4x1-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,ipq5210-qmp-gen3x1-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,ipq5210-qmp-gen3x1-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,ipq6018-qmp-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,ipq6018-qmp-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,ipq8074-qmp-gen3-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,ipq8074-qmp-gen3-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,ipq8074-qmp-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,ipq8074-qmp-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,ipq9574-qmp-gen3x1-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,ipq9574-qmp-gen3x1-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,ipq9574-qmp-gen3x2-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,ipq9574-qmp-gen3x2-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,ipq9650-qmp-gen3x1-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,ipq9650-qmp-gen3x1-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,ipq9650-qmp-gen3x2-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,ipq9650-qmp-gen3x2-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,kaanapali-qmp-gen3x2-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,kaanapali-qmp-gen3x2-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,msm8998-qmp-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,msm8998-qmp-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,qcs615-qmp-gen3x1-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,qcs615-qmp-gen3x1-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,qcs8300-qmp-gen4x2-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,qcs8300-qmp-gen4x2-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sa8775p-qmp-gen4x2-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,sa8775p-qmp-gen4x2-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sa8775p-qmp-gen4x4-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,sa8775p-qmp-gen4x4-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sar2130p-qmp-gen3x2-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,sar2130p-qmp-gen3x2-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sc8180x-qmp-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,sc8180x-qmp-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sc8280xp-qmp-gen3x1-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,sc8280xp-qmp-gen3x1-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sc8280xp-qmp-gen3x2-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,sc8280xp-qmp-gen3x2-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sc8280xp-qmp-gen3x4-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,sc8280xp-qmp-gen3x4-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sdm845-qhp-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,sdm845-qhp-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sdm845-qmp-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,sdm845-qmp-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sdx55-qmp-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,sdx55-qmp-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sdx65-qmp-gen4x2-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,sdx65-qmp-gen4x2-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8150-qmp-gen3x1-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,sm8150-qmp-gen3x1-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8150-qmp-gen3x2-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,sm8150-qmp-gen3x2-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8250-qmp-gen3x1-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,sm8250-qmp-gen3x1-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8250-qmp-gen3x2-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,sm8250-qmp-gen3x2-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8250-qmp-modem-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,sm8250-qmp-modem-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8350-qmp-gen3x1-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,sm8350-qmp-gen3x1-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8350-qmp-gen3x2-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,sm8350-qmp-gen3x2-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8450-qmp-gen3x1-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,sm8450-qmp-gen3x1-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8450-qmp-gen4x2-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,sm8450-qmp-gen4x2-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8475-qmp-gen3x1-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,sm8475-qmp-gen3x1-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8550-qmp-gen3x2-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,sm8550-qmp-gen3x2-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8550-qmp-gen4x2-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,sm8550-qmp-gen4x2-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8650-qmp-gen3x2-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,sm8650-qmp-gen3x2-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8650-qmp-gen4x2-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,sm8650-qmp-gen4x2-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8750-qmp-gen3x2-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,sm8750-qmp-gen3x2-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,x1e80100-qmp-gen3x2-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,x1e80100-qmp-gen3x2-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,x1e80100-qmp-gen4x2-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,x1e80100-qmp-gen4x2-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,x1e80100-qmp-gen4x4-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,x1e80100-qmp-gen4x4-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,x1e80100-qmp-gen4x8-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,x1e80100-qmp-gen4x8-pcie-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,x1p42100-qmp-gen4x4-pcie-phy");
MODULE_ALIAS("of:N*T*Cqcom,x1p42100-qmp-gen4x4-pcie-phyC*");

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

KSYMTAB_FUNC(llcc_slice_getd, "");
SYMBOL_FLAGS(llcc_slice_getd, 0x01);
KSYMTAB_FUNC(llcc_slice_putd, "");
SYMBOL_FLAGS(llcc_slice_putd, 0x01);
KSYMTAB_FUNC(llcc_slice_activate, "");
SYMBOL_FLAGS(llcc_slice_activate, 0x01);
KSYMTAB_FUNC(llcc_slice_deactivate, "");
SYMBOL_FLAGS(llcc_slice_deactivate, 0x01);
KSYMTAB_FUNC(llcc_get_slice_id, "");
SYMBOL_FLAGS(llcc_get_slice_id, 0x01);
KSYMTAB_FUNC(llcc_get_slice_size, "");
SYMBOL_FLAGS(llcc_get_slice_size, 0x01);

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cqcom,eliza-llcc");
MODULE_ALIAS("of:N*T*Cqcom,eliza-llccC*");
MODULE_ALIAS("of:N*T*Cqcom,glymur-llcc");
MODULE_ALIAS("of:N*T*Cqcom,glymur-llccC*");
MODULE_ALIAS("of:N*T*Cqcom,hawi-llcc");
MODULE_ALIAS("of:N*T*Cqcom,hawi-llccC*");
MODULE_ALIAS("of:N*T*Cqcom,ipq5424-llcc");
MODULE_ALIAS("of:N*T*Cqcom,ipq5424-llccC*");
MODULE_ALIAS("of:N*T*Cqcom,kaanapali-llcc");
MODULE_ALIAS("of:N*T*Cqcom,kaanapali-llccC*");
MODULE_ALIAS("of:N*T*Cqcom,qcs615-llcc");
MODULE_ALIAS("of:N*T*Cqcom,qcs615-llccC*");
MODULE_ALIAS("of:N*T*Cqcom,qcs8300-llcc");
MODULE_ALIAS("of:N*T*Cqcom,qcs8300-llccC*");
MODULE_ALIAS("of:N*T*Cqcom,qdu1000-llcc");
MODULE_ALIAS("of:N*T*Cqcom,qdu1000-llccC*");
MODULE_ALIAS("of:N*T*Cqcom,sa8775p-llcc");
MODULE_ALIAS("of:N*T*Cqcom,sa8775p-llccC*");
MODULE_ALIAS("of:N*T*Cqcom,sar1130p-llcc");
MODULE_ALIAS("of:N*T*Cqcom,sar1130p-llccC*");
MODULE_ALIAS("of:N*T*Cqcom,sar2130p-llcc");
MODULE_ALIAS("of:N*T*Cqcom,sar2130p-llccC*");
MODULE_ALIAS("of:N*T*Cqcom,sc7180-llcc");
MODULE_ALIAS("of:N*T*Cqcom,sc7180-llccC*");
MODULE_ALIAS("of:N*T*Cqcom,sc7280-llcc");
MODULE_ALIAS("of:N*T*Cqcom,sc7280-llccC*");
MODULE_ALIAS("of:N*T*Cqcom,sc8180x-llcc");
MODULE_ALIAS("of:N*T*Cqcom,sc8180x-llccC*");
MODULE_ALIAS("of:N*T*Cqcom,sc8280xp-llcc");
MODULE_ALIAS("of:N*T*Cqcom,sc8280xp-llccC*");
MODULE_ALIAS("of:N*T*Cqcom,sdm670-llcc");
MODULE_ALIAS("of:N*T*Cqcom,sdm670-llccC*");
MODULE_ALIAS("of:N*T*Cqcom,sdm845-llcc");
MODULE_ALIAS("of:N*T*Cqcom,sdm845-llccC*");
MODULE_ALIAS("of:N*T*Cqcom,shikra-llcc");
MODULE_ALIAS("of:N*T*Cqcom,shikra-llccC*");
MODULE_ALIAS("of:N*T*Cqcom,sm6350-llcc");
MODULE_ALIAS("of:N*T*Cqcom,sm6350-llccC*");
MODULE_ALIAS("of:N*T*Cqcom,sm7150-llcc");
MODULE_ALIAS("of:N*T*Cqcom,sm7150-llccC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8150-llcc");
MODULE_ALIAS("of:N*T*Cqcom,sm8150-llccC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8250-llcc");
MODULE_ALIAS("of:N*T*Cqcom,sm8250-llccC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8350-llcc");
MODULE_ALIAS("of:N*T*Cqcom,sm8350-llccC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8450-llcc");
MODULE_ALIAS("of:N*T*Cqcom,sm8450-llccC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8550-llcc");
MODULE_ALIAS("of:N*T*Cqcom,sm8550-llccC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8650-llcc");
MODULE_ALIAS("of:N*T*Cqcom,sm8650-llccC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8750-llcc");
MODULE_ALIAS("of:N*T*Cqcom,sm8750-llccC*");
MODULE_ALIAS("of:N*T*Cqcom,x1e80100-llcc");
MODULE_ALIAS("of:N*T*Cqcom,x1e80100-llccC*");

#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(qcom_minidump, "");
SYMBOL_FLAGS(qcom_minidump, 0x01);
KSYMTAB_FUNC(qcom_add_glink_subdev, "");
SYMBOL_FLAGS(qcom_add_glink_subdev, 0x01);
KSYMTAB_FUNC(qcom_remove_glink_subdev, "");
SYMBOL_FLAGS(qcom_remove_glink_subdev, 0x01);
KSYMTAB_FUNC(qcom_register_dump_segments, "");
SYMBOL_FLAGS(qcom_register_dump_segments, 0x01);
KSYMTAB_FUNC(qcom_add_smd_subdev, "");
SYMBOL_FLAGS(qcom_add_smd_subdev, 0x01);
KSYMTAB_FUNC(qcom_remove_smd_subdev, "");
SYMBOL_FLAGS(qcom_remove_smd_subdev, 0x01);
KSYMTAB_FUNC(qcom_register_ssr_notifier, "");
SYMBOL_FLAGS(qcom_register_ssr_notifier, 0x01);
KSYMTAB_FUNC(qcom_unregister_ssr_notifier, "");
SYMBOL_FLAGS(qcom_unregister_ssr_notifier, 0x01);
KSYMTAB_FUNC(qcom_add_ssr_subdev, "");
SYMBOL_FLAGS(qcom_add_ssr_subdev, 0x01);
KSYMTAB_FUNC(qcom_remove_ssr_subdev, "");
SYMBOL_FLAGS(qcom_remove_ssr_subdev, 0x01);
KSYMTAB_FUNC(qcom_add_pdm_subdev, "");
SYMBOL_FLAGS(qcom_add_pdm_subdev, 0x01);
KSYMTAB_FUNC(qcom_remove_pdm_subdev, "");
SYMBOL_FLAGS(qcom_remove_pdm_subdev, 0x01);

MODULE_INFO(depends, "qcom_glink_smem");


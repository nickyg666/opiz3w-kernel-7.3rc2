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

KSYMTAB_FUNC(qcom_vadc_scale, "");
SYMBOL_FLAGS(qcom_vadc_scale, 0x00);
KSYMTAB_FUNC(qcom_adc_tm5_temp_volt_scale, "");
SYMBOL_FLAGS(qcom_adc_tm5_temp_volt_scale, 0x00);
KSYMTAB_FUNC(qcom_adc_tm5_gen2_temp_res_scale, "");
SYMBOL_FLAGS(qcom_adc_tm5_gen2_temp_res_scale, 0x00);
KSYMTAB_FUNC(qcom_adc5_hw_scale, "");
SYMBOL_FLAGS(qcom_adc5_hw_scale, 0x00);
KSYMTAB_FUNC(qcom_adc5_prescaling_from_dt, "");
SYMBOL_FLAGS(qcom_adc5_prescaling_from_dt, 0x00);
KSYMTAB_FUNC(qcom_adc5_hw_settle_time_from_dt, "");
SYMBOL_FLAGS(qcom_adc5_hw_settle_time_from_dt, 0x00);
KSYMTAB_FUNC(qcom_adc5_avg_samples_from_dt, "");
SYMBOL_FLAGS(qcom_adc5_avg_samples_from_dt, 0x00);
KSYMTAB_FUNC(qcom_adc5_decimation_from_dt, "");
SYMBOL_FLAGS(qcom_adc5_decimation_from_dt, 0x00);
KSYMTAB_FUNC(qcom_vadc_decimation_from_dt, "");
SYMBOL_FLAGS(qcom_vadc_decimation_from_dt, 0x00);

MODULE_INFO(depends, "");


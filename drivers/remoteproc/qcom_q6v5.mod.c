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

KSYMTAB_FUNC(qcom_q6v5_prepare, "");
SYMBOL_FLAGS(qcom_q6v5_prepare, 0x01);
KSYMTAB_FUNC(qcom_q6v5_unprepare, "");
SYMBOL_FLAGS(qcom_q6v5_unprepare, 0x01);
KSYMTAB_FUNC(qcom_q6v5_wait_for_start, "");
SYMBOL_FLAGS(qcom_q6v5_wait_for_start, 0x01);
KSYMTAB_FUNC(qcom_q6v5_request_stop, "");
SYMBOL_FLAGS(qcom_q6v5_request_stop, 0x01);
KSYMTAB_FUNC(qcom_q6v5_panic, "");
SYMBOL_FLAGS(qcom_q6v5_panic, 0x01);
KSYMTAB_FUNC(qcom_q6v5_init, "");
SYMBOL_FLAGS(qcom_q6v5_init, 0x01);
KSYMTAB_FUNC(qcom_q6v5_deinit, "");
SYMBOL_FLAGS(qcom_q6v5_deinit, 0x01);

MODULE_INFO(depends, "qcom_sysmon");


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

KSYMTAB_FUNC(qcom_add_sysmon_subdev, "");
SYMBOL_FLAGS(qcom_add_sysmon_subdev, 0x01);
KSYMTAB_FUNC(qcom_remove_sysmon_subdev, "");
SYMBOL_FLAGS(qcom_remove_sysmon_subdev, 0x01);
KSYMTAB_FUNC(qcom_sysmon_shutdown_acked, "");
SYMBOL_FLAGS(qcom_sysmon_shutdown_acked, 0x01);
KSYMTAB_FUNC(qcom_sysmon_shutdown_irq_state, "");
SYMBOL_FLAGS(qcom_sysmon_shutdown_irq_state, 0x01);

MODULE_INFO(depends, "qmi_helpers");


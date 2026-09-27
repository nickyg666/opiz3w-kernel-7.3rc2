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

KSYMTAB_FUNC(qcom_pbs_trigger_event, "");
SYMBOL_FLAGS(qcom_pbs_trigger_event, 0x01);
KSYMTAB_FUNC(get_pbs_client_device, "");
SYMBOL_FLAGS(get_pbs_client_device, 0x01);

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cqcom,pbs");
MODULE_ALIAS("of:N*T*Cqcom,pbsC*");

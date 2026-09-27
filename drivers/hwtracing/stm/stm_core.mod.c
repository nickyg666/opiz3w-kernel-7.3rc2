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

KSYMTAB_FUNC(stm_register_protocol, "");
SYMBOL_FLAGS(stm_register_protocol, 0x01);
KSYMTAB_FUNC(stm_unregister_protocol, "");
SYMBOL_FLAGS(stm_unregister_protocol, 0x01);
KSYMTAB_FUNC(stm_data_write, "");
SYMBOL_FLAGS(stm_data_write, 0x01);
KSYMTAB_FUNC(stm_register_device, "");
SYMBOL_FLAGS(stm_register_device, 0x01);
KSYMTAB_FUNC(stm_unregister_device, "");
SYMBOL_FLAGS(stm_unregister_device, 0x01);
KSYMTAB_FUNC(stm_source_register_device, "");
SYMBOL_FLAGS(stm_source_register_device, 0x01);
KSYMTAB_FUNC(stm_source_unregister_device, "");
SYMBOL_FLAGS(stm_source_unregister_device, 0x01);
KSYMTAB_FUNC(stm_source_write, "");
SYMBOL_FLAGS(stm_source_write, 0x01);
KSYMTAB_FUNC(to_pdrv_policy_node, "");
SYMBOL_FLAGS(to_pdrv_policy_node, 0x01);

MODULE_INFO(depends, "");


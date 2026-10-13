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

KSYMTAB_FUNC(of_dp_aux_depopulate_bus, "");
SYMBOL_FLAGS(of_dp_aux_depopulate_bus, 0x01);
KSYMTAB_FUNC(of_dp_aux_populate_bus, "");
SYMBOL_FLAGS(of_dp_aux_populate_bus, 0x01);
KSYMTAB_FUNC(devm_of_dp_aux_populate_bus, "");
SYMBOL_FLAGS(devm_of_dp_aux_populate_bus, 0x01);
KSYMTAB_FUNC(__dp_aux_dp_driver_register, "");
SYMBOL_FLAGS(__dp_aux_dp_driver_register, 0x01);
KSYMTAB_FUNC(dp_aux_dp_driver_unregister, "");
SYMBOL_FLAGS(dp_aux_dp_driver_unregister, 0x01);

MODULE_INFO(depends, "");


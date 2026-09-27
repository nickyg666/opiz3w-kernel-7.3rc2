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

KSYMTAB_FUNC(fpga_bridge_enable, "");
SYMBOL_FLAGS(fpga_bridge_enable, 0x01);
KSYMTAB_FUNC(fpga_bridge_disable, "");
SYMBOL_FLAGS(fpga_bridge_disable, 0x01);
KSYMTAB_FUNC(of_fpga_bridge_get, "");
SYMBOL_FLAGS(of_fpga_bridge_get, 0x01);
KSYMTAB_FUNC(fpga_bridge_get, "");
SYMBOL_FLAGS(fpga_bridge_get, 0x01);
KSYMTAB_FUNC(fpga_bridge_put, "");
SYMBOL_FLAGS(fpga_bridge_put, 0x01);
KSYMTAB_FUNC(fpga_bridges_enable, "");
SYMBOL_FLAGS(fpga_bridges_enable, 0x01);
KSYMTAB_FUNC(fpga_bridges_disable, "");
SYMBOL_FLAGS(fpga_bridges_disable, 0x01);
KSYMTAB_FUNC(fpga_bridges_put, "");
SYMBOL_FLAGS(fpga_bridges_put, 0x01);
KSYMTAB_FUNC(of_fpga_bridge_get_to_list, "");
SYMBOL_FLAGS(of_fpga_bridge_get_to_list, 0x01);
KSYMTAB_FUNC(fpga_bridge_get_to_list, "");
SYMBOL_FLAGS(fpga_bridge_get_to_list, 0x01);
KSYMTAB_FUNC(__fpga_bridge_register, "");
SYMBOL_FLAGS(__fpga_bridge_register, 0x01);
KSYMTAB_FUNC(fpga_bridge_unregister, "");
SYMBOL_FLAGS(fpga_bridge_unregister, 0x01);

MODULE_INFO(depends, "");


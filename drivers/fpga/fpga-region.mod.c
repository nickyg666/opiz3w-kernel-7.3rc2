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

KSYMTAB_FUNC(fpga_region_class_find, "");
SYMBOL_FLAGS(fpga_region_class_find, 0x01);
KSYMTAB_FUNC(fpga_region_program_fpga, "");
SYMBOL_FLAGS(fpga_region_program_fpga, 0x01);
KSYMTAB_FUNC(__fpga_region_register_full, "");
SYMBOL_FLAGS(__fpga_region_register_full, 0x01);
KSYMTAB_FUNC(__fpga_region_register, "");
SYMBOL_FLAGS(__fpga_region_register, 0x01);
KSYMTAB_FUNC(fpga_region_unregister, "");
SYMBOL_FLAGS(fpga_region_unregister, 0x01);

MODULE_INFO(depends, "fpga-bridge");


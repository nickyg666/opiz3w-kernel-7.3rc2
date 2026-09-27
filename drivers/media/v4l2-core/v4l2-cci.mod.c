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

KSYMTAB_FUNC(cci_read, "");
SYMBOL_FLAGS(cci_read, 0x01);
KSYMTAB_FUNC(cci_write, "");
SYMBOL_FLAGS(cci_write, 0x01);
KSYMTAB_FUNC(cci_update_bits, "");
SYMBOL_FLAGS(cci_update_bits, 0x01);
KSYMTAB_FUNC(cci_multi_reg_write, "");
SYMBOL_FLAGS(cci_multi_reg_write, 0x01);
KSYMTAB_FUNC(devm_cci_regmap_init_i2c, "");
SYMBOL_FLAGS(devm_cci_regmap_init_i2c, 0x01);

MODULE_INFO(depends, "");


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

KSYMTAB_DATA(mcp23x08_regmap, "");
SYMBOL_FLAGS(mcp23x08_regmap, 0x01);
KSYMTAB_DATA(mcp23x17_regmap, "");
SYMBOL_FLAGS(mcp23x17_regmap, 0x01);
KSYMTAB_FUNC(mcp23s08_probe_one, "");
SYMBOL_FLAGS(mcp23s08_probe_one, 0x01);

MODULE_INFO(depends, "");


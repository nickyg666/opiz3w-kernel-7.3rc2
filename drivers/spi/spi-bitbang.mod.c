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

KSYMTAB_FUNC(spi_bitbang_setup_transfer, "");
SYMBOL_FLAGS(spi_bitbang_setup_transfer, 0x01);
KSYMTAB_FUNC(spi_bitbang_setup, "");
SYMBOL_FLAGS(spi_bitbang_setup, 0x01);
KSYMTAB_FUNC(spi_bitbang_cleanup, "");
SYMBOL_FLAGS(spi_bitbang_cleanup, 0x01);
KSYMTAB_FUNC(spi_bitbang_init, "");
SYMBOL_FLAGS(spi_bitbang_init, 0x01);
KSYMTAB_FUNC(spi_bitbang_start, "");
SYMBOL_FLAGS(spi_bitbang_start, 0x01);
KSYMTAB_FUNC(spi_bitbang_stop, "");
SYMBOL_FLAGS(spi_bitbang_stop, 0x01);

MODULE_INFO(depends, "");


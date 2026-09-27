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

KSYMTAB_FUNC(iio_kfifo_allocate, "");
SYMBOL_FLAGS(iio_kfifo_allocate, 0x00);
KSYMTAB_FUNC(iio_kfifo_free, "");
SYMBOL_FLAGS(iio_kfifo_free, 0x00);
KSYMTAB_FUNC(devm_iio_kfifo_buffer_setup_ext, "");
SYMBOL_FLAGS(devm_iio_kfifo_buffer_setup_ext, 0x01);

MODULE_INFO(depends, "");


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

KSYMTAB_FUNC(iio_triggered_buffer_setup_ext, "");
SYMBOL_FLAGS(iio_triggered_buffer_setup_ext, 0x00);
KSYMTAB_FUNC(iio_triggered_buffer_cleanup, "");
SYMBOL_FLAGS(iio_triggered_buffer_cleanup, 0x00);
KSYMTAB_FUNC(devm_iio_triggered_buffer_setup_ext, "");
SYMBOL_FLAGS(devm_iio_triggered_buffer_setup_ext, 0x01);

MODULE_INFO(depends, "kfifo_buf");


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

KSYMTAB_FUNC(qca_read_soc_version, "");
SYMBOL_FLAGS(qca_read_soc_version, 0x01);
KSYMTAB_FUNC(qca_send_pre_shutdown_cmd, "");
SYMBOL_FLAGS(qca_send_pre_shutdown_cmd, 0x01);
KSYMTAB_FUNC(qca_set_bdaddr_rome, "");
SYMBOL_FLAGS(qca_set_bdaddr_rome, 0x01);
KSYMTAB_FUNC(qca_uart_setup, "");
SYMBOL_FLAGS(qca_uart_setup, 0x01);
KSYMTAB_FUNC(qca_set_bdaddr, "");
SYMBOL_FLAGS(qca_set_bdaddr, 0x01);

MODULE_INFO(depends, "bluetooth");


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

KSYMTAB_FUNC(qmi_encode_message, "");
SYMBOL_FLAGS(qmi_encode_message, 0x01);
KSYMTAB_FUNC(qmi_decode_message, "");
SYMBOL_FLAGS(qmi_decode_message, 0x01);
KSYMTAB_DATA(qmi_response_type_v01_ei, "");
SYMBOL_FLAGS(qmi_response_type_v01_ei, 0x01);
KSYMTAB_FUNC(qmi_add_lookup, "");
SYMBOL_FLAGS(qmi_add_lookup, 0x01);
KSYMTAB_FUNC(qmi_add_server, "");
SYMBOL_FLAGS(qmi_add_server, 0x01);
KSYMTAB_FUNC(qmi_txn_init, "");
SYMBOL_FLAGS(qmi_txn_init, 0x01);
KSYMTAB_FUNC(qmi_txn_wait, "");
SYMBOL_FLAGS(qmi_txn_wait, 0x01);
KSYMTAB_FUNC(qmi_txn_cancel, "");
SYMBOL_FLAGS(qmi_txn_cancel, 0x01);
KSYMTAB_FUNC(qmi_handle_init, "");
SYMBOL_FLAGS(qmi_handle_init, 0x01);
KSYMTAB_FUNC(qmi_handle_release, "");
SYMBOL_FLAGS(qmi_handle_release, 0x01);
KSYMTAB_FUNC(qmi_send_request, "");
SYMBOL_FLAGS(qmi_send_request, 0x01);
KSYMTAB_FUNC(qmi_send_response, "");
SYMBOL_FLAGS(qmi_send_response, 0x01);
KSYMTAB_FUNC(qmi_send_indication, "");
SYMBOL_FLAGS(qmi_send_indication, 0x01);

MODULE_INFO(depends, "");


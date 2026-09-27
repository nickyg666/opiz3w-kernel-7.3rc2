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

KSYMTAB_FUNC(rndis_borrow_net, "");
SYMBOL_FLAGS(rndis_borrow_net, 0x01);
KSYMTAB_FUNC(rndis_signal_connect, "");
SYMBOL_FLAGS(rndis_signal_connect, 0x01);
KSYMTAB_FUNC(rndis_signal_disconnect, "");
SYMBOL_FLAGS(rndis_signal_disconnect, 0x01);
KSYMTAB_FUNC(rndis_uninit, "");
SYMBOL_FLAGS(rndis_uninit, 0x01);
KSYMTAB_FUNC(rndis_set_host_mac, "");
SYMBOL_FLAGS(rndis_set_host_mac, 0x01);
KSYMTAB_FUNC(rndis_msg_parser, "");
SYMBOL_FLAGS(rndis_msg_parser, 0x01);
KSYMTAB_FUNC(rndis_register, "");
SYMBOL_FLAGS(rndis_register, 0x01);
KSYMTAB_FUNC(rndis_deregister, "");
SYMBOL_FLAGS(rndis_deregister, 0x01);
KSYMTAB_FUNC(rndis_set_param_dev, "");
SYMBOL_FLAGS(rndis_set_param_dev, 0x01);
KSYMTAB_FUNC(rndis_set_param_vendor, "");
SYMBOL_FLAGS(rndis_set_param_vendor, 0x01);
KSYMTAB_FUNC(rndis_set_param_medium, "");
SYMBOL_FLAGS(rndis_set_param_medium, 0x01);
KSYMTAB_FUNC(rndis_add_hdr, "");
SYMBOL_FLAGS(rndis_add_hdr, 0x01);
KSYMTAB_FUNC(rndis_free_response, "");
SYMBOL_FLAGS(rndis_free_response, 0x01);
KSYMTAB_FUNC(rndis_get_next_response, "");
SYMBOL_FLAGS(rndis_get_next_response, 0x01);
KSYMTAB_FUNC(rndis_rm_hdr, "");
SYMBOL_FLAGS(rndis_rm_hdr, 0x01);

MODULE_INFO(depends, "libcomposite,u_ether");


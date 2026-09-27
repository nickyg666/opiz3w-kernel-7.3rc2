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

KSYMTAB_FUNC(tcpm_pd_transmit_complete, "");
SYMBOL_FLAGS(tcpm_pd_transmit_complete, 0x01);
KSYMTAB_FUNC(tcpm_pd_receive, "");
SYMBOL_FLAGS(tcpm_pd_receive, 0x01);
KSYMTAB_FUNC(tcpm_cc_change, "");
SYMBOL_FLAGS(tcpm_cc_change, 0x01);
KSYMTAB_FUNC(tcpm_vbus_change, "");
SYMBOL_FLAGS(tcpm_vbus_change, 0x01);
KSYMTAB_FUNC(tcpm_pd_hard_reset, "");
SYMBOL_FLAGS(tcpm_pd_hard_reset, 0x01);
KSYMTAB_FUNC(tcpm_sink_frs, "");
SYMBOL_FLAGS(tcpm_sink_frs, 0x01);
KSYMTAB_FUNC(tcpm_sourcing_vbus, "");
SYMBOL_FLAGS(tcpm_sourcing_vbus, 0x01);
KSYMTAB_FUNC(tcpm_port_clean, "");
SYMBOL_FLAGS(tcpm_port_clean, 0x01);
KSYMTAB_FUNC(tcpm_port_is_toggling, "");
SYMBOL_FLAGS(tcpm_port_is_toggling, 0x01);
KSYMTAB_FUNC(tcpm_port_error_recovery, "");
SYMBOL_FLAGS(tcpm_port_error_recovery, 0x01);
KSYMTAB_FUNC(tcpm_tcpc_reset, "");
SYMBOL_FLAGS(tcpm_tcpc_reset, 0x01);
KSYMTAB_FUNC(tcpm_register_port, "");
SYMBOL_FLAGS(tcpm_register_port, 0x01);
KSYMTAB_FUNC(tcpm_unregister_port, "");
SYMBOL_FLAGS(tcpm_unregister_port, 0x01);

MODULE_INFO(depends, "typec");


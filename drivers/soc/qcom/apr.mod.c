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

KSYMTAB_FUNC(apr_send_pkt, "");
SYMBOL_FLAGS(apr_send_pkt, 0x01);
KSYMTAB_FUNC(gpr_free_port, "");
SYMBOL_FLAGS(gpr_free_port, 0x01);
KSYMTAB_FUNC(gpr_alloc_port, "");
SYMBOL_FLAGS(gpr_alloc_port, 0x01);
KSYMTAB_FUNC(gpr_send_pkt, "");
SYMBOL_FLAGS(gpr_send_pkt, 0x01);
KSYMTAB_FUNC(gpr_send_port_pkt, "");
SYMBOL_FLAGS(gpr_send_port_pkt, 0x01);
KSYMTAB_DATA(aprbus, "");
SYMBOL_FLAGS(aprbus, 0x01);
KSYMTAB_FUNC(__apr_driver_register, "");
SYMBOL_FLAGS(__apr_driver_register, 0x01);
KSYMTAB_FUNC(apr_driver_unregister, "");
SYMBOL_FLAGS(apr_driver_unregister, 0x01);

MODULE_INFO(depends, "pdr_interface");

MODULE_ALIAS("of:N*T*Cqcom,apr");
MODULE_ALIAS("of:N*T*Cqcom,aprC*");
MODULE_ALIAS("of:N*T*Cqcom,apr-v2");
MODULE_ALIAS("of:N*T*Cqcom,apr-v2C*");
MODULE_ALIAS("of:N*T*Cqcom,gpr");
MODULE_ALIAS("of:N*T*Cqcom,gprC*");

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

KSYMTAB_FUNC(tcpci_get_tcpm_port, "");
SYMBOL_FLAGS(tcpci_get_tcpm_port, 0x01);
KSYMTAB_FUNC(tcpci_irq, "");
SYMBOL_FLAGS(tcpci_irq, 0x01);
KSYMTAB_FUNC(tcpci_register_port, "");
SYMBOL_FLAGS(tcpci_register_port, 0x01);
KSYMTAB_FUNC(tcpci_unregister_port, "");
SYMBOL_FLAGS(tcpci_unregister_port, 0x01);

MODULE_INFO(depends, "tcpm");

MODULE_ALIAS("of:N*T*Cnxp,ptn5110");
MODULE_ALIAS("of:N*T*Cnxp,ptn5110C*");
MODULE_ALIAS("of:N*T*Ctcpci");
MODULE_ALIAS("of:N*T*CtcpciC*");
MODULE_ALIAS("i2c:tcpci");

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

KSYMTAB_FUNC(nxp_nci_probe, "");
SYMBOL_FLAGS(nxp_nci_probe, 0x00);
KSYMTAB_FUNC(nxp_nci_remove, "");
SYMBOL_FLAGS(nxp_nci_remove, 0x00);
KSYMTAB_FUNC(nxp_nci_fw_recv_frame, "");
SYMBOL_FLAGS(nxp_nci_fw_recv_frame, 0x00);

MODULE_INFO(depends, "nci,nfc");


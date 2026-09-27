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

KSYMTAB_FUNC(s3fwrn5_probe, "");
SYMBOL_FLAGS(s3fwrn5_probe, 0x00);
KSYMTAB_FUNC(s3fwrn5_remove, "");
SYMBOL_FLAGS(s3fwrn5_remove, 0x00);
KSYMTAB_FUNC(s3fwrn5_recv_frame, "");
SYMBOL_FLAGS(s3fwrn5_recv_frame, 0x00);
KSYMTAB_FUNC(s3fwrn5_phy_set_wake, "");
SYMBOL_FLAGS(s3fwrn5_phy_set_wake, 0x00);
KSYMTAB_FUNC(s3fwrn5_phy_power_ctrl, "");
SYMBOL_FLAGS(s3fwrn5_phy_power_ctrl, 0x00);
KSYMTAB_FUNC(s3fwrn5_phy_set_mode, "");
SYMBOL_FLAGS(s3fwrn5_phy_set_mode, 0x00);
KSYMTAB_FUNC(s3fwrn5_phy_get_mode, "");
SYMBOL_FLAGS(s3fwrn5_phy_get_mode, 0x00);

MODULE_INFO(depends, "nci");


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

KSYMTAB_FUNC(icss_iep_get_count_hi, "");
SYMBOL_FLAGS(icss_iep_get_count_hi, 0x01);
KSYMTAB_FUNC(icss_iep_get_count_low, "");
SYMBOL_FLAGS(icss_iep_get_count_low, 0x01);
KSYMTAB_FUNC(icss_iep_get_ptp_clock_idx, "");
SYMBOL_FLAGS(icss_iep_get_ptp_clock_idx, 0x01);
KSYMTAB_FUNC(icss_iep_get_idx, "");
SYMBOL_FLAGS(icss_iep_get_idx, 0x01);
KSYMTAB_FUNC(icss_iep_get, "");
SYMBOL_FLAGS(icss_iep_get, 0x01);
KSYMTAB_FUNC(icss_iep_put, "");
SYMBOL_FLAGS(icss_iep_put, 0x01);
KSYMTAB_FUNC(icss_iep_init_fw, "");
SYMBOL_FLAGS(icss_iep_init_fw, 0x01);
KSYMTAB_FUNC(icss_iep_exit_fw, "");
SYMBOL_FLAGS(icss_iep_exit_fw, 0x01);
KSYMTAB_FUNC(icss_iep_init, "");
SYMBOL_FLAGS(icss_iep_init, 0x01);
KSYMTAB_FUNC(icss_iep_exit, "");
SYMBOL_FLAGS(icss_iep_exit, 0x01);

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,am654-icss-iep");
MODULE_ALIAS("of:N*T*Cti,am654-icss-iepC*");
MODULE_ALIAS("of:N*T*Cti,am5728-icss-iep");
MODULE_ALIAS("of:N*T*Cti,am5728-icss-iepC*");
MODULE_ALIAS("of:N*T*Cti,am4376-icss-iep");
MODULE_ALIAS("of:N*T*Cti,am4376-icss-iepC*");
MODULE_ALIAS("of:N*T*Cti,am3356-icss-iep");
MODULE_ALIAS("of:N*T*Cti,am3356-icss-iepC*");

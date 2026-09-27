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

KSYMTAB_FUNC(extts_clean_up, "");
SYMBOL_FLAGS(extts_clean_up, 0x01);
KSYMTAB_FUNC(ptp_qoriq_isr, "");
SYMBOL_FLAGS(ptp_qoriq_isr, 0x01);
KSYMTAB_FUNC(ptp_qoriq_adjfine, "");
SYMBOL_FLAGS(ptp_qoriq_adjfine, 0x01);
KSYMTAB_FUNC(ptp_qoriq_adjtime, "");
SYMBOL_FLAGS(ptp_qoriq_adjtime, 0x01);
KSYMTAB_FUNC(ptp_qoriq_gettime, "");
SYMBOL_FLAGS(ptp_qoriq_gettime, 0x01);
KSYMTAB_FUNC(ptp_qoriq_settime, "");
SYMBOL_FLAGS(ptp_qoriq_settime, 0x01);
KSYMTAB_FUNC(ptp_qoriq_enable, "");
SYMBOL_FLAGS(ptp_qoriq_enable, 0x01);
KSYMTAB_FUNC(ptp_qoriq_init, "");
SYMBOL_FLAGS(ptp_qoriq_init, 0x01);
KSYMTAB_FUNC(ptp_qoriq_free, "");
SYMBOL_FLAGS(ptp_qoriq_free, 0x01);

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,etsec-ptp");
MODULE_ALIAS("of:N*T*Cfsl,etsec-ptpC*");
MODULE_ALIAS("of:N*T*Cfsl,fman-ptp-timer");
MODULE_ALIAS("of:N*T*Cfsl,fman-ptp-timerC*");

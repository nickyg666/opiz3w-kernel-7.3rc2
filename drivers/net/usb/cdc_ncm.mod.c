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

KSYMTAB_FUNC(cdc_ncm_change_mtu, "");
SYMBOL_FLAGS(cdc_ncm_change_mtu, 0x01);
KSYMTAB_FUNC(cdc_ncm_bind_common, "");
SYMBOL_FLAGS(cdc_ncm_bind_common, 0x01);
KSYMTAB_FUNC(cdc_ncm_unbind, "");
SYMBOL_FLAGS(cdc_ncm_unbind, 0x01);
KSYMTAB_FUNC(cdc_ncm_select_altsetting, "");
SYMBOL_FLAGS(cdc_ncm_select_altsetting, 0x01);
KSYMTAB_FUNC(cdc_ncm_fill_tx_frame, "");
SYMBOL_FLAGS(cdc_ncm_fill_tx_frame, 0x01);
KSYMTAB_FUNC(cdc_ncm_tx_fixup, "");
SYMBOL_FLAGS(cdc_ncm_tx_fixup, 0x01);
KSYMTAB_FUNC(cdc_ncm_rx_verify_nth16, "");
SYMBOL_FLAGS(cdc_ncm_rx_verify_nth16, 0x01);
KSYMTAB_FUNC(cdc_ncm_rx_verify_nth32, "");
SYMBOL_FLAGS(cdc_ncm_rx_verify_nth32, 0x01);
KSYMTAB_FUNC(cdc_ncm_rx_verify_ndp16, "");
SYMBOL_FLAGS(cdc_ncm_rx_verify_ndp16, 0x01);
KSYMTAB_FUNC(cdc_ncm_rx_verify_ndp32, "");
SYMBOL_FLAGS(cdc_ncm_rx_verify_ndp32, 0x01);
KSYMTAB_FUNC(cdc_ncm_rx_fixup, "");
SYMBOL_FLAGS(cdc_ncm_rx_fixup, 0x01);

MODULE_INFO(depends, "cdc_ether,usbnet");

MODULE_ALIAS("usb:v05ACp12A8d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v05ACp12A8d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05ACp12ABd*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v05ACp12ABd*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05ACp1902d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v05ACp1902d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v05ACp1905d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v05ACp1905d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1BC7p0036d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BBd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BCd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1519p0443d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1546p1010d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v8087p095Ad*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v17E9p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");

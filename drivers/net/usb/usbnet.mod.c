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

KSYMTAB_FUNC(usbnet_get_endpoints, "");
SYMBOL_FLAGS(usbnet_get_endpoints, 0x01);
KSYMTAB_FUNC(usbnet_get_ethernet_addr, "");
SYMBOL_FLAGS(usbnet_get_ethernet_addr, 0x01);
KSYMTAB_FUNC(usbnet_status_start, "");
SYMBOL_FLAGS(usbnet_status_start, 0x01);
KSYMTAB_FUNC(usbnet_status_stop, "");
SYMBOL_FLAGS(usbnet_status_stop, 0x01);
KSYMTAB_FUNC(usbnet_skb_return, "");
SYMBOL_FLAGS(usbnet_skb_return, 0x01);
KSYMTAB_FUNC(usbnet_update_max_qlen, "");
SYMBOL_FLAGS(usbnet_update_max_qlen, 0x01);
KSYMTAB_FUNC(usbnet_change_mtu, "");
SYMBOL_FLAGS(usbnet_change_mtu, 0x01);
KSYMTAB_FUNC(usbnet_defer_kevent, "");
SYMBOL_FLAGS(usbnet_defer_kevent, 0x01);
KSYMTAB_FUNC(usbnet_pause_rx, "");
SYMBOL_FLAGS(usbnet_pause_rx, 0x01);
KSYMTAB_FUNC(usbnet_resume_rx, "");
SYMBOL_FLAGS(usbnet_resume_rx, 0x01);
KSYMTAB_FUNC(usbnet_purge_paused_rxq, "");
SYMBOL_FLAGS(usbnet_purge_paused_rxq, 0x01);
KSYMTAB_FUNC(usbnet_unlink_rx_urbs, "");
SYMBOL_FLAGS(usbnet_unlink_rx_urbs, 0x01);
KSYMTAB_FUNC(usbnet_stop, "");
SYMBOL_FLAGS(usbnet_stop, 0x01);
KSYMTAB_FUNC(usbnet_open, "");
SYMBOL_FLAGS(usbnet_open, 0x01);
KSYMTAB_FUNC(usbnet_get_link_ksettings_mii, "");
SYMBOL_FLAGS(usbnet_get_link_ksettings_mii, 0x01);
KSYMTAB_FUNC(usbnet_get_link_ksettings_internal, "");
SYMBOL_FLAGS(usbnet_get_link_ksettings_internal, 0x01);
KSYMTAB_FUNC(usbnet_set_link_ksettings_mii, "");
SYMBOL_FLAGS(usbnet_set_link_ksettings_mii, 0x01);
KSYMTAB_FUNC(usbnet_get_link, "");
SYMBOL_FLAGS(usbnet_get_link, 0x01);
KSYMTAB_FUNC(usbnet_nway_reset, "");
SYMBOL_FLAGS(usbnet_nway_reset, 0x01);
KSYMTAB_FUNC(usbnet_mii_ioctl, "");
SYMBOL_FLAGS(usbnet_mii_ioctl, 0x01);
KSYMTAB_FUNC(usbnet_get_drvinfo, "");
SYMBOL_FLAGS(usbnet_get_drvinfo, 0x01);
KSYMTAB_FUNC(usbnet_get_msglevel, "");
SYMBOL_FLAGS(usbnet_get_msglevel, 0x01);
KSYMTAB_FUNC(usbnet_set_msglevel, "");
SYMBOL_FLAGS(usbnet_set_msglevel, 0x01);
KSYMTAB_FUNC(usbnet_set_rx_mode, "");
SYMBOL_FLAGS(usbnet_set_rx_mode, 0x01);
KSYMTAB_FUNC(usbnet_tx_timeout, "");
SYMBOL_FLAGS(usbnet_tx_timeout, 0x01);
KSYMTAB_FUNC(usbnet_start_xmit, "");
SYMBOL_FLAGS(usbnet_start_xmit, 0x01);
KSYMTAB_FUNC(usbnet_disconnect, "");
SYMBOL_FLAGS(usbnet_disconnect, 0x01);
KSYMTAB_FUNC(usbnet_probe, "");
SYMBOL_FLAGS(usbnet_probe, 0x01);
KSYMTAB_FUNC(usbnet_suspend, "");
SYMBOL_FLAGS(usbnet_suspend, 0x01);
KSYMTAB_FUNC(usbnet_resume, "");
SYMBOL_FLAGS(usbnet_resume, 0x01);
KSYMTAB_FUNC(usbnet_device_suggests_idle, "");
SYMBOL_FLAGS(usbnet_device_suggests_idle, 0x00);
KSYMTAB_FUNC(usbnet_manage_power, "");
SYMBOL_FLAGS(usbnet_manage_power, 0x00);
KSYMTAB_FUNC(usbnet_link_change, "");
SYMBOL_FLAGS(usbnet_link_change, 0x00);
KSYMTAB_FUNC(usbnet_read_cmd, "");
SYMBOL_FLAGS(usbnet_read_cmd, 0x01);
KSYMTAB_FUNC(usbnet_write_cmd, "");
SYMBOL_FLAGS(usbnet_write_cmd, 0x01);
KSYMTAB_FUNC(usbnet_read_cmd_nopm, "");
SYMBOL_FLAGS(usbnet_read_cmd_nopm, 0x01);
KSYMTAB_FUNC(usbnet_write_cmd_nopm, "");
SYMBOL_FLAGS(usbnet_write_cmd_nopm, 0x01);
KSYMTAB_FUNC(usbnet_write_cmd_async, "");
SYMBOL_FLAGS(usbnet_write_cmd_async, 0x01);

MODULE_INFO(depends, "mii");


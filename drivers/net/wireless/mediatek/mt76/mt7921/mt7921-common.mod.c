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

KSYMTAB_FUNC(mt7921_rx_check, "");
SYMBOL_FLAGS(mt7921_rx_check, 0x01);
KSYMTAB_FUNC(mt7921_queue_rx_skb, "");
SYMBOL_FLAGS(mt7921_queue_rx_skb, 0x01);
KSYMTAB_FUNC(mt7921_usb_sdio_tx_prepare_skb, "");
SYMBOL_FLAGS(mt7921_usb_sdio_tx_prepare_skb, 0x01);
KSYMTAB_FUNC(mt7921_usb_sdio_tx_complete_skb, "");
SYMBOL_FLAGS(mt7921_usb_sdio_tx_complete_skb, 0x01);
KSYMTAB_FUNC(mt7921_usb_sdio_tx_status_data, "");
SYMBOL_FLAGS(mt7921_usb_sdio_tx_status_data, 0x01);
KSYMTAB_FUNC(mt7921_mcu_parse_response, "");
SYMBOL_FLAGS(mt7921_mcu_parse_response, 0x01);
KSYMTAB_FUNC(mt7921_run_firmware, "");
SYMBOL_FLAGS(mt7921_run_firmware, 0x01);
KSYMTAB_FUNC(mt7921_mcu_radio_led_ctrl, "");
SYMBOL_FLAGS(mt7921_mcu_radio_led_ctrl, 0x01);
KSYMTAB_FUNC(mt7921_mcu_set_eeprom, "");
SYMBOL_FLAGS(mt7921_mcu_set_eeprom, 0x01);
KSYMTAB_FUNC(mt7921_mcu_regd_update, "");
SYMBOL_FLAGS(mt7921_mcu_regd_update, 0x01);
KSYMTAB_FUNC(mt7921_regd_update, "");
SYMBOL_FLAGS(mt7921_regd_update, 0x01);
KSYMTAB_FUNC(__mt7921_start, "");
SYMBOL_FLAGS(__mt7921_start, 0x01);
KSYMTAB_FUNC(mt7921_roc_abort_sync, "");
SYMBOL_FLAGS(mt7921_roc_abort_sync, 0x01);
KSYMTAB_FUNC(mt7921_set_channel, "");
SYMBOL_FLAGS(mt7921_set_channel, 0x01);
KSYMTAB_FUNC(mt7921_mac_sta_add, "");
SYMBOL_FLAGS(mt7921_mac_sta_add, 0x01);
KSYMTAB_FUNC(mt7921_mac_sta_event, "");
SYMBOL_FLAGS(mt7921_mac_sta_event, 0x01);
KSYMTAB_FUNC(mt7921_mac_sta_remove, "");
SYMBOL_FLAGS(mt7921_mac_sta_remove, 0x01);
KSYMTAB_DATA(mt7921_ops, "");
SYMBOL_FLAGS(mt7921_ops, 0x01);
KSYMTAB_FUNC(mt7921_mac_init, "");
SYMBOL_FLAGS(mt7921_mac_init, 0x01);
KSYMTAB_FUNC(mt7921_register_device, "");
SYMBOL_FLAGS(mt7921_register_device, 0x01);

MODULE_INFO(depends, "mt76-connac-lib,mt76,mt792x-lib");


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

KSYMTAB_FUNC(can_put_echo_skb, "");
SYMBOL_FLAGS(can_put_echo_skb, 0x01);
KSYMTAB_FUNC(can_get_echo_skb, "");
SYMBOL_FLAGS(can_get_echo_skb, 0x01);
KSYMTAB_FUNC(can_free_echo_skb, "");
SYMBOL_FLAGS(can_free_echo_skb, 0x01);
KSYMTAB_FUNC(alloc_can_skb, "");
SYMBOL_FLAGS(alloc_can_skb, 0x01);
KSYMTAB_FUNC(alloc_canfd_skb, "");
SYMBOL_FLAGS(alloc_canfd_skb, 0x01);
KSYMTAB_FUNC(alloc_canxl_skb, "");
SYMBOL_FLAGS(alloc_canxl_skb, 0x01);
KSYMTAB_FUNC(alloc_can_err_skb, "");
SYMBOL_FLAGS(alloc_can_err_skb, 0x01);
KSYMTAB_FUNC(can_dropped_invalid_skb, "");
SYMBOL_FLAGS(can_dropped_invalid_skb, 0x01);
KSYMTAB_FUNC(can_get_state_str, "");
SYMBOL_FLAGS(can_get_state_str, 0x01);
KSYMTAB_FUNC(can_get_ctrlmode_str, "");
SYMBOL_FLAGS(can_get_ctrlmode_str, 0x01);
KSYMTAB_FUNC(can_state_get_by_berr_counter, "");
SYMBOL_FLAGS(can_state_get_by_berr_counter, 0x01);
KSYMTAB_FUNC(can_change_state, "");
SYMBOL_FLAGS(can_change_state, 0x01);
KSYMTAB_FUNC(can_bus_off, "");
SYMBOL_FLAGS(can_bus_off, 0x01);
KSYMTAB_FUNC(alloc_candev_mqs, "");
SYMBOL_FLAGS(alloc_candev_mqs, 0x01);
KSYMTAB_FUNC(free_candev, "");
SYMBOL_FLAGS(free_candev, 0x01);
KSYMTAB_FUNC(can_set_static_ctrlmode, "");
SYMBOL_FLAGS(can_set_static_ctrlmode, 0x01);
KSYMTAB_FUNC(can_hwtstamp_get, "");
SYMBOL_FLAGS(can_hwtstamp_get, 0x00);
KSYMTAB_FUNC(can_hwtstamp_set, "");
SYMBOL_FLAGS(can_hwtstamp_set, 0x00);
KSYMTAB_FUNC(can_ethtool_op_get_ts_info_hwts, "");
SYMBOL_FLAGS(can_ethtool_op_get_ts_info_hwts, 0x00);
KSYMTAB_FUNC(open_candev, "");
SYMBOL_FLAGS(open_candev, 0x01);
KSYMTAB_FUNC(of_can_transceiver, "");
SYMBOL_FLAGS(of_can_transceiver, 0x01);
KSYMTAB_FUNC(close_candev, "");
SYMBOL_FLAGS(close_candev, 0x01);
KSYMTAB_FUNC(register_candev, "");
SYMBOL_FLAGS(register_candev, 0x01);
KSYMTAB_FUNC(unregister_candev, "");
SYMBOL_FLAGS(unregister_candev, 0x01);
KSYMTAB_FUNC(safe_candev_priv, "");
SYMBOL_FLAGS(safe_candev_priv, 0x01);
KSYMTAB_FUNC(can_fd_dlc2len, "");
SYMBOL_FLAGS(can_fd_dlc2len, 0x01);
KSYMTAB_FUNC(can_fd_len2dlc, "");
SYMBOL_FLAGS(can_fd_len2dlc, 0x01);
KSYMTAB_FUNC(can_skb_get_frame_len, "");
SYMBOL_FLAGS(can_skb_get_frame_len, 0x01);
KSYMTAB_FUNC(can_rx_offload_irq_offload_timestamp, "");
SYMBOL_FLAGS(can_rx_offload_irq_offload_timestamp, 0x01);
KSYMTAB_FUNC(can_rx_offload_irq_offload_fifo, "");
SYMBOL_FLAGS(can_rx_offload_irq_offload_fifo, 0x01);
KSYMTAB_FUNC(can_rx_offload_queue_timestamp, "");
SYMBOL_FLAGS(can_rx_offload_queue_timestamp, 0x01);
KSYMTAB_FUNC(can_rx_offload_get_echo_skb_queue_timestamp, "");
SYMBOL_FLAGS(can_rx_offload_get_echo_skb_queue_timestamp, 0x01);
KSYMTAB_FUNC(can_rx_offload_queue_tail, "");
SYMBOL_FLAGS(can_rx_offload_queue_tail, 0x01);
KSYMTAB_FUNC(can_rx_offload_get_echo_skb_queue_tail, "");
SYMBOL_FLAGS(can_rx_offload_get_echo_skb_queue_tail, 0x01);
KSYMTAB_FUNC(can_rx_offload_irq_finish, "");
SYMBOL_FLAGS(can_rx_offload_irq_finish, 0x01);
KSYMTAB_FUNC(can_rx_offload_threaded_irq_finish, "");
SYMBOL_FLAGS(can_rx_offload_threaded_irq_finish, 0x01);
KSYMTAB_FUNC(can_rx_offload_add_timestamp, "");
SYMBOL_FLAGS(can_rx_offload_add_timestamp, 0x01);
KSYMTAB_FUNC(can_rx_offload_add_fifo, "");
SYMBOL_FLAGS(can_rx_offload_add_fifo, 0x01);
KSYMTAB_FUNC(can_rx_offload_add_manual, "");
SYMBOL_FLAGS(can_rx_offload_add_manual, 0x01);
KSYMTAB_FUNC(can_rx_offload_enable, "");
SYMBOL_FLAGS(can_rx_offload_enable, 0x01);
KSYMTAB_FUNC(can_rx_offload_del, "");
SYMBOL_FLAGS(can_rx_offload_del, 0x01);

MODULE_INFO(depends, "");


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

KSYMTAB_FUNC(fman_register_intr, "");
SYMBOL_FLAGS(fman_register_intr, 0x00);
KSYMTAB_FUNC(fman_unregister_intr, "");
SYMBOL_FLAGS(fman_unregister_intr, 0x00);
KSYMTAB_FUNC(fman_set_port_params, "");
SYMBOL_FLAGS(fman_set_port_params, 0x00);
KSYMTAB_FUNC(fman_reset_mac, "");
SYMBOL_FLAGS(fman_reset_mac, 0x00);
KSYMTAB_FUNC(fman_set_mac_max_frame, "");
SYMBOL_FLAGS(fman_set_mac_max_frame, 0x00);
KSYMTAB_FUNC(fman_get_bmi_max_fifo_size, "");
SYMBOL_FLAGS(fman_get_bmi_max_fifo_size, 0x00);
KSYMTAB_FUNC(fman_get_revision, "");
SYMBOL_FLAGS(fman_get_revision, 0x00);
KSYMTAB_FUNC(fman_get_qman_channel_id, "");
SYMBOL_FLAGS(fman_get_qman_channel_id, 0x00);
KSYMTAB_FUNC(fman_get_mem_region, "");
SYMBOL_FLAGS(fman_get_mem_region, 0x00);
KSYMTAB_FUNC(fman_get_max_frm, "");
SYMBOL_FLAGS(fman_get_max_frm, 0x00);
KSYMTAB_FUNC(fman_get_rx_extra_headroom, "");
SYMBOL_FLAGS(fman_get_rx_extra_headroom, 0x00);
KSYMTAB_FUNC(fman_bind, "");
SYMBOL_FLAGS(fman_bind, 0x00);
KSYMTAB_FUNC(fman_has_errata_a050385, "");
SYMBOL_FLAGS(fman_has_errata_a050385, 0x00);
KSYMTAB_FUNC(fman_sp_set_buf_pools_in_asc_order_of_buf_sizes, "");
SYMBOL_FLAGS(fman_sp_set_buf_pools_in_asc_order_of_buf_sizes, 0x00);
KSYMTAB_FUNC(fman_sp_build_buffer_struct, "");
SYMBOL_FLAGS(fman_sp_build_buffer_struct, 0x00);
KSYMTAB_FUNC(keygen_init, "");
SYMBOL_FLAGS(keygen_init, 0x00);
KSYMTAB_FUNC(keygen_port_hashing_init, "");
SYMBOL_FLAGS(keygen_port_hashing_init, 0x00);

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,fman");
MODULE_ALIAS("of:N*T*Cfsl,fmanC*");
MODULE_ALIAS("of:N*T*Cfsl,fman-muram");
MODULE_ALIAS("of:N*T*Cfsl,fman-muramC*");

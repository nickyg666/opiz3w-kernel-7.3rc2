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

KSYMTAB_FUNC(cmdq_dev_get_client_reg, "");
SYMBOL_FLAGS(cmdq_dev_get_client_reg, 0x00);
KSYMTAB_FUNC(cmdq_mbox_create, "");
SYMBOL_FLAGS(cmdq_mbox_create, 0x00);
KSYMTAB_FUNC(cmdq_mbox_destroy, "");
SYMBOL_FLAGS(cmdq_mbox_destroy, 0x00);
KSYMTAB_FUNC(cmdq_pkt_create, "");
SYMBOL_FLAGS(cmdq_pkt_create, 0x00);
KSYMTAB_FUNC(cmdq_pkt_destroy, "");
SYMBOL_FLAGS(cmdq_pkt_destroy, 0x00);
KSYMTAB_FUNC(cmdq_pkt_write, "");
SYMBOL_FLAGS(cmdq_pkt_write, 0x00);
KSYMTAB_FUNC(cmdq_pkt_write_pa, "");
SYMBOL_FLAGS(cmdq_pkt_write_pa, 0x00);
KSYMTAB_FUNC(cmdq_pkt_write_subsys, "");
SYMBOL_FLAGS(cmdq_pkt_write_subsys, 0x00);
KSYMTAB_FUNC(cmdq_pkt_write_mask, "");
SYMBOL_FLAGS(cmdq_pkt_write_mask, 0x00);
KSYMTAB_FUNC(cmdq_pkt_write_mask_pa, "");
SYMBOL_FLAGS(cmdq_pkt_write_mask_pa, 0x00);
KSYMTAB_FUNC(cmdq_pkt_write_mask_subsys, "");
SYMBOL_FLAGS(cmdq_pkt_write_mask_subsys, 0x00);
KSYMTAB_FUNC(cmdq_pkt_read_s, "");
SYMBOL_FLAGS(cmdq_pkt_read_s, 0x00);
KSYMTAB_FUNC(cmdq_pkt_write_s, "");
SYMBOL_FLAGS(cmdq_pkt_write_s, 0x00);
KSYMTAB_FUNC(cmdq_pkt_write_s_mask, "");
SYMBOL_FLAGS(cmdq_pkt_write_s_mask, 0x00);
KSYMTAB_FUNC(cmdq_pkt_write_s_value, "");
SYMBOL_FLAGS(cmdq_pkt_write_s_value, 0x00);
KSYMTAB_FUNC(cmdq_pkt_write_s_mask_value, "");
SYMBOL_FLAGS(cmdq_pkt_write_s_mask_value, 0x00);
KSYMTAB_FUNC(cmdq_pkt_mem_move, "");
SYMBOL_FLAGS(cmdq_pkt_mem_move, 0x00);
KSYMTAB_FUNC(cmdq_pkt_wfe, "");
SYMBOL_FLAGS(cmdq_pkt_wfe, 0x00);
KSYMTAB_FUNC(cmdq_pkt_acquire_event, "");
SYMBOL_FLAGS(cmdq_pkt_acquire_event, 0x00);
KSYMTAB_FUNC(cmdq_pkt_clear_event, "");
SYMBOL_FLAGS(cmdq_pkt_clear_event, 0x00);
KSYMTAB_FUNC(cmdq_pkt_set_event, "");
SYMBOL_FLAGS(cmdq_pkt_set_event, 0x00);
KSYMTAB_FUNC(cmdq_pkt_poll, "");
SYMBOL_FLAGS(cmdq_pkt_poll, 0x00);
KSYMTAB_FUNC(cmdq_pkt_poll_mask, "");
SYMBOL_FLAGS(cmdq_pkt_poll_mask, 0x00);
KSYMTAB_FUNC(cmdq_pkt_poll_addr, "");
SYMBOL_FLAGS(cmdq_pkt_poll_addr, 0x00);
KSYMTAB_FUNC(cmdq_pkt_logic_command, "");
SYMBOL_FLAGS(cmdq_pkt_logic_command, 0x00);
KSYMTAB_FUNC(cmdq_pkt_assign, "");
SYMBOL_FLAGS(cmdq_pkt_assign, 0x00);
KSYMTAB_FUNC(cmdq_pkt_jump_abs, "");
SYMBOL_FLAGS(cmdq_pkt_jump_abs, 0x00);
KSYMTAB_FUNC(cmdq_pkt_jump_rel, "");
SYMBOL_FLAGS(cmdq_pkt_jump_rel, 0x00);
KSYMTAB_FUNC(cmdq_pkt_eoc, "");
SYMBOL_FLAGS(cmdq_pkt_eoc, 0x00);

MODULE_INFO(depends, "mtk-cmdq-mailbox");


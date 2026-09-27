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

KSYMTAB_FUNC(brcmu_pkt_buf_get_skb, "");
SYMBOL_FLAGS(brcmu_pkt_buf_get_skb, 0x00);
KSYMTAB_FUNC(brcmu_pkt_buf_free_skb, "");
SYMBOL_FLAGS(brcmu_pkt_buf_free_skb, 0x00);
KSYMTAB_FUNC(brcmu_pktq_penq, "");
SYMBOL_FLAGS(brcmu_pktq_penq, 0x00);
KSYMTAB_FUNC(brcmu_pktq_penq_head, "");
SYMBOL_FLAGS(brcmu_pktq_penq_head, 0x00);
KSYMTAB_FUNC(brcmu_pktq_pdeq, "");
SYMBOL_FLAGS(brcmu_pktq_pdeq, 0x00);
KSYMTAB_FUNC(brcmu_pktq_pdeq_match, "");
SYMBOL_FLAGS(brcmu_pktq_pdeq_match, 0x00);
KSYMTAB_FUNC(brcmu_pktq_pdeq_tail, "");
SYMBOL_FLAGS(brcmu_pktq_pdeq_tail, 0x00);
KSYMTAB_FUNC(brcmu_pktq_pflush, "");
SYMBOL_FLAGS(brcmu_pktq_pflush, 0x00);
KSYMTAB_FUNC(brcmu_pktq_flush, "");
SYMBOL_FLAGS(brcmu_pktq_flush, 0x00);
KSYMTAB_FUNC(brcmu_pktq_init, "");
SYMBOL_FLAGS(brcmu_pktq_init, 0x00);
KSYMTAB_FUNC(brcmu_pktq_peek_tail, "");
SYMBOL_FLAGS(brcmu_pktq_peek_tail, 0x00);
KSYMTAB_FUNC(brcmu_pktq_mlen, "");
SYMBOL_FLAGS(brcmu_pktq_mlen, 0x00);
KSYMTAB_FUNC(brcmu_pktq_mdeq, "");
SYMBOL_FLAGS(brcmu_pktq_mdeq, 0x00);
KSYMTAB_FUNC(brcmu_boardrev_str, "");
SYMBOL_FLAGS(brcmu_boardrev_str, 0x00);
KSYMTAB_FUNC(brcmu_dotrev_str, "");
SYMBOL_FLAGS(brcmu_dotrev_str, 0x00);
KSYMTAB_FUNC(brcmu_d11_attach, "");
SYMBOL_FLAGS(brcmu_d11_attach, 0x00);

MODULE_INFO(depends, "");


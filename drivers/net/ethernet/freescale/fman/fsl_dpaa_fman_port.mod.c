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

KSYMTAB_FUNC(fman_port_config, "");
SYMBOL_FLAGS(fman_port_config, 0x00);
KSYMTAB_FUNC(fman_port_use_kg_hash, "");
SYMBOL_FLAGS(fman_port_use_kg_hash, 0x00);
KSYMTAB_FUNC(fman_port_init, "");
SYMBOL_FLAGS(fman_port_init, 0x00);
KSYMTAB_FUNC(fman_port_cfg_buf_prefix_content, "");
SYMBOL_FLAGS(fman_port_cfg_buf_prefix_content, 0x00);
KSYMTAB_FUNC(fman_port_disable, "");
SYMBOL_FLAGS(fman_port_disable, 0x00);
KSYMTAB_FUNC(fman_port_enable, "");
SYMBOL_FLAGS(fman_port_enable, 0x00);
KSYMTAB_FUNC(fman_port_bind, "");
SYMBOL_FLAGS(fman_port_bind, 0x00);
KSYMTAB_FUNC(fman_port_get_qman_channel_id, "");
SYMBOL_FLAGS(fman_port_get_qman_channel_id, 0x00);
KSYMTAB_FUNC(fman_port_get_device, "");
SYMBOL_FLAGS(fman_port_get_device, 0x00);
KSYMTAB_FUNC(fman_port_get_hash_result_offset, "");
SYMBOL_FLAGS(fman_port_get_hash_result_offset, 0x00);
KSYMTAB_FUNC(fman_port_get_tstamp, "");
SYMBOL_FLAGS(fman_port_get_tstamp, 0x00);

MODULE_INFO(depends, "fsl_dpaa_fman");

MODULE_ALIAS("of:N*T*Cfsl,fman-v3-port-rx");
MODULE_ALIAS("of:N*T*Cfsl,fman-v3-port-rxC*");
MODULE_ALIAS("of:N*T*Cfsl,fman-v2-port-rx");
MODULE_ALIAS("of:N*T*Cfsl,fman-v2-port-rxC*");
MODULE_ALIAS("of:N*T*Cfsl,fman-v3-port-tx");
MODULE_ALIAS("of:N*T*Cfsl,fman-v3-port-txC*");
MODULE_ALIAS("of:N*T*Cfsl,fman-v2-port-tx");
MODULE_ALIAS("of:N*T*Cfsl,fman-v2-port-txC*");

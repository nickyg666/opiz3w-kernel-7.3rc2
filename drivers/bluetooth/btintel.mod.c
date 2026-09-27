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

KSYMTAB_DATA(btintel_guid_dsm, "");
SYMBOL_FLAGS(btintel_guid_dsm, 0x01);
KSYMTAB_FUNC(btintel_check_bdaddr, "");
SYMBOL_FLAGS(btintel_check_bdaddr, 0x01);
KSYMTAB_FUNC(btintel_enter_mfg, "");
SYMBOL_FLAGS(btintel_enter_mfg, 0x01);
KSYMTAB_FUNC(btintel_exit_mfg, "");
SYMBOL_FLAGS(btintel_exit_mfg, 0x01);
KSYMTAB_FUNC(btintel_set_bdaddr, "");
SYMBOL_FLAGS(btintel_set_bdaddr, 0x01);
KSYMTAB_FUNC(btintel_set_diag, "");
SYMBOL_FLAGS(btintel_set_diag, 0x01);
KSYMTAB_FUNC(btintel_hw_error, "");
SYMBOL_FLAGS(btintel_hw_error, 0x01);
KSYMTAB_FUNC(btintel_version_info, "");
SYMBOL_FLAGS(btintel_version_info, 0x01);
KSYMTAB_FUNC(btintel_load_ddc_config, "");
SYMBOL_FLAGS(btintel_load_ddc_config, 0x01);
KSYMTAB_FUNC(btintel_set_event_mask_mfg, "");
SYMBOL_FLAGS(btintel_set_event_mask_mfg, 0x01);
KSYMTAB_FUNC(btintel_read_version, "");
SYMBOL_FLAGS(btintel_read_version, 0x01);
KSYMTAB_FUNC(btintel_version_info_tlv, "");
SYMBOL_FLAGS(btintel_version_info_tlv, 0x01);
KSYMTAB_FUNC(btintel_parse_version_tlv, "");
SYMBOL_FLAGS(btintel_parse_version_tlv, 0x01);
KSYMTAB_FUNC(btintel_regmap_init, "");
SYMBOL_FLAGS(btintel_regmap_init, 0x01);
KSYMTAB_FUNC(btintel_send_intel_reset, "");
SYMBOL_FLAGS(btintel_send_intel_reset, 0x01);
KSYMTAB_FUNC(btintel_read_boot_params, "");
SYMBOL_FLAGS(btintel_read_boot_params, 0x01);
KSYMTAB_FUNC(btintel_download_firmware, "");
SYMBOL_FLAGS(btintel_download_firmware, 0x01);
KSYMTAB_FUNC(btintel_set_quality_report, "");
SYMBOL_FLAGS(btintel_set_quality_report, 0x01);
KSYMTAB_FUNC(btintel_acpi_reset_method, "");
SYMBOL_FLAGS(btintel_acpi_reset_method, 0x01);
KSYMTAB_FUNC(btintel_bootloader_setup_tlv, "");
SYMBOL_FLAGS(btintel_bootloader_setup_tlv, 0x01);
KSYMTAB_FUNC(btintel_set_msft_opcode, "");
SYMBOL_FLAGS(btintel_set_msft_opcode, 0x01);
KSYMTAB_FUNC(btintel_print_fseq_info, "");
SYMBOL_FLAGS(btintel_print_fseq_info, 0x01);
KSYMTAB_FUNC(btintel_shutdown_combined, "");
SYMBOL_FLAGS(btintel_shutdown_combined, 0x01);
KSYMTAB_FUNC(btintel_configure_setup, "");
SYMBOL_FLAGS(btintel_configure_setup, 0x01);
KSYMTAB_FUNC(btintel_recv_event, "");
SYMBOL_FLAGS(btintel_recv_event, 0x01);
KSYMTAB_FUNC(btintel_bootup, "");
SYMBOL_FLAGS(btintel_bootup, 0x01);
KSYMTAB_FUNC(btintel_secure_send_result, "");
SYMBOL_FLAGS(btintel_secure_send_result, 0x01);

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "D779EB90A9358BB0F760139");

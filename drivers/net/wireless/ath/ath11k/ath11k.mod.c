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

KSYMTAB_DATA(ath11k_debug_mask, "");
SYMBOL_FLAGS(ath11k_debug_mask, 0x00);
KSYMTAB_FUNC(ath11k_core_get_usecase_firmware, "");
SYMBOL_FLAGS(ath11k_core_get_usecase_firmware, 0x00);
KSYMTAB_FUNC(ath11k_core_suspend, "");
SYMBOL_FLAGS(ath11k_core_suspend, 0x00);
KSYMTAB_FUNC(ath11k_core_suspend_late, "");
SYMBOL_FLAGS(ath11k_core_suspend_late, 0x00);
KSYMTAB_FUNC(ath11k_core_resume_early, "");
SYMBOL_FLAGS(ath11k_core_resume_early, 0x00);
KSYMTAB_FUNC(ath11k_core_resume, "");
SYMBOL_FLAGS(ath11k_core_resume, 0x00);
KSYMTAB_FUNC(ath11k_core_pre_init, "");
SYMBOL_FLAGS(ath11k_core_pre_init, 0x00);
KSYMTAB_FUNC(ath11k_core_pm_notifier_unregister, "");
SYMBOL_FLAGS(ath11k_core_pm_notifier_unregister, 0x00);
KSYMTAB_FUNC(ath11k_core_init, "");
SYMBOL_FLAGS(ath11k_core_init, 0x00);
KSYMTAB_FUNC(ath11k_core_deinit, "");
SYMBOL_FLAGS(ath11k_core_deinit, 0x00);
KSYMTAB_FUNC(ath11k_core_free, "");
SYMBOL_FLAGS(ath11k_core_free, 0x00);
KSYMTAB_FUNC(ath11k_core_alloc, "");
SYMBOL_FLAGS(ath11k_core_alloc, 0x00);
KSYMTAB_FUNC(ath11k_hal_srng_init, "");
SYMBOL_FLAGS(ath11k_hal_srng_init, 0x00);
KSYMTAB_FUNC(ath11k_hal_srng_deinit, "");
SYMBOL_FLAGS(ath11k_hal_srng_deinit, 0x00);
KSYMTAB_FUNC(ath11k_hal_srng_clear, "");
SYMBOL_FLAGS(ath11k_hal_srng_clear, 0x00);
KSYMTAB_DATA(ath11k_cold_boot_cal, "");
SYMBOL_FLAGS(ath11k_cold_boot_cal, 0x00);
KSYMTAB_FUNC(ath11k_qmi_fwreset_from_cold_boot, "");
SYMBOL_FLAGS(ath11k_qmi_fwreset_from_cold_boot, 0x00);
KSYMTAB_FUNC(ath11k_qmi_deinit_service, "");
SYMBOL_FLAGS(ath11k_qmi_deinit_service, 0x00);
KSYMTAB_FUNC(ath11k_dp_service_srng, "");
SYMBOL_FLAGS(ath11k_dp_service_srng, 0x00);
KSYMTAB_FUNC(ath11k_info, "");
SYMBOL_FLAGS(ath11k_info, 0x00);
KSYMTAB_FUNC(ath11k_err, "");
SYMBOL_FLAGS(ath11k_err, 0x00);
KSYMTAB_FUNC(ath11k_warn, "");
SYMBOL_FLAGS(ath11k_warn, 0x00);
KSYMTAB_FUNC(ath11k_ce_per_engine_service, "");
SYMBOL_FLAGS(ath11k_ce_per_engine_service, 0x00);
KSYMTAB_FUNC(ath11k_ce_get_shadow_config, "");
SYMBOL_FLAGS(ath11k_ce_get_shadow_config, 0x00);
KSYMTAB_FUNC(ath11k_ce_cleanup_pipes, "");
SYMBOL_FLAGS(ath11k_ce_cleanup_pipes, 0x00);
KSYMTAB_FUNC(ath11k_ce_rx_post_buf, "");
SYMBOL_FLAGS(ath11k_ce_rx_post_buf, 0x00);
KSYMTAB_FUNC(ath11k_ce_free_pipes, "");
SYMBOL_FLAGS(ath11k_ce_free_pipes, 0x00);
KSYMTAB_FUNC(ath11k_ce_alloc_pipes, "");
SYMBOL_FLAGS(ath11k_ce_alloc_pipes, 0x00);
KSYMTAB_FUNC(ath11k_ce_get_attr_flags, "");
SYMBOL_FLAGS(ath11k_ce_get_attr_flags, 0x00);
KSYMTAB_FUNC(ath11k_pcic_init_msi_config, "");
SYMBOL_FLAGS(ath11k_pcic_init_msi_config, 0x00);
KSYMTAB_FUNC(ath11k_pcic_write32, "");
SYMBOL_FLAGS(ath11k_pcic_write32, 0x00);
KSYMTAB_FUNC(ath11k_pcic_read32, "");
SYMBOL_FLAGS(ath11k_pcic_read32, 0x00);
KSYMTAB_FUNC(ath11k_pcic_read, "");
SYMBOL_FLAGS(ath11k_pcic_read, 0x00);
KSYMTAB_FUNC(ath11k_pcic_get_msi_address, "");
SYMBOL_FLAGS(ath11k_pcic_get_msi_address, 0x00);
KSYMTAB_FUNC(ath11k_pcic_get_user_msi_assignment, "");
SYMBOL_FLAGS(ath11k_pcic_get_user_msi_assignment, 0x00);
KSYMTAB_FUNC(ath11k_pcic_get_ce_msi_idx, "");
SYMBOL_FLAGS(ath11k_pcic_get_ce_msi_idx, 0x00);
KSYMTAB_FUNC(ath11k_pcic_free_irq, "");
SYMBOL_FLAGS(ath11k_pcic_free_irq, 0x00);
KSYMTAB_FUNC(ath11k_pcic_ext_irq_enable, "");
SYMBOL_FLAGS(ath11k_pcic_ext_irq_enable, 0x00);
KSYMTAB_FUNC(ath11k_pcic_ext_irq_disable, "");
SYMBOL_FLAGS(ath11k_pcic_ext_irq_disable, 0x00);
KSYMTAB_FUNC(ath11k_pcic_config_irq, "");
SYMBOL_FLAGS(ath11k_pcic_config_irq, 0x00);
KSYMTAB_FUNC(ath11k_pcic_ce_irqs_enable, "");
SYMBOL_FLAGS(ath11k_pcic_ce_irqs_enable, 0x00);
KSYMTAB_FUNC(ath11k_pcic_ce_irq_disable_sync, "");
SYMBOL_FLAGS(ath11k_pcic_ce_irq_disable_sync, 0x00);
KSYMTAB_FUNC(ath11k_pcic_stop, "");
SYMBOL_FLAGS(ath11k_pcic_stop, 0x00);
KSYMTAB_FUNC(ath11k_pcic_start, "");
SYMBOL_FLAGS(ath11k_pcic_start, 0x00);
KSYMTAB_FUNC(ath11k_pcic_map_service_to_pipe, "");
SYMBOL_FLAGS(ath11k_pcic_map_service_to_pipe, 0x00);
KSYMTAB_FUNC(ath11k_pcic_register_pci_ops, "");
SYMBOL_FLAGS(ath11k_pcic_register_pci_ops, 0x00);
KSYMTAB_FUNC(ath11k_pci_enable_ce_irqs_except_wake_irq, "");
SYMBOL_FLAGS(ath11k_pci_enable_ce_irqs_except_wake_irq, 0x00);
KSYMTAB_FUNC(ath11k_pci_disable_ce_irqs_except_wake_irq, "");
SYMBOL_FLAGS(ath11k_pci_disable_ce_irqs_except_wake_irq, 0x00);
KSYMTAB_FUNC(ath11k_fw_destroy, "");
SYMBOL_FLAGS(ath11k_fw_destroy, 0x00);
KSYMTAB_FUNC(ath11k_coredump_get_dump_type, "");
SYMBOL_FLAGS(ath11k_coredump_get_dump_type, 0x00);

MODULE_INFO(depends, "qmi_helpers");


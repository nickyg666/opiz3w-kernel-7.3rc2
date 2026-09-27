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

KSYMTAB_FUNC(host1x_device_init, "");
SYMBOL_FLAGS(host1x_device_init, 0x00);
KSYMTAB_FUNC(host1x_device_exit, "");
SYMBOL_FLAGS(host1x_device_exit, 0x00);
KSYMTAB_FUNC(host1x_driver_register_full, "");
SYMBOL_FLAGS(host1x_driver_register_full, 0x00);
KSYMTAB_FUNC(host1x_driver_unregister, "");
SYMBOL_FLAGS(host1x_driver_unregister, 0x00);
KSYMTAB_FUNC(__host1x_client_init, "");
SYMBOL_FLAGS(__host1x_client_init, 0x00);
KSYMTAB_FUNC(host1x_client_exit, "");
SYMBOL_FLAGS(host1x_client_exit, 0x00);
KSYMTAB_FUNC(__host1x_client_register, "");
SYMBOL_FLAGS(__host1x_client_register, 0x00);
KSYMTAB_FUNC(host1x_client_unregister, "");
SYMBOL_FLAGS(host1x_client_unregister, 0x00);
KSYMTAB_FUNC(host1x_client_suspend, "");
SYMBOL_FLAGS(host1x_client_suspend, 0x00);
KSYMTAB_FUNC(host1x_client_resume, "");
SYMBOL_FLAGS(host1x_client_resume, 0x00);
KSYMTAB_FUNC(host1x_bo_pin, "");
SYMBOL_FLAGS(host1x_bo_pin, 0x00);
KSYMTAB_FUNC(host1x_bo_unpin, "");
SYMBOL_FLAGS(host1x_bo_unpin, 0x00);
KSYMTAB_FUNC(host1x_bo_clear_cached_mappings, "");
SYMBOL_FLAGS(host1x_bo_clear_cached_mappings, 0x00);
KSYMTAB_FUNC(host1x_syncpt_alloc, "");
SYMBOL_FLAGS(host1x_syncpt_alloc, 0x00);
KSYMTAB_FUNC(host1x_syncpt_id, "");
SYMBOL_FLAGS(host1x_syncpt_id, 0x00);
KSYMTAB_FUNC(host1x_syncpt_incr_max, "");
SYMBOL_FLAGS(host1x_syncpt_incr_max, 0x00);
KSYMTAB_FUNC(host1x_syncpt_incr, "");
SYMBOL_FLAGS(host1x_syncpt_incr, 0x00);
KSYMTAB_FUNC(host1x_syncpt_wait, "");
SYMBOL_FLAGS(host1x_syncpt_wait, 0x00);
KSYMTAB_FUNC(host1x_syncpt_request, "");
SYMBOL_FLAGS(host1x_syncpt_request, 0x00);
KSYMTAB_FUNC(host1x_syncpt_put, "");
SYMBOL_FLAGS(host1x_syncpt_put, 0x00);
KSYMTAB_FUNC(host1x_syncpt_read_max, "");
SYMBOL_FLAGS(host1x_syncpt_read_max, 0x00);
KSYMTAB_FUNC(host1x_syncpt_read_min, "");
SYMBOL_FLAGS(host1x_syncpt_read_min, 0x00);
KSYMTAB_FUNC(host1x_syncpt_read, "");
SYMBOL_FLAGS(host1x_syncpt_read, 0x00);
KSYMTAB_FUNC(host1x_syncpt_get_by_id, "");
SYMBOL_FLAGS(host1x_syncpt_get_by_id, 0x00);
KSYMTAB_FUNC(host1x_syncpt_get_by_id_noref, "");
SYMBOL_FLAGS(host1x_syncpt_get_by_id_noref, 0x00);
KSYMTAB_FUNC(host1x_syncpt_get, "");
SYMBOL_FLAGS(host1x_syncpt_get, 0x00);
KSYMTAB_FUNC(host1x_syncpt_get_base, "");
SYMBOL_FLAGS(host1x_syncpt_get_base, 0x00);
KSYMTAB_FUNC(host1x_syncpt_base_id, "");
SYMBOL_FLAGS(host1x_syncpt_base_id, 0x00);
KSYMTAB_FUNC(host1x_syncpt_release_vblank_reservation, "");
SYMBOL_FLAGS(host1x_syncpt_release_vblank_reservation, 0x00);
KSYMTAB_FUNC(host1x_get_dma_mask, "");
SYMBOL_FLAGS(host1x_get_dma_mask, 0x00);
KSYMTAB_FUNC(host1x_job_submit, "");
SYMBOL_FLAGS(host1x_job_submit, 0x00);
KSYMTAB_FUNC(host1x_channel_get, "");
SYMBOL_FLAGS(host1x_channel_get, 0x00);
KSYMTAB_FUNC(host1x_channel_stop, "");
SYMBOL_FLAGS(host1x_channel_stop, 0x00);
KSYMTAB_FUNC(host1x_channel_put, "");
SYMBOL_FLAGS(host1x_channel_put, 0x00);
KSYMTAB_FUNC(host1x_channel_request, "");
SYMBOL_FLAGS(host1x_channel_request, 0x00);
KSYMTAB_FUNC(host1x_job_alloc, "");
SYMBOL_FLAGS(host1x_job_alloc, 0x00);
KSYMTAB_FUNC(host1x_job_get, "");
SYMBOL_FLAGS(host1x_job_get, 0x00);
KSYMTAB_FUNC(host1x_job_put, "");
SYMBOL_FLAGS(host1x_job_put, 0x00);
KSYMTAB_FUNC(host1x_job_add_gather, "");
SYMBOL_FLAGS(host1x_job_add_gather, 0x00);
KSYMTAB_FUNC(host1x_job_add_wait, "");
SYMBOL_FLAGS(host1x_job_add_wait, 0x00);
KSYMTAB_FUNC(host1x_job_pin, "");
SYMBOL_FLAGS(host1x_job_pin, 0x00);
KSYMTAB_FUNC(host1x_job_unpin, "");
SYMBOL_FLAGS(host1x_job_unpin, 0x00);
KSYMTAB_FUNC(tegra_mipi_enable, "");
SYMBOL_FLAGS(tegra_mipi_enable, 0x00);
KSYMTAB_FUNC(tegra_mipi_disable, "");
SYMBOL_FLAGS(tegra_mipi_disable, 0x00);
KSYMTAB_FUNC(tegra_mipi_start_calibration, "");
SYMBOL_FLAGS(tegra_mipi_start_calibration, 0x00);
KSYMTAB_FUNC(tegra_mipi_finish_calibration, "");
SYMBOL_FLAGS(tegra_mipi_finish_calibration, 0x00);
KSYMTAB_FUNC(tegra_mipi_request, "");
SYMBOL_FLAGS(tegra_mipi_request, 0x00);
KSYMTAB_FUNC(tegra_mipi_free, "");
SYMBOL_FLAGS(tegra_mipi_free, 0x00);
KSYMTAB_FUNC(devm_tegra_mipi_add_provider, "");
SYMBOL_FLAGS(devm_tegra_mipi_add_provider, 0x00);
KSYMTAB_FUNC(host1x_fence_create, "");
SYMBOL_FLAGS(host1x_fence_create, 0x00);
KSYMTAB_FUNC(host1x_fence_cancel, "");
SYMBOL_FLAGS(host1x_fence_cancel, 0x00);
KSYMTAB_FUNC(host1x_memory_context_alloc, "");
SYMBOL_FLAGS(host1x_memory_context_alloc, 0x01);
KSYMTAB_FUNC(host1x_memory_context_get, "");
SYMBOL_FLAGS(host1x_memory_context_get, 0x01);
KSYMTAB_FUNC(host1x_memory_context_put, "");
SYMBOL_FLAGS(host1x_memory_context_put, 0x01);

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnvidia,tegra264-host1x");
MODULE_ALIAS("of:N*T*Cnvidia,tegra264-host1xC*");
MODULE_ALIAS("of:N*T*Cnvidia,tegra234-host1x");
MODULE_ALIAS("of:N*T*Cnvidia,tegra234-host1xC*");
MODULE_ALIAS("of:N*T*Cnvidia,tegra194-host1x");
MODULE_ALIAS("of:N*T*Cnvidia,tegra194-host1xC*");
MODULE_ALIAS("of:N*T*Cnvidia,tegra186-host1x");
MODULE_ALIAS("of:N*T*Cnvidia,tegra186-host1xC*");
MODULE_ALIAS("of:N*T*Cnvidia,tegra210-host1x");
MODULE_ALIAS("of:N*T*Cnvidia,tegra210-host1xC*");
MODULE_ALIAS("of:N*T*Cnvidia,tegra124-host1x");
MODULE_ALIAS("of:N*T*Cnvidia,tegra124-host1xC*");
MODULE_ALIAS("of:N*T*Cnvidia,tegra114-host1x");
MODULE_ALIAS("of:N*T*Cnvidia,tegra114-host1xC*");
MODULE_ALIAS("of:N*T*Cnvidia,tegra30-host1x");
MODULE_ALIAS("of:N*T*Cnvidia,tegra30-host1xC*");
MODULE_ALIAS("of:N*T*Cnvidia,tegra20-host1x");
MODULE_ALIAS("of:N*T*Cnvidia,tegra20-host1xC*");

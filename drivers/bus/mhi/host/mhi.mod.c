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

KSYMTAB_FUNC(mhi_register_controller, "");
SYMBOL_FLAGS(mhi_register_controller, 0x01);
KSYMTAB_FUNC(mhi_unregister_controller, "");
SYMBOL_FLAGS(mhi_unregister_controller, 0x01);
KSYMTAB_FUNC(mhi_alloc_controller, "");
SYMBOL_FLAGS(mhi_alloc_controller, 0x01);
KSYMTAB_FUNC(mhi_free_controller, "");
SYMBOL_FLAGS(mhi_free_controller, 0x01);
KSYMTAB_FUNC(mhi_prepare_for_power_up, "");
SYMBOL_FLAGS(mhi_prepare_for_power_up, 0x01);
KSYMTAB_FUNC(mhi_unprepare_after_power_down, "");
SYMBOL_FLAGS(mhi_unprepare_after_power_down, 0x01);
KSYMTAB_FUNC(__mhi_driver_register, "");
SYMBOL_FLAGS(__mhi_driver_register, 0x01);
KSYMTAB_FUNC(mhi_driver_unregister, "");
SYMBOL_FLAGS(mhi_driver_unregister, 0x01);
KSYMTAB_FUNC(mhi_get_exec_env, "");
SYMBOL_FLAGS(mhi_get_exec_env, 0x01);
KSYMTAB_FUNC(mhi_get_mhi_state, "");
SYMBOL_FLAGS(mhi_get_mhi_state, 0x01);
KSYMTAB_FUNC(mhi_soc_reset, "");
SYMBOL_FLAGS(mhi_soc_reset, 0x01);
KSYMTAB_FUNC(mhi_get_free_desc_count, "");
SYMBOL_FLAGS(mhi_get_free_desc_count, 0x01);
KSYMTAB_FUNC(mhi_notify, "");
SYMBOL_FLAGS(mhi_notify, 0x01);
KSYMTAB_FUNC(mhi_queue_skb, "");
SYMBOL_FLAGS(mhi_queue_skb, 0x01);
KSYMTAB_FUNC(mhi_queue_buf, "");
SYMBOL_FLAGS(mhi_queue_buf, 0x01);
KSYMTAB_FUNC(mhi_queue_is_full, "");
SYMBOL_FLAGS(mhi_queue_is_full, 0x01);
KSYMTAB_FUNC(mhi_prepare_for_transfer, "");
SYMBOL_FLAGS(mhi_prepare_for_transfer, 0x01);
KSYMTAB_FUNC(mhi_unprepare_from_transfer, "");
SYMBOL_FLAGS(mhi_unprepare_from_transfer, 0x01);
KSYMTAB_FUNC(mhi_get_channel_doorbell_offset, "");
SYMBOL_FLAGS(mhi_get_channel_doorbell_offset, 0x01);
KSYMTAB_FUNC(mhi_pm_suspend, "");
SYMBOL_FLAGS(mhi_pm_suspend, 0x01);
KSYMTAB_FUNC(mhi_pm_resume, "");
SYMBOL_FLAGS(mhi_pm_resume, 0x01);
KSYMTAB_FUNC(mhi_pm_resume_force, "");
SYMBOL_FLAGS(mhi_pm_resume_force, 0x01);
KSYMTAB_FUNC(mhi_async_power_up, "");
SYMBOL_FLAGS(mhi_async_power_up, 0x01);
KSYMTAB_FUNC(mhi_power_down, "");
SYMBOL_FLAGS(mhi_power_down, 0x01);
KSYMTAB_FUNC(mhi_power_down_keep_dev, "");
SYMBOL_FLAGS(mhi_power_down_keep_dev, 0x01);
KSYMTAB_FUNC(mhi_sync_power_up, "");
SYMBOL_FLAGS(mhi_sync_power_up, 0x00);
KSYMTAB_FUNC(mhi_force_rddm_mode, "");
SYMBOL_FLAGS(mhi_force_rddm_mode, 0x01);
KSYMTAB_FUNC(mhi_device_get_sync, "");
SYMBOL_FLAGS(mhi_device_get_sync, 0x01);
KSYMTAB_FUNC(mhi_device_put, "");
SYMBOL_FLAGS(mhi_device_put, 0x01);
KSYMTAB_FUNC(mhi_download_rddm_image, "");
SYMBOL_FLAGS(mhi_download_rddm_image, 0x01);

MODULE_INFO(depends, "");


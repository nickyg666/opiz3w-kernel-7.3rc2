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

KSYMTAB_FUNC(dvb_generic_open, "");
SYMBOL_FLAGS(dvb_generic_open, 0x00);
KSYMTAB_FUNC(dvb_generic_release, "");
SYMBOL_FLAGS(dvb_generic_release, 0x00);
KSYMTAB_FUNC(dvb_generic_ioctl, "");
SYMBOL_FLAGS(dvb_generic_ioctl, 0x00);
KSYMTAB_FUNC(dvb_register_device, "");
SYMBOL_FLAGS(dvb_register_device, 0x00);
KSYMTAB_FUNC(dvb_remove_device, "");
SYMBOL_FLAGS(dvb_remove_device, 0x00);
KSYMTAB_FUNC(dvb_device_get, "");
SYMBOL_FLAGS(dvb_device_get, 0x00);
KSYMTAB_FUNC(dvb_unregister_device, "");
SYMBOL_FLAGS(dvb_unregister_device, 0x00);
KSYMTAB_FUNC(dvb_register_adapter, "");
SYMBOL_FLAGS(dvb_register_adapter, 0x00);
KSYMTAB_FUNC(dvb_unregister_adapter, "");
SYMBOL_FLAGS(dvb_unregister_adapter, 0x00);
KSYMTAB_FUNC(dvb_module_probe, "");
SYMBOL_FLAGS(dvb_module_probe, 0x01);
KSYMTAB_FUNC(dvb_module_release, "");
SYMBOL_FLAGS(dvb_module_release, 0x01);
KSYMTAB_FUNC(dvb_dmxdev_init, "");
SYMBOL_FLAGS(dvb_dmxdev_init, 0x00);
KSYMTAB_FUNC(dvb_dmxdev_release, "");
SYMBOL_FLAGS(dvb_dmxdev_release, 0x00);
KSYMTAB_FUNC(dvb_dmx_swfilter_packets, "");
SYMBOL_FLAGS(dvb_dmx_swfilter_packets, 0x00);
KSYMTAB_FUNC(dvb_dmx_swfilter, "");
SYMBOL_FLAGS(dvb_dmx_swfilter, 0x00);
KSYMTAB_FUNC(dvb_dmx_swfilter_204, "");
SYMBOL_FLAGS(dvb_dmx_swfilter_204, 0x00);
KSYMTAB_FUNC(dvb_dmx_swfilter_raw, "");
SYMBOL_FLAGS(dvb_dmx_swfilter_raw, 0x00);
KSYMTAB_FUNC(dvb_dmx_init, "");
SYMBOL_FLAGS(dvb_dmx_init, 0x00);
KSYMTAB_FUNC(dvb_dmx_release, "");
SYMBOL_FLAGS(dvb_dmx_release, 0x00);
KSYMTAB_FUNC(dvb_ca_en50221_camchange_irq, "");
SYMBOL_FLAGS(dvb_ca_en50221_camchange_irq, 0x00);
KSYMTAB_FUNC(dvb_ca_en50221_camready_irq, "");
SYMBOL_FLAGS(dvb_ca_en50221_camready_irq, 0x00);
KSYMTAB_FUNC(dvb_ca_en50221_frda_irq, "");
SYMBOL_FLAGS(dvb_ca_en50221_frda_irq, 0x00);
KSYMTAB_FUNC(dvb_ca_en50221_init, "");
SYMBOL_FLAGS(dvb_ca_en50221_init, 0x00);
KSYMTAB_FUNC(dvb_ca_en50221_release, "");
SYMBOL_FLAGS(dvb_ca_en50221_release, 0x00);
KSYMTAB_FUNC(dvb_frontend_reinitialise, "");
SYMBOL_FLAGS(dvb_frontend_reinitialise, 0x00);
KSYMTAB_FUNC(dvb_frontend_sleep_until, "");
SYMBOL_FLAGS(dvb_frontend_sleep_until, 0x00);
KSYMTAB_FUNC(dvb_frontend_suspend, "");
SYMBOL_FLAGS(dvb_frontend_suspend, 0x00);
KSYMTAB_FUNC(dvb_frontend_resume, "");
SYMBOL_FLAGS(dvb_frontend_resume, 0x00);
KSYMTAB_FUNC(dvb_register_frontend, "");
SYMBOL_FLAGS(dvb_register_frontend, 0x00);
KSYMTAB_FUNC(dvb_unregister_frontend, "");
SYMBOL_FLAGS(dvb_unregister_frontend, 0x00);
KSYMTAB_FUNC(dvb_frontend_detach, "");
SYMBOL_FLAGS(dvb_frontend_detach, 0x00);
KSYMTAB_FUNC(dvb_ringbuffer_flush, "");
SYMBOL_FLAGS(dvb_ringbuffer_flush, 0x00);
KSYMTAB_FUNC(dvb_ringbuffer_init, "");
SYMBOL_FLAGS(dvb_ringbuffer_init, 0x00);
KSYMTAB_FUNC(dvb_ringbuffer_empty, "");
SYMBOL_FLAGS(dvb_ringbuffer_empty, 0x00);
KSYMTAB_FUNC(dvb_ringbuffer_free, "");
SYMBOL_FLAGS(dvb_ringbuffer_free, 0x00);
KSYMTAB_FUNC(dvb_ringbuffer_avail, "");
SYMBOL_FLAGS(dvb_ringbuffer_avail, 0x00);
KSYMTAB_FUNC(dvb_ringbuffer_flush_spinlock_wakeup, "");
SYMBOL_FLAGS(dvb_ringbuffer_flush_spinlock_wakeup, 0x00);
KSYMTAB_FUNC(dvb_ringbuffer_read_user, "");
SYMBOL_FLAGS(dvb_ringbuffer_read_user, 0x00);
KSYMTAB_FUNC(dvb_ringbuffer_read, "");
SYMBOL_FLAGS(dvb_ringbuffer_read, 0x00);
KSYMTAB_FUNC(dvb_ringbuffer_write, "");
SYMBOL_FLAGS(dvb_ringbuffer_write, 0x00);
KSYMTAB_FUNC(dvb_ringbuffer_write_user, "");
SYMBOL_FLAGS(dvb_ringbuffer_write_user, 0x00);

MODULE_INFO(depends, "");


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

KSYMTAB_FUNC(m_can_check_mram_cfg, "");
SYMBOL_FLAGS(m_can_check_mram_cfg, 0x01);
KSYMTAB_FUNC(m_can_class_get_clocks, "");
SYMBOL_FLAGS(m_can_class_get_clocks, 0x01);
KSYMTAB_FUNC(m_can_class_allocate_dev, "");
SYMBOL_FLAGS(m_can_class_allocate_dev, 0x01);
KSYMTAB_FUNC(m_can_class_free_dev, "");
SYMBOL_FLAGS(m_can_class_free_dev, 0x01);
KSYMTAB_FUNC(m_can_class_register, "");
SYMBOL_FLAGS(m_can_class_register, 0x01);
KSYMTAB_FUNC(m_can_class_unregister, "");
SYMBOL_FLAGS(m_can_class_unregister, 0x01);
KSYMTAB_FUNC(m_can_class_suspend, "");
SYMBOL_FLAGS(m_can_class_suspend, 0x01);
KSYMTAB_FUNC(m_can_class_resume, "");
SYMBOL_FLAGS(m_can_class_resume, 0x01);

MODULE_INFO(depends, "can-dev");


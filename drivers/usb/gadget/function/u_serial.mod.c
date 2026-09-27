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

KSYMTAB_FUNC(gs_alloc_req, "");
SYMBOL_FLAGS(gs_alloc_req, 0x01);
KSYMTAB_FUNC(gs_free_req, "");
SYMBOL_FLAGS(gs_free_req, 0x01);
KSYMTAB_FUNC(gserial_free_line, "");
SYMBOL_FLAGS(gserial_free_line, 0x01);
KSYMTAB_FUNC(gserial_alloc_line_no_console, "");
SYMBOL_FLAGS(gserial_alloc_line_no_console, 0x01);
KSYMTAB_FUNC(gserial_alloc_line, "");
SYMBOL_FLAGS(gserial_alloc_line, 0x01);
KSYMTAB_FUNC(gserial_connect, "");
SYMBOL_FLAGS(gserial_connect, 0x01);
KSYMTAB_FUNC(gserial_disconnect, "");
SYMBOL_FLAGS(gserial_disconnect, 0x01);
KSYMTAB_FUNC(gserial_suspend, "");
SYMBOL_FLAGS(gserial_suspend, 0x01);
KSYMTAB_FUNC(gserial_resume, "");
SYMBOL_FLAGS(gserial_resume, 0x01);

MODULE_INFO(depends, "libcomposite");


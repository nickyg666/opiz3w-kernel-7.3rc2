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

KSYMTAB_FUNC(dw_spi_set_cs, "SPI_DW_CORE");
SYMBOL_FLAGS(dw_spi_set_cs, 0x01);
KSYMTAB_FUNC(dw_spi_check_status, "SPI_DW_CORE");
SYMBOL_FLAGS(dw_spi_check_status, 0x01);
KSYMTAB_FUNC(dw_spi_update_config, "SPI_DW_CORE");
SYMBOL_FLAGS(dw_spi_update_config, 0x01);
KSYMTAB_FUNC(dw_spi_add_controller, "SPI_DW_CORE");
SYMBOL_FLAGS(dw_spi_add_controller, 0x01);
KSYMTAB_FUNC(dw_spi_remove_controller, "SPI_DW_CORE");
SYMBOL_FLAGS(dw_spi_remove_controller, 0x01);
KSYMTAB_FUNC(dw_spi_suspend_controller, "SPI_DW_CORE");
SYMBOL_FLAGS(dw_spi_suspend_controller, 0x01);
KSYMTAB_FUNC(dw_spi_resume_controller, "SPI_DW_CORE");
SYMBOL_FLAGS(dw_spi_resume_controller, 0x01);
KSYMTAB_FUNC(dw_spi_dma_setup_mfld, "SPI_DW_CORE");
SYMBOL_FLAGS(dw_spi_dma_setup_mfld, 0x01);
KSYMTAB_FUNC(dw_spi_dma_setup_generic, "SPI_DW_CORE");
SYMBOL_FLAGS(dw_spi_dma_setup_generic, 0x01);

MODULE_INFO(depends, "");


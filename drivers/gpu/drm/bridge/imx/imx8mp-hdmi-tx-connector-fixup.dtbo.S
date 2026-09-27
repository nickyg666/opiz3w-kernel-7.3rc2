#include <asm-generic/vmlinux.lds.h>
.section .rodata,"a"
.balign STRUCT_ALIGNMENT
.global __dtbo_imx8mp_hdmi_tx_connector_fixup_begin
__dtbo_imx8mp_hdmi_tx_connector_fixup_begin:
.incbin "drivers/gpu/drm/bridge/imx/imx8mp-hdmi-tx-connector-fixup.dtbo" 
.global __dtbo_imx8mp_hdmi_tx_connector_fixup_end
__dtbo_imx8mp_hdmi_tx_connector_fixup_end:
.balign STRUCT_ALIGNMENT

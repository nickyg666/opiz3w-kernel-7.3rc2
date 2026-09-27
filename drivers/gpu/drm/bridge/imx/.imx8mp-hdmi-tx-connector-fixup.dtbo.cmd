savedcmd_drivers/gpu/drm/bridge/imx/imx8mp-hdmi-tx-connector-fixup.dtbo := gcc -E -Wp,-MMD,drivers/gpu/drm/bridge/imx/.imx8mp-hdmi-tx-connector-fixup.dtbo.d.pre.tmp -nostdinc -I ./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o drivers/gpu/drm/bridge/imx/.imx8mp-hdmi-tx-connector-fixup.dtbo.dts.tmp drivers/gpu/drm/bridge/imx/imx8mp-hdmi-tx-connector-fixup.dtso ; ./scripts/dtc/dtc -o drivers/gpu/drm/bridge/imx/imx8mp-hdmi-tx-connector-fixup.dtbo -b 0 -idrivers/gpu/drm/bridge/imx/ -i./scripts/dtc/include-prefixes -Wno-unique_unit_address -Wno-unit_address_vs_reg -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-interrupt_map -Wno-simple_bus_reg   -d drivers/gpu/drm/bridge/imx/.imx8mp-hdmi-tx-connector-fixup.dtbo.d.dtc.tmp drivers/gpu/drm/bridge/imx/.imx8mp-hdmi-tx-connector-fixup.dtbo.dts.tmp ; cat drivers/gpu/drm/bridge/imx/.imx8mp-hdmi-tx-connector-fixup.dtbo.d.pre.tmp drivers/gpu/drm/bridge/imx/.imx8mp-hdmi-tx-connector-fixup.dtbo.d.dtc.tmp > drivers/gpu/drm/bridge/imx/.imx8mp-hdmi-tx-connector-fixup.dtbo.d 

source_drivers/gpu/drm/bridge/imx/imx8mp-hdmi-tx-connector-fixup.dtbo := drivers/gpu/drm/bridge/imx/imx8mp-hdmi-tx-connector-fixup.dtso

deps_drivers/gpu/drm/bridge/imx/imx8mp-hdmi-tx-connector-fixup.dtbo := \

drivers/gpu/drm/bridge/imx/imx8mp-hdmi-tx-connector-fixup.dtbo: $(deps_drivers/gpu/drm/bridge/imx/imx8mp-hdmi-tx-connector-fixup.dtbo)

$(deps_drivers/gpu/drm/bridge/imx/imx8mp-hdmi-tx-connector-fixup.dtbo):

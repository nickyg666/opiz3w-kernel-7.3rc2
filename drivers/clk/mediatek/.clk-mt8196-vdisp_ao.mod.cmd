savedcmd_drivers/clk/mediatek/clk-mt8196-vdisp_ao.mod := printf '%s\n'   clk-mt8196-vdisp_ao.o | awk '!x[$$0]++ { print("drivers/clk/mediatek/"$$0) }' > drivers/clk/mediatek/clk-mt8196-vdisp_ao.mod

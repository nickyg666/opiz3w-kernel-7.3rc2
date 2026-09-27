savedcmd_drivers/clk/mediatek/clk-mt8196-vdec.mod := printf '%s\n'   clk-mt8196-vdec.o | awk '!x[$$0]++ { print("drivers/clk/mediatek/"$$0) }' > drivers/clk/mediatek/clk-mt8196-vdec.mod

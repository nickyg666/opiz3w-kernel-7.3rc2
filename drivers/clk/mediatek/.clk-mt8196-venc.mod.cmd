savedcmd_drivers/clk/mediatek/clk-mt8196-venc.mod := printf '%s\n'   clk-mt8196-venc.o | awk '!x[$$0]++ { print("drivers/clk/mediatek/"$$0) }' > drivers/clk/mediatek/clk-mt8196-venc.mod

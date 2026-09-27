savedcmd_drivers/clk/mediatek/clk-mt8196-ovl0.mod := printf '%s\n'   clk-mt8196-ovl0.o | awk '!x[$$0]++ { print("drivers/clk/mediatek/"$$0) }' > drivers/clk/mediatek/clk-mt8196-ovl0.mod

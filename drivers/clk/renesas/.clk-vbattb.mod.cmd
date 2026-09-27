savedcmd_drivers/clk/renesas/clk-vbattb.mod := printf '%s\n'   clk-vbattb.o | awk '!x[$$0]++ { print("drivers/clk/renesas/"$$0) }' > drivers/clk/renesas/clk-vbattb.mod

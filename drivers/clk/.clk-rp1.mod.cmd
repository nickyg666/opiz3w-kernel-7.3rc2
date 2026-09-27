savedcmd_drivers/clk/clk-rp1.mod := printf '%s\n'   clk-rp1.o | awk '!x[$$0]++ { print("drivers/clk/"$$0) }' > drivers/clk/clk-rp1.mod

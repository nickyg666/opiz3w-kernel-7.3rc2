savedcmd_drivers/clk/clk-apple-nco.mod := printf '%s\n'   clk-apple-nco.o | awk '!x[$$0]++ { print("drivers/clk/"$$0) }' > drivers/clk/clk-apple-nco.mod

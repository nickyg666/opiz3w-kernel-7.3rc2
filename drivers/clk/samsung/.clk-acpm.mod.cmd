savedcmd_drivers/clk/samsung/clk-acpm.mod := printf '%s\n'   clk-acpm.o | awk '!x[$$0]++ { print("drivers/clk/samsung/"$$0) }' > drivers/clk/samsung/clk-acpm.mod

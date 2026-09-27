savedcmd_drivers/clk/qcom/tcsrcc-nord.mod := printf '%s\n'   tcsrcc-nord.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/tcsrcc-nord.mod

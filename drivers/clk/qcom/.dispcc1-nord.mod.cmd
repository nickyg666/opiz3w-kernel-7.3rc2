savedcmd_drivers/clk/qcom/dispcc1-nord.mod := printf '%s\n'   dispcc1-nord.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/dispcc1-nord.mod

savedcmd_drivers/clk/qcom/dispcc0-nord.mod := printf '%s\n'   dispcc0-nord.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/dispcc0-nord.mod

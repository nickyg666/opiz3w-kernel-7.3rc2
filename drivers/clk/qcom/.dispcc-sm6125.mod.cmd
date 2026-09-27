savedcmd_drivers/clk/qcom/dispcc-sm6125.mod := printf '%s\n'   dispcc-sm6125.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/dispcc-sm6125.mod

savedcmd_drivers/clk/qcom/dispcc-sm6350.mod := printf '%s\n'   dispcc-sm6350.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/dispcc-sm6350.mod

savedcmd_drivers/clk/qcom/dispcc-sm7150.mod := printf '%s\n'   dispcc-sm7150.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/dispcc-sm7150.mod

savedcmd_drivers/clk/qcom/dispcc-sm4450.mod := printf '%s\n'   dispcc-sm4450.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/dispcc-sm4450.mod

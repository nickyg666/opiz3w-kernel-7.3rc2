savedcmd_drivers/clk/qcom/dispcc-qcs615.mod := printf '%s\n'   dispcc-qcs615.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/dispcc-qcs615.mod

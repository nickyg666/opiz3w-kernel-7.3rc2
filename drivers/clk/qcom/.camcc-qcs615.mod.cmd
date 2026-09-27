savedcmd_drivers/clk/qcom/camcc-qcs615.mod := printf '%s\n'   camcc-qcs615.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/camcc-qcs615.mod

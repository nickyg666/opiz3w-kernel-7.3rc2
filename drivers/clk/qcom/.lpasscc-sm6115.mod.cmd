savedcmd_drivers/clk/qcom/lpasscc-sm6115.mod := printf '%s\n'   lpasscc-sm6115.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/lpasscc-sm6115.mod

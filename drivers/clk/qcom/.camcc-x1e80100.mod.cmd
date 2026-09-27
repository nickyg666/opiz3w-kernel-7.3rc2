savedcmd_drivers/clk/qcom/camcc-x1e80100.mod := printf '%s\n'   camcc-x1e80100.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/camcc-x1e80100.mod

savedcmd_drivers/clk/qcom/dispcc-x1e80100.mod := printf '%s\n'   dispcc-x1e80100.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/dispcc-x1e80100.mod

savedcmd_drivers/clk/qcom/gpucc-x1e80100.mod := printf '%s\n'   gpucc-x1e80100.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/gpucc-x1e80100.mod

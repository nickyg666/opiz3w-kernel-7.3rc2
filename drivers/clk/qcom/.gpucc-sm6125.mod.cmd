savedcmd_drivers/clk/qcom/gpucc-sm6125.mod := printf '%s\n'   gpucc-sm6125.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/gpucc-sm6125.mod

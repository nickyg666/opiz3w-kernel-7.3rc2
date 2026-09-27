savedcmd_drivers/clk/qcom/gpucc-sm6350.mod := printf '%s\n'   gpucc-sm6350.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/gpucc-sm6350.mod

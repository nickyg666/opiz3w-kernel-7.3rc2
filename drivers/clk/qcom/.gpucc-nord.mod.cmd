savedcmd_drivers/clk/qcom/gpucc-nord.mod := printf '%s\n'   gpucc-nord.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/gpucc-nord.mod

savedcmd_drivers/clk/qcom/gpucc-sdm660.mod := printf '%s\n'   gpucc-sdm660.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/gpucc-sdm660.mod

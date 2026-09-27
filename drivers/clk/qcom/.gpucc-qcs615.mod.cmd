savedcmd_drivers/clk/qcom/gpucc-qcs615.mod := printf '%s\n'   gpucc-qcs615.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/gpucc-qcs615.mod

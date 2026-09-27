savedcmd_drivers/clk/qcom/gpucc-sm8650.mod := printf '%s\n'   gpucc-sm8650.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/gpucc-sm8650.mod

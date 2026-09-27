savedcmd_drivers/clk/qcom/gpucc-sm8450.mod := printf '%s\n'   gpucc-sm8450.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/gpucc-sm8450.mod

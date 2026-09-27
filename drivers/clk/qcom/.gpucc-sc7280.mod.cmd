savedcmd_drivers/clk/qcom/gpucc-sc7280.mod := printf '%s\n'   gpucc-sc7280.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/gpucc-sc7280.mod

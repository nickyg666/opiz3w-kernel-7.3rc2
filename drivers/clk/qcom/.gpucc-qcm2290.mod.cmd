savedcmd_drivers/clk/qcom/gpucc-qcm2290.mod := printf '%s\n'   gpucc-qcm2290.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/gpucc-qcm2290.mod

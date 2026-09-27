savedcmd_drivers/clk/qcom/gpucc-kaanapali.mod := printf '%s\n'   gpucc-kaanapali.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/gpucc-kaanapali.mod

savedcmd_drivers/clk/qcom/videocc-qcs615.mod := printf '%s\n'   videocc-qcs615.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/videocc-qcs615.mod

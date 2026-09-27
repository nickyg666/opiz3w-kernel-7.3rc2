savedcmd_drivers/clk/qcom/videocc-sm7150.mod := printf '%s\n'   videocc-sm7150.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/videocc-sm7150.mod

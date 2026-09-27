savedcmd_drivers/clk/qcom/videocc-sm6350.mod := printf '%s\n'   videocc-sm6350.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/videocc-sm6350.mod

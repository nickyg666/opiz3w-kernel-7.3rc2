savedcmd_drivers/clk/qcom/videocc-hawi.mod := printf '%s\n'   videocc-hawi.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/videocc-hawi.mod

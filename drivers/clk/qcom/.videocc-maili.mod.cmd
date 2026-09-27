savedcmd_drivers/clk/qcom/videocc-maili.mod := printf '%s\n'   videocc-maili.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/videocc-maili.mod

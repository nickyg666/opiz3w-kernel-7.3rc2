savedcmd_drivers/clk/qcom/videocc-sm8550.mod := printf '%s\n'   videocc-sm8550.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/videocc-sm8550.mod

savedcmd_drivers/clk/qcom/videocc-sm8150.mod := printf '%s\n'   videocc-sm8150.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/videocc-sm8150.mod

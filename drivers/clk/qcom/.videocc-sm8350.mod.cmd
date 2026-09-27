savedcmd_drivers/clk/qcom/videocc-sm8350.mod := printf '%s\n'   videocc-sm8350.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/videocc-sm8350.mod

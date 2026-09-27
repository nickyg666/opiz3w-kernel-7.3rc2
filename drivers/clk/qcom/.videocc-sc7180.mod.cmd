savedcmd_drivers/clk/qcom/videocc-sc7180.mod := printf '%s\n'   videocc-sc7180.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/videocc-sc7180.mod

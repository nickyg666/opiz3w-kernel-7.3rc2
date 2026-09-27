savedcmd_drivers/clk/qcom/videocc-sc7280.mod := printf '%s\n'   videocc-sc7280.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/videocc-sc7280.mod

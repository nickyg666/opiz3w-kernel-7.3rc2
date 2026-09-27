savedcmd_drivers/clk/qcom/videocc-x1p42100.mod := printf '%s\n'   videocc-x1p42100.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/videocc-x1p42100.mod

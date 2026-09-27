savedcmd_drivers/clk/qcom/camcc-x1p42100.mod := printf '%s\n'   camcc-x1p42100.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/camcc-x1p42100.mod

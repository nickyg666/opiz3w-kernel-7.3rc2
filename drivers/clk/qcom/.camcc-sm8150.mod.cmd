savedcmd_drivers/clk/qcom/camcc-sm8150.mod := printf '%s\n'   camcc-sm8150.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/camcc-sm8150.mod

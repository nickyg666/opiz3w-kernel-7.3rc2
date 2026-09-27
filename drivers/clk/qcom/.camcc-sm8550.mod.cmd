savedcmd_drivers/clk/qcom/camcc-sm8550.mod := printf '%s\n'   camcc-sm8550.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/camcc-sm8550.mod

savedcmd_drivers/clk/qcom/dispcc-sm8750.mod := printf '%s\n'   dispcc-sm8750.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/dispcc-sm8750.mod

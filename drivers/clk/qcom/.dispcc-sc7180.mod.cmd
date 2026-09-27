savedcmd_drivers/clk/qcom/dispcc-sc7180.mod := printf '%s\n'   dispcc-sc7180.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/dispcc-sc7180.mod

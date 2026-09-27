savedcmd_drivers/clk/qcom/camcc-sc7180.mod := printf '%s\n'   camcc-sc7180.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/camcc-sc7180.mod

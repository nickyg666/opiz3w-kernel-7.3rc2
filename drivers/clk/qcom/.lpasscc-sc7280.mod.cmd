savedcmd_drivers/clk/qcom/lpasscc-sc7280.mod := printf '%s\n'   lpasscc-sc7280.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/lpasscc-sc7280.mod

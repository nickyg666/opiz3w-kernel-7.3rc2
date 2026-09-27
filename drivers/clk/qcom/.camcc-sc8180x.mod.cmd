savedcmd_drivers/clk/qcom/camcc-sc8180x.mod := printf '%s\n'   camcc-sc8180x.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/camcc-sc8180x.mod

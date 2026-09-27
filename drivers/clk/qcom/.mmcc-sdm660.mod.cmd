savedcmd_drivers/clk/qcom/mmcc-sdm660.mod := printf '%s\n'   mmcc-sdm660.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/mmcc-sdm660.mod

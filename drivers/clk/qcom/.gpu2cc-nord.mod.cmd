savedcmd_drivers/clk/qcom/gpu2cc-nord.mod := printf '%s\n'   gpu2cc-nord.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/gpu2cc-nord.mod

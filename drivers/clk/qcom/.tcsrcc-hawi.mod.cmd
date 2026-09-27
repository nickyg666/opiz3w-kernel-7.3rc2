savedcmd_drivers/clk/qcom/tcsrcc-hawi.mod := printf '%s\n'   tcsrcc-hawi.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/tcsrcc-hawi.mod

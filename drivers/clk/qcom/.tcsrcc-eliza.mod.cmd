savedcmd_drivers/clk/qcom/tcsrcc-eliza.mod := printf '%s\n'   tcsrcc-eliza.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/tcsrcc-eliza.mod

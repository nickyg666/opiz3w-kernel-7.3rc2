savedcmd_drivers/clk/qcom/tcsrcc-glymur.mod := printf '%s\n'   tcsrcc-glymur.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/tcsrcc-glymur.mod

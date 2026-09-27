savedcmd_drivers/clk/qcom/tcsrcc-kaanapali.mod := printf '%s\n'   tcsrcc-kaanapali.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/tcsrcc-kaanapali.mod

savedcmd_drivers/clk/qcom/ipq-cmn-pll.mod := printf '%s\n'   ipq-cmn-pll.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/ipq-cmn-pll.mod

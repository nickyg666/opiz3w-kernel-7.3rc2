savedcmd_drivers/clk/qcom/nsscc-ipq9574.mod := printf '%s\n'   nsscc-ipq9574.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/nsscc-ipq9574.mod

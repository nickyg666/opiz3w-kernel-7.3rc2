savedcmd_drivers/clk/qcom/nsscc-ipq5424.mod := printf '%s\n'   nsscc-ipq5424.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/nsscc-ipq5424.mod

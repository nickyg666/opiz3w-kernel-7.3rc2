savedcmd_drivers/clk/qcom/cambistmclkcc-kaanapali.mod := printf '%s\n'   cambistmclkcc-kaanapali.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/cambistmclkcc-kaanapali.mod

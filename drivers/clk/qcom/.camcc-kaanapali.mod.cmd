savedcmd_drivers/clk/qcom/camcc-kaanapali.mod := printf '%s\n'   camcc-kaanapali.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/camcc-kaanapali.mod

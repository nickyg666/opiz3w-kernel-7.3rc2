savedcmd_drivers/clk/qcom/dispcc-kaanapali.mod := printf '%s\n'   dispcc-kaanapali.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/dispcc-kaanapali.mod

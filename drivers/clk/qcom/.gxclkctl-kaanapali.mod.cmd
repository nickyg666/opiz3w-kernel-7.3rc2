savedcmd_drivers/clk/qcom/gxclkctl-kaanapali.mod := printf '%s\n'   gxclkctl-kaanapali.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/gxclkctl-kaanapali.mod

savedcmd_drivers/clk/qcom/videocc-kaanapali.mod := printf '%s\n'   videocc-kaanapali.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/videocc-kaanapali.mod

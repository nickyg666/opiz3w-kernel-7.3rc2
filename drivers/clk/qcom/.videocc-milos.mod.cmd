savedcmd_drivers/clk/qcom/videocc-milos.mod := printf '%s\n'   videocc-milos.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/videocc-milos.mod

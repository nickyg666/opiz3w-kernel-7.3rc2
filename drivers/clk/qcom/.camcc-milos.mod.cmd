savedcmd_drivers/clk/qcom/camcc-milos.mod := printf '%s\n'   camcc-milos.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/camcc-milos.mod

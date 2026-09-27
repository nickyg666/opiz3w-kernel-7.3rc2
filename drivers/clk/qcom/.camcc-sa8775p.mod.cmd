savedcmd_drivers/clk/qcom/camcc-sa8775p.mod := printf '%s\n'   camcc-sa8775p.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/camcc-sa8775p.mod

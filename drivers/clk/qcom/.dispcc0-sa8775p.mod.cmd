savedcmd_drivers/clk/qcom/dispcc0-sa8775p.mod := printf '%s\n'   dispcc0-sa8775p.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/dispcc0-sa8775p.mod

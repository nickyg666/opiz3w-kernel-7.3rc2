savedcmd_drivers/clk/qcom/dispcc1-sa8775p.mod := printf '%s\n'   dispcc1-sa8775p.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/dispcc1-sa8775p.mod

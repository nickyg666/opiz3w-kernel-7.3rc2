savedcmd_drivers/clk/qcom/dispcc-eliza.mod := printf '%s\n'   dispcc-eliza.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/dispcc-eliza.mod

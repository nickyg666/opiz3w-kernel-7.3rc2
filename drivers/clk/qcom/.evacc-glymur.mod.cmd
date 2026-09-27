savedcmd_drivers/clk/qcom/evacc-glymur.mod := printf '%s\n'   evacc-glymur.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/evacc-glymur.mod

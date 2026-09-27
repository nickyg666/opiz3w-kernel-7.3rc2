savedcmd_drivers/clk/qcom/camcc-sc8280xp.mod := printf '%s\n'   camcc-sc8280xp.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/camcc-sc8280xp.mod

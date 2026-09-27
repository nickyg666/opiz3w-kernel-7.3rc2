savedcmd_drivers/clk/qcom/ecpricc-qdu1000.mod := printf '%s\n'   ecpricc-qdu1000.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/ecpricc-qdu1000.mod

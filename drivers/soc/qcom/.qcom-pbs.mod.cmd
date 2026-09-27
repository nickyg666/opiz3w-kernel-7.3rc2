savedcmd_drivers/soc/qcom/qcom-pbs.mod := printf '%s\n'   qcom-pbs.o | awk '!x[$$0]++ { print("drivers/soc/qcom/"$$0) }' > drivers/soc/qcom/qcom-pbs.mod

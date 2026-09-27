savedcmd_drivers/soc/qcom/qcom_ice.mod := printf '%s\n'   ice.o | awk '!x[$$0]++ { print("drivers/soc/qcom/"$$0) }' > drivers/soc/qcom/qcom_ice.mod

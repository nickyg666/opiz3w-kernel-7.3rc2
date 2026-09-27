savedcmd_drivers/soc/qcom/ubwc_config.mod := printf '%s\n'   ubwc_config.o | awk '!x[$$0]++ { print("drivers/soc/qcom/"$$0) }' > drivers/soc/qcom/ubwc_config.mod

savedcmd_drivers/soc/qcom/qcom_pd_mapper.mod := printf '%s\n'   qcom_pd_mapper.o | awk '!x[$$0]++ { print("drivers/soc/qcom/"$$0) }' > drivers/soc/qcom/qcom_pd_mapper.mod

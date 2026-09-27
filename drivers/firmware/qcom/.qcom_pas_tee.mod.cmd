savedcmd_drivers/firmware/qcom/qcom_pas_tee.mod := printf '%s\n'   qcom_pas_tee.o | awk '!x[$$0]++ { print("drivers/firmware/qcom/"$$0) }' > drivers/firmware/qcom/qcom_pas_tee.mod

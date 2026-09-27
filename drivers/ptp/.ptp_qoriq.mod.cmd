savedcmd_drivers/ptp/ptp_qoriq.mod := printf '%s\n'   ptp_qoriq.o | awk '!x[$$0]++ { print("drivers/ptp/"$$0) }' > drivers/ptp/ptp_qoriq.mod

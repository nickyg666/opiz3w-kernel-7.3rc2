savedcmd_drivers/mailbox/qcom-cpucp-mbox.mod := printf '%s\n'   qcom-cpucp-mbox.o | awk '!x[$$0]++ { print("drivers/mailbox/"$$0) }' > drivers/mailbox/qcom-cpucp-mbox.mod

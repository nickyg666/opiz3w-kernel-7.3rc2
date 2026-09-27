savedcmd_drivers/power/sequencing/pwrseq-qcom-wcn.mod := printf '%s\n'   pwrseq-qcom-wcn.o | awk '!x[$$0]++ { print("drivers/power/sequencing/"$$0) }' > drivers/power/sequencing/pwrseq-qcom-wcn.mod

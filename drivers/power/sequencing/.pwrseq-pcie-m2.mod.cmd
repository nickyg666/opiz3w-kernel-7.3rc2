savedcmd_drivers/power/sequencing/pwrseq-pcie-m2.mod := printf '%s\n'   pwrseq-pcie-m2.o | awk '!x[$$0]++ { print("drivers/power/sequencing/"$$0) }' > drivers/power/sequencing/pwrseq-pcie-m2.mod

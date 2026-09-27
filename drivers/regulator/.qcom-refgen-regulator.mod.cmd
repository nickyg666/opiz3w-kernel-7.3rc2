savedcmd_drivers/regulator/qcom-refgen-regulator.mod := printf '%s\n'   qcom-refgen-regulator.o | awk '!x[$$0]++ { print("drivers/regulator/"$$0) }' > drivers/regulator/qcom-refgen-regulator.mod

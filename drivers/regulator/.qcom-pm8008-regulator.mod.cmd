savedcmd_drivers/regulator/qcom-pm8008-regulator.mod := printf '%s\n'   qcom-pm8008-regulator.o | awk '!x[$$0]++ { print("drivers/regulator/"$$0) }' > drivers/regulator/qcom-pm8008-regulator.mod

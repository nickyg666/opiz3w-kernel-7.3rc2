savedcmd_drivers/mfd/da9062-core.mod := printf '%s\n'   da9062-core.o | awk '!x[$$0]++ { print("drivers/mfd/"$$0) }' > drivers/mfd/da9062-core.mod

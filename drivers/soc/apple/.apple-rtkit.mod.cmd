savedcmd_drivers/soc/apple/apple-rtkit.mod := printf '%s\n'   rtkit.o rtkit-crashlog.o | awk '!x[$$0]++ { print("drivers/soc/apple/"$$0) }' > drivers/soc/apple/apple-rtkit.mod

savedcmd_drivers/soc/apple/apple-sart.mod := printf '%s\n'   sart.o | awk '!x[$$0]++ { print("drivers/soc/apple/"$$0) }' > drivers/soc/apple/apple-sart.mod

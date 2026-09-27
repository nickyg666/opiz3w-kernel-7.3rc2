savedcmd_drivers/soc/apple/apple-mailbox.mod := printf '%s\n'   mailbox.o | awk '!x[$$0]++ { print("drivers/soc/apple/"$$0) }' > drivers/soc/apple/apple-mailbox.mod

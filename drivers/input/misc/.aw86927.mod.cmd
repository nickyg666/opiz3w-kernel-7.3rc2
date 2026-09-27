savedcmd_drivers/input/misc/aw86927.mod := printf '%s\n'   aw86927.o | awk '!x[$$0]++ { print("drivers/input/misc/"$$0) }' > drivers/input/misc/aw86927.mod

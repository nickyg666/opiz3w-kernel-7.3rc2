savedcmd_drivers/mtd/hyperbus/hbmc-am654.mod := printf '%s\n'   hbmc-am654.o | awk '!x[$$0]++ { print("drivers/mtd/hyperbus/"$$0) }' > drivers/mtd/hyperbus/hbmc-am654.mod

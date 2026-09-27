savedcmd_drivers/input/misc/tps6594-pwrbutton.mod := printf '%s\n'   tps6594-pwrbutton.o | awk '!x[$$0]++ { print("drivers/input/misc/"$$0) }' > drivers/input/misc/tps6594-pwrbutton.mod

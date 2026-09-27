savedcmd_drivers/input/touchscreen/himax_hx83112b.mod := printf '%s\n'   himax_hx83112b.o | awk '!x[$$0]++ { print("drivers/input/touchscreen/"$$0) }' > drivers/input/touchscreen/himax_hx83112b.mod

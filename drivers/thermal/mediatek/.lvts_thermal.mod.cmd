savedcmd_drivers/thermal/mediatek/lvts_thermal.mod := printf '%s\n'   lvts_thermal.o | awk '!x[$$0]++ { print("drivers/thermal/mediatek/"$$0) }' > drivers/thermal/mediatek/lvts_thermal.mod

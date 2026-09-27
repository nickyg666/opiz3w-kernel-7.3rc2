savedcmd_drivers/hwspinlock/omap_hwspinlock.mod := printf '%s\n'   omap_hwspinlock.o | awk '!x[$$0]++ { print("drivers/hwspinlock/"$$0) }' > drivers/hwspinlock/omap_hwspinlock.mod

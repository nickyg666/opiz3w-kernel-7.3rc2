savedcmd_drivers/watchdog/apple_wdt.mod := printf '%s\n'   apple_wdt.o | awk '!x[$$0]++ { print("drivers/watchdog/"$$0) }' > drivers/watchdog/apple_wdt.mod

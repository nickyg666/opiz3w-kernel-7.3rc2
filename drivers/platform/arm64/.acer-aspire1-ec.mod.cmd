savedcmd_drivers/platform/arm64/acer-aspire1-ec.mod := printf '%s\n'   acer-aspire1-ec.o | awk '!x[$$0]++ { print("drivers/platform/arm64/"$$0) }' > drivers/platform/arm64/acer-aspire1-ec.mod

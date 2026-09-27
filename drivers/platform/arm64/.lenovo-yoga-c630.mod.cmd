savedcmd_drivers/platform/arm64/lenovo-yoga-c630.mod := printf '%s\n'   lenovo-yoga-c630.o | awk '!x[$$0]++ { print("drivers/platform/arm64/"$$0) }' > drivers/platform/arm64/lenovo-yoga-c630.mod

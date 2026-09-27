savedcmd_drivers/spmi/spmi-apple-controller.mod := printf '%s\n'   spmi-apple-controller.o | awk '!x[$$0]++ { print("drivers/spmi/"$$0) }' > drivers/spmi/spmi-apple-controller.mod

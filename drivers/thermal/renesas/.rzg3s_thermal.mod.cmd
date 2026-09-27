savedcmd_drivers/thermal/renesas/rzg3s_thermal.mod := printf '%s\n'   rzg3s_thermal.o | awk '!x[$$0]++ { print("drivers/thermal/renesas/"$$0) }' > drivers/thermal/renesas/rzg3s_thermal.mod

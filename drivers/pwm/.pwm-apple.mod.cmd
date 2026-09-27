savedcmd_drivers/pwm/pwm-apple.mod := printf '%s\n'   pwm-apple.o | awk '!x[$$0]++ { print("drivers/pwm/"$$0) }' > drivers/pwm/pwm-apple.mod

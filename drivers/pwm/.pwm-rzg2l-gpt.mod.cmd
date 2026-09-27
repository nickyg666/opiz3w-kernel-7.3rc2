savedcmd_drivers/pwm/pwm-rzg2l-gpt.mod := printf '%s\n'   pwm-rzg2l-gpt.o | awk '!x[$$0]++ { print("drivers/pwm/"$$0) }' > drivers/pwm/pwm-rzg2l-gpt.mod

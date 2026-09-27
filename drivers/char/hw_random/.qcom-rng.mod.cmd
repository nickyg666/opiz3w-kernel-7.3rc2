savedcmd_drivers/char/hw_random/qcom-rng.mod := printf '%s\n'   qcom-rng.o | awk '!x[$$0]++ { print("drivers/char/hw_random/"$$0) }' > drivers/char/hw_random/qcom-rng.mod

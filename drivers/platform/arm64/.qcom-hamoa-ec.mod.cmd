savedcmd_drivers/platform/arm64/qcom-hamoa-ec.mod := printf '%s\n'   qcom-hamoa-ec.o | awk '!x[$$0]++ { print("drivers/platform/arm64/"$$0) }' > drivers/platform/arm64/qcom-hamoa-ec.mod

savedcmd_drivers/platform/arm64/huawei-gaokun-ec.mod := printf '%s\n'   huawei-gaokun-ec.o | awk '!x[$$0]++ { print("drivers/platform/arm64/"$$0) }' > drivers/platform/arm64/huawei-gaokun-ec.mod

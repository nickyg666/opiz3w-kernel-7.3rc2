savedcmd_drivers/net/phy/qcom/qca808x.mod := printf '%s\n'   qca808x.o | awk '!x[$$0]++ { print("drivers/net/phy/qcom/"$$0) }' > drivers/net/phy/qcom/qca808x.mod

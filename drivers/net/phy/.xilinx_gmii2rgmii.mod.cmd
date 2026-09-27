savedcmd_drivers/net/phy/xilinx_gmii2rgmii.mod := printf '%s\n'   xilinx_gmii2rgmii.o | awk '!x[$$0]++ { print("drivers/net/phy/"$$0) }' > drivers/net/phy/xilinx_gmii2rgmii.mod

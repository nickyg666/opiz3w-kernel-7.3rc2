savedcmd_drivers/media/platform/renesas/rcar-csi2.mod := printf '%s\n'   rcar-csi2.o | awk '!x[$$0]++ { print("drivers/media/platform/renesas/"$$0) }' > drivers/media/platform/renesas/rcar-csi2.mod

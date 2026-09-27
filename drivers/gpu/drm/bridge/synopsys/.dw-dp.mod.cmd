savedcmd_drivers/gpu/drm/bridge/synopsys/dw-dp.mod := printf '%s\n'   dw-dp.o | awk '!x[$$0]++ { print("drivers/gpu/drm/bridge/synopsys/"$$0) }' > drivers/gpu/drm/bridge/synopsys/dw-dp.mod

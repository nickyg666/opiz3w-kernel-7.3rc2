savedcmd_drivers/gpu/drm/bridge/tda998x.mod := printf '%s\n'   tda998x_drv.o | awk '!x[$$0]++ { print("drivers/gpu/drm/bridge/"$$0) }' > drivers/gpu/drm/bridge/tda998x.mod

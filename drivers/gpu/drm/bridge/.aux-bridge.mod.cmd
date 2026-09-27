savedcmd_drivers/gpu/drm/bridge/aux-bridge.mod := printf '%s\n'   aux-bridge.o | awk '!x[$$0]++ { print("drivers/gpu/drm/bridge/"$$0) }' > drivers/gpu/drm/bridge/aux-bridge.mod

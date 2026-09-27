savedcmd_drivers/gpu/drm/bridge/aux-hpd-bridge.mod := printf '%s\n'   aux-hpd-bridge.o | awk '!x[$$0]++ { print("drivers/gpu/drm/bridge/"$$0) }' > drivers/gpu/drm/bridge/aux-hpd-bridge.mod

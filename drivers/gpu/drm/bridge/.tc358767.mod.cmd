savedcmd_drivers/gpu/drm/bridge/tc358767.mod := printf '%s\n'   tc358767.o | awk '!x[$$0]++ { print("drivers/gpu/drm/bridge/"$$0) }' > drivers/gpu/drm/bridge/tc358767.mod

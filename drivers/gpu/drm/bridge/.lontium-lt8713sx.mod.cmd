savedcmd_drivers/gpu/drm/bridge/lontium-lt8713sx.mod := printf '%s\n'   lontium-lt8713sx.o | awk '!x[$$0]++ { print("drivers/gpu/drm/bridge/"$$0) }' > drivers/gpu/drm/bridge/lontium-lt8713sx.mod

savedcmd_drivers/gpu/drm/bridge/ite-it6263.mod := printf '%s\n'   ite-it6263.o | awk '!x[$$0]++ { print("drivers/gpu/drm/bridge/"$$0) }' > drivers/gpu/drm/bridge/ite-it6263.mod

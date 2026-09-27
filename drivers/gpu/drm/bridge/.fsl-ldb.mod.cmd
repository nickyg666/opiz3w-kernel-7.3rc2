savedcmd_drivers/gpu/drm/bridge/fsl-ldb.mod := printf '%s\n'   fsl-ldb.o | awk '!x[$$0]++ { print("drivers/gpu/drm/bridge/"$$0) }' > drivers/gpu/drm/bridge/fsl-ldb.mod

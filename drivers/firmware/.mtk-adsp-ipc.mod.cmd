savedcmd_drivers/firmware/mtk-adsp-ipc.mod := printf '%s\n'   mtk-adsp-ipc.o | awk '!x[$$0]++ { print("drivers/firmware/"$$0) }' > drivers/firmware/mtk-adsp-ipc.mod

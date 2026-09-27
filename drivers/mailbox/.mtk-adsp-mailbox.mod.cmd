savedcmd_drivers/mailbox/mtk-adsp-mailbox.mod := printf '%s\n'   mtk-adsp-mailbox.o | awk '!x[$$0]++ { print("drivers/mailbox/"$$0) }' > drivers/mailbox/mtk-adsp-mailbox.mod

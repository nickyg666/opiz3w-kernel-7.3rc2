savedcmd_drivers/mailbox/exynos-mailbox.mod := printf '%s\n'   exynos-mailbox.o | awk '!x[$$0]++ { print("drivers/mailbox/"$$0) }' > drivers/mailbox/exynos-mailbox.mod

savedcmd_drivers/nvme/host/nvme-apple.mod := printf '%s\n'   apple.o | awk '!x[$$0]++ { print("drivers/nvme/host/"$$0) }' > drivers/nvme/host/nvme-apple.mod

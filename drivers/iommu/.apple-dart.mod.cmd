savedcmd_drivers/iommu/apple-dart.mod := printf '%s\n'   apple-dart.o | awk '!x[$$0]++ { print("drivers/iommu/"$$0) }' > drivers/iommu/apple-dart.mod

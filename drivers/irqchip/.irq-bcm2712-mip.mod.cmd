savedcmd_drivers/irqchip/irq-bcm2712-mip.mod := printf '%s\n'   irq-bcm2712-mip.o | awk '!x[$$0]++ { print("drivers/irqchip/"$$0) }' > drivers/irqchip/irq-bcm2712-mip.mod

savedcmd_drivers/memory/modules.order := {   cat drivers/memory/tegra/modules.order;   echo drivers/memory/renesas-rpc-if.o;   echo drivers/memory/stm32_omm.o; :; } > drivers/memory/modules.order

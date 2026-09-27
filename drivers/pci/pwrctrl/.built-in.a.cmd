savedcmd_drivers/pci/pwrctrl/built-in.a := rm -f drivers/pci/pwrctrl/built-in.a;  printf "drivers/pci/pwrctrl/%s " core.o generic.o | xargs aarch64-linux-gnu-ar cDPrST drivers/pci/pwrctrl/built-in.a

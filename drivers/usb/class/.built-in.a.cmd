savedcmd_drivers/usb/class/built-in.a := rm -f drivers/usb/class/built-in.a;  printf "drivers/usb/class/%s " cdc-acm.o | xargs aarch64-linux-gnu-ar cDPrST drivers/usb/class/built-in.a

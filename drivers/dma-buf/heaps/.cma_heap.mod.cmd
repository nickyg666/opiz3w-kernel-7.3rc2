savedcmd_drivers/dma-buf/heaps/cma_heap.mod := printf '%s\n'   cma_heap.o | awk '!x[$$0]++ { print("drivers/dma-buf/heaps/"$$0) }' > drivers/dma-buf/heaps/cma_heap.mod

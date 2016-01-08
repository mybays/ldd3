default: am2301
KERNELDIR ?= /lib/modules/$(shell uname -r)/build
PWD = `pwd`

ifeq ($(KERNELRELEASE),)

.PHONY: clean.
clean:
	rm -rf *.o *.~ *.ko *.mod.c Module.symvers modules.order

am2301:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules

else
	obj-m:= am2301.o
endif

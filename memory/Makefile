obj-m += memory.o 

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(shell pwd) modules
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(shell pwd) clean

test:
	sudo dmesg -C
	sudo insmod memory.ko
	cat /proc/memory
	sudo rmmod memory
	sudo dmesg	
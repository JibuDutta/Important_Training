#Makefile  --- Makefile for our first driver                                    

#if KERNELRELEASE is defined we've been invoked from the                        
#kernel build system and use its language                                       

ifneq (${KERNELRELEASE},)
	#obj-m := dynamically.o                                                         
	#obj-m := create_device_file_driver.o                                                         
	obj-m := file_kernel_rw.o
#otherwise we were called directly from the command line                        
#invoked the kernel build system.
else
	KERNEL_SOURCE := /lib/modules/$(shell uname -r)/build
	PWD := $(shell pwd)                                                         

default:
	${MAKE} -C ${KERNEL_SOURCE} SUBDIRS=${PWD} modules
clean:
	${MAKE} -C ${KERNEL_SOURCE} SUBDIRS=${PWD} clean                            
endif

#include<linux/module.h>

MODULE_LICENSE("Dual BSD/GPL");
MODULE_DESCRIPTION("A Sample Driver");
MODULE_AUTHOR("J K Duta");

static int __init hello_world_init(void) /* Constructor */
{
		printk(KERN_INFO "Driver Inserted Successfully  !!!!\n");
	    return 0;
}

void __exit hello_world_exit(void)
{
		printk(KERN_INFO "Driver removed Successfully  !!!!\n");
	 
}

module_init(hello_world_init);
module_exit(hello_world_exit);

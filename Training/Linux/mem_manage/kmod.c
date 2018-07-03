/*system include*/

#include <linux/init.h>
#include <linux/module.h>
#include <linux/fs.h>
#include <linux/sched.h>
#include <linux/cdev.h>
#include <linux/device.h>
#include <linux/slab.h>
#include <asm/uaccess.h>

MODULE_LICENSE("Dual BSD/GPL");

/*constants */

#define FIRST_MINOR 10
#define NR_DEVS 1 //Number of device numbers

//Function Declarations for syscall definitions
int myOpen (struct inode *inode, struct file *filep);
int myRelease (struct inode *in, struct file *fp);
long my_ioctl (struct file *fp, unsigned int pid, unsigned long param);         

//Initialization routines
static int myInit (void);
static void myExit (void);


struct file_operations fops = {
	.owner = THIS_MODULE,
	.open  = myOpen,
	.release = myRelease,
	.unlocked_ioctl= my_ioctl

};

/*Global Variable */

char *devname; //constains device name
int majNO;
static dev_t mydev; //encodes major number and minor number
struct cdev *my_cdev; //holds character device driver descriptor

/*to accept input from command line*/
module_param(devname,charp,0000);

//class and device structures
static struct class *mychar_class;
static struct device *mychar_device;


/*
myOPen: open function of the psedo driver
 */

int myOpen (struct inode *inode, struct file *filep)
{
	printk(KERN_INFO "OPEN SUCCESSFULLY\n");
	return 0;

}

long my_ioctl (struct file *fp, unsigned int pid, unsigned long param)         

{                                                                               

	//struct task_struct *task = current;                                   
	struct vm_area_struct *ptr = current -> mm -> mmap;                        
	while(ptr->vm_next != NULL)                                             
	{                                                                       
		printk("%p\n",(void *)ptr->vm_start);                                    
		printk("%p\n",(void *)ptr->vm_end);      
		
		ptr=ptr->vm_next;                                
	} 

	return 0;
}

	/*
myRelease: close function of the psedo driver
	 */

	int myRelease (struct inode *in, struct file *fp)
	{
		printk(KERN_INFO "FILE RELEASED\n");
		return 0;
	}

	/*myInit: init function of the kernel module */

	static int __init myInit(void)
	{
		int ret = -ENODEV;
		int status;

		printk(KERN_INFO "INITIALIZING CHARACTER DEVICE \n");

		//Allocating Device Numbers

		status = alloc_chrdev_region (&mydev, FIRST_MINOR, NR_DEVS,devname);
		if(status < 0 )
		{
			printk(KERN_NOTICE "Device Numbers allocations failed = %d\n",MAJOR(mydev));
			goto err;
		}

		printk(KERN_INFO "Major number allocated = %d \n",MAJOR(mydev));

		my_cdev = cdev_alloc(); //allocate memory for my_cdev

		if (my_cdev == NULL) {
			printk(KERN_ERR "cdev_alloc failed \n");
			goto err_cdev_alloc;
		}


		cdev_init(my_cdev, &fops); // Initialise my_cdev with fops
		my_cdev->owner = THIS_MODULE;

		status = cdev_add (my_cdev, mydev, NR_DEVS); // add my_cdev to the list
		if(status) {
			printk(KERN_ERR "cdev_add failed \n");
			goto err_cdev_add;
		}

		//create a class and entry in sysfs

		mychar_class = class_create(THIS_MODULE, devname);
		if (IS_ERR(mychar_class)) {
			printk(KERN_ERR "class_create() failed\n");
			goto err_class_create;
		}

		//creates mychar device in sysfs and an
		//device entry will be made in /dev directory
		mychar_device = device_create( mychar_class, NULL, mydev, NULL, devname);
		if (IS_ERR(mychar_device)) {
			printk(KERN_ERR "device_create() failed\n");
			goto err_device_create;
		}


		return 0;

err_device_create:
		class_destroy (mychar_class);

err_class_create:
		cdev_del (my_cdev);

err_cdev_add:
		kfree (my_cdev);

err_cdev_alloc:
		unregister_chrdev_region (mydev,NR_DEVS);
err:
		return ret;
	}

	/*myExit: cleanup function of kernel module */

	static void myExit (void)
	{
		printk (KERN_INFO "Exiting the Character Driver \n");

		device_destroy(mychar_class, mydev);
		class_destroy(mychar_class);
		cdev_del(my_cdev);
		unregister_chrdev_region(mydev, NR_DEVS);

		return;
	}

	module_init(myInit);
	module_exit(myExit);

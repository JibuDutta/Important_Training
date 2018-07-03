#include <linux/init.h>
int main()
{
	printk(KERN_DEBUG "Here I am : %s: %i\n",__FILE__,__LINE__);
}

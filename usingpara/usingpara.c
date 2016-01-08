#include <linux/init.h>
#include <linux/module.h>

static int count=1;
module_param(count,int,S_IRUGO);
MODULE_PARM_DESC(count, "How many times the helloworld prints.");





static int hello_init(void)
{
	int i;
	for(i=0;i<count;i++)
	{
		printk(KERN_ALERT "Hello, world\n");
	}
	return 0;
}

static void hello_exit(void)
{
	printk(KERN_ALERT "Goodbye, cruel world\n");
}





module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");

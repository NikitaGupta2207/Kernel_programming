#include <linux/init.h>
#include <linux/module.h>
#include <linux/moduleparam.h>

MODULE_LICENSE("GPL");

int Hello_type=1;
static int __init helloworld_init(void)
{
	printk(KERN_ALERT "HELLO_WORLD\n");
	return 0;
}

static void __exit helloworld_exit(void)
{
	printk(KERN_ALERT "goodbye, helloworld\n");
}
module_init(helloworld_init);
module_exit(helloworld_exit);

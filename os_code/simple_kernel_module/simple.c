#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>


int simple_init(void)
{
    printk(KERN_INFO "Loading kernel module\n");
    return 0;
}

void simple_exit(void)
{
    printk(KERN_INFO "Removing kernel module\n");
}

module_init(simple_init);
module_exit(simple_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Simple module");
MODULE_AUTHOR("TP");

#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

MODULE_VERSION("1.0.0");
MODULE_DESCRIPTION("Module that displays the message 'Hello, World!'");
MODULE_AUTHOR("Didier Domínguez");
MODULE_LICENSE("GPL");

static int __init greeting_init(void)
{
    printk(KERN_INFO "Hello, World!\n");
    return 0;
}

static void __exit greeting_exit(void)
{
    printk(KERN_INFO "Goodbye, World!\n");
}

module_init(greeting_init);
module_exit(greeting_exit);
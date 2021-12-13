#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Kyle Scharnhorst");
MODULE_DESCRIPTION("Simple hello world kernel module.");

static int __init hello_init(void)
{
        printk(KERN_INFO "Hello world! Module has loaded.\n");
        return 0;
}

static void __exit hello_cleanup(void)
{
        printk("Goodbye world. Module has cleaned up.\n");
}

module_init(hello_init);
module_exit(hello_cleanup);
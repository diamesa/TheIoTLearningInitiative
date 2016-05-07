#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/moduleparam.h>

char* name;
module_param(name,charp,0);

static int module_init_function(void)
{
    printk(KERN_INFO  "%s", name);
    return 0;
}

static void module_exit_function(void)
{
    printk(KERN_INFO "Module? Bye!\n");
}

MODULE_LICENSE("GPL");
MODULE_AUTHOR("xe1gyq");
MODULE_DESCRIPTION("My First Linux Kernel Module");

module_init(module_init_function);
module_exit(module_exit_function);

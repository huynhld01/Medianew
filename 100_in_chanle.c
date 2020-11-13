#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kdev_t.h>
#include <linux/fs.h>
#include <linux/device.h>

#define DEVICE_AUTHOR   "huynhLD"
#define DEVICE_DESC     "Just example"
 
dev_t dev = 0;
static struct class *my_dev_class;
 
/* module init function*/
static int __init hello_world_init(void)
{
    if ((alloc_chrdev_region(&dev, 0, 1, "HuynhLD")) < 0)
    {
	printk(KERN_INFO "Cannot allocate major number for device\n");
	return -1;
    }
    printk(KERN_INFO "Major = %d Minor = %d \n",MAJOR(dev), MINOR(dev));

    /*Creating struct class*/
    if((my_dev_class = class_create(THIS_MODULE,"HuynhLD")) == NULL)
    {
        printk(KERN_INFO "Cannot create the struct class for device\n");
        unregister_chrdev_region(dev,1);
    }
 
    /*Creating device*/
    if((device_create(my_dev_class,NULL,dev,NULL,"HuynhLD")) == NULL)
    {
        printk(KERN_INFO "Cannot create the Device\n");
        class_destroy(my_dev_class);
    }

    printk(KERN_INFO "Kernel Module Inserted Successfully...\n");
    return 0;
}

 
/* module exit function */
static void __exit hello_world_exit(void)
{
    unregister_chrdev_region(dev, 1);
    device_destroy(my_dev_class,dev);
    class_destroy(my_dev_class);
    printk(KERN_INFO "Kernel Module Removed Successfully...\n");
}
 
module_init(hello_world_init);
module_exit(hello_world_exit);
 
MODULE_LICENSE("GPL");
MODULE_AUTHOR("DEVICE_AUTHOR");
MODULE_DESCRIPTION("DEVICE_DESC");
MODULE_VERSION("1.0");

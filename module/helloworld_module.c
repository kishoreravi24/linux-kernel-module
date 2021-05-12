#include<linux/module.h>
#include<linux/kernel.h>

int entry_func(void){
    printk("Hello world, first device driver hello world program\n");
    return 0;
}

void exit_func(void){
    printk("Exiting\n");
}

// usr/src/linux-headers/include/linux/module.h
// module = driver
module_init(entry_func);
module_exit(exit_func);

MODULE_AUTHOR("jrkishore");
MODULE_LICENSE("JRK");
MODULE_DESCRIPTION("A simple hello world driver");
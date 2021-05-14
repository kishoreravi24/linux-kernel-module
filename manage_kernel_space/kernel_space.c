#include<linux/module.h>
#include<linux/kernel.h>


//using static so we can use this function inside this file only
/*
    __init why we are using it, after initializing the entry function,
    still the function is on the kernel_space, so what is the use of this still
    there it just start our function thats all ri8, so we are just clean up this
    function after initialized
*/

static int __init entry_function(void){
	printk(KERN_INFO "Hello world, simple __init based program\n");
	return 0;
}

static void __exit exit_function(void){
	printk(KERN_INFO "Good bye\n");
}

module_init(entry_function);
module_exit(exit_function);

MODULE_AUTHOR("Kishore JR");
MODULE_LICENSE("JRK");
MODULE_DESCRIPTION("Simple init program");

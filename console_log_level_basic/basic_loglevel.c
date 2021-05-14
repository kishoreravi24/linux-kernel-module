#include<linux/module.h>
#include<linux/kernel.h>


int function_start(void) {
    pr_info("Simple basic program printing with pr_notice\n");
    return 0;
}

void function_exit(void) {
    pr_notice("Exitiing from the log level\n");
}

module_init(function_start);
module_exit(function_exit);

MODULE_AUTHOR("Kishore JR");
MODULE_LICENSE("JRK");
MODULE_DESCRIPTION("Simple log level program");
#include<linux/module.h>
#include<linux/kernel.h>

//To support character driver we need linux/fs
#include<linux/fs.h>

//Adding this open,read,write,release from fs.h
int file_open (struct inode *pinode, struct file *pfile) {
	printk(KERN_INFO "file open, simple character driver\n");
	return 0;
}

ssize_t file_read (struct file *pfile, char __user *buffer, size_t length, loff_t *offset){
	printk(KERN_INFO "file read, simple character driver\n");
	return 0;
}

ssize_t file_write (struct file *pfile, const char __user *buffer, size_t length, loff_t *offset){
	printk(KERN_INFO "file write, simple character driver\n");
	return length;
}

int file_close (struct inode *pinode, struct file *pfile){
	printk(KERN_INFO "File release, simple character driver\n");
	return 0;
}

//File operations
struct file_operations char_file_operations =  {
	.owner   = THIS_MODULE,
	.open    = file_open,
	.read    = file_read,
	.write   = file_write,
	.release = file_close
};

int start_function(void){
	printk(KERN_INFO "Starting of character driver\n");

	//Registering with kernel and indicates that we are registering a character device driver
	register_chrdev(255 /* Major Number */, "Simple char driver"  /* name of the driver */,&char_file_operations /* File operations */);
	return 0;
}

void exit_function(void){
	printk(KERN_INFO "Inside the function\n");

	//Unregister character device
	unregister_chrdev(255, "Simple char driver");
}

module_init(start_function);
module_exit(exit_function);

MODULE_AUTHOR("kishore jr");
MODULE_LICENSE("JRK");
MODULE_DESCRIPTION("Character driver simple program");

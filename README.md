# linux-kernel-module
learning and creating a basic Linux kernel device driver

## module -> helloworld_module.c -> MakeFile
  basic operations: insmod, lsmod, rmmod 
  
  module.h -> module_init(), module_exit()
![Screenshot from 2021-05-12 08-46-21](https://user-images.githubusercontent.com/36214175/117913357-db8fbe00-b2fe-11eb-8b0e-973607e92e80.png)
![Screenshot from 2021-05-12 08-47-21](https://user-images.githubusercontent.com/36214175/117913371-e1859f00-b2fe-11eb-8dde-35840f6525bc.png)

## log_level: printk : linux_headers->include->linux->kern_levels.h: header for kernel log level
  used pr_info instead printk:
  basic printk log level program to understand ring buffer aka dmesg
  
  ![Screenshot from 2021-05-14 10-05-44](https://user-images.githubusercontent.com/36214175/118222529-73c3a980-b49d-11eb-8697-cb660cfff235.png)

  

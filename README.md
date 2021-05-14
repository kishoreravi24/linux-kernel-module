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
  
## kernel_space_management:
   with __init keyword you can see the cleanup of the functions both start and exit
   
   kernel_space (__init) && basic_loglevel without(__init)
   
   ![Screenshot from 2021-05-14 14-14-46](https://user-images.githubusercontent.com/36214175/118246336-7636fb00-b4bf-11eb-8692-38458afc4a96.png)


  

## Character_driver:
 ![Screenshot from 2021-05-14 20-24-53](https://user-images.githubusercontent.com/36214175/118289631-2e31cb80-b4f3-11eb-97bc-8951828a0c72.png)
 
 ![Screenshot from 2021-05-14 20-25-29](https://user-images.githubusercontent.com/36214175/118289637-2ffb8f00-b4f3-11eb-9733-f0739bc86d50.png)
 
 ![Screenshot from 2021-05-14 20-26-16](https://user-images.githubusercontent.com/36214175/118289647-325de900-b4f3-11eb-9c59-ff998d087188.png)
 
 ![Screenshot from 2021-05-14 20-26-25](https://user-images.githubusercontent.com/36214175/118289658-3427ac80-b4f3-11eb-87f4-3272a3d93119.png)
 
 ![Screenshot from 2021-05-14 20-27-21](https://user-images.githubusercontent.com/36214175/118289668-368a0680-b4f3-11eb-968f-99b4bbffee0e.png)

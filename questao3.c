#define MODULE
#define LINUX


#include <linux/module.h>  
#include <linux/kernel.h>  
#include <linux/init.h>

static int olaMundo(void)
{
   printk(KERN_ALERT "Ola Mundo! Abracos da galera da ufpa\n");
   return 0;
}

static void tchauMundo(void)
{
   printk(KERN_ALERT "Tchau Mundo! A galera da ufpa d se despede!!!\n");
}

module_init(olaMundo);
module_exit(tchauMundo);


MODULE_LICENSE("GPL");

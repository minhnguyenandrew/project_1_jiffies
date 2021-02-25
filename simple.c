#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/hash.h>
#include <linux/gcd.h>
#include <asm/param.h>
#include <linux/jiffies.h>

/* Creation */
int simple_init(void)
{
   printk(KERN_INFO "GOLDEN_RATIO_PRIME is: %lu\n", GOLDEN_RATIO_PRIME); 
   printk(KERN_INFO "In proc_init(), Jiffies is: %lu", jiffies);
   printk(KERN_INFO "The HZ is: %d\n", HZ);
   unsigned long a = gcd(3300, 24);
   printk(KERN_INFO "GCD of 3,300 and 24 is: %lu\n", a);   
    
   return 0;
}

/* Removal */
void simple_exit(void) {
   printk(KERN_INFO "In proc_exit(), Jiffies is: %lu\n", jiffies);
}

/* Exit */
module_init( simple_init );
module_exit( simple_exit );

/*Credits */
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Simple Module");
MODULE_AUTHOR("SGG");
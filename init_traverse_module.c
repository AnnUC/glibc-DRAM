#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
MODULE_LICENSE("GPL");
#include "traverse_module.h"

static int __init traverse_module_init(void)
{
	traverse (void* arena_start_ptr, size_t VpageNO, size_t* len);
	return 0;
}

static void __exit traverse_module_exit(void)
{
	return 0;
}

module_init(traverse_module_init);
module_exit(traverse_module_exit);
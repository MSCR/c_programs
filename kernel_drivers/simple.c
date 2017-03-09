#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/slab.h>


struct birthday {
	int day;
	int month;
	int year;
	char *name;
	struct list_head list;
};

struct birthday *create_person(int day, int month, int year, char *name)
{
	struct birthday *person = kmalloc(sizeof(*person), GFP_KERNEL);
	person->day = day;
	person->month = month;
	person->year = year;
	person->name = name;
	return person;
}

/* This function is called when the module is loaded. */
int simple_init(void)
{
	// Define and initialize birthday_list, reference 
	// to the head of the list.
	static LIST_HEAD(birthday_list);
	struct birthday *person;
	struct birthday *ptr, *next;

	printk(KERN_INFO "Loading module\n");

	// Create a node of the list
	person = create_person(2, 8, 1995, "Somebody");
	// Initialize the list member in struct birthday
	INIT_LIST_HEAD(&person->list);
	// Add instance at the end of the list
	list_add_tail(&person->list, &birthday_list);

	person = create_person(8, 4, 1989, "Fua");
	INIT_LIST_HEAD(&person->list);
	list_add_tail(&person->list, &birthday_list);

	person = create_person(27, 10, 1992, "Daf");
	INIT_LIST_HEAD(&person->list);
	list_add_tail(&person->list, &birthday_list);

	person = create_person(7, 3, 1989, "Frank");
	INIT_LIST_HEAD(&person->list);
	list_add_tail(&person->list, &birthday_list);

	person = create_person(11, 12, 1989, "Aaron");
	INIT_LIST_HEAD(&person->list);
	list_add_tail(&person->list, &birthday_list);

	list_for_each_entry(ptr, &birthday_list, list){	
	/* On each iteration ptr points */
	/* to the next birthday struct */
		printk(KERN_INFO "%s\t %d %d %d\n", ptr->name, ptr->year, ptr->month, ptr->day);
	}

	list_for_each_entry_safe(ptr, next, &birthday_list, list){
	/* On each iteration ptr points */
	/* to the next birthday struct */
		list_del(&ptr->list);
		kfree(ptr);
	}

	return 0;
}

/* This function is called when the module is removed. */
void simple_exit(void)
{
	printk(KERN_INFO "Removing module\n");
}

/* Macros for registering module entry and exit points. */
module_init(simple_init);
module_exit(simple_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Simple Module");
MODULE_AUTHOR("SSG");


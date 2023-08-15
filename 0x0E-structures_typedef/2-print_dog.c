#include "dog.h"

/**
 * print_dog - print dog
 * @d: struct created
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	printf("Name: %s\n", d->name);
	if (d->age == 0)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %.6f\n", d->age);
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	printf("Owner: %s\n", d->owner);
}

#include "dog.h"

/**
 * print_dog - Entry point
 * @d: struct pointer
 *
 * Return: returns void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else if (d->name == NULL)
	{
		printf("Name: (nil)\nAge: %.6f\nOwner: %s\n", d->age, d->owner);
	}
	else if (d->age < 0)
	{
		printf("Name: %s\nAge: (nil)\nOwner: %s\n", d->name, d->owner);
	}
	else if (d->owner == NULL)
	{
		printf("Name: %s\nAge: %.6f\nOwner: (nil)\n", d->name, d->age);
	}
	else
	{
		 printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}

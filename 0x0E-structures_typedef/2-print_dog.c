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
	else
	{
		 printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}

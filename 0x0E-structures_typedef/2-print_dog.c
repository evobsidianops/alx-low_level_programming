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

	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	else
	{
		printf("%s\n", d->name);
		printf("%.6f\n", d->age);
		printf("%s\n", d->owner);
	}
}

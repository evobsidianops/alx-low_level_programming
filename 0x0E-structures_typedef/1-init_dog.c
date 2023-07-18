#include "dog.h"

/**
 * init_dog - initializes dog names
 * @d: dog struct
 * @name: dogs name
 * @age: dog age
 * @owner: dogs owner
 *
 * Return: return void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}

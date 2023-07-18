#ifndef STRUCT_H
#define STRUCT_H

#include <stdio.h>
#include <stddef.h>

/**
 * struct dog - Dog features
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 *
 * Description: Prints dog's name age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

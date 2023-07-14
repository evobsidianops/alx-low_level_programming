#include "main.h"

/**
 * malloc_checked - checks malloc status
 * @b: memory size
 *
 * Return: returns apointer to memory allocated
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

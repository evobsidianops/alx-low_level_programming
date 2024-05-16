#include "main.h"

/**
 * malloc_checked - allocates memory spave
 * @b: int value to be allocated
 *
 * Return: returns a pointer
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

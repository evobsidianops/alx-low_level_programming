#include "main.h"

/**
 * create_array - creates an array of char and initializes them
 * @size: size of array
 * @c: array alues
 *
 * Return: returns nothing
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc((size + 1) * sizeof(char));
	i = 0;
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

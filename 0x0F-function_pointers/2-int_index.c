#include "function_pointers.h"

/**
 * int_index - searches for param valus
 * @array: array of element
 * @size: size of the array
 * @cmp: pointer to function
 *
 * Description: searches for a parameter value and prints its indexif found
 * Return: returns indexes
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (0);
}

#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - iterates over the array
 * @array: array containing param
 * @size: the size of the array
 * @action: pointer to the function
 *
 * Description: executes a function passed as an argument
 * Return: returns the executed function
 */
void array_iterator(int *array, size_t size,  void (*action)(int))
{
	unsigned int i;

	if (action == NULL)
		return;
	if (array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

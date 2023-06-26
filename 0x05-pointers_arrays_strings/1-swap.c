#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap integer value
 * @a: integer one
 * @b: integer two
 *
 * Return: returns the swap values
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

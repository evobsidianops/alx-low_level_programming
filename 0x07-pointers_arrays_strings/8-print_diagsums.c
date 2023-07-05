#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: porinter param
 * @size: array size
 *
 * Description: add diagonal elements in array
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int k = 0;
	int p = 0;

	for (j = size; j >= 0; j--)
	{
		for (i = 0; i < size - 1; i++)
		{
			k += a[i][i];
			p += a[i][j];
		}
	}
	printf("%d, %d", k, p);
}

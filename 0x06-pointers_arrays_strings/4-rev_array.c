#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * reverse_array - Entry point
 * @a: pointer integer param
 * @n: number of element of array
 *
 * Description: reverses an array
 * Return: returns the reversed array
 */
void reverse_array(int *a, int n)
{
	int i, j;

	j = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		int temp;

		temp = a[i];
		a[i] = a[j];
		a[j--] = temp;

	}
}

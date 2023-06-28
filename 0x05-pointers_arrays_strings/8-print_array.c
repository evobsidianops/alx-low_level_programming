#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_array - Entry point
 * @a: pointer integer param
 * @n: number of integer eleme
 *
 * Description: Prints tne element of an array of integers
 * Return: returns nothings
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}

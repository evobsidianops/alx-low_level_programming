#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - Entry point
 * @s: pointer character param
 *
 * Description: reverses a string
 * Return: return null
 */
void print_rev(char *s)
{
	int len;
	int i;
	int j;

	len = strlen(s);

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		char p;

		p = s[i];
		s[i] = s[j];
		s[j] = p;
		puts(s[i]);

	}
}

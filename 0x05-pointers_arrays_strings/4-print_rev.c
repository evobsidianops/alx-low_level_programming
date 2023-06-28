#include "main.h"
#include <stdio.h>

/**
 *print_rev - prints a string in reverse
 *then new line
 *@s: string print
 */


void print_rev(char *s)
{
	int i, j;
	int count = 0;

	while (s[count] != '\0')
		count++;
	j = count;

	for (i = j; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

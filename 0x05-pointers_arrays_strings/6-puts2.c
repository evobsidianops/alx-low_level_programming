#include "main.h"
#include <string.h>
#include  <stdio.h>

/**
 * puts2 - Entry point
 * @str: pointer character param
 *
 * Description: Prints every second character in the string input
 * Return: return the result
 */
void puts2(char *str)
{
	int i;
	int len;

	len = strlen(str);

	for (i = 0; i < len - 1; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

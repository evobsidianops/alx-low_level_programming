#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * string_toupper - Entry point
 * @str: pointer char
 *
 * Description: converts string to uppercase
 * Return: returns uppercase char
 */
char *string_toupper(char *str)
{
	char *res = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= 32;
		}
		str++;
	}
	return (res);
}

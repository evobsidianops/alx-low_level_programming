#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strchr - Entry point
 * @s: characer to be searched from
 * @c: character to be searched with
 *
 * Description: function to locate a character string
 * Return: return s pointer to result
 */
char *_strchr(char *s, char c)
{
	char *ret;

	ret = strchr(s, c);
	return (ret);
}

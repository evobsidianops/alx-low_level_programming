#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strpbrk - Entry point
 * @s: strinr of bytes
 * @accept: string to be searched for
 *
 * Description: locates the first occurrence in the string s
 * Return: returns apointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	char *ret;

	ret = strpbrk(s, accept);
	return (ret);
}

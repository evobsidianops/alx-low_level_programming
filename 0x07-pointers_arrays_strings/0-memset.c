#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _memset - Entry point
 * @s: pointer char param that points to memory location
 * @b: character param to be stored in memory
 * @n: number of time b is to be strored in em
 *
 * Description: insert into meory values passed
 * Return: returns a pointer to result
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ret;

	ret = memset(s, b, n);
	return (ret);
}

#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _memcpy - Entry point
 * @dest: destinationtobe copied to
 * @src: file to be copied
 * @n: number of values to be copied
 *
 * Description: function to copy memory
 * Return: returns apoiner to result
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ret;

	ret = memcpy(dest, src, n);
	return (ret);
}

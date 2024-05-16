#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strspn - Entry point
 * @s: pointer param to number to be compared
 * @accept: pointer value to be searched in byte
 *
 * Description: gets the length of a prefix substring
 * Return: returns the nmber of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int ret;

	ret = strspn(s, accept);
	return (ret);
}

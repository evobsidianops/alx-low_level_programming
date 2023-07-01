#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncpy - Entry point
 * @dest: pointer char param string destination
 * @src: pointer char param string destination
 * @n: integer param
 *
 * Description: copies astring to another
 * Return: returns a pointer to copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *fin;

	fin = strncpy(dest, src, n);
	return (fin);
}

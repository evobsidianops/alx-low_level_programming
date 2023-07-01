#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncat - Entry point
 * @dest: pointer character param string destination
 * @src: pointer character param string
 * @n: integer param
 *
 * Description: concatenates two string with limit of n
 * Return: returns pointer value
 */
char *_strncat(char *dest, char *src, int n)
{
	char *fin;

	fin = strncat(dest, src, n);
	return (fin);
}

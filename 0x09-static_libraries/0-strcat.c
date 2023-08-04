#include "main.h"

/**
 * _strcat - concatinate two strings
 * @dest: append to
 * @src: string to add
 * Return: pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)

	for (j = 0; src[j] != '\0'; j++, i++)
		dest[i] = src[j];
	return (dest);
}

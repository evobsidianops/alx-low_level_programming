#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcat - Entry point
 * @dest: destination pointer character param point of attachment
 * @src: pointer character param to be concatenated
 *
 * Description: Concatenates strings
 * Return: returns a pointer to the destination string
 */
char *_strcat(char *dest, char *src)
{
	char *fin;

	fin = strcat(dest, src);
	return (fin);
}

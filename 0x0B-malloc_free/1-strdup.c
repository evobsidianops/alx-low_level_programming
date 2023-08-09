#include "main.h"

/**
 * _strdup - Duplicates parameter and returns a copy if it
 * @str: string to be duplicated
 *
 * Return: returns string value
 */
char *_strdup(char *str)
{
	char *ptr;

	ptr = malloc(sizeof(str));
	if (ptr != NULL && str != NULL)
	{
		ptr = str;
		return (ptr);
	}
	else
		return (NULL);
	free(ptr);
}

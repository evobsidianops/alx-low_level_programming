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

	if (str == NULL)
	{
		return (NULL);
	}

	ptr = (char *)malloc(strlen(str) + 1);
	if (ptr != NULL)
	{
		strcpy(ptr, str);
	}
	else
	{
		return (NULL);
	}
	return (ptr);
}

#include "main.h"

/**
 * string_nconcat - concatenate 2 string
 * @s1: irst param
 * @s2: src
 * @n: number of interger
 *
 * Return: returns a pointer to the newly allocated mem
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	ptr = malloc(sizeof(s1) + sizeof(s2) + 1);
	if (ptr != NULL)
	{
		ptr = strcat(ptr, s1);
		if (n >= strlen(s2))
		{
			ptr = strcat(ptr, s2);
		}
		ptr = strncat(ptr, s2, n);
	}
	else
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}

#include "main.h"

/**
 * str_concat - concatenates twp string
 * @s1: dest
 * @s2: src
 *
 * Return: returns a concatenated string
 */
char *str_concat(char *s1, char *s2)
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
	ptr = malloc((strlen(s1) + strlen(s2)) + 1);
	if (ptr != NULL)
	{
		strcat(ptr, s1);
		strcat(ptr, s2);
	}
	else
		return (NULL);
	return (ptr);
}

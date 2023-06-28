#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - Entry point
 * @s: pointer character param
 *
 * Description: Reverses a string
 * Return: return the reverse string
 */
void rev_string(char *s)
{
	int len;
	int i;
	int j;

	len = strlen(s);

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		char temp;

		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}

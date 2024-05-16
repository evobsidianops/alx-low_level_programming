#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strstr - Entry point
 * @haystack: input to search from
 * @needle: input to be searched for
 *
 * Description: finds the first occurrence of the substring
 * Return: returns a pointer to beginnin of suubstring
 */
char *_strstr(char *haystack, char *needle)
{
	char *ret;

	ret = strstr(haystack, needle);
	return (ret);
}

#include "main.h"

/**
 * _strlen_recursion - Entry point
 * @s: pointer param
 *
 * Description: count string recursively
 * Return: Returns length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(s + 1) + 1);
	}
}

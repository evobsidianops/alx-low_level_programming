#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcmp - Entry point
 * @s1: pointer char param, string to be compared to
 * @s2: pointer char param, string to be compared with
 *
 * Description: compared string
 * Return: returns an integer
 */
int _strcmp(char *s1, char *s2)
{
	int fin;

	fin = strcmp(s1, s2);
	return (fin);
}

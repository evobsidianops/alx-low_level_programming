#include "main.h"

/**
 *  * _strlen - returns te length of string
 *   * @s: string length to print
 *    *
 *     * Return: length of string @s
 */
int _strlen(char *s)
{
	int chk = 0;

	while (s[chk])
		chk++;

	return (chk);
}

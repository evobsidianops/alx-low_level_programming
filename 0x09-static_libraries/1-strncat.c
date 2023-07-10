#include "main.h"

/**
 *  * _strncat - concatinate two strings
 *   * @dest: append to
 *    * @src: string to add
 *     * @n: number of byte str to cat
 *      *
 * Return: pointer to resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0;

	for (i = 0; dest[i] != '\0'; i++)
	;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}

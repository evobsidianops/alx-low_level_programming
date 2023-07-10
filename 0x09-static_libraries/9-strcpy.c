#include "main.h"

/**
 *  * _strcpy - copies a string pointed to by @str
 *   * including null pointed to @dest
 *    * @dest: a buffer to copy
 *     * @src: source
 *      *
 * Return: a pointer to the string
 */
char *_strcpy(char *dest, char *src)
{
		int index = 0;

		while (src[index])
		{
			dest[index] = src[index];
			index++;
		}
		return (dest);
}

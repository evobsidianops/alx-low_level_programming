#include "main.h"
/**
 *  * _memcpy - copys n bytes memory
 *   *
 *    * @dest: pointer to dest
 *     * @src: source to be copied from
 *      * @n: num bytes to copy from src
 *       *
 *       * Return: pointer to beginning of memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *start = dest;

	while (i < n)
	{
		*dest++ = *src++;
		i++;
	}
	return (start);
}

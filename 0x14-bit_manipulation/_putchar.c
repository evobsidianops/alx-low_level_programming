#include <unistd.h>

/**
 * _putchar - print character
 * @c: character value c
 *
 * Return: prints characters
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
	
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Alphabet in small letters
 */
int main(void)
{
	char n = 'a';

	while (n != 'z')
	{
		putchar(n);
		n++;
	}
	putchar('z');
	return (0);
}

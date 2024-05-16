#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: return success(0)
 */
int main(void)
{
	char n;

	n = 'a';
	while (n != 123)
	{
		if (n != 113 && n != 101)
		{
			putchar(n);
			n++;
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: return success (0)
 */
int main(void)
{
	char a;

	a = '0';
	while (a != 58)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}

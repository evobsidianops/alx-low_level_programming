#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: return success(0)
 */
int main(void)
{
	char n;
	char m;

	n = 'a';

	while (n != 123)
	{
		putchar(n);
		n++;
		if (n == 123)
		{
			m ='A';
			while (m != 91)
			{
				putchar(m);
				m++;
			}
		}
	}
	putchar('\n');
	return (0);
}

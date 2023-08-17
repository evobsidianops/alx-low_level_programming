#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separator
 * @n: arguments
 *
 * Return: returns argument strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list chr;
	unsigned int i;
	char *p;

	va_start(chr, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(chr,char * );
		if (!(p))
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", p);
		}
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(chr);
	printf("\n");
}

#include "variadic_functions.h"

/**
 * print_numbers - prints number passed as argument
 * @separator: string to be printed
 * @n: arguments
 *
 * Return: returns arguments passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list val;
	unsigned int i;

	va_start(val, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(val, unsigned int));
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(val);
	printf("\n");
}

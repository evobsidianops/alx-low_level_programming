#include "variadic_functions.h"

/**
 * print_numbers - Prints all values in arguments
 * @separator: chracter seprator
 * @n: integer values
 *
 * Return: returns values to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}

#include "variadic_functions.h"

/**
 * print_strings - Prints only strings
 * @separator: character to be printed
 * @n: number of strings
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str_list;
	unsigned int i;

	va_start(str_list, n);
	for (i = 0; i < n; i++)
	{
		const char *ptr_str;

		ptr_str = va_arg(str_list, char *);
		if (ptr_str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", ptr_str);
		}
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}

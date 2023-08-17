#include "variadic_functions.h"

/**
 * sum_them_all - sums all arguments passed
 * @n: argument
 *
 * Return: returns the sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int i, result;

	result = 0;
	if (n == 0)
		return (0);

	va_start(sum, n);
	for (i = 0; i < n; ++i)
	{
		result += va_arg(sum, int);
	}
	va_end(sum);
	return (result);
}

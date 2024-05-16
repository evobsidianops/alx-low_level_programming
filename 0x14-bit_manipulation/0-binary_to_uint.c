#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: variable to be converted
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int upi;
	int len, base_two;

	if (!b)
		return (0);

	upi = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			upi += base_two;
		}
	}

	return (upi);
}

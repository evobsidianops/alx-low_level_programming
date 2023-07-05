#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * set_string - Entry point
 * @s: pointer pointer param
 * @to: pointer param
 *
 * Description: copy values of addresses
 */
void set_string(char **s, char *to)
{
	*s = to;
}

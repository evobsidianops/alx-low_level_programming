#include "main.h"

/**
 *  * _atoi - integer
 *   * @s: pointer
 *    * Return: int
 */
int _atoi(char *s)
{
	int i;
	int re = 0;
	int si = -1;
	int br = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			si = si * -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			re = re * 10;
			re -= (s[i] - 0);
			br = 1;
		}
		else if (br == 1)
			break;
	}
	re = si * re;
	return (re);
}

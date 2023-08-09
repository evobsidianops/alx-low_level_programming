#include "main.h"

/**
 * main - Entry point
 * @argc: arg count
 * @argv: arg vector
 *
 * Description: Add arguments
 * Return: returns total numbers
 */
int main(int argc, char *argv[])
{
	int add, i;

	add = 0;
	if (argc > 2)
	{
		for (i = 1;  i < argc; i++)
		{
			if (!atoi(argv[i]) || atoi(argv[i]) < 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				add += atoi(argv[i]);
			}
		}
		printf("%d\n", add);
	}
	else if (argc <= 2)
	{
		printf("0\n");
	}
	return (0);
}

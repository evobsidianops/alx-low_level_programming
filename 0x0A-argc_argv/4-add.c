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
	if (argc > 1)
	{
		for (i = 1;  i < argc; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
			}
			else
			{
				add += atoi(argv[i])'
			}
		}
		printf("%d", add);
	}
	elif (argc <= 1)
	{
		printf("0\n");
	}
	return (0);
}

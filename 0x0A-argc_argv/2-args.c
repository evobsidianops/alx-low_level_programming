#include "main.h"

/**
 * main - Entry pont
 * @argc: arg count
 * @argv: arg vector
 *
 * Description: prints all given argument
 * Return: returns int
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

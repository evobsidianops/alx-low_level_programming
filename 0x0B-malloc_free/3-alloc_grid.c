#include "main.h"

/**
 * alloc_grid - Creates a 2 dimensional array of integers
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: returns a grid
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int *) * height);
	if (ptr != NULL)
	{
		for (i = 0; i < height; i++)
		{
			ptr[i] =  malloc(sizeof(int) * width);
			if (ptr[i] == NULL)
			{
				for (; i >= 0; i--)
				{
					free(ptr[i]);
				}
				free(ptr);
			}
			for (j = 0; j < width; j++)
			{
				ptr[i][j] = 0;
			}
		}
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}

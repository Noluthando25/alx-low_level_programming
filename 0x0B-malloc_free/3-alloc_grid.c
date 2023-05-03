#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **i;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	i = malloc(sizeof(int *) * height);
	if (i == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		i[a] = malloc(sizeof(int) * width);
		if (i[a] == NULL)
		{
			for (; a >= 0; a--)
			free(i[a]);
			free(i);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			i[a][b] = 0;
	}
	return (i);
}

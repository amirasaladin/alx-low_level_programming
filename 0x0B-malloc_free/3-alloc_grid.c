#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * alloc_grid - Check code
 * @height: integer
 * @width: integer
 * Return: the return value data
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	grid = malloc(sizeof(int) * height * width);
	if (!grid || width <= 0 || height <= 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[j][i] = 0;
		}
	}
	return (grid);
}

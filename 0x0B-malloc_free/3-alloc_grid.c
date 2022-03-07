#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dim array
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid = (int **) malloc(width * sizeof(int *));

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		grid[i] = (int *)malloc(height * sizeof(int));
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}


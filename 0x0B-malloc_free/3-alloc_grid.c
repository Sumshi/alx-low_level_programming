#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to 2D array
 * @width: parameter 1
 * @height: parameter 2
 * Return: pointer to the allocated space
 */
int **alloc_grid(int width, int height)
{
	int **grid;/*pointer to 2D array*/
	int i;/*for height iteration*/
	int j;/*for width iteration*/

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	/*allocating space for width and height*/

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);

	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}

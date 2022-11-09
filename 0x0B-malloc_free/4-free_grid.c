#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free 2-dimensional array
 * @grid: two dimensional array
 * @height: integer parameter
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

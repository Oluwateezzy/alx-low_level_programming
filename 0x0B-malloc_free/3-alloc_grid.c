#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: column pararmeter
 * @height: row parameter
 * Return: int array pointer
 */
int **alloc_grid(int width, int height)
{
	int **two_dim;
	int i, j;

	if (width == 0 || height == 0)
		return ('\0');
	*two_dim = (int *)malloc(height * sizeof(int));
	for (i = 0; i < height; i++)
	{
		two_dim[i] = (int *)malloc(width * sizeof(int));
	}
	if (two_dim == NULL)
		return ('\0');
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			two_dim[i][j] = 0;
		}
	}
	return (*two_dim);
}

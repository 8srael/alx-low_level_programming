#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that creates a grid
 *
 * @width : width of the grid
 * @height : height of the grid
 *
 * Return:  returns a pointer to a 2 dimensional array of integers
*/

int **alloc_grid(int width, int height)
{

	int i;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0 ; i < height ; i++)
	{
		*(grid + i) = (int *)malloc(width * sizeof(int));
		if (*(grid + i) == NULL)
			free(*(grid + i));
	}

	return (grid);
}

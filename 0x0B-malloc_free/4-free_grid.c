#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Free a grid
 * @grid: The grid
 * @height: The grid height
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

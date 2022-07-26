#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Allocates a two dimensionnal array
 * @width: Width
 * @height: Height
 *
 * Return: a pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **p, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = (int **) malloc(sizeof(int *) * height);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = (int *) malloc(sizeof(int) * width);

		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(p[i]);
			free(p);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			p[i][j] = 0;

	return (p);
}

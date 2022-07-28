#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array	range
 * @min: Min value (included)
 * @max: Max value (included)
 *
 * Return: NULL if min > max or malloc fail and a pointer otherwise
 */
int *array_range(int min, int max)
{
	int i, size, *array;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min + i;

	return (array);
}

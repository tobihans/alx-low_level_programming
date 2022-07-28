#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of char
 * @size: THe array size
 * @c: A char to fill the  array with
 *
 * Return: NULL if size is 0 or error occured, the pointer otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = (char *) malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}

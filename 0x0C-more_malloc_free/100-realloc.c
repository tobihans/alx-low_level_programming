#include <stdlib.h>
#include "main.h"

void *_memcpy(void *dest, void *src, unsigned int n);

/**
 * _realloc - Reallocates a block of memory
 * @ptr: THe pointer to the previously allocate memory
 * @old_size: THe size of ptr
 * @new_size: THe size for the new size
 *
 * Return: NULL or a new pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	int i, min_size = old_size < new_size ? old_size : new_size;

	if (old_size == new_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);

	if (p == NULL)
		return (NULL);

	if (ptr == NULL)
		return (p);

	for (i = 0; i < min_size; i++)
		*((char *)p + i) = *((char *)ptr + i);

	free(ptr);

	return (p);
}


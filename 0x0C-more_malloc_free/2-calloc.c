#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array with malloc
 * @nmemb: THe number of members for the array
 * @size: Te size of each element
 *
 * Return: NULL if nmemb or size is 0 or malloc fail, the pointer otherwise
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	return (p);
}

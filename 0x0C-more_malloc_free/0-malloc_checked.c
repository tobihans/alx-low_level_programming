#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates an amount of memory
 * @b: THe size
 *
 * Return: the pointer if allocation succeeded or exit the process
 * with 98 as status if a failure occur
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}

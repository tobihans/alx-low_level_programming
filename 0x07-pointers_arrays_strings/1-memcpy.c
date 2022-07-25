#include "main.h"

/**
 * _memcpy - Copy n bytes from a memory are to another
 * @dest: THe destination
 * @src: The source
 * @n: The number of bytes to copy
 *
 * Return: char *, the pointer to the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}

#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: THe memory area
 * @b: THe constant
 * @n: THe number of bytes to fill
 *
 * Return: char *, the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *iter;
	unsigned int i;

	for (i = 0, iter = s; i < n; i++, iter++)
		*iter = b;

	return (s);
}

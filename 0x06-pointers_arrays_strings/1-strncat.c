#include "main.h"

/**
 * _strncat - Concatenates at most n bytes from a string to another one
 * @dest: The destination string
 * @src: The string to copy from
 * @n: The number of bytes to copy
 *
 * Return: char *, the pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *iter = dest, *iter2;
	int i;

	while (*iter)
		iter++;

	for (i = 0, iter2 = src; i < n && *iter2; i++, iter2++)
	{
	    *iter = *iter2;
	    iter++;
	}

	*iter = '\0';

	return (dest);
}

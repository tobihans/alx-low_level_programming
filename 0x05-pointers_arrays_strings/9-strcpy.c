#include "main.h"

/**
 * _strcpy - Copy a string from a pointer to another one
 * @src: THe source string
 * @dest: THe destination buffer
 *
 * Return: char *, the pointer to the destination
 */
char *_strcpy(char *dest, char *src)
{
	char *iter, *iter2;

	iter2 = dest;

	for (iter = src; *iter; iter++)
	{
		*iter2 = *iter;
		iter2++;
	}

	*iter2 = '\0';

	return (dest);
}

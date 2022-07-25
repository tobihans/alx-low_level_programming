#include "main.h"

/**
 * _strcat - Appends a char to the end of another one
 * @dest: The destination, this will be the final string
 * @src: THe string to append
 *
 * Return: char *, a pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *iter = dest, *iter2;

	while (*iter)
		iter++;

	for (iter2 = src; *iter2; iter2++)
	{
		*iter = *iter2;
		iter++;
	}

	*iter = '\0';

	return (dest);
}

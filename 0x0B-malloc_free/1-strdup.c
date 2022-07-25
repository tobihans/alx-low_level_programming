#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string
 * @str: THe string to duplicate
 *
 * Return: a pointer to a new string or NULL if error happens
 */
char *_strdup(char *str)
{
	char *iter, *dup;
	unsigned int size = 0, i;

	if (str == NULL)
		return (NULL);

	for (iter = str; *iter; iter++)
		size++;

	dup = (char *) malloc(sizeof(char) * size);

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		dup[i] = str[i];

	return (dup);
}

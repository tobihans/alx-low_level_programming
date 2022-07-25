#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: NULL or  anew pointer to a string
 */
char *str_concat(char *s1, char *s2)
{
	char *iter, *result;
	unsigned int size1 = 0, size2 = 0, total_size = 0, i;

	for (iter = s1; *iter; iter++)
		size1++;

	for (iter = s2; *iter; iter++)
		size2++;

	total_size = size1 + size2 + 1;

	result = (char *) malloc(sizeof(char) * total_size);

	if (result == NULL)
		return (NULL);

	for (i = 0; s1 != NULL && i < size1; i++)
		result[i] = s1[i];

	for (i = 0; s2 != NULL && i < size2; i++)
		result[size1 + i] = s2[i];

	result[total_size - 1] = '\0';

	return (result);
}

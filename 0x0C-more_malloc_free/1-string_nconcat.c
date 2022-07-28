#include <stdlib.h>
#include "main.h"

char *_strdup(char *str);
char *_strncpy(char *dest, char *src, int n);

/**
 * string_nconcat - Concatenates a string with at most
 * n bytes from another string
 * @s1: The first string
 * @s2: THe string to append
 * @n: THe number of bytes from s2 to append
 *
 * Return: a pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *iter, *result;
	unsigned int size1 = 0, size2 = 0, total_size = 0, i;

	if (s1 == NULL)
	{
		for (iter = s2; *iter; iter++)
			size2++;

		size2 = size2 < n ? size2 : n;
		result = malloc(sizeof(char) * size2);

		return (_strncpy(result, s2, n));
	}

	if (s2 == NULL)
		return (_strdup(s1));

	for (iter = s1; *iter; iter++)
		size1++;

	for (iter = s2; *iter; iter++)
		size2++;

	/* Calculates the appropriate number of bytes for s2 */
	/* It's the minimum between n and the length of s2 */
	size2 = size2 < n ? size2 : n;

	total_size = size1 + size2 + 1;

	result = malloc(sizeof(char) * total_size);

	if (result == NULL)
		return (NULL);

	for (i = 0; s1 != NULL && i < size1; i++)
		result[i] = s1[i];

	for (i = 0; s2 != NULL && i < size2; i++)
		result[size1 + i] = s2[i];

	result[total_size - 1] = '\0';

	return (result);
}

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
	{
		dup = malloc(sizeof(char));

		if (dup == NULL)
			return (NULL);

		dup[0] = '\0';
		return (dup);
	}

	for (iter = str; *iter; iter++)
		size++;

	dup = malloc((sizeof(char) * size) + 1);

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		dup[i] = str[i];

	return (dup);
}

/**
* _strncpy - A clone of strncpy to copy strings
* @dest: THe destination string
* @src: The string to copy
* @n: THe number of bytes to copy
*
* Return: char *, the pointer to the destination string
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *iter = dest;
	char *iter2;
	int i;

	for (i = 0, iter2 = src; i < n && *iter2; i++, iter2++)
	{
		*iter = *iter2;
		iter++;
	}

	*iter = '\0';

	return (dest);
}

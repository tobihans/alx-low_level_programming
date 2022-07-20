#include <stdio.h>
#include "main.h"

/**
 * _strchr - Locates a char in a string
 * @s: THe string to search on
 * @c: THe character to search for
 *
 * Return: char*, a pointer to the first occurence of the char or NULL
 */
char *_strchr(char *s, char c)
{
	char *iter;

	for (iter = s; ; iter++)
	{
		if (*iter == c)
			return (iter);

		if (*iter == '\0')
			break;
	}

	return (NULL);
}

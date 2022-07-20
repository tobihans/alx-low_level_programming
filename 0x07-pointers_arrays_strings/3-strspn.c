#include <stdio.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: THe string
 * @accept: The range of char
 *
 * Return: int the length
 */
unsigned int _strspn(char *s, char *accept)
{
	char *iter, *r;
	int count = 0;

	for (iter = s; ; iter++)
	{
		r = _strchr(accept, *iter);

		if (r != NULL && count >= 0)
			count++;

		if ((r == NULL && count > 0) || *iter == '\0')
			break;
	}

	return (count);
}

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

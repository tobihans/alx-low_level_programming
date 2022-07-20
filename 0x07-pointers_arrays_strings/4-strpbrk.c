#include <stdlib.h>
#include "main.h"

/**
 * _strpbrk - Search a string for any other set of bytes
 * @s: THe string
 * @accept: THe set of char to search within string
 *
 * Return: the pointer to the char matching or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *iter, *result;

	for (iter = s; *iter; iter++)
	{
		result = _strchr(accept, *iter);
	
		if (*result)
			break;
	}
	return (result);
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

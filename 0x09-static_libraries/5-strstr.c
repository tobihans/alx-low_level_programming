#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strstr - Search a substring within a string
 * @haystack: The string to search on
 * @needle: The substring to search for
 *
 * Return: a pointer to the beginning of the located string or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack, *n = needle;

	while (*h)
	{
		h = haystack;
		n = needle;

		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
			{
				break;
			}
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}

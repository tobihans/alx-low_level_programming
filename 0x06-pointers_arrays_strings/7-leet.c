#include "main.h"

/**
 * leet - Encode a string into 1337
 * @str: The string to encode
 *
 * Return: char *, the string
 */
char *leet(char *str)
{
	char *iter;

	for (iter = str; *iter; iter++)
	{
		if (*iter == 'a' || *iter == 'A')
			*iter = '4';
		else if (*iter == 'e' || *iter == 'E')
			*iter = '3';
		else if (*iter == 't' || *iter == 'T')
			*iter = '7';
		else if (*iter == 'l' || *iter == 'L')
			*iter = '1';
	}

	return (str);
}

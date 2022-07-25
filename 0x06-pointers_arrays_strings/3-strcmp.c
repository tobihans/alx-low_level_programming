#include "main.h"

/**
* _strcmp - Compares two strings in the same way as strcmp
* @s1: THe first string
* @s2: The second string
*
* Return: 0 if they're equal, -1 if s1 is less than s2 or 1
*/
int _strcmp(char *s1, char *s2)
{
	char *iter = s1, *iter2 = s2;

	while (*iter && *iter2)
	{
		if (*iter < *iter2)
			return (-1);

		if (*iter > *iter2)
			return (1);

		iter++;
		iter2++;
	}

	return (*iter ? 1 : *iter2 ? -1 : 0);
}

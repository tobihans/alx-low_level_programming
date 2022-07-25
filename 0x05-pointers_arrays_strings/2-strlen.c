#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: THe string pointer
 *
 * Return: int, the length
 */
int _strlen(char *s)
{
	int len = 0;
	char *iter;

	for (iter = s; *iter; iter++)
		len++;

	return (len);
}

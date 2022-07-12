#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: THe string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	char tmp;
	char *iter, *iter2;

	for (iter2 = s; *iter2; iter2++)
		continue;

	for (iter = s, iter2 = iter2 - 1; iter < iter2; iter++, iter2--)
	{
		tmp = *iter;
		*iter = *iter2;
		*iter2 = tmp;
	}
}

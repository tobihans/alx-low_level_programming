#include "main.h"

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

		return (dest);
}

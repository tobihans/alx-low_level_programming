#include "main.h"

/**
 * _puts - Writes a string to stdout followed by a new line
 * @str: the string pointer
 *
 * Return: void
 */
void _puts(char *str)
{
	char *iter;

	for (iter = str; *iter; iter++)
		_putchar(*iter);
	_putchar(10);
}

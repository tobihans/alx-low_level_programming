#include "main.h"

/**
 * print_rev - Writes a string in reverse orde to stdout followed by a new line
 * @str: the string pointer
 *
 * Return: void
 */
void print_rev(char *str)
{
	char *iter;

	for (iter = str; *iter; iter++)
		continue;

	for (iter = iter - 1; iter >= str; iter--)
		_putchar(*iter);

	_putchar(10);
}

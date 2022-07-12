#include "main.h"

/**
 * puts_half - Prints the half of a string
 * @str: THe string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len;
	char *iter;

	for (len = 0, iter = str; *iter; iter++)
		len++;

	len = len % 2 ? ((len - 1) / 2) + 1 : (len / 2);

	for (iter = str + len; *iter; iter++)
		_putchar(*iter);
	_putchar(10);
}

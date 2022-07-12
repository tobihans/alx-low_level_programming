#include "main.h"

/**
 * puts2 - Prints evry even char of a string
 * @str: THe string
 *
 * Return: void
 */
void puts2(char *str)
{
	char *iter;

	for (iter = str; *iter; iter += 2)
	{
		_putchar(*iter);

		if (*(iter + 1) == '\0')
			break;
	}
	_putchar(10);
}

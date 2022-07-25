#include "main.h"

/**
 * print_most_numbers - Print numbers from 0 to 9
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == '2' || i == '4')
			continue;
		_putchar(i);
	}
	_putchar(10);
}

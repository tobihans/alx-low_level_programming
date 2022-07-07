#include "main.h"

/**
 * print_square - Prints a square
 * @n: THe square side
 *
 * Return: void
 */
void print_square(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			_putchar(35);
		_putchar(10);
	}
}

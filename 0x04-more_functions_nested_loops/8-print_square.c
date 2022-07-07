#include "main.h"

/**
 * print_square - Prints a square
 * @size: THe square side
 *
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar(10);
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar(35);
		_putchar(10);
	}
}

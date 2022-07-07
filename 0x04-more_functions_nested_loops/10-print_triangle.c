#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Prints a triangle
 * @size: triangle size
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar(10);
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j < (size - i); j++)
			_putchar(32);

		for (k = 1; k <= i; k++)
			_putchar(35);

		_putchar(10);
	}
}

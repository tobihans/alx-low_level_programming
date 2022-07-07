#include "main.h"

/**
 * print_diagonal - Prints a diag
 * @n: the size
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar(10);
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(32);

		_putchar(92);
		_putchar(10);
	}
}

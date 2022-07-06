#include "main.h"

/**
 * print_to_98 - Prints all natural numbers till 98
 * @n: THe start number
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i, abs;

	for (i = n; i < 99; i++)
	{
		if (i < 0)
			_putchar(45);
		
		abs = i < 0 ? (1 * i) : i;

		if (i > 9)
			_putchar('0' + (abs / 10));

		_putchar('0' + (abs % 10));
		_putchar(44);
		_putchar(32);
	}
}

#include "main.h"

/**
 * print_sign - give and print the sign of a number
 * @n: int, the number to check
 *
 * Return: 1 if greater than 0, 0 if 0, -1 else
 */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		_putchar(42);
		result = 1;
	}
	else if (n == 0)
	{
		_putchar(48);
		result = 0;
	}
	else
	{
		_putchar(45);
		result = -1;
	}

	return (result);
}

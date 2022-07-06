#include "main.h"
#include <unistd.h>

/**
 * print_last_digit - Prints a number's last digit
 * @n: number
 *
 * Return: the last digit of the number
 */
int print_last_digit(int n)
{
	int result = n % 10;
	result = result < 0 ? -1 * result : result;

		_putchar('0' + result);
	return (result);
}

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

	write(1, &result, 8);

	return result;
}

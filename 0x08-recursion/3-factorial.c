#include "main.h"

/**
 * factorial - Returns the factorial of a number
 * @n: THe number
 *
 * Return: int, the result
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1 || n == 0)
		return (1);

	return (n * factorial(n - 1));
}

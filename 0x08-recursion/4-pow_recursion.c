#include "main.h"

/**
 * _pow_recursion - Raise x to the power of y and return the result
 * @x: The value to Raise
 * @y: The power
 *
 * Return: -1 if y < 0, or the result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

#include "main.h"

/**
 * _isdigit - Check if a char is a digit
 * @c: the char to check for
 *
 * Return: 0 if not and 1 if that's the case
 */
int _isdigit(int c)
{
	return ((c >= '0' && c <= '9') ? 1 : 0);
}

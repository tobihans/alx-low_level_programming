#include "main.h"

/**
 * _isalpha - Check is a char is alpha
 * @c: The character to check
 *
 * Return: If alpha 1.
 * If not 0 is returned.
 */
int _isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

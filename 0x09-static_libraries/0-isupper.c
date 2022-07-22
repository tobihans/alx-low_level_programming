#include "main.h"

/**
 * _isupper - Checks if a char is an upper char
 * @c: the char to check
 *
 * Return: 1 if that's the case, 0 else
 */
int _isupper(int c)
{
	return ((c >= 'A' && c <= 'Z') ? 1 : 0);
}

#include "main.h"

/**
 * _strlen_recursion - Length of a string using recursion
 * @s: The string
 *
 * Return: int, the length of the given string
 */
int _strlen_recursion(char *s)
{
	return ((*s == '\0') ? 0 : 1 + _strlen_recursion(s + 1));
}

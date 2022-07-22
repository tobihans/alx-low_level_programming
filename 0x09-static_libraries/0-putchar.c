#include "main.h"
#include <unistd.h>


/**
 * _putchar - Prints a char to stdout
 * @c: The char
 *
 * Return: int
 */
int _putchar(char c)
{
	return ((int) write(1, &c, 1));
}


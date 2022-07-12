#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints the n first element of an array
 * @a: THe array
 * @n: THe number of elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d%s", a[i], (i < n - 1) ? ", " : "\n");
	_putchar(10);
}

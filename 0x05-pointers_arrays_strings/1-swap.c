#include "main.h"

/**
 * swap_int - swap the calues of two pointers
 * @a: The first pointer
 * @b: THe second pointer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

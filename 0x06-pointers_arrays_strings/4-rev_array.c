#include "main.h"

/**
 * reverse_array - Reverse an array
 * @a: THe array
 * @n: THe number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int tmp, i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}

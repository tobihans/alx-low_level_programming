#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: THe array
 * @size: THe size
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, diag_1, diag_2;

	for (i = 0, j = size - 1; i < size - 1 && j > 0; i++, j--)
	{
		printf("%p-", a[i]);
		diag_1 += a[i];
		diag_2 += a[i];
	}
	printf("\n");
}

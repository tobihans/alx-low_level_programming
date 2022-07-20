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
	int i, j, forward = 0, backward = 0, matrix_size = size * size;

	for (i = 0, j = size - 1; i < matrix_size && j < matrix_size - 1; i += size + 1, j += size - 1)
	{
		forward += a[i];
		backward += a[j];
	}
	printf("%d, %d\n", forward, backward);
}

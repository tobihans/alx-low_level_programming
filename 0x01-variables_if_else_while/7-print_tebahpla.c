#include <stdlib.h>
#include <stdio.h>

/**
 * main - reversed alphabet
 *
 * Return: 0 always
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
		putchar(i);
	putchar(10);
	return (0);
}

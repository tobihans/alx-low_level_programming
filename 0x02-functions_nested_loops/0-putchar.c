#include "main.h"

/**
 * main - Printing _putchar
 *
 * Return: 0 for success
 */
int main(void)
{
	int i;
	char  word[] = {95, 112, 117, 116, 99, 104, 97, 114, 10};

	for (i = 0; i < 9; i++)
	{
		_putchar(word[i]);
	}

	return (0);
}

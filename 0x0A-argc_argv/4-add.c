#include <stdlib.h>
#include <stdio.h>
#include "main.h"

int contains_digits_only(char *c);

/**
 * main - Prints it's executable name and quits
 *
 * Return: int
 */
int main(int argc, char  *argv[])
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (contains_digits_only(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}

/**
 * contains_digits_only - Check if a string is a digit only string
 * @c: the string to check for
 *
 * Return: 0 if not and 1 if that's the case
 */
int contains_digits_only(char *c)
{
	char *iter;

	for (iter = c; *iter; iter++)
		if (*iter < '0' || *iter > '9')
			return (0);

	return (1);
}

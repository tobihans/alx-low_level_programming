#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Prints it's executable name and quits
 *
 * Return: int
 */
int main(int argc, char  *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}


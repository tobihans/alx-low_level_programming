#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Prints it's executable name and quits
 * @argc: THe number of program arguments
 * @argv: The program arguments
 *
 * Return: int
 */
int main(int argc, char  *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}


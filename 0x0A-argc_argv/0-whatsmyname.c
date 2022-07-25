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
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}


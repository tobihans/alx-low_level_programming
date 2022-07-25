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
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}


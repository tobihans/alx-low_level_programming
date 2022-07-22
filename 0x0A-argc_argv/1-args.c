#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Prints it's executable name and quits
 *
 * Return: int
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}


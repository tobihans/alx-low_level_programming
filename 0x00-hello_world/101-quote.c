#include <unistd.h>

/**
 * main - Using printf to print a string to stdout
 *
 * Return: 0 always
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);
	return (0);
}

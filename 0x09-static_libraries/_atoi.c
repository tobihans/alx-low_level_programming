#include "main.h"

int _isdigit(int c);
int _strlen(char *s);
int __pow_helper(int v, int p);

/**
 * _atoi - Covnerts a string to an int
 * @s: THe string
 *
 * Return: the number
 */
int _atoi(char *s)
{
	int max_index = _strlen(s) - 1;
	int result = 0;
	char *iter, c;

	for (iter = s; *iter; iter++)
	{
		c = *iter;
		if (!_isdigit(c))
			return (0);

		switch (c)
		{
		case 49:
			result += __pow_helper(10, max_index);
			break;
		case 50:
			result += 2 * __pow_helper(10, max_index);
			break;
		case 51:
			result += 3 * __pow_helper(10, max_index);
			break;
		case 52:
			result += 4 * __pow_helper(10, max_index);
			break;
		case 53:
			result += 5 * __pow_helper(10, max_index);
			break;
		case 54:
			result += 6 * __pow_helper(10, max_index);
			break;
		case 55:
			result += 7 * __pow_helper(10, max_index);
			break;
		case 56:
			result += 8 * __pow_helper(10, max_index);
			break;
		case 57:
			result += 9 * __pow_helper(10, max_index);
			break;
		}
		max_index--;
	}
	return (result);
}

/**
 * __pow_helper - Raise a number to some power
 * @v: THe number
 * @p: THe power
 *
 * Return: v ^ p
 */
int __pow_helper(int v, int p)
{
	int result = 1;
	int i;

	for (i = 0; i < p; i++)
		result *= v;
	return (result);
}

/**
 * _strlen - Returns the length of a string
 * @s: THe string pointer
 *
 * Return: int, the length
 */
int _strlen(char *s)
{
	int len = 0;
	char *iter;

	for (iter = s; *iter; iter++)
		len++;

	return (len);
}

/**
 * _isdigit - Check if a char is a digit
 * @c: the char to check for
 *
 * Return: 0 if not and 1 if that's the case
 */
int _isdigit(int c)
{
	return ((c >= '0' && c <= '9') ? 1 : 0);
}

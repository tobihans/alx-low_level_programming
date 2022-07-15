#include "main.h"

/**
 * cap_string - Capitalize a string
 * @str: THe string to capitalize
 *
 * Return: char *, the string capitalized
 */
char *cap_string(char *str)
{
	char *iter;

	for (iter = str; *iter; iter++)
		switch (*iter)
		{
		case ' ':
		case '\t':
		case '\n':
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
			*iter -= (*iter >= 97 && *iter <= 122) ? 32 : 0;
			break;
		default:
			break;
		}

	return (str);
}

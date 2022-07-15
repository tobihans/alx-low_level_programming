#include "main.h"

/**
 * string_toupper - Changes all lowercase chars of a string into upper
 * @sTr: THe string
 *
 * Return: THe pointer to the string
 */
char *string_toupper(char *str)
{
	char *iter;

	for (iter = str; *iter; iter++)
		if (*iter >= 97 && *iter <= 122)
			*iter -= 32;

	return (str);
}

#include <ctype.h>
#include "main.h"

/**
 * string_toupper - converts string to uppercase
 * @str: string to convert
 * Return: ptr to string
 */
char *string_toupper(char *str)
{
	char *ret = str;

	while (*str)
	{
		*str = toupper(*str);
		++str;
	}

	return (ret);
}

#include <ctype.h>
#include "main.h"

/**
 * cap_string - caps string
 * @str: str to cap
 * Return: returns str
 */
char *cap_string(char *str)
{
	char *ret = str;

	*str = toupper(*str);
	++str;

	while (*str)
	{
		char prev_char = *(str - 1);

		if (prev_char == ' ' || prev_char == '\t' || prev_char == '\n'
				|| prev_char == ',' || prev_char == ';' || prev_char == '.'
				|| prev_char == '!' || prev_char == '?' || prev_char == '\"'
				|| prev_char == '(' || prev_char == ')' || prev_char == '{'
				|| prev_char == '}')
		{
			*str = toupper(*str);
		}
		str++;
	}

	return (ret);
}

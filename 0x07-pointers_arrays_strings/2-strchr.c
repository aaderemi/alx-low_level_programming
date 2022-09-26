#include "main.h"
#include <stdlib.h>
/**
 * _strchr - find chr in string
 * @s: string s
 * @c: char c
 * Return: pointer to first instance of c
 */
char *_strchr(char *s, char c)
{
	char *ret = NULL;

	while (*s)
	{
		if (*s == c)
		{
			ret = s;
			break;
		}
		s++;
	}
	return (ret);
}

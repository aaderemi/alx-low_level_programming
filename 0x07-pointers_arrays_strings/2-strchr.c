#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strchr - find chr in string
 * @s: string s
 * @c: char c
 * Return: pointer to first instance of c
 */
char *_strchr(char *s, char c)
{
	char *ret = NULL;
	int len = strlen(s);
	int i;

	for (i = 0; i <= len; i++)
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

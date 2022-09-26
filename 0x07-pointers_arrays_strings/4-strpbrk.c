#include "main.h"
#include <stdlib.h>
/**
 * _strpbrk - finds any character from accept in s
 * @s: strnig to search
 * @accept: acceptable string
 * Return: returns char pointer
 */
char *_strpbrk(char *s, char *accept)
{
	char *ret = NULL;
	char *init = accept;

	while (*s)
	{
		accept = init;
		while (*accept)
		{
			if (*s == *accept)
			{
				ret = s;
				return (ret);
			}
			accept++;
		}
		s++;
	}

	return (ret);
}

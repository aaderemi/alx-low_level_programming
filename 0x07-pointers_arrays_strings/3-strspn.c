#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strspn - same as cs strpn
 * @s: string
 * @accept: string with acceptable char
 * Return: span of accept in string s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int count = 0;
	char *fa = accept;
	int acclen = strlen(accept);

	while (*s)
	{
		accept = fa;
		count = 0;
		while (*accept)
		{
			if (*s != *accept)
			{
				if (len && (count == acclen - 1))
					return (len);
				accept++;
			}
			else
			{
				len = len + 1;
				accept++;
				break;
			}
			++count;
		}

		s++;
	}
	return (len);
}

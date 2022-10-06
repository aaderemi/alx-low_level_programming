#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * string_nconcat - concats string
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int a = strlen(s1);

	char *ret = malloc(a + n + 1);

	if (!s2)
	{
		strcpy(ret, s1);
		ret[a] = '\0';
	}
	else
	{
		unsigned int b = strlen(s2);

		if (n >= b)
		{
			strcat(strcpy(ret, s1), s2);
			ret[a + b] = '\0';
		}
		else
		{
			strncat(strcpy(ret, s1), s2, n);
			ret[a + n] = '\0';
		}
	}
	return (ret);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * for_null - handles null inputs
 * @s1: descd below
 * @s2: same as above
 * @n: same as below
 * Return: returns pointer to allocated and initd mem.
 */
char *for_null(char *s1, char *s2, unsigned int n)
{
	char *ret;
	int a = strlen(s1);

	ret = malloc(a + n + 1);
	if (!ret)
		return (NULL);
	strncat(strcpy(ret, s1), s2, n);

	return (ret);
}
/**
 * string_nconcat - concats string
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ret;

	if (!s1 || !s2)
	{
		if (s1)
			ret = for_null(s1, "",  n);
		else if (s2)
			ret = for_null("", s2, n);
		else
			ret = for_null("", "", n);
	}
	else
	{
		unsigned int b = strlen(s2);
		unsigned int a = strlen(s1);

		ret = malloc(a + n + 1);
		if (!ret)
			return (NULL);
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

#include <stdlib.h>
#include <string.h>

/**
 * _strstr - finds string in string
 * @haystack: in a haystack
 * @needle: finds needle
 * Return: pointer to the first instance of needle in haystack
 */
char *_strstr(char *haystack, char *needle)
{
	char *ret = NULL;
	char *nstart = needle;
	unsigned long int lenneedle = strlen(needle);

	while (*haystack)
	{
		if (ret == NULL && *haystack == *needle)
		{
			ret = haystack;
			needle++;
			haystack++;
			continue;
		}
		if (ret && *haystack != *needle)
		{
			needle = nstart;
			ret = NULL;
		}
		else if (ret && *haystack == *needle)
			needle++;
		haystack++;
	}

	if (ret)
		ret = strlen(ret) >= lenneedle ? ret : NULL;
	return (ret);
}

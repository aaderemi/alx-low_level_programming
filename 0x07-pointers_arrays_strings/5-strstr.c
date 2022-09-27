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
	unsigned long int j = 0;

	if (!*needle)
		return haystack;

	while (*haystack)
	{
		if (j == lenneedle)
			break;
		if (ret == NULL && *haystack == *needle)
		{
			ret = haystack;
			needle++;
			j++;
			haystack++;
			continue;
		}
		if (ret && *haystack != *needle)
		{
			needle = nstart;
			j = 0;
			ret = NULL;
		}
		else if (ret && *haystack == *needle)
		{
			needle++;
			j++;
		}
		haystack++;
	}

	if (ret != NULL)
		ret = strlen(ret) >= lenneedle ? ret : NULL;
	return (ret);
}

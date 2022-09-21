#include <string.h>

/**
 * _strcmp - function that compares strings
 * @s1: string one
 * @s2: string two
 * Return: 0 if equal, some other integer otherwise
 */
int _strcmp(char *s1, char *s2)
{
	int len;
	int i;
	int ret;

	len = strlen(s1) > strlen(s2) ? strlen(s1) : strlen(s2);

	for (i = 0; i < len; ++i)
	{
		if (s1[i] - s2[i] != 0)
		{
			ret = s1[i] - s2[i];
			return (ret);
		}
	}

	return (0);
}

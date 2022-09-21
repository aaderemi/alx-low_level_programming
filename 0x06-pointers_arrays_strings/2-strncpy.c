#include <string.h>
#include "main.h"

/**
 * _strncpy - copies n characters
 * @dest: to dest
 * @src: from source
 * @n: num char
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len;
	int i;
	char *ret;

	len = strlen(src);
	i = 0;
	ret = dest;

	while (i < len && i < n)
	{
		*dest++ = *src++;
		++i;
	}
	if (n - len > 0)
	{
		int j = 0;
		int num_z = n - len;

		for (; j < num_z; j++)
			*dest++ = '\0';
	}

	return (ret);

}

#include "main.h"
#include <string.h>

/**
 * _strncat - copies n bytes from one string to another
 * @dest: str; destination
 * @src: str; source
 * @n: num of bytes
 *
 * Return: pointer to return string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len;
	char *ret;
	int i = 0;
	char *endptr;

	ret = dest;
	len = strlen(dest);

	endptr = dest + len;

	while (i < len && i < n)
	{
		*endptr++ = *src++;
		++i;
	}
	*endptr = '\0';

	return (ret);
}

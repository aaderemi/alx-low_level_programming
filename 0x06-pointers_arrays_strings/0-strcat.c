#include <string.h>
#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to concatenate to
 * @src: string to copy
 * Return: same as dest at end
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;
	int len = strlen(dest);
	char *endptr = dest + len;

	while (*endptr++ = *src++);

	return (ret);
}

#include "main.h"

/**
 * _strcpy - function that copies stuff
 * @dest: where to copy to
 * @src: stuff to copy
 *
 * Return: return string
 */
char *_strcpy(char *dest, char *src)
{
	char *ret = dest;

	for (; *src; ++src)
		*dest++ = *src;

	return (ret);
}

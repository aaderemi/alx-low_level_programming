#include "main.h"
/**
 * _memcpy - copies memory
 * @dest: to dest
 * @src: from src
 * @n: n bytes
 * Return: returns dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *ret = dest;

	for (i = 0; i < n; i++)
	{
		*(dest++) = src[i];
	}

	return (ret);
}

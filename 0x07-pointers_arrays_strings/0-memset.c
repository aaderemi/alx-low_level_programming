#include "main.h"

/**
 * _memset - copies byte to memory
 * @s: memory area
 * @b: byte
 * @n: number of times
 *
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	char *ret = s;

	for (i = 0; i < n; i++)
	{
		*(++s) = b;
	}

	return (ret);
}

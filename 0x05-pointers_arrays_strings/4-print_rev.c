#include "main.h"
#include <string.h>

/**
 * print_rev - prints a reversed string
 * @s: string to reverse
 */
void print_rev(char *s)
{
	char *i;
	int len;

	len = strlen(s);

	for (i = (s + len - 1); i >= s; --i)
		_putchar(*i);
	_putchar('\n');
}

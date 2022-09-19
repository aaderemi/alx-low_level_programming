#include <string.h>
#include "main.h"

/**
 * puts_half - writes upper half
 * @str: of string
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int i;

	for (i = len / 2 + len % 2; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}

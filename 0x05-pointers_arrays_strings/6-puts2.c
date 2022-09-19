#include "main.h"
#include <string.h>

/**
 * puts2 - prints stuff
 * @str: stuff
 */
void puts2(char *str)
{
	char *i;
	int len;

	len = strlen(str);

	for (i = str; i <= str + len - 1; i = i + 2)
	{
		_putchar(*i);
	}
	_putchar('\n');
}

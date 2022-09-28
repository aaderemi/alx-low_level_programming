#include "main.h"
#include <stdio.h>
/**
 * actualfxn - does the actual recursion
 * @s: string to be printed
 */
void actualfxn(char *s)
{
	putchar(*s++);
	if (!*s)
		return;
	actualfxn(s);
}
/**
 * _puts_recursion - wrapper function that gets called
 * @s: string
 */
void _puts_recursion(char *s)
{
	char *empty = "";

	if (*s != *empty)
		actualfxn(s);
	putchar('\n');
}

#include "main.h"
/**
 * actualfxn - does the actual recursion
 * @s: string to be printed
 */
void actualfxn(char *s)
{
	_putchar(*s++);
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
	actualfxn(s);
	_putchar('\n');
}

#include "main.h"
#include <stdio.h>
/**
 * actualfxn - does the actual recursion
 * @s: string to be printed
 */
void actualfxn(char *s)
{
	char *current = s;

	if (!*s)
		return;
	actualfxn(++s);
	putchar(*current);
}
/**
 * _print_rev_recursion - wrapper function that gets called
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	actualfxn(s);
}

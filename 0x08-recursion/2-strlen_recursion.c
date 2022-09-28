#include "main.h"
/**
 * _strlen - returns strng length
 * @s: string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int c = 0;
	c = *s == 0 ? 0 : 1;
	if (!*s)
		return (0);
	return (c + _strlen_recursion(++s));
}

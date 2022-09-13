#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - returns last digit of an int
 * @n: input int
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int l;

	l = abs(n) % 10;
	_putchar(l);
	return (l);
}

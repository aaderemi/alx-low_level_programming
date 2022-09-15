#include "main.h"

/**
 * print_triangle - prints harsh triangle
 * @size: its size
 *
 * Return: none
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; ++i)
	{
		for (k = 0; k < size - 1 - i; ++k)
			_putchar(' ');
		for (k = 0; k < i + 1; ++k)
			_putchar('#');
		_putchar('\n');
	}
}

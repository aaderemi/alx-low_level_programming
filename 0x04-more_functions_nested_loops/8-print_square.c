#include "main.h"

/**
 * print_square - prints a square
 * @size: square dim
 *
 * Return: none
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
		return;

	for (i = 0; i < size; ++i)
	{
		for (j = 0; j < size; ++j)
			_putchar('#');
		_putchar('\n');
	}
}

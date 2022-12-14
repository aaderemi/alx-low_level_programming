#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * times_table - print all time table
 *
 * Return: no return
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; ++i)
	{
		for (j = 0; j < 10; ++j)
		{
			if (i * j < 10)
			{
				_putchar('0' + i * j);
			}
			else
			{
				_putchar('0' + (i * j) / 10);
				_putchar('0' + (i * j) % 10);
			}
			if (j < 9)
			{
				_putchar(',');
				if (i * j < 10 && (i * (j + 1) < 10))
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

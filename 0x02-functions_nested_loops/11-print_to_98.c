#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all time
 * @a: int a
 *
 * Return: result of addition
 */
void print_to_98(int a)
{
	int i;

	if (a < 98)
	{
		for (i = a; i <= 98; ++i)
		{
			printf("%d", i);
			if (i != 98)
				printf("%s", ", ");
		}
	}
	else if (a > 98)
	{
		for (i = a; i >= 98; --i)
		{
			printf("%d", i);
			if (i != 98)
				printf("%s", ", ");
		}
	}
	else
	{
		printf("%d", 98);
	}
	printf("\n");
}

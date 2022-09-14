#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all time
 * @a: int a
 * 
 *
 * Return: result of addition
 */
void print_to_98(int a)
{
	if (a < 98)
	{
		for (a; a <= 98; ++a)
		{
			printf("%d", a);
			if (a != 98)
				printf("%s", ", ");
		}
	}
	else if (a > 98)
	{
		for (a; a >= 98; --a)
		{
			printf("%d", a);
			if (a != 98)
				printf("%s", ", ");
		}
	}
	else
	{
		printf("%d", 98);
	}
	printf("\n");
}

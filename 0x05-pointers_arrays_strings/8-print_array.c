#include <stdio.h>

/**
 * print_array - prints an array
 * @a: array
 * @n: num items to print
 */
void print_array(int *a, int n)
{
	int *i;

	for (i = a; i < a + n; i++)
	{
		printf("%d", *i);
		if (i != a + n - 1)
			printf(", ");
	}
	printf("\n");
}

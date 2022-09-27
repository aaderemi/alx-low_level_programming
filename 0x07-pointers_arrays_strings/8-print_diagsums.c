#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints trace
 * @a: of matrix a
 * @size: with size size
 */
void print_diagsums(int *a, int size)
{
	int maindiag = 0;
	int otherdiag = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		maindiag  += *(a + (size * i) + i);
		otherdiag += *(a + (size * i) + (size - i - 1));
	}
	printf("%d, %d\n", maindiag, otherdiag);
}

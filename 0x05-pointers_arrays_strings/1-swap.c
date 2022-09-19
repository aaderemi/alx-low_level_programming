#include "main.h"

/**
 * swap_int - swaps integers
 * @a: int 1
 * @b: int 2
 *
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

#include "main.h"

/**
 * reverse_array - reverses the elements of an array
 * @a: array
 * @n: array length
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	for (; i < n / 2; ++i)
	{
		int temp;

		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}

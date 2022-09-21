#include "main.h"
#include <stdio.h>

void print_array(int *a, int n);
int main(void)
{
	int a[] = {0, 1, 2, 3, 5, 32, 1335};

	print_array(a, sizeof(a)/sizeof(int));
	reverse_array(a, sizeof(a)/sizeof(int));
	print_array(a, sizeof(a)/sizeof(int));

	return (0);
}

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		printf("%d\n", a[i]);
	}
}

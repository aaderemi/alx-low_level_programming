#include "main.h"
#include <stdio.h>

void print_array(int *a, int n);
int main(void)
{
	char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
	char *ptr;

	ptr = leet(str);
	printf("%s", ptr);
	printf("%s", str);
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

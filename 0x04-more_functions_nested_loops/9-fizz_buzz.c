#include <stdio.h>
#include <stdlib.h>

/**
 * main - does fizz buzz
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int j;

	n = 100;

	for (j = 1; j <= n; ++j)
	{
		if (j % 3 == 0 && j % 5)
			printf("Fizz");
		else if (j % 5 == 0 && j % 3)
			printf("Buzz");
		else if (j % 3 == 0 && j % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", j);
		if (j != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}

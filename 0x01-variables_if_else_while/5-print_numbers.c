#include <stdio.h>
/**
 * main - prints the alphabets using putchar
 *
 * Return: 0 for success
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; ++i)
		printf("%d", i);
	putchar('\n');
	return (0);
}

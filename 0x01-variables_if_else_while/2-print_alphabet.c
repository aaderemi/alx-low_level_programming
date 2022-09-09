#include <stdio.h>
/**
 * main - prints the alphabets using putchar
 *
 * Return: 0 for success
 */
int main(void)
{
	for (int i = 0; i < 26; ++i)
		putchar('a' + i);
	putchar('\n');
	return (0);
}

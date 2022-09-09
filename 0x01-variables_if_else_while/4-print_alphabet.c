#include <stdio.h>
/**
 * main - prints the alphabets using putchar
 *
 * Return: 0 for success
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; ++i)
	{
		if ( i != 4 && i != 16)
			putchar('a' + i);
	}
	putchar('\n');
	return (0);
}

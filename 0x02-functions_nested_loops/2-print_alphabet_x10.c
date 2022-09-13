#include "main.h"
/**
 * print_alphabet_x10  - prints a-z
 *
 * Return: function has not return
 */
void print_alphabet_x10(void)
{
	const char alpha[27] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int j;

	for (j = 0; j < 10; ++j)
	{
		for (i = 0; i < 26; ++i)
		{
			_putchar(alpha[i]);
		}
		_putchar('\n');
	}
}

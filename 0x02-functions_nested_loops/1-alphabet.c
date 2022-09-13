#include "main.h"
/**
 * print_alphabet  - prints a-z
 *
 * Return: function has not return
 */
void print_alphabet(void)
{
	const char alpha[27] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; ++i)
	{
		_putchar(alpha[i]);
	}
	_putchar('\n');
}

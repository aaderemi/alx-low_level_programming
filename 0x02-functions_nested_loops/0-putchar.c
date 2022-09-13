#include "main.h"
/**
 * main - prints putchar
 *
 * Return: 0 for success
 */
int main(void)
{
	char s[9] = "_putchar";
	int i;

	for (i = 0; i < 8; ++i)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	return (0);
}
